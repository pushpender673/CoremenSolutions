#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class TwoArrayStack{
  int* arr;
  int size, top1,top2;

public :
  TwoArrayStack(int n = 100)
  {
    arr = new int[n];
    size = n;
    top1 = -1;
    top2 = n;
  }

    void push1(int x);
    void push2(int x);
    int pop1();
    int pop2();
    void printStack1();
    void printStack2();
    void printCompleteStack(){
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }

};

void TwoArrayStack::push1(int x){
  if(top1<top2-1)
    {
        top1++;
        arr[top1]=x;
    }
  else {
    cout<<"Stack Overflow!!!!!!!\n";
  }
}
void TwoArrayStack::push2(int x){
  if(top1<top2-1){
    top2--;
    arr[top2]=x;
  }
  else {
    cout<<"Stack Overflow!!!!!!!\n";
  }
}
int TwoArrayStack::pop1(){
  if(top1>=0)
    return arr[top1--];
  else return -1;
}
int TwoArrayStack::pop2(){
  if(top2<size)
    return arr[top2++];
  else return -1;
}

void TwoArrayStack::printStack1()
{
  for(int i=0;i<=top1;i++)
  cout<<arr[i]<<" ";
  cout<<"\n";
}

void TwoArrayStack::printStack2()
{
  for(int i=size-1;i>=top2;i--)
  cout<<arr[i]<<" ";
  cout<<"\n";
}

int main()
{
  TwoArrayStack ts(10);
  ts.push1(4);
  ts.push1(3);
  ts.push1(5);
  ts.push1(12);
  ts.push1(14);
  ts.push1(15);
  ts.push1(16);
  ts.printStack1();

  ts.push2(40);
  ts.push2(31);
  ts.push2(34);
  ts.push2(37);
  ts.push2(398);

  ts.printStack2();
  ts.printCompleteStack();
  return 0;
}
