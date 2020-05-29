#include<string>
#include<GPS.h>
int main(){
	GPS a;
	a.setLatitude(24, "North");
	a.setLongtitude(120,"East");
	a.setAltitude(5);
	a.report();
	return 0;
}
