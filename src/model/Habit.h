#ifndef HABIT_H
#define HABIT_H

#include <Task.h>

class Habit : public Task
{
public:
    Habit(std::map<std::string, ScheduleTime> scheduled_time);
    void updateStreak();
    int getStreak();

private:
    int streak;
};

#endif // HABIT_H
