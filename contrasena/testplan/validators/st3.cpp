#include "testlib.h"

using namespace std;

int main(){
	registerValidation();
	int m = inf.readInt(1, 1e4, "m");
	inf.readSpace();
	int n = inf.readInt(1, 1e3, "n");
	inf.readEoln();
	for(int i=0; i<m; i++){
		inf.readToken("[a-zA-Z]{1}", "primer caracter regla " + to_string(i));
		inf.readSpace();
		inf.readToken("[a-zA-Z]{1}", "segundo caracter regla " + to_string(i));
		inf.readEoln();
	}
	for(int i=0; i<n; i++){
		inf.readToken("[a-zA-Z]{1,100}", "string numero " + to_string(i));
		inf.readEoln();
	}
	inf.readEof();
}
