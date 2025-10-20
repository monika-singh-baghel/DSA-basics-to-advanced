#include<bits/stdc++.h>
#include<math.h>
using namespace std;
/*
functions are set of code which persforms something for you 
functions are used to modularise code 
functions are used to increase readability
Functions are used to same code multiple times 
types - 
void - does not return anything
return 
parameterised 
non - parameterised */
//==========================================
/*void printName(){
cout<<"Hariish"<<endl;
}
int main(){
    printName();
return 0;
}*/
//=============================================
/*void printName(string name){
cout<<"hey "<<name<<endl;//function wiht parameter 
}
int main(){
string name;
cin>>name;
    printName(name);//calling of function with argument

return 0;
}*/
//-------------------------question------------------------
//q - take two numbers and sum print their sum 
 
/*int sum(int a,int b){
    int n = a+b;// 5+5 = 10 , function that returns the sum of two numbers 
    return n;
}
int main(){
    int a,b,ans;
    cin>>a>>b;
    ans = sum(a,b);
    cout<<ans;
    return 0;
}*/
//===========================================
/*int main(){
    int a,b;
cin>>a>>b;
int ans  = max(a,b);//max- inbuilt maths function from the library 
cout<<ans;
return 0;
}
*/
//================================================
/*int maxx(int a,int b){
    if(a>=b) return a;
    else return b;
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans = maxx(a,b);//callling the function with its name....inbuilt function names must not be matched with the functions user builded function
    cout<<ans<<endl; //returns simple answer -- which is greater 
}*/
//--------------------------case for the above question------------------
/*int maxx(int a,int b){
    if(a>=b) return a;
    return b;
// else return b missing
//looking for a return type 
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans = maxx(a,b);//this returns the garbage value because the above question did not return any value if the b was greater than a 
    cout<<ans<<endl; //and hence the garbage value 
}*/
//=---------------------pass by value------------------------
/*void doSomething(int num){//the function does not hamper the effects on original number or value in the main function...i takes the value 
    //and perform written operations on it 
cout<<num<<endl; 
num+=5;
cout<<num<<endl;
num+=5;
cout<<num<<endl;  
}
int main(){
    int num = 10;
    doSomething(num);//o/p - 10,15,20,10
    cout<<num;
    return 0;
}*/
//--------------------another example-----------------------
/*void doSomething(string name){//the function does not hamper the effects on original number or value in the main function...i takes the value 
    //and perform written operations on it 
    name[0] = 'h';
    cout<<name<<endl; //return hiran where h replaces k in kiran 
}
int main(){
    string name = "kiran";
    doSomething(name);//prints hiran(modified the copy of argument passed in the finction )
    cout<<name;//prints kiran (original value) 
    return 0;
}*/
//============================pass by reference====================
/*void doSomething(string &name){//the string is taken from the address of that variable which is original so the changes are permanent     
    name[0] = 'h';
    cout<<name<<endl; //return hiran where h replaces k in kiran 
}
int main(){
    string name = "kiran";
    doSomething(name);//prints hiran(modified the original  of argument passed in the finction )
    cout<<name;//prints hiran (after change in the original value) 
    return 0;
}*/
//-------------------another example------------------------------- 
/*void doSomething(int &num){//accepts the original value from the original address 
cout<<num<<endl; 
num+=5;
cout<<num<<endl;
num+=5;
cout<<num<<endl;  
}
int main(){
    int num = 10;
    doSomething(num);//o/p - 10,15,20,20
    cout<<num;
    return 0;
}*/
//-------------------------------------------- array passed by reference-------------------------
void doSomething(int arr[],int n ){
    for (int i = 0;i<n;i++){
        arr[i] = arr[i]*100;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n = 5;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    doSomething(arr,n);
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}
