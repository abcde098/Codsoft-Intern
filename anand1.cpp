#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Task {
    std::string description;
};

void displayMenu() {
    std::cout << "ToDo List Manager:"<<endl;
    std::cout << "1. Add Task"<<endl;
    std::cout << "2. View Tasks"<<endl;
    std::cout << "3. Delete Task"<<endl;
    std::cout << "4. Quit"<<endl;
}


void addTask(std::vector<Task>& tasks) {
    Task newTask;
    std::cout << "Enter task description: ";
    std::getline(std::cin >> std::ws, newTask.description);
    tasks.push_back(newTask);
    std::cout << "Task added successfully"<<endl;
}
void viewTasks(const std::vector<Task>& tasks) {
    if (tasks.empty()) {
        std::cout << "No tasks available."<<endl;
    } else {
        std::cout << "Task List:"<<endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            std::cout << i + 1 << ". " << tasks[i].description <<endl;
        }
    }
}

void deleteTask(std::vector<Task>& tasks) {
    viewTasks(tasks);

    if (tasks.empty()) {
        return;
    }

    int choice;
    std::cout << "Enter the task number to delete: ";
    std::cin >> choice;

    if (choice >= 1 && choice <= static_cast<int>(tasks.size())) {
        tasks.erase(tasks.begin() + choice - 1);
        std::cout << "Task deleted successfully!"<<endl;
    } else {
        std::cout << "Invalid task number."<<endl;
    }
}

int main() {
    std::vector<Task> tasks;

    int option;
    do {
        displayMenu();
        std::cout << "Enter your choice (1-4): ";
        std::cin >> option;

        switch (option) {
            case 1:
                addTask(tasks);
                break;
            case 2: 
                viewTasks(tasks);
                break;
            case 3:
                deleteTask(tasks);
                break;
            case 4:
                std::cout << "Thank You!"<<endl;
                break;
            default:
                std::cout << "Invalid choice.Try again."<<endl;
        }
    } while (option != 4);

    return 0;
}