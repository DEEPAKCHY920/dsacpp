# include <bits/stdc++.h>
using namespace std;
int main (){
   int stack[5];
   int top=-1;
   top++;
   stack[top]=10;
   top++;
   stack[top]=20;
   top++;
   stack[top]=30;
   top++;
   stack[top]=40;
   top++;
   stack[top]=50;
   top++;

    for(int i = top-1; i>=0; i--){
        cout<<stack[i]<<" ";
    }
    return 0;
}
