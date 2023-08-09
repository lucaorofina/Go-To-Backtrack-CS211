#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int q[8], c=0, i, j;
    q[0]=0; //Initialize the board to 0
nc: c++;
    if(c==8) goto print;
    q[c]=-1;//start at row 0 bc r++ will start row after r=
nr: q[c]++;
    if(q[c]==8) goto backtrack;
    // row test: after 1st ^ backtracking and deleting queen
    for(i=0;i<c;i++){
        //c = column we up to in program r=row upto    i = temporary clumn
        if((q[i]==q[c])||(c-i==abs(q[c]-q[i]))) goto nr;
    } //bc theres a queen on row, we cant put another on this row, we need to go to next row loop==== r++ */
    goto nc;
backtrack:
    c--;
    //if move  to the left of the board exit the program
    if(c==-1) return 0;//this is when c becomes -1 the program ends
    goto nr;
print:
    static int sol_num = 1;
    cout<< "Solution # " << sol_num++ << ": " << endl;
    for(i=0;i<8;i++){ //for loop to match array with board
        cout << q[i]; //current array showing which column has queen (1)
    }
    cout << "\n";
    
    for(i=0;i<8;i++){
    for(j=0;j<8;j++){
        if(q[i]==j){
            cout<<1;
        } else {
            cout<<0;
        }
    }
    cout<<endl;
    }
    cout<<endl;
    goto backtrack;
}
