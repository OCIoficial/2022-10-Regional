/*
** Regional OCI 2022
** Problema: Contrasena
** Autor solución: vi
*/
#include <bits/stdc++.h>
using namespace std;

#define CARACTERES 128

int main() {
    int m, n;
    cin >> m >> n;
    // dec[a] almacena el valor desdecriptado de dec[a]
    vector<char> dec(CARACTERES);
    for (int i = 0; i < dec.size(); ++i){
        dec[i] = i;
    }
    for (int i = 0; i < m; ++i){
        char a, b, aux;
        cin >> a >> b;
        aux = dec[b];
        dec[b] = dec[a];
        dec[a] = aux;
    }
    for (int i = 0; i < n; ++i){
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); ++i){
            s[i] = dec[s[i]];
        }
        cout << s << endl;

    }




}
