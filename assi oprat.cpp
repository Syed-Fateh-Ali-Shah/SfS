#include<iostream>
using namespace std;
int main()
{
int num1,num2;
cout<<"Enter Value Of First Number: ";
cin>>num1;
cout<<"Enter Value Of Second Number: ";
cin>>num2;

cout<<"It Assigns Value Of Num2 to Num1: "<<(num1=num2)<<endl;
cout<<"\nAdding Num1 and Num2 Then Assigning The Answer to Num1: "<<(num1+=num2)<<endl;
cout<<"\nSubtracting Num1 and Num2 Then Assigning The Answer to Num1: "<<(num1-=num2)<<endl;
cout<<"\nMultiplying Num1 and Num2 Then Assigning The Answer to Num1: "<<(num1*=num2)<<endl;
cout<<"\nDividing Num1 and Num2 Then Assigning The Answer to Num1: "<<(num1/=num2)<<endl;
cout<<"\nDividing Num1 and Num2 Then Assigning The Remainder to Num1: "<<(num1%=num2)<<endl;


return 0;
}


