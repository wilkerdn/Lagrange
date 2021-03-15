#include <stdio.h>
#include <math.h>
#include <sdlib.h>

int main(){
	int x0 = 0.1, x1 = 0.2, x2 = 0.4, x3 = 0.5;
	int fx0 = 2.48, fx1 = 2.66, fx2 = 2.58, fx3 = 2;
	int l0 = 0, l1 = 0, l2 = 0;

	int nl0 = (x-x1)*(x-x2)*(x-x3);
	int dl0 = (x0-x1)*(x0-x2)*(x1-x3);
	l0 = nl0/dlo;

	int nl1 = (x-x0)*(x-x2)*(x-x3);
	int dl1 = (x1-x0)*(x1-x2)*(x1-x3);
	l1 = nl1/dl1;

	int nl2 = (x-x0)*(x-x1)*(x-x3);
	int dl2 = (x2-x0)*(x2-x1)*(x2-x3);
	l2 = nl2/dl2;

	int nl3 = (x-x0)*(x-x1)*(x-x2);
	int dl3 = (x3-x0)*(x3-x1)*(x3-x2);
	

	int p2 = fx0*l0 + fx1*l1 + fx2*l2;
}
