#include <iostream>
#include <string>
#include <cctype> 
  using namespace std;
string curatare(string s) {
    string rezultat="";
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
               rezultat += tolower(s[i]);
        }
    }
    return   rezultat;
}

int main() {
    system("chcp 65001 > nul");

    string simple[] = {"scoala", "fata", "romana", "invata", "masa"};
    string dex[]    = {"școală", "fată", "română", "învață", "masă"};
    int n = 5;
    cout << "Scrie o propozitie (ex: Invata la scoala!): " << endl;
    string cuvant;
    while (cin >> cuvant) {
        string curat = curataCuvant(cuvant);
        bool gasit = false;
        for (int i = 0; i < n; i++) {
            if (curat == simple[i]) {
                cout << dex[i] << " ";
                gasit = true;
                break;
            }
        }
        if (!gasit) {
            cout << cuvant << " "; 
        }
    }
    return 0;
}