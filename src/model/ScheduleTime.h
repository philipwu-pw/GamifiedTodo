#ifndef SCHEDULETIME_H
#define SCHEDULETIME_H

#include <array>

class ScheduleTime
{
public:
    ScheduleTime();
    bool setHour(int hour);
    int getHour();
    bool setMinute(int minute);
    int getMinute();
    bool setTime(std::array<int, 2> time);
    std::array<int, 2> getTime();

private:
    std::array<int, 2> time;
    bool validateHour(int hour);
    bool validateMinute(int minute);
    bool validateTime(std::array<int, 2> time);
};

#endif // SCHEDULETIME_H
