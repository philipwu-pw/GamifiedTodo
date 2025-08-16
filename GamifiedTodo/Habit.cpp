#include "Habit.h"

Habit::Habit(std::map<std::string, ScheduleTime> scheduled_time) :
    Task(scheduled_time), streak{0}
{

}

/**
 * Updates streak given previous day's completion status
 */
void Habit::updateStreak()
{
    ++streak;
}

int Habit::getStreak()
{
    return streak;
}
