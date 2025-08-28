#include<iostream>
#include<stack>
#include<string>
using namespace std;
string reverse_with_stack(string &str)
{
  stack<char>c;
  for(int i=0;i<str.size();i++)
  {
    c.push(str[i]);
  }
  string rev;
  while(!c.empty())
  {
    rev=rev+c.top();
    c.pop();
  }
return rev;
}
int main()
{
  string str="DATAStructure";
  string rev_str=reverse_with_stack(str);
  cout<<"original string == "<<str<<endl;
  cout<<"reversed string == " <<rev_str;
  return 0;
}
