#ifndef __TASKS_H__
#define __TASKS_H__

#include <iostream>
#include "time.h"


struct ITask
{
	//virtual ~ITask();
	
    virtual void run() = 0;
    virtual unsigned long getNextRunPeriod() = 0; // in milliseconds
    virtual void decTimeToRun() = 0;
    virtual unsigned long getTimeToRun() = 0;
};



class HelloTask: public ITask
{
public:
	HelloTask();
	~HelloTask();
	
	void run();
	unsigned long getNextRunPeriod();
	void decTimeToRun();
	unsigned long getTimeToRun();
private:
	unsigned long m_timeToRun;
};

class ByeTask: public ITask
{
public:
	ByeTask();
	~ByeTask();

	void run();
	unsigned long getNextRunPeriod();
	void decTimeToRun();
	unsigned long getTimeToRun();
private:
	unsigned long m_timeToRun;
};


inline HelloTask::HelloTask() : m_timeToRun(2)
{}

inline HelloTask::~HelloTask()
{}

inline void HelloTask::run()
{
	std::cout << "run HelloTask: Hello!" << std::endl;
}

inline unsigned long HelloTask::getNextRunPeriod()
{
	return 1234;
}

inline void HelloTask::decTimeToRun()
{
	--m_timeToRun;
}

inline unsigned long HelloTask::getTimeToRun()
{
	return m_timeToRun;
}

	
	
inline ByeTask::ByeTask() : m_timeToRun(4)
{}

inline ByeTask::~ByeTask()
{}

inline void ByeTask::run()
{
	std::cout << "run ByeTask: Bye!" << std::endl;
}

inline unsigned long ByeTask::getNextRunPeriod()
{
	return 1234;
}

inline void ByeTask::decTimeToRun()
{
	--m_timeToRun;
}

inline unsigned long ByeTask::getTimeToRun()
{
	return m_timeToRun;
}

#endif //__TASKS_H__
