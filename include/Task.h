#ifndef TASK_H
#define TASK_H

#include <string>
#include <iostream>

class Task {
private:
    int id;
    std::string description;
    bool isCompleted;
    int priority; // 1 (наивысший) - 5 (низший)

public:
    // Конструкторы
    Task();
    Task(int id, const std::string& description, int priority);

    // Геттеры (константные методы)
    int getId() const;
    std::string getDescription() const;
    bool getIsCompleted() const;
    int getPriority() const;

    // Методы для изменения состояния
    void markCompleted();
    void updateDescription(const std::string& newDescription);
    
    // Метод для вывода информации
    void printTask() const;
};

#endif