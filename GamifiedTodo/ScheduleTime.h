#ifndef SCHEDULETIME_H
#define SCHEDULETIME_H

#include <array>

class ScheduleTime
{
public:
    ScheduleTime();
    int getMinute();
    int getHour();
    std::array<int, 2> getTime();
};

#endif // SCHEDULETIME_H
