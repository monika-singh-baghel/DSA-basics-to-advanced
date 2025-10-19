
#include<bits/stdc++.h>
using namespace std;
//wap that takes input of age and outputs whether u r an adult or not 
//>=18,yes
//<18,no
/*int main(){
    int age;
    cin>>age;
    if(age>=18){
        cout<<"You are an adult";
    }
    else cout<<"you are not an adult";
    return 0;
}*/
//---------------------------------------------------
/*School has following sytem for grades 
below 25 - f
25 to 44 - e
45 to 49 - d 
50 to 59 - c
60 to 79 - b 
80 to 100 - a 
ask user to enter marks and corresponding grade 
*/
//-------------------- solution---------------------
/*
int main(){
    int marks;
    cout<<"Enter Student Marks : ";
    cin>>marks;
    if(marks<0){
        cout<<"invalid marks ";
    }
    else if(marks<25){
        cout<<"F";

    }
    else if (marks<= 44){
        cout<<"E";
    }
    else if (marks>=45 && marks<= 49){
        cout<<"D";
    }
    else if (marks>=50 && marks<= 59){
        cout<<"C";
    }
    else if (marks>=60 && marks<= 79){
        cout<<"B";
    }
    else if (marks>=80 && marks<= 100){
        cout<<"A";
    }
    
    else cout<<"Marks are out of range";
    return 0;
}
*/
// else - used to save time, with else if only one statement is executed and rest others are ignored and  hence the above solution can be optimized 
//---------------optimisation------------------
/*int main(){
    int marks;
    cout<<"Enter Student Marks : ";
    cin>>marks;
    if(marks<0){
        cout<<"Invalid marks";
    }
    else if(marks<25){
        cout<<"F";

    }
    else if ( marks<= 44){
        cout<<"E";
    }
    else if ( marks<= 49){
        cout<<"D";
    }
    else if ( marks<= 59){
        cout<<"C";
    }
    else if ( marks<= 79){
        cout<<"B";
    }
    else if (marks<= 100){
        cout<<"A";
    }
    
    else cout<<"Marks are out of range";
    return 0;
}*/
//-----------------------------question--------------------------------------
/*take the age from the user and then decide 
1 if age < 18
print -> not eligible for job 
 if age >= 18 and <=54
print ->  eligible for job 
 if age >= 55 AND age <= 57
print ->  eligible for job but retirement soon 
 if age > 57
print -> retirement time  
*/
//=======================solution============================================
int main (){
    int age ;
    cin>>age;
    if(age<18){
        cout<<"Not eligible for job";
    }
    else if (age<=54){
        cout<<"Eligible for job ";
    }
    else if ( age<=57){
        cout<<"Eligible but retirement soon ";
    } 
    else cout<<"retirement time";
    return 0;
}
