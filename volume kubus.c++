#include <iostream>
#include <math.h>
using namespace std;
float H_luasPer(float s) ;
float H_volume(float s) ;
float H_total(float s) ;

float s, luasper, volume, panjangTotalRusuk;
int main ()
	{
		cout<<" Masukkan panjang rusuk kubus s: ";
		cin>>s;
		luasPer = H_luasPer(s) ;
		volume = H_volume(s) ;
		panjangTotalRusuk = H_Total(s) ;
		cout<<" luas  permukaan kbus dengan panjang rusuk s :"<<s<<" adalah "<<luasper<<end1;
		cout<<" volume kubus dengan panjang rusuk s :"<<s<<" adalah "<<volume<<end1;
		cout<<" panjang total rusuk kubus dengan panjang rusuk s :"<<s<<" adalah "<<panjangTotalRusuk<<end1;
	}
float H_luasper(float s)
	{
		luasPer = 6*s*s;
		return(luasPer) ;
 	} 
float H_volume(float s)
	{
		volume = s*s*s;
		return(volume) ;
	}
float H_total(float s)
	{
		panjangTotalRusuk = 12*s;
		return(panjangTotalRusuk)
	}