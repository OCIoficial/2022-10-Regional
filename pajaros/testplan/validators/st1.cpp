#include "testlib.h"

using namespace std;

int main(){
	registerValidation();
	int n = inf.readInt(1, 5e5, "n");
	inf.readSpace();
	int m = inf.readInt(1, 5e5, "m");
	inf.readEoln();
	for(int i=0; i<n; i++){
		inf.readInt(1, 2, "numero de cerdito " + to_string(i));
		if(i != n-1)
			inf.readSpace();
	}
	inf.readEoln();
	for(int i=0; i<m; i++){
		inf.readInt(1, 2, "numero de canasta " + to_string(i));
		if(i != m-1)
			inf.readSpace();
	}
	inf.readEoln();
	inf.readEof();
}
