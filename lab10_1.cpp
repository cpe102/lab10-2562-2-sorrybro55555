// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout << "Press Enter 3 times to reveal your future.";
    
    for(int i=1;i<=3;i++){
        cin.get();
    }
    srand(time(0));
    int x=rand()%9;
    if(x==0) cout << "A";
    else if(x==1) cout <<"B+";
    else if(x==2) cout <<"B";
    else if(x==3) cout <<"C+";
    else if(x==4) cout <<"C";
    else if(x==5) cout <<"D+";
    else if(x==6) cout <<"D";
    else if(x==7) cout <<"F";
    else cout << "W";
    return 0;


}
