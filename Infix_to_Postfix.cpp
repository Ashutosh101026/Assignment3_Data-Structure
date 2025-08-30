#include<iostream>
#include<stack>
#include<string>
using namespace std;
int periority(int x)
{if(x=='^')
  {
    return 3;
  }
else if(x=='*' || x=='/')
  {
    return 2;
  }
  else if(x=='+' || x=='-')
  {
    return 1;
  }

  
  else
{
  return -1;
}
}
string infix_to_postfix(string &s)
{
  stack<char>st;
  int i=0;
  string ans = "";
  while(i<s.size())
  {
    if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>=0 && s[i]<=9))
    {
      ans=ans+s[i];
    }
    else if(s[i]=='(')
    {
      st.push(s[i]);
    }
    else if(s[i]==')')
    {
    while(!st.empty() && st.top()!='(')
    {
      ans=ans+st.top();
      st.pop();
    }
    st.pop();
    }
    else{
      while(!st.empty() && periority(s[i])<=periority(st.top()))
      {
        ans=ans+st.top();
        st.pop();
      }
      st.push(s[i]);
    }
    i++;
  }
  while(!st.empty())
  {
    ans=ans+st.top();
    st.pop();
  }
  return ans;
}

int main()
{
  string s;
cout<<"Enter infix function"<<endl;
cin>>s;
cout<<"postfix function == "<<infix_to_postfix(s);

  return 0;
}
