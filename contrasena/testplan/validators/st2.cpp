#include "testlib.h"

using namespace std;

int main(){
	registerValidation();
	int m = inf.readInt(1, 1e4, "m");
	inf.readSpace();
	int n = inf.readInt(1, 1e3, "n");
	inf.readEoln();
	set <char> seen;
	for(int i=0; i<m; i++){
		char a = inf.readToken("[a-zA-Z]{1}", "primer caracter regla " + to_string(i))[0];
		inf.readSpace();
		char b = inf.readToken("[a-zA-Z]{1}", "segundo caracter regla " + to_string(i))[0];
		inf.readEoln();
		ensure(seen.count(a) == 0);
		ensure(seen.count(b) == 0);
		seen.insert(a);
		seen.insert(b);
	}
	for(int i=0; i<n; i++){
		inf.readToken("[a-zA-Z]{1,100}", "string número " + to_string(i));
		inf.readEoln();
	}
	inf.readEof();
}
