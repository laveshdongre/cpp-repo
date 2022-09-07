#include <iostream>
using namespace std;
int main() {
    //cout<<"Hello world!";//
    
   /* WAP FOR SWAPING TWO NUMBER USING THIRD VARIABLES :
    int a,b,temp;
    cout<<"Value before swaping : "<<endl;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b : "<<endl;
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"Value after swaping : "<<endl;
    cout<<"Value of a is : "<<a<<endl;
    cout<<"Value of b is : "<<b<<endl;*/
    
    //WAP FOR SWAPING TWO NUMBER  WITHOUT USING THIRD VARIABLES :
    int a,b;
    cout<<"Value before swaping : "<<endl;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Value after swaping : "<<endl;
    cout<<"Value of a is : "<<a<<endl;
    cout<<"Value of b is : "<<b<<endl;

    
   // WAP FOR THE TABLE OF ANY NUMBER 
    // int a;
    // cout<<"Enter the value for table : ";
    // cin>>a;
    // for (int i=1;i<=10;++i){
    //     cout<<a*i;
    //     cout<<"\n";
    return 0;
}