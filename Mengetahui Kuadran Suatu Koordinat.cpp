#include<iostream>
using namespace std;
class Kuadran
{
public:
int x;
int y;
void input()
 { cout<<"Program Kuadran suatu \n"<<endl;
   cout<<"Masukkan Koordinat (X)= ";cin>>x;
   cout<<"Masukkan Koordinat (Y)= ";cin>>y;
   cout<<"Koordinat titik(X,Y)="<<"("<<x<<","<<y<<")"<<endl;
 }
 void output()
 { if(x>0&&y>0)
    { cout<<"Kuadran 1"<<endl; }
    else if(x<0&&y>0)
    { cout<<"Kuadran 2"<<endl; }
    else if(x<0&&y<0)
    { cout<<"Kuadran 3"<<endl; }
    else
    { cout<<"Kuadran 4"<<endl;
    }
 }
};
int main()
{
    Kuadran a;
    a.input();
    a.output();
}
