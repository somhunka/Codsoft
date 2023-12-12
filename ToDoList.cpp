#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    int key = 1,choice,question,delet_key,edit_key;
    string val,error;
    map<int , string>myTask;
    map<int, int>mymap;
    start:
    cout<<"---------------------------TO-DO LIST---------------------------"<<endl;
    cout<<"****Select the task****"<<endl;
    cout<<"1.____Add Task____"<<endl;
    cout<<"2.____View Task___"<<endl;
    cout<<"3.____Remove Task____"<<endl;
    cout<<"4.____Mark Task as Completed____"<<endl;
    cout<<"5.____Exit____"<<endl;
    cout<<"\nSelect your choice : ";
    cin>>choice;

    switch(choice)
    {
        case 1:
          cout<<endl;
          do{
            cin.ignore();
            cout<<"Enter your Task details: ";
            getline(cin,val);
            myTask.insert({key,val});
            mymap.insert({key,0});
            key++;
        cout<<"Do you want to add more Task? {1=Yes / 0=NO} : ";
        cin>>question;

          }while(question);
          goto start;
          break;
        case 2:
          cout<<endl;
          for(auto x : myTask) 
          {
            if(mymap.at(x.first)==1)
            {
                cout<<" Task-"<<x.first<<":"<<x.second<<endl;
            }
            else if(mymap.at(x.first)==0)
            {
                cout<<" Task-"<<x.first<<":"<<x.second<<"--->[Pending]"<<endl;
            }
          } 
          goto start;
          break;
        case 3:
          cout<<"\nEnter the task number which one you want to delete: ";
          cin>>delet_key;
          myTask.erase(delet_key);
          mymap.erase(delet_key);
          cout<<"\nTask"<<delet_key<<" deleted successfully..!"<<endl;
          goto start;
          break;
        case 4:
          cout<<"\nEnter the task number which one you want to mark as completed :";
          cin>>edit_key;
          try
          {
            myTask[edit_key] = myTask.at(edit_key) +"---> [completed]";
            mymap[edit_key] = 1;
            cout<<"\nTask-"<<edit_key<<"marked as completed successfully...!"<<endl;
        
          }
          catch(const std::exception& e)
          {
            cout<<endl<<"Invalid Task Number...!"<<endl;
          }
          goto start;
          break;
          case 5:
            cout<<"\n Thank You! for using TO-DO LIST Application..! "<<endl;
            exit(0);
            break;
          default:
            cout<<"Invalid Choice...!Please try again.."<<endl;
            goto start;
            break;
    }  

            


    }
