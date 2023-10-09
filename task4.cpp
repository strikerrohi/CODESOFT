
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    vector<string> tasks;

    while (true) 
	{
        cout << "\nTodo List Manager" << endl;
        cout << "1. Add your Task" << endl;
        cout << "2. View your Tasks" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. Quit" << endl;

        int choice;
        cout<<"Enter the choice: "<<" ";
        cin >> choice;

        switch (choice) 
		{
			
            case 1: 
			{
                string task;
                cout << "Enter the task: ";
                cin.ignore();
                getline(cin, task);
                tasks.push_back(task);
                cout << "Task added successfully!" << endl;
                break;
            }
            
            case 2: 
			{
                if (tasks.empty()) 
				{
                    cout << "No tasks present to display." << endl;
                } 
				else 
				{
                    cout << "Tasks:" << endl;
                    for (size_t i = 0; i < tasks.size(); ++i) 
					{
                        cout << i + 1 << ". " << tasks[i] << endl;
                    }
                }
                break;
            }
            
            case 3: 
			{
                if (tasks.empty()) 
				{
                    cout << "No tasks to delete." << endl;
                } 
				else 
				{
                    cout << "Tasks:" << endl;
                    for (size_t i = 0; i < tasks.size(); ++i) 
					{
                        cout << i + 1 << ". " << tasks[i] << endl;
                    }
                    int taskNumber;
                    cout << "Enter the task number to delete: ";
                    cin >> taskNumber;
                    if (taskNumber > 0 && taskNumber <= static_cast<int>(tasks.size())) 
					{
                        tasks.erase(tasks.begin() + taskNumber - 1);
                        cout << "Task deleted successfully!" << endl;
                    } 
					else 
					{
                        cout << "Invalid task number." << endl;
                    }
                }
                break;
            }
            
            case 4:
                cout << "Goodbye!.Thank you !!" << endl;
                return 0;
                
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
