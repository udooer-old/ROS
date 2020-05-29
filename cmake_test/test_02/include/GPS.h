#ifndef GPS_H
#define GPS_H
class GPS{
	private:
		float m_utc_time;
		float m_latitude;
		std::string m_la;
		float m_longtitude;
		std::string m_lo;
		float m_altitude;
	public:
		GPS();
		void setLatitude(float , std::string);
		void setLongtitude(float , std::string);
		void setAltitude(float altitude);
		float getLatitude();
		float getLongtitude();
		float getAltitude();
		void report();
};
#endif
