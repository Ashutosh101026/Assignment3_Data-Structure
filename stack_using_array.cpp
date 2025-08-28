#include<iostream>
using namespace std;
class st
{
int top = -1;
int st[10];
public:
void push(int x)
{
  if(top>=9)
  {
    cout<<"stack is full"<<endl;
  }
  top=top+1;
  st[top]=x;
}
void pop()
{
  if(top==-1)
  {
    cout<<"stack is empty"<<endl;
    return;
  }
top=top-1;
}
int peek()
{
   if(top==-1)
  {
    cout<<"stack is empty"<<endl;
  }
  return st[top];
}
int size()
{
  return top+1;
}
void display()
{
  for(int i=0;i<=top;i++)
  {
    cout<<st[i]<<" ";
  }
  cout<<endl;
}

};
int main()
{
  st stack;
  stack.push(5);
  stack.push(3);
  stack.push(9);
  stack.push(6);
  stack.display();
  stack.pop();
  stack.display();
  cout<<stack.peek()<<endl;
  stack.pop();
cout<<stack.peek()<<endl;
  cout<<stack.size()<<endl;
  return 0;
  //time complexity == O(1)
}
