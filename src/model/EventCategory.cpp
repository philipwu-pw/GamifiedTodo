#include "EventCategory.h"

#include <stdexcept>

EventCategory::EventCategory() : tasks{}
{

}

EventCategory::~EventCategory()
{
    tasks.clear();
}

std::vector<Task>& EventCategory::getTasks()
{
    return tasks;
}

void EventCategory::setName(std::string name)
{
    this->name = name;
}

void EventCategory::addTask(Task task) {
    tasks.push_back(task);
}

void EventCategory::removeTask(Task& task)
{
    int searchIndex = findElement(tasks, task);
    if (searchIndex == -1)
    {
        throw std::invalid_argument("Task not found in category.");
    }
    else
    {
        tasks.erase(tasks.begin() + searchIndex);
    }
}

int findElement(const std::vector<Task>& v, Task* t)
{
    int searchIndex = -1;
    for (int i = 0; i < v.size(); i++)
    {
        // TODO: may be problematic, not sure if this works haha
        if (&(v.at(i)) == t) {
            searchIndex = i;
        }
    }
    return searchIndex;
}
