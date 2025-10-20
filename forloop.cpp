#include<bits/stdc++.h>

using namespace std;
/*int main(){
    for(int i=0;i<5;i++){
        cout<<"Hariish"<<endl; //print hariish five times 
    }
    cout<<i;//this i will not be printed as the scope of i is only within the for loop 
    return 0;
}*/
//-----------------------------------------------------
/*int main(){ int i = 0;
    for(i=0;i<5;i++){
        cout<<"Hariish"<<endl; //print hariish five times 
    }
    cout<<i;//this i will produce output 5 as it was declared in the function and the last value assigned to it was 5
return 0;
}*/
//-----------------------------------------------------
/*int main(){ 
    for(int i=0,j=0;i<5 && j<3;i++,j++){ //multiple variables can be used in the for loop 
        cout<<i<<" "<<j<<endl; 
    }return 0;

}*/
//-----------------------------------------------------
/*int main(){ int i =1;
    for( ;i<5; ){ //initialization and updation can be done outside the for loop 
        cout<<"Hariish"<<endl; 
        i++;
    }return 0;
}*/
//------------------------------------------------------
int main(){
    int i = 1;

for(i=1;i<25;i+=5){
    cout<<"King"<<endl;
} 
cout<<i;//will give 26 as the last value assigned to i was 26
return 0;}
