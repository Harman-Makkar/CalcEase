#include<bits/stdc++.h>
using namespace std;

int main() {
    char op;
    double num1,num2;

    cout<<"Enter Operator (+, -, *, /, ^, %): ";
    cin>>op;

    cout<<"Enter Two Numbers: ";
    cin>>num1>>num2;

    switch(op){
        case '+':
            cout<<"Result: "<<num1 + num2;
            break;

        case '-':
            cout<<"Result: "<<num1 - num2;
            break;

        case '*':
            cout<<"Result: "<<num1 * num2;
            break;

        case '/':
            if (num2 !=0){
                cout<<"Result: "<<num1 / num2;
               }

            else{
                cout<<"Cannot divide by Zero";
               }
            break;

        case '^':
            cout<<"Result: "<<pow(num1, num2);
            break;

        case '%':
            if (num2 !=0){
                cout<<"Result: "<<fmod(num1, num2);
               }

            else{
                cout<<"Cannot divide by Zero";
               }
            break;
        
        default:
            cout<<"Invalid Operator!";
            break;
    }

    return 0;
}
