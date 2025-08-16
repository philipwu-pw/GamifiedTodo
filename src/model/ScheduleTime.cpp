#include "ScheduleTime.h"

/**
 * @brief Initializes a ScheduleTime with 0h:0m
 */
ScheduleTime::ScheduleTime() : time{}
{
    time[0] = 0;
    time[1] = 0;
}

bool ScheduleTime::setHour(int hour)
{
    if (validateHour(hour)) {
        time[0] = hour;
        return true;
    }
    else {
        return false;
    }
}

int ScheduleTime::getHour()
{
    return time[0];
}

bool ScheduleTime::setMinute(int minute)
{
    if (validateMinute(minute)) {
        time[1] = minute;
        return true;
    }
    else {
        return false;
    }
}

int ScheduleTime::getMinute()
{
    return time[1];
}

bool ScheduleTime::setTime(std::array<int, 2> time)
{
    if (validateTime(time)) {
        this->time = time;
        return true;
    }
    else {
        return false;
    }
}

std::array<int, 2> ScheduleTime::getTime()
{
    return time;
}

bool ScheduleTime::validateHour(int hour)
{
    if (hour >= 0 && hour <= 23) {
        return true;
    }
    return false;
}

bool ScheduleTime::validateMinute(int minute)
{
    if (minute >= 0 && minute <= 59) {
        return true;
    }
    return false;
}

bool ScheduleTime::validateTime(std::array<int, 2> time)
{
    if (validateHour(time[0]) && validateHour(time[1])) {
        return true;
    }
    return false;
}
