// Function 

// #include<iostream>
// using namespace std;

// int add(int a){
//   return a;
// }

// int main(){
//   int sum=add(5);
//   cout<<sum;
//   return 0;
// }

// #include<iostream>
// using namespace std;

// int Subtraction(){
//   cout<<"Welcome to all";
// }

// int main(){
//   Subtraction();
// }


// Function Overloading

// #include<iostream>
// using namespace std;

// int add(int a, int b){
//   return a+b;
// }

// double add(double a, double b){
//   return a+b;
// }

// int main(){
//   cout<<add(9,3);
//   cout<<add(2.5,4.6);
//   return 0;
// }

// 2) 

#include<iostream>
using namespace std;

int add(int a, int b, int c){
  return a+b+c;
}
bool compare(bool a, bool b){
  return a<b;
}
double add(double a, double b){
  return a+b;
}
int subs(int a, int b, int c, int d){
  return a-b-c-d;
}

int main(){
  cout<<add(5,6,11);//22

  cout<<add(5.5, 5.6);//11.1

  cout<<subs(4,5,6,7);//-14
  
  cout<<compare(7,5);//0
}