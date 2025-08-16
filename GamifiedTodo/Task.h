#ifndef TASK_H
#define TASK_H

#include <map>

#include <ScheduleTime.h>

class Task
{
public:
    Task();
    void setLength(int length);
    void setTime(std::map<std::string, ScheduleTime> time);
    void setStartTime(ScheduleTime time);
    void setEndTime(ScheduleTime time);
    void setCompletionStatus(bool status);
    bool getCompletionStatus();

private:
    std::map<std::string, ScheduleTime> active_time;
    ScheduleTime length;
    bool completion_status;
};

#endif // TASK_H
