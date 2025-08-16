#ifndef EVENTCATEGORY_H
#define EVENTCATEGORY_H

#include <string>
#include <vector>

#include <Task.h>

class EventCategory
{
public:
    EventCategory();
    std::vector<Task>::iterator taskIterator();
    void setName(std::string name);
    void addTask(Task task);
    void removeTask(Task task);
};

#endif // EVENTCATEGORY_H
