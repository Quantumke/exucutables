#include <iostream>
using namespace std;
int main(){
int grade;
cout<<"Enter students grade";
cin>>grade;
if (grade>70) {
cout<<"Above average";
}
else if (grade >50 && grade < 69){
cout<<"Average";
}
else {
cout<<"Below average";
}
}
