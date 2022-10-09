#include "testlib.h"

using namespace std;

int main(){
	registerValidation();
	int n = inf.readInt(1, 1e5, "n");
	inf.readEoln();
	for(int i=0; i<n; i++){
		inf.readInt(1, 1e8, "numero de indice " + to_string(i));
		if(i != n-1)
			inf.readSpace();
	}
	inf.readEoln();
	inf.readInt(1, 1e4, "a");
	inf.readSpace();
	inf.readInt(1, 1e4, "j");
	inf.readEoln();
	inf.readEof();
}
