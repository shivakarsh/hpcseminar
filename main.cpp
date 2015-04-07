#include <iostream>
#include "Mesh.h"
#define tol 1E-3
using namespace std;



int main(){
Mesh grid(50,50,50);
grid.fill(10.0);
while(abs((long)(grid.Central_diff()-grid.Central_diff()))>1E-4){}
}

