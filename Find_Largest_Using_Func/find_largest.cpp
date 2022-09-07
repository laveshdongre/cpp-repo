#include <iostream>
using namespace std;
int largestNumber(int a, int b, int c){
    int max;
    if(a>=b && b>=c){
        max=a;
    }
    else if(b>=a && b>=c){
        max=b;
    }
    else{
        max=c;
    }
    return max;
}
int main(){
    int num1,num2,num3,largest;
    cout<<"Enter the first number : ";
    cin>>num1;
     cout<<"Enter the second number : ";
    cin>>num2;
     cout<<"Enter the third number : ";
    cin>>num3;
    largest=largestNumber(num1,num2,num3);
    cout<<"Largest number is : "<<largest;
    
    return 0;
}