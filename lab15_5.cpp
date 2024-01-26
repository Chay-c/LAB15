#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *j, int *k, int *l, int *o) {
    int temp;
    int order[] = {*j, *k, *l, *o};

    for (int i = 3; i > 0; --i) {
        int j = rand() % (i + 1);
        temp = order[i];
        order[i] = order[j];
        order[j] = temp;
    }

    *j = order[0];
    *k = order[1];
    *l = order[2];
    *o = order[3];
}
