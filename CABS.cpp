#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int T;
	cin>> T;
	
    while (T--){
    int X, Y;
    cin>>X, Y;
    if (X==Y)
    {
        cout<<"ANY"<<endl;

    }
    else if (X>Y){
        cout<<"SECOND"<<endl;
    }
    else
    {
        /* code */
        cout<<"FIRST"<<endl;
    }
}
	return 0;
}
