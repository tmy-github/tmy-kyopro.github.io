# include <iostream>

using namespace std;

int main (void) {
    int a,b;
    cin >> a >> b;

    
    if (((a + b) == 11 ) && ((a * b) == 10) ){
        cout << "Yes" << endl;
    }
    else if( (a - b) == 1 || (a - b) == -1){
        cout << "Yes" <<endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}