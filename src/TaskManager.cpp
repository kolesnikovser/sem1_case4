#include "TaskManager.h"

TaskManager::TaskManager() {}

void TaskManager::addTask(const Task& task) {
    tasks.push_back(task);
}

bool TaskManager::removeTask(int id) {
    auto it = std::remove_if(tasks.begin(), tasks.end(), 
                              [id](const Task& task) { return task.getId() == id; });
    
    if (it != tasks.end()) {
        tasks.erase(it, tasks.end());
        return true;
    }
    return false;
}

std::vector<Task> TaskManager::getAllTasks() const {
    return tasks;
}

std::vector<Task> TaskManager::getCompletedTasks() const {
    std::vector<Task> completedTasks;
    for (const auto& task : tasks) {
        if (task.getIsCompleted()) {
            completedTasks.push_back(task);
        }
    }
    return completedTasks;
}

std::vector<Task> TaskManager::getPendingTasks() const {
    std::vector<Task> pendingTasks;
    for (const auto& task : tasks) {
        if (!task.getIsCompleted()) {
            pendingTasks.push_back(task);
        }
    }
    return pendingTasks;
}

int TaskManager::getTaskCount() const {
    return tasks.size();
}

void TaskManager::printAllTasks() const {
    printTasks(tasks);
}

void TaskManager::printTasks(const std::vector<Task>& tasksToPrint) const {
    if (tasksToPrint.empty()) {
        std::cout << "📭 Список задач пуст.\n";
        return;
    }
    
    for (const auto& task : tasksToPrint) {
        task.printTask();
    }
}