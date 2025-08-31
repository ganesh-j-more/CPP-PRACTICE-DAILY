#include<iostream>
using namespace std;

int main(){
  int num = 5;
  int input;
  cout<<"Enter the number";
  cin>>input;
  cout<<((input>=num)?"Grater":"less");
  return 0;
}