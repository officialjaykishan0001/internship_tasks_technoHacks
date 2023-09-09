#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
/**
 * Work : To Do list Terminal task completion of internship at techno hacks.
 * Progrmmer : Jay kishan kharwar 
 * date : 31 - 08 -2023
 * language : c++
*/
using namespace std;

vector<string> tasks;//data structure uses for the further processes.


//this function stands for the command "help".
void help()
{
    

	cout<<"COMMANDS                           WORKeeeeeee"<<endl;
    cout<<"---------                         ------" <<endl;
	cout<<"add                      Asemble of new task"<<endl;
	cout<<"remove                   Resemble of task   "<<endl;
	cout<<"status                   To do list veiw"<<endl;
    cout<<"exit                     For exiting to the terminal"<<endl;

    cout<<endl;
	
    return ;
}

//this funciton stands for the command "add"
void add()
{
    string task;
    cout<<"Enter Task : ";
    cin>>task;

    tasks.push_back(task);
    cout<<endl;
    return ;
}


//this function stands for the command "remove".
void remove()
{
    if(tasks.size()==0)
    {
        cout<<" \"No, task are added right now.\" "<<endl;
        cout<<endl;
        return ;
    }
    string TaskToBeRemove;
    cout<<"Enter Task Name : ";
    cin>>TaskToBeRemove;

    bool flag = true;
    for(int i = 0;i<tasks.size();i++)
    {
        if(tasks[i]==TaskToBeRemove)
        {
            flag = false;
            tasks.erase(tasks.begin()+i);
            break;
        }
    }

    if(flag) cout<<"NO, such Task found .."<<endl;
 
    cout<<endl;
    return ;
}


//this function stands for the commands "status"
void status()
{
    if(tasks.size()==0)
    {
        cout<<"No, Tasks presented in \"To Do List\" yet.";
        cout<<endl<<endl;
        return ;
    }

    cout<<"Serial No.        Tasks"<<endl;
    cout<<"----------       -------- "<<endl;
    for(int i = 0;i<tasks.size();i++)
    {
        cout<<"  "<<i+1<<".              "<<tasks[i]<<endl;
    }
    cout<<endl;
    return ;
}

//this function used to take the input of the commands from the keyword.
string  controller()
{
   string commands ;
    cout<<"terminal :\\> to do list >> ";
    cin>>commands;

    return commands;
}


int main()
{
    while(1)
    {
    string cmd = controller();

    if(cmd=="help")
    {
        help();
        
    }
    else if(cmd == "add")
    {
        add();
    }
    else if(cmd == "remove")
    {
        remove();
    }
    else if(cmd == "status")
    {
        status();
    }
    else if(cmd == "exit")
    {
        break;
    }


    }


    return 0 ;
}
/**
 * Jai Jai Jai Bajarangbali..
*/
