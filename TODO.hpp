#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

class TODO
{
private:
    unordered_map<string,bool> Todo;
public:
    void readTodo(const unordered_map<string,bool>& Todo) const;
    void writeTodo(unordered_map<string,bool>& Todo,const string& Tache);
    void checkTodo(unordered_map<string,bool>& Todo,const string& Tache);
    void deleteTodo(unordered_map<string,bool>& Todo,const string& Tache);
    void InitialiseTodoList();
};