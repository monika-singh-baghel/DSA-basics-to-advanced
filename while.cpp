#include<bits/stdc++.h>
using namespace std;
//--------------------while loop--------------------------
/*int main(){
    int i = 1;
while(i<5)
{
    cout<<"Moni"<<endl;
    i+=1;
}
return 0;
}*/

//---------------------do while loop------------------------
int main(){
    int i = 2;
    do{
        cout<<"Moni"<<endl;//do while exectues one time even if the condition is false
        i+=1;
    }while(i<1);
    return 0;
}

//-------------------------Examples--------------------------------------------
int main() {
    char choice;

    do {
        float width, height, area;
        cout << "Enter width and height separated by space: ";
        cin >> width >> height;

        area = width * height;
        cout << "Area is: " << area << endl;

        cout << "Calculate another (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "Thanks!" << endl;

    return 0;
}
----------input validation-------------
    int main() {
    int number;

    do {
        cout << "Enter an integer between 1 and 5: ";
        cin >> number;
    } while (number < 1 || number > 5);  

    cout << "Thanks!" << endl;
    return 0;
}



