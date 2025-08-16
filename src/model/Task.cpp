#include "Task.h"

Task::Task(std::map<std::string, ScheduleTime> scheduled_time) :
    scheduled_time{scheduled_time}, length {30}, completion_status{false}
{
}

void Task::setLength(int length)
{
    this->length = length;
}

void Task::setTime(std::map<std::string, ScheduleTime> time)
{
    // TODO: validate scheduled time
    scheduled_time = time;
}

void Task::setStartTime(ScheduleTime time)
{
    scheduled_time["start"] = time;
}

void Task::setEndTime(ScheduleTime time)
{
    scheduled_time["end"] = time;
}

void Task::setCompletionStatus(bool status)
{
    completion_status = status;
}

bool Task::getCompletionStatus()
{
    return completion_status;
}
