/*
* C++ - ExcepciOn
*
*/
#include <iostream>
using namespace std;
int main()
{
  int a;
  int b;
  string s;

  try {
     cout << "Introduzca un número (dividendo):" << endl;
     cin >> a;
     cout << "Introduzca otro número (divisor):" << endl;
     cin >> b;

     if ( b != 0 )
           cout << "La división es " << a/b << endl;
     else  throw 0;

     cout << "Dame tu nombre:" << endl;
     getline( cin, s );

     if ( s.empty() ) {
       throw s;
     }

     cout << "Tu nombre es " << s << endl;

  }
  catch(int e)
  {
     cerr << "Es necesario un divisor distinto de 0." << endl;
  }
  catch(const string &e)
  {
     cerr << "Es imposible que no tengas un nombre" << endl;
  }
}



