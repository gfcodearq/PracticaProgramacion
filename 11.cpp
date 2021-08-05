#include <iostream>
using namespace std;

const int min_seg = 60;
const int hs_seg = 3600;
const int dias_seg = 86400;
const int sem_seg = 604800;

int main(int argc, char *argv[]) 
{
	int segundos;	
	cout<<"Ingrese la cantidad de segundos"<<endl;
	cin>>segundos;
	//calculo semana
	int semanas = segundos / sem_seg;
	int resto_semana = segundos % sem_seg;
	//calculo dias
	int dias = resto_semana / dias_seg;
	int resto_dias = resto_semana % dias_seg;
	//calculo horas
	int horas = resto_dias / hs_seg;
	int resto_horas = resto_dias % hs_seg;
	//calculo minutos
	int min = resto_horas / min_seg;
	int resto_min = resto_horas % min_seg;	
	
	cout<<semanas<<" semanas "<<dias<<" dias "<<horas<<":"<<min<<":"<<resto_min;
	return 0;
}

