//Jasnoor Kaur
//24070123049
//Batch: A2

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;
    try{
        if(age<18){
            throw age;
        }
        else{
            cout<<"Age: "<<age<<"\nAPPROVED"<<endl;
        }
    }
    catch(int a){
        cout<<"\nERROR: Underage! ("<<age<<")"<<endl;
    }
}

//OUTPUT:

/*
Enter age: Age: 36
APPROVED

Enter age: 8
ERROR: Underage! (8)
*/
