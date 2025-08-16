#ifndef HABIT_H
#define HABIT_H

#include <Task.h>

class Habit : public Task
{
public:
    Habit();

private:
    int streak;
};

#endif // HABIT_H
