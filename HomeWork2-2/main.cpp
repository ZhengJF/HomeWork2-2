#include<iostream>
using namespace std;
double  calculate(int x ,int y)  {
 if(y == 1) {
  return x;
 }
 return calculate(x, y - 1) * x;
}

int main()
{
         int x, y;
         cout<<"���� x = : " <<endl;
         cin >> x;
         cout<<"���� y = : " << endl;
         cin >> y;
         cout <<"������� :"<<calculate(x,y)<<endl;
         return 0;
}
