#include "Blzano.h"
#include <stdio.h>
#include <iostream>
using namespace std;
Blzano::Blzano(int y ){}
int Blzano::HasRoot(double low, double up, double(*fx)(double))
{
	return fx(low) * fx(up) <= 0.0;
}
