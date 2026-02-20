#include "Task.h"

// Конструктор по умолчанию
Task::Task() : id(0), description(""), isCompleted(false), priority(5) {}

// Конструктор с параметрами
Task::Task(int id, const std::string& description, int priority) 
    : id(id), description(description), isCompleted(false), priority(priority) {}

int Task::getId() const {
    return id;
}

std::string Task::getDescription() const {
    return description;
}

bool Task::getIsCompleted() const {
    return isCompleted;
}

int Task::getPriority() const {
    return priority;
}

void Task::markCompleted() {
    isCompleted = true;
}

void Task::updateDescription(const std::string& newDescription) {
    description = newDescription;
}

void Task::printTask() const {
    std::cout << "┌────────────────────────────────────\n";
    std::cout << "│ ID: " << id << "\n";
    std::cout << "│ Описание: " << description << "\n";
    std::cout << "│ Статус: " << (isCompleted ? "✅ Выполнена" : "⏳ В работе") << "\n";
    std::cout << "│ Приоритет: " << priority << "\n";
    std::cout << "└────────────────────────────────────\n";
}