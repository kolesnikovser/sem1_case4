# Система управления задачами (Task Manager)

## Авторы и роли
- **Архитектор (Team Lead)**: [ФИО] - создание структуры проекта, CMake, организация работы
- **Разработчик 1**: [ФИО] - разработка класса Task
- **Разработчик 2**: [ФИО] - разработка класса TaskManager
- **Тестировщик**: [ФИО] - написание main.cpp, тестирование
- **Технический писатель**: [ФИО] - документация, README, фиксация ошибок

## Описание проекта
Консольное приложение для управления списком задач. Позволяет добавлять задачи, отмечать их выполнение, фильтровать по статусу и удалять.

### Класс `Task`
- **Поля**: `id`, `description`, `isCompleted`, `priority`
- **Методы**: конструкторы, `markCompleted()`, `updateDescription()`, `printTask()`

### Класс `TaskManager`
- **Поля**: `std::vector<Task> tasks`
- **Методы**: `addTask()`, `removeTask()`, `getAllTasks()`, `getCompletedTasks()`, `getPendingTasks()`

## Инструкция по сборке и запуску

### Требования
- WSL2 (Ubuntu)
- VS Code с расширениями: C/C++, CMake Tools, Remote - WSL
- Компилятор (g++/clang), CMake, Git

### Сборка проекта
```bash
# Клонирование репозитория
git clone <url-репозитория>
cd project-task-manager

# Конфигурация CMake
mkdir build && cd build
cmake ..

# Компиляция
make

# Запуск
./TaskManager
