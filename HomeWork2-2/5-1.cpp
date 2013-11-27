#include <iostream>

using namespace std;
float FChangeToC(float f){
    return (50.0/9.0)*(f-32.0);
};
float CChangeToF(float c){
    return ((c*9.0)/5.0+32.0);
};
int main()
{
    float f = 33.0;
    float c = 11.0;
    float r1= FChangeToC(f);
    float r2= CChangeToF(c);
    cout << "转换结果="<<r1 << endl;
    cout << "Hello world!" << endl;
    cout << "转换结果="<<r2 << endl;
    return 0;
}
