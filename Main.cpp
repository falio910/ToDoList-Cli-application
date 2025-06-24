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
    void addtask(const std::string& task){
        todo.push_back(task);
        std::cout << "Task has been added\n";
    }
    void listask() {
    for (const auto& task : todo){
        std::cout << "task: " << task << "\n";
           Sleep(500);
    }
    }
    
    
};  




    int main() {
    ToDoListVector todolistvector;
    int tasks;
    std::string task;
    while(true){
    std::cout << "1.Add your work(Type 1)\n";
    std::cout << "2.View work(Type 2)\n";
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
        todolistvector.listask();
       

    }
}
}
