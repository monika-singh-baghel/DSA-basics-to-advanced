#include<bits/stdc++.h>
using namespace std;
/* Patterns -- based on nested loops 
    we can generalise to form any pattern  
    1) outer loop count the number of lines/rows present in the loop 
    2) inner loop count the number of columns used in patterns and connect the no. of columns somehow to rows 
    3) print * inside the inner loop 
    4) Observe the symmetry 
    ** create formulas if needed to calculate inner loop iterations and break them in different parts for complex problems */

void print1(int n){
/*    * * * * *
      * * * * *
      * * * * *
      * * * * *
      * * * * *     */
for (int i = 1;i<=n;i++){
    for (int j = 1;j<=5;j++){
        cout<<"* ";
    }
    cout<<endl;
}
}
void print2(int n){

/*      *
        * *
        * * *
        * * * * 
        * * * * *      */
for(int i =1;i<=n;i++){
    for (int j =1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
}
}
void print3(int n) {
/*     1
       1 2 
       1 2 3
       1 2 3 4 
       1 2 3 4 5    */
for (int i = 1;i<=n;i++){
    for (int j = 1;j<=i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
}
}
void print4(int n){
/*      1 
        2 2
        3 3 3 
        4 4 4 4 
        5 5 5 5 5    */
for (int i = 1;i<=n;i++){
    for (int j = 1;j<=i;j++){
        cout<<i<<" ";
    }
    cout<<endl;
}
}
void print5(int n){
/*      * * * * * 
        * * * *
        * * * 
        * * 
        *             
        for n = 5    */
for (int i = 1;i<=n;i++){
    for (int j = 1;j<=n-(i-1);j++){
        cout<<"* ";
    }
    cout<<endl;
}
}
void print6(int n){
/*      1 2 3 4 5 
        1 2 3 4 
        1 2 3 
        1 2
        1
        for n = 5*/
for (int i = 1;i<=n;i++){
    for (int j = 1;j<=n-(i-1);j++){
        cout<<j<<" ";
    }
    cout<<endl;
}

}
void print7(int n){
/*              *
              * * *
            * * * * * 
          * * * * * * * 
        * * * * * * * * * 
         for n = 5              */
for (int i = 1;i<=n;i++){ // using intitial iteration 1 
    for (int j = 1;j<=n-i;j++){
        cout<<"  ";
    }
    for (int j = 1;j<=2*i-1;j++){
        cout<<"* ";
    }
    for (int j =1;j<n-i;j++){
        cout<<"  ";
    }
    cout<<endl;
}
}
void print8(int n){
/*     * * * * * * * * * 
         * * * * * * *
           * * * * *
             * * *
               *                */
for (int i = 0;i<n;i++){ // using intitial iteration 0
    for (int j = 0;j<i;j++){
        cout<<"  ";
    }
    for (int j = 0;j<2*n-(2*i+1);j++){
        cout<<"* ";
    }
    for (int j = 0;j<i;j++){
        cout<<"  ";
    }
    cout<<endl;
}
}
void print9(int n){
/*              *
              * * *
            * * * * * 
          * * * * * * * 
        * * * * * * * * * 
        * * * * * * * * * 
          * * * * * * *
            * * * * *
              * * *
                *           
                for n = 5 
                call function print7() and print8()*/

}
void print10(int n){
/*      * 
        * *
        * * *
        * * * *
        * * * * * 
        * * * *
        * * *
        * *
        *              
        for n = 5     */
for(int i =1;i<=2*n-1;i++){
    int stars = i;
    if(stars>n) stars =2*n-i;
    for (int j =1;j<=stars;j++){
        cout<<"* ";
    }
    cout<<endl;
}
}
void print11(int n){
/*      1  
        0  1
        1  0  1
        0  1  0  1
        1  0  1  0  1          
        for n = 5   */
int start = 1;
for(int i = 0;i<n;i++){
    if(i%2==0) start =1;
    else start =0;
    for(int j = 0;j<=i;j++){
        cout<<start<<"  ";
        start = 1-start;
    }
    cout<<endl;
}
}
void print12(int n){
/*      1                 1 
        1 2             2 1
        1 2 3         3 2 1
        1 2 3 4     4 3 2 1
        1 2 3 4 5 5 4 3 2 1   
        for n =5 */
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for (int j = 1;j<=2*(n-i);j++){
            cout<<"  ";
        }
        for(int j = i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print13(int n){
/*      1 
        2 3
        4 5 6
        7 8 9 10
        11 12 13 14 15      
        for n =5 */
    int num = 1;
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<num<<" ";
            num += 1;
        }
        cout<<endl;
    }
}
void print14(int n){
/*      A 
        A B 
        A B C 
        A B C D 
        A B C D E    
        for n = 5            
        each character in the computer have their special ascii value in integer so here inner loop can run with the help of their ascii value */
for(int i =0;i<n;i++){
    for(char c = 'A';c<='A'+i;c++){
        cout<<c<<" ";
    }cout<<endl;
}
}
void print15(int n){
/*      A B C D E 
        A B C D
        A B C
        A B
        A             
        for n = 5    */
    for(int i = 0;i<n;i++){
        for(char c = 'A';c<('A'+(n-i));c++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}
void print16(int n){
/*      A
        BB
        CCC
        DDDD
        EEEEE    
        for n =5     */
for(int i = 0;i<n;i++){
    for(int j = 0;j<=i;j++){
        cout<<char('A'+i);
    }cout<<endl;
}
}
void print17(int n){
 /*       A 
        A B A
      A B C B A
    A B C D C B A
  A B C D E D C B A 
  for n = 5 */
for (int i = 0;i<n;i++){
    for (int j = 0;j<=(n-i-1);j++){
        cout<<"  ";
    }
    for (char c ='A';c<='A'+i;c++){
        cout<<c<<" ";
    }
    for (char c = 'A'+ (i-1);c>='A';c--){
        cout<<c<<" ";
    }cout<<endl;
}
}
void print18(int n){
/*      E 
        D E
        C D E
        B C D E
        A B C D E    
        for n =5 */
    for (int i = 0;i<n;i++){
        char c ='A'+(n-1);
        for(int j = 0;j<=i;j++){
            cout<<char(c-i)<<" ";
            c++;
        }
        cout<<endl;
    }
}
void print19(int n){
/*      * * * * * * * * * * 
        * * * *     * * * *
        * * *         * * *
        * *             * *
        *                 * 
        *                 *
        * *             * *
        * * *         * * *
        * * * *     * * * *
        * * * * * * * * * *     
        for int n = 5*/
    for (int i =0;i<n;i++){
        for (int j = 0;j<n-i;j++){
            cout<<"* ";
        }
        for(int j = 0;j<2*i;j++){
            cout<<"  ";
        }
        for(int j = 0;j<n-i;j++){
            cout<<"* ";
        }cout<<endl;
    }
    for (int i =0;i<n;i++){
        for (int j = 0;j<=i;j++){
            cout<<"* ";
        }
        for(int j = 0;j<2*(n-i-1);j++){
            cout<<"  ";
        }
        for(int j = 0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print20(int n){
/*      *                   * 
        * *               * *
        * * *           * * *
        * * * *       * * * *
        * * * * *   * * * * * 
        * * * *       * * * *
        * * *           * * * 
        * *               * *
        *                   *          
        for n=5 */
    int spaces =2*n-1;
    for (int i = 1;i<=2*n -1;i++){
        int stars = i;
        if(i>n) stars =2*n-i;
        for(int j = 1;j<=stars;j++){
            cout<<"* ";
        }
        for(int j =1;j<=spaces;j++){
            cout<<"  ";
        }
        for(int j = 1;j<=stars;j++){
            cout<<"* ";
        }
        cout<<endl;
        if(i<n) spaces-=2;
        else spaces+=2;
    }
   
}
void print21(int n){
/*      * * * * * 
        *       *
        *       *
        *       *
        * * * * *    
        for n = 5     */ 
    for(int i=1;i<=n;i++){
        for(int j =1;j<=n;j++){
            if (i==1||i==n||j==1||j==n){
                cout<<"* ";
            }
            else cout<<"  ";
        }cout<<endl;
    }
}
void print22(int n){
for(int i =0;i<=2*n-2;i++){
    for(int j =0;j<=2*n-2;j++){
             int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            cout<<n-min(min(top,down),min(left,right));
        }cout<<endl;
    }
}   

int main(){
    int n;
    cin>>n;
    print22(n);
}