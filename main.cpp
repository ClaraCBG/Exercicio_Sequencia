#include <iostream>
using namespace std;

//função que calculará a quantidade de copos quebrados
int calculaCoposQuebrados (){
  int cop, lat;

  int copsQuebrados=0;

  do{

    cout << "insira um número de copos:"<< endl;
  cin>> cop;


   cout << "insira um número de latas: "<<endl;
  cin>>lat;
  
    //Os garçons derrubam apenas as bandeijas com mais latas que copos
   if (lat>cop)
      copsQuebrados = copsQuebrados + cop;
  
}while (cop!=0 && lat!=0);

return copsQuebrados;
}


int main() {
  int result;
  result = calculaCoposQuebrados();

  cout << "O número de copos quebrados é igual a: "<< result<< endl; 
 
}