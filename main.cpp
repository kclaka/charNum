#include <iostream>

using namespace std;

int main() {

    int i = 0;
    while(i < 123){
        cout<< char('a' + i )<<"\t"<< int(char('a' + i))<<endl;
        ++i;
    }

}