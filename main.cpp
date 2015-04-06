#include <iostream>
#include <vector>
using namespace std;

class Mesh
{
private:
	int * values;
	int x,y,z;
public:
	Mesh(int size);
};


class operate
{
private:
	Mesh grid;
public:
	Mesh *central_theorem(Mesh *);
};

Mesh::Mesh(int size){
values=new int[size];
}


Mesh *operate::central_theorem(Mesh *mymesh){


}






int main(){

Mesh(100);

}

