#ifndef SCHEDULETIME_H
#define SCHEDULETIME_H

#include <array>

class ScheduleTime
{
public:
    ScheduleTime();
    void setHour(int hour);
    int getHour();
    void setMinute(int minute);
    int getMinute();
    void setTime(std::array<int, 2> time);
    std::array<int, 2> getTime();

private:
    std::array<int, 2> time;
    bool validateHour(int hour);
    bool validateMinute(int minute);
    bool validateTime(std::array<int, 2> time);
};

#endif // SCHEDULETIME_H
