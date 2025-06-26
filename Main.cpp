#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <time.h>
#include <windows.h>
class ToDoListVector{
    private:
    std::vector<std::string> todo;
    public:
    void addtask(std::string& task){
        todo.push_back(task);
        std::cout << "Task has been added\n";
    }
    void listask() {
    for (std::string&task : todo){
        std::cout << "task: " << task << "\n";  
           Sleep(1000);
    }
    }
    
    
};  




    int main() {
    ToDoListVector todolistvector;
    int tasks;
    std::string task;
    while(true){
    std::cout << "1.Add your task(Type 1)\n";
    std::cout << "2.View your task(Type 2)\n";
    std::cout << "Your choice :";
    std::cin >> tasks;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
 
    if(tasks == 1){
        std::cout << "Add your task : ";
        std::getline(std::cin, task );
        todolistvector.addtask(task);
        std::cout << "\n";
        
            


    }
    if (tasks == 2){
        std::cout << "\n";
        todolistvector.listask();
       std::cout << "\n";

    }
}
}
