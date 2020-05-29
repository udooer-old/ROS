#include<string>
#include<sstream>
#include<iostream>
#include<GPS.h>
GPS::GPS(){}
void GPS::setLatitude(float latitude, std::string la){
	m_latitude = latitude;
	m_la = la;
}
void GPS::setLongtitude(float longtitude, std::string lo){
	m_longtitude = longtitude;
	m_lo = lo;	
}
void GPS::setAltitude(float altitude){
	m_altitude = altitude;
}
float GPS::getLatitude(){
	return m_latitude;
}
float GPS::getLongtitude(){
	return m_longtitude;
}
float GPS::getAltitude(){
	return m_altitude;
}
void GPS::report(){
	std::stringstream ss;
	ss<<"latitude:"<<m_latitude<<m_la<<",longtitude:"<<m_longtitude<<m_lo<<",altitude:"<<m_altitude;
	std::string s;
	ss>>s;
	std::cout<<s<<'\n';
}

