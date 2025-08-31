// Do While loop

#include<iostream>
using namespace std;
int main(){
  int password;
  int correctpassword = 6104;

  do
  {
    cout<<"Enter Your Password:";
    cin>>password;
  } while (password!=correctpassword);
  return 0;
}