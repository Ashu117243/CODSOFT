#include <iostream>
using namespace std;
int main(){
    char o;
    float no1,no2;
    cout<<"Enter operator from: +, -, *, / "<<endl;
    cin>>o;
    cout<<"Enter two operands :"<<endl;
    cin>>no1>>no2;
    switch(o){
        case '+':
           cout<<"Sum of "<<no1<<" and "<<no2<<" is "<<no1+no2;
           break;
        case '-':
           cout<<"Difference between "<<no1<<" and "<<no2<<" is "<<no1-no2;
           break;
        case '*':
           cout<<"Product of "<<no1<<" and "<<no2<<" is "<<no1*no2;
           break;
        case '/':
           cout<<"Quotient of "<<no1<<" and "<<no2<<" is "<<no1/no2;
           break;
        default:
           //if other operator is being input
           cout<<"Error! Incorrect operator";
           break;
    }
    return 0;
}