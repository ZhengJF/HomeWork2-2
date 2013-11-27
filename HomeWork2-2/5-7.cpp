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
         cout<<"请输入 x = : " <<endl;
         cin >> x;
         cout<<"请输入 y = : " << endl;
         cin >> y;
         cout <<"结果等于 :"<<calculate(x,y)<<endl;
         return 0;
}
