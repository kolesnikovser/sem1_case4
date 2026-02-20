#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include "Task.h"
#include <vector>
#include <algorithm>

class TaskManager {
private:
    std::vector<Task> tasks;

public:
    // Конструктор
    TaskManager();

    // Основные методы управления
    void addTask(const Task& task);
    bool removeTask(int id);
    
    // Методы для получения списков
    std::vector<Task> getAllTasks() const;
    std::vector<Task> getCompletedTasks() const;
    std::vector<Task> getPendingTasks() const;
    
    // Вспомогательные методы
    int getTaskCount() const;
    void printAllTasks() const;
    void printTasks(const std::vector<Task>& tasksToPrint) const;
};

#endif