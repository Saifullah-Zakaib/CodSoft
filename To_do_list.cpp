#include <iostream>
#include <vector>
using namespace std;

class Task
{
public:
    string name;
    string status;

    Task(string name, string status = "Pending")
    {
        this->name = name;
        this->status = status;
    }
};

class Task_option
{
public:
    vector<Task> tasks;

    void Task_add(Task task)
    {
        tasks.push_back(task);
    }

    void viewTasks()
    {
        cout << "To do list : " << endl;
        for (Task task : tasks)
        {
            cout << "->" << task.status << "<- " << task.name << endl;
        }
    }

    void markTaskAsCompleted(string taskName)
    {
        for (Task &task : tasks)
        {
            if (task.name == taskName)
            {
                task.status = "Completed";
                return;
            }
        }
        cout << "Task not found." << endl;
    }

    void removeTask(string taskName)
    {
        for (int i = 0; i < tasks.size(); i++)
        {
            if (tasks[i].name == taskName)
            {
                tasks.erase(tasks.begin() + i);
                return;
            }
        }
        cout << "Task not found." << endl;
    }
};

int main()
{
    Task_option obj1;
    int option;
    string Name_of_task;

    do
    {
        cout << "What do you want to do?" << endl;
        cout << "1. Add task" << endl;
        cout << "2. View tasks" << endl;
        cout << "3. Mark task as completed" << endl;
        cout << "4. Remove task" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter Your choice: ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Enter task name: ";
            cin.ignore();
            getline(cin, Name_of_task);
            obj1.Task_add(Task(Name_of_task));
            break;
        case 2:
            obj1.viewTasks();
            break;
        case 3:
            cout << "Enter task name to mark as completed: ";
            cin.ignore();
            getline(cin, Name_of_task);
            obj1.markTaskAsCompleted(Name_of_task);
            break;
        case 4:
            cout << "Enter task name which you want  to remove: ";
            cin.ignore();
            getline(cin, Name_of_task);
            obj1.removeTask(Name_of_task);
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
        }
    } while (option != 5);

    return 0;
}
