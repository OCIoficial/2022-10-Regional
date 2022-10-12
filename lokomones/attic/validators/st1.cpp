#include "testlib.h"

using namespace std;

int main(){
	registerValidation();
	int X = inf.readInt(1, 1e5, "X");
	inf.readSpace();
	int Y = inf.readInt(1, 100, "Y");
	inf.readEoln();
	for(int i=0; i<X; i++){
		char attr = inf.readToken("[ntadev]", "indicador atributo " + to_string(i))[0];
		inf.readSpace();
		if(attr == 'n' || attr == 't'){
			inf.readToken("[a-z]{1,20}");
		}
		else{
			inf.readInt(1, 1e6);
		}
		inf.readEoln();
	}
	set <string> seen;
	for(int i=0; i<Y; i++){
		string name = inf.readToken("[a-z]{1,20}");
		inf.readSpace();
		string type = inf.readToken("[a-z]{1,20}");
		inf.readSpace();
		int atk = inf.readInt(1, 1e6);
		inf.readSpace();
		int def = inf.readInt(1, 1e6);
		inf.readSpace();
		int ev = inf.readInt(1, 1e6);
		inf.readSpace();
		int hp = inf.readInt(1, 1e6);
		inf.readEoln();
		ensure(seen.count(name) == 0);
		seen.insert(name);
	}
	inf.readEof();
}
