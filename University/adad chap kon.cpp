#include<iostream>
using namespace std;

int main(){
    char input[100];
    for(int i = 0; i < 100; i++){
        input[i] = 'a';
    }
    cin >> input;
    for (size_t i = 0; i < 100; i++)
    {
        if((int)input[i] > 47 && (int)input[i] < 58){
            cout << input[i] << ": ";
            for(int j = 0; j < (int)input[i] - 48; j++){
                cout << input[i];
            }
            cout << endl;
        }
    }
    return 0;
}