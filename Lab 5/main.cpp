#include <iostream>

using namespace std;


int power(int x,int y);



int main()

{
    
    
    
    cout<<power(2,3)<<endl;
    
    
    system("PAUSE");
    return 0;
}


int power(int x,int y)
{
    if (y== 0)
        return 1;
    
    else if (y==1)
        return x;
    
    else
        return x*power(x,(y-1));
}
