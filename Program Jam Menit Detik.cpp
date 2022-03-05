#include <iostream>
using namespace std;

int main()
{
    int InputDetik;
    int Jam;
    int Menit;
    int Detik;
    
    cin >> InputDetik;
    
    Jam = InputDetik/(60*60);
    InputDetik = InputDetik-((60*60)*Jam);
    Menit = InputDetik/60;
    InputDetik = InputDetik-(60*Menit);
    
    cout << Jam << " Jam " << Menit << " Menit " << InputDetik << " Detik ";
     
    return 0;
}
