#ifndef __TIME_H__
#define __TIME_H__
#include <time.h>

class Time 
{
public:
	Time();//now
	Time(const unsigned long period); //milliseconds
	
	Time operator+(const unsigned long period) const;
	bool operator<(const Time& t) const;
	
	void sleep() const;
private:
	timespec m_time;
};


#endif //__TIME_H__
