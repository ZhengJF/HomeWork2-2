#include <iostream>
using namespace std;
float caculate(float m , float n){
    float s1 = 1;
    float s2 = 1;
    for(int i1 = 1;i1<=m;i1++)
    s1*=i1;
    for(int i2 = 1;i2<=n;i2++)
    s2*=i2;

    return s1/s2;

};
int main()
{

    cout << "×ª»»½á¹û="<<caculate(4,2)<< endl;

    return 0;
};
