#include <iostream>
#include <algorithm>
//#include <vector>
#include <time.h>
#include "sharePtr.h"
#include "scheduler.h"
#include "tasks.h"
using std::cout;
using std::endl;


void run_scheduler()
{
    SharedPtr<ITask> task1(new HelloTask);
	SharedPtr<ITask> task2(new ByeTask);
    SharedPtr<ITask> task3(new HelloTask);
    SharedPtr<ITask> task4(new ByeTask);
    
    Scheduler s;
	
	s.add(task1);
    s.add(task2);
    s.add(task3);
    s.add(task4);

    s.run();
}

int main()
{
	cout << "Welcom to the Scheduler Program!" << endl;
	
	run_scheduler();
	
	return 0;
}
