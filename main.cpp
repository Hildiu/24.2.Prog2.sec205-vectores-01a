#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{ int n;

    cout << "Numero de elementos : ";
    cin >> n;
    vector <int>  v(n);

    int contador = 0;
    for( auto &i:v)
    {
        cout << "Dato " << contador << " : ";
        cin >> i;
        contador++;
    }

    cout << "\n";
    for(const auto &i:v)
        cout << setw(5) << i ;
    return 0;
}
