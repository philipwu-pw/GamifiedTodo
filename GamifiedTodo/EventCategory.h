#ifndef EVENTCATEGORY_H
#define EVENTCATEGORY_H

#include <string>
#include <vector>

#include <Task.h>

class EventCategory
{
public:
    EventCategory();
    ~EventCategory();
    std::vector<Task>& getTasks();
    void setName(std::string name);
    void addTask(Task task);
    void removeTask(Task& task);

private:
    std::vector<Task> tasks;
    std::string name;
    int findElement(const std::vector<Task>& v, Task t);
};

#endif // EVENTCATEGORY_H
