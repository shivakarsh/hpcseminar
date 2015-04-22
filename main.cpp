#include <iostream>
#include "Mesh.h"
#include <cstdlib> //abs ref.
#define tol 1E-3

// Shiva Meka
using namespace std;



int main(){
Mesh grid(50,50,50);
grid.fill(10.0);
while(abs((long)(grid.Central_diff()-grid.Central_diff()))>1E-4){}
}

