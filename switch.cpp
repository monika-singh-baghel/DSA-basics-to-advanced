#include<bits/stdc++.h>
using namespace std;
/* 
take the day no. and print the corresponding day 
1- monday and 7 sunday */
/*int main(){
    int day;
    cin>>day;
    switch(day){
        case 1:
        cout<<"Monday";

        case 2:
        cout<<"Tuesday";//if the input for the given question is 4 it will go to case 4 but then will print every case outcomes
        //e.g -- ip - 4 , op - ThursdayfridaysaturdaysundayInvalidCheck

        case 3:
        cout<<"wednesday";
        
        case 4:cout<<"Thursday";
        
        case 5:cout<<"friday";
        
        case 6:cout<<"saturday";
        
        case 7:cout<<"sunday";
        default:
        cout<<"Invalid";

    }
    cout<<"Check";
    return 0;
}*/
//THE CORRECT WAY TO IMPLEMENT SWITCH CASE STATEMENT IS USING BREAK IN EACH CONDITION I.E SWITCH AND CASE, SO THE CORRECT CODE WILL BE : 
int main(){
    int day;
    cin>>day;
    switch(day){
        case 1:
        cout<<"Monday";
        break;

        case 2:
        cout<<"Tuesday";
        break;


        case 3:
        cout<<"wednesday";
        break;
        
        case 4:cout<<"Thursday";
        break;
        case 5:cout<<"friday";
        break;
        case 6:cout<<"saturday";
        break;
        case 7:cout<<"sunday";
        default:
        cout<<"Invalid";

    }
    cout<<" Check";
    return 0;
} // default keyword is used in switch case if none of the any cases in sitch case is executed then a default case is always executed(if and only if none of the cases matches) 
