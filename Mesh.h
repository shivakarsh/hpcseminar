extern "C" float  sum_central_(float &values,int &x,int &y, int &z);

class Mesh
{
private:
        int dim;
        int Size;
        int X,Y,Z;
public:
        float *values;
        long iter;
        Mesh(int);
        Mesh(int,int);
        Mesh(int,int,int);
        float Central_diff();
        void fill(const float);
};


Mesh::Mesh(int size){
dim=1;Size=size;iter=0;
X=size;
values=new float[2*Size];
}

Mesh::Mesh(int x,int y){
dim=2;Size=x*y;iter=0;
X=x;Y=y;
values=new float[2*Size];
}

Mesh::Mesh(int x,int y,int z){
dim=3;Size=x*y*z;X=x;Y=y;Z=z;iter=0;
values=new float[2*Size];
}


float Mesh::Central_diff(){
return(sum_central_(values[0],X,Y,Z));
}


void Mesh::fill(const float value){
for(int size=0;size<2*Size;size++)
{

        values[size]=value;

}
}


