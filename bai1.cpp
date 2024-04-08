#include <iostream>
using namespace std;

int main()
{
    int n, a;
    int S = 1;
    cout << "input a:";
    cin >> a;
    cout << endl;
    cout << "input n:";
    cin >> n;
    cout << endl;
    for (int index = 0; index < n; index++);
    {//(n-1)=n lần 
        S = a * 5;
    }
    cout << "ontput s lũy thừa" << S << endl;
    return 0;


}
