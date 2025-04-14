#include "TODO.hpp"

void TODO::readTodo(const unordered_map<string,bool>& Todo) const
{
    int compteur=1;
    for (const auto& pair: Todo)
    {
        if (pair.second)
        {
            cout << compteur << ". " << pair.first << " :Fini!" << endl;
            compteur++;
        }
        else
        {
            cout << compteur << ". " << pair.first << " :Pas encore Fini..." << endl;
            compteur++;
        }

    }
}

void TODO::writeTodo(unordered_map<string,bool>& Todo, const string& Tache)
{
    if (Todo.find(Tache)==Todo.end())
    {
        Todo[Tache]=false;
    }
    else
    {
        cout << "La tache: " << Tache << " existe deja!" <<endl;
    }
}

void TODO::checkTodo(unordered_map<string,bool>& Todo,const string& Tache)
{
    if (Todo[Tache])
    {
        cout << "Ta tache est deja fini!" << endl;
    }
    else
    {
        Todo[Tache]=true;
    }
}

void TODO::deleteTodo(unordered_map<string,bool>& Todo,const string& Tache)
{
    if (Todo.find(Tache)== Todo.end())
    {
        cout << "Erreur, la tache n'est pas presente dans le dictionnaire..." <<endl;
    }
    else
    {
        Todo.erase(Tache);
        cout << "La tache: " << Tache << " vient d'etre efface!" << endl;
    }
}

void TODO::InitialiseTodoList()
{
    string commande;
    cout << "Bienvenue dans TODO CLI de Nadim Najjar! Tapez 'help' pour les commandes. \n";
    while (true)
    {
        cout << "\n>>>";
        getline(cin,commande);

        if (commande=="exit")
            break;
        else if (commande== "help")
        {
            cout << "Commandes disponibles :\n"
                 << " add <tache>           :ajouter une tache \n"
                 << " remove <tache>        :supprimer une tache\n"
                 << " done <tache>          : marquer comme faite\n"
                 << " show                  : afficher la TODO List\n"
                 << " exit                  : quitter\n";
        }
        else if (commande.rfind("add",0) ==0 )
        {
            string tache=commande.substr(4);
            writeTodo(Todo,tache);
        }
        else if (commande.rfind("remove",0)==0)
        {
            string tache=commande.substr(7);
            deleteTodo(Todo,tache);
        }
        else if (commande.rfind("done",0)==0)
        {
            string tache=commande.substr(5);
            checkTodo(Todo,tache);
        }
        else if (commande.rfind("show",0)==0)
        {
            readTodo(Todo);
        }
        else
        {
            cout <<"Commande inconnue, tapez 'help' pour voir les options.";
        }
    }
    cout <<"Au revoir! \n";
}