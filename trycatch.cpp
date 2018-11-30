#include <iostream>
#include<typeinfo>
using namespace std;

double division(int a, int b) {
   if( b == 0 ) {
      throw "Division by zero condition!";
   }
   return (a/b);
}

int main () {
   int *x = new int;
   int *y = new int;
   double z = 0;
    cin>>*x>>*y;
   try {
       try{
       if(cin.fail())
            throw "Wrong data type entered";
       }
       catch(const char * m)
       {
           cout<<m<<endl;
       }
      z = division(*x,*y);
      cout << z << endl;
   } catch (const char* msg) {
     cout << msg << endl;
   }

   return 0;
}
