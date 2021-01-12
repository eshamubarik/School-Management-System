#include <iostream>

using namespace std;

struct node
  {
    int id;
    char name [50];
    char sec[30];
    char addrs[50];
    char city[30];
    char dept[30];
    int fee;
    char date[30];
    node *prev,*next;

  };
class student // here we made a student function
{
     private:
         node *head;// here we made a head of node
         char ch; // here we made a variable where we store the character
     public:
        student()
        {
            head=NULL;

        }
        void menu()
        {
        	system(" Color FA");
            cout<<"\n\t\t\t***********************WELCOME TO THE STUDENT SYSTEM*************************"<<endl;
            cout<<"\n\t\t\t 1-Add a student:";
            cout<<"\n\t\t\t 2-Search a student:";
            cout<<"\n\t\t\t 3-Update a student:";
            cout<<"\n\t\t\t 4-Delete a student:";
            cout<<"\n\t\t\t 5-Display a student:";
            cout<<"\n\t\t\t 6-EXIT:";
            return;
        }
        void add_first()
        {
          node * newer=new node;
          cout<<"\n\t\t Enter the Student ID:"<<endl;
          cin>>newer->id;

          cout<<"\n\t\t Enter the Student Full name :"<<endl;
          cin.getline(newer->name,50);
         cin>>newer->name;
         cout<<"\n\t\t Enter the Section :"<<endl;
          cin.getline(newer->sec,30);
          cin>>newer->sec;

          cout<<"\n\t\t Enter the Address of Student :"<<endl;
          //cin.getline(newer->addrs ,50);
          cin>>newer->addrs;

          cout<<"\n\t\tEnter the City:"<<endl;
         // cin.getline(newer->city,30);
          cin>>newer->city;

          cout<<"\n\t\tEnter the Student deapartment :"<<endl;
         // cin.getline(newer->jobtitle,50);
         cin>>newer->dept;

          cout<<"\n\t\tEnter the Student fee:"<<endl;
          cin>>newer->fee;


          cout<<"\n\t\t Enter the addmission Date :"<<endl;
          //cin.getline(newer->date,30);
          cin>>newer->date;



          newer->next=head;
          newer->prev=NULL;
          if(head!=NULL)
          {
              head->prev=newer;
          }
         head=newer;
         cout<<"\n\t\t\ Record inserted Successfully :"<<endl;
         cout<<"\n\t\t\ **********THANK YOU **********"<<endl;

        }
        void add_last()
        {
            if (head==NULL)
            {
               cout<<"\n\t\tLink is empty !:"<<endl;
               cout<<"\n\t\tAdd a new record\n\tPress J or K:"<<endl;
               cin>>ch;
               if (ch=='J'||ch=='j')
                   {
                   add_first();
                   return;
                   }
                 else
                 {

                   //exit(1);
                 }
            }
            else
            {
                 node *temp=head;
                 while(temp->next!=NULL)
                 {
                     temp=temp->next;

                 }
                 node  *newer=new node;

                 cout<<"\n\t\t\ Enter the student ID:"<<endl;
                 cin>>newer->id;

                 cout<<"\n\t\t\ Enter the student Full name :"<<endl;
                 cin.getline(newer->name,50);
                 cin>>newer->name;


                 cout<<"\n\t\t\ Enter the Section :"<<endl;
                 cin.getline(newer->sec,30);
                 cin>>newer->sec;

                 cout<<"\n\t\t\ Enter the Address of Employee :"<<endl;
                  cin.getline(newer->addrs ,50);
                  cin>>newer->addrs;

                 cout<<"\n\t\t\ Enter the City:"<<endl;
                 cin.getline(newer->city,30);
                 cin>>newer->city;


                 cout<<"\n\t\t\ Enter the student department :"<<endl;
                 cin.getline(newer->dept,50);
                 cin>>newer->dept;


                 cout<<"\n\t\t\Enter the student fee:"<<endl;
                cin>>newer->fee;

                cout<<"\n\t\t\ Enter the addmission Date :"<<endl;
                cin.getline(newer->date,30);
                cin>>newer->date;

                  newer->next=NULL;
                  temp->next=newer;
                  newer->prev=temp;



            }
        }
        void add_after()
        {
             if (head==NULL)
              {

               cout<<"\n\t\tLink is empty !:"<<endl;
               cout<<"\n\t\tAdd a new record Press J or K:"<<endl;
               cin>>ch;
               if (ch=='J'||ch=='j')
               {
                   add_first();
                   return;
               }
                 else
                 {
                    // exit)(1);

                 }
              }
        else
        {
            int val;
             bool flag=false;


            cout<<"\n\tEnter the ID after which you want to add a new record:"<<endl;
            cin>>val;
          // bool flag=false;
            //node *temp=head;
             node *temp=head;


            node *p;
            while(temp!=NULL)
            {

               // if (temp->id==val)
                if(flag=true)
                {


                    node *newer=new node ;

                    cout<<"\n\tEnter the student ID:"<<endl;
                    cin>>newer->id;
                    cout<<"\n\t\t Enter the student Full name :"<<endl;
                    cin.getline(newer->name,50);
                    cin>>newer->name;

                    cout<<"\n\t\t Enter the section :"<<endl;
                    cin.getline(newer->sec,30);
                    cin>>newer->sec;

                    cout<<"\n\t\t Enter the Address of student :"<<endl;
                    cin.getline(newer->addrs ,50);
                    cin>>newer->addrs;

                    cout<<"\n\t\t Enter the City:"<<endl;
                    cin.getline(newer->city,30);
                    cin>>newer->city;

                    cout<<"\n\t\t Enter the student department :"<<endl;
                    cin.getline(newer->dept,50);
                    cin>>newer->dept;

                    cout<<"\n\t\tEnter the student fee:"<<endl;
                    cin>>newer->fee;

                    cout<<"\n\t\t Enter the addmission Date :"<<endl;
                    cin.getline(newer->date,30);
                    cin>>newer->date;



                   if (temp->next!=NULL)
                   {
                       newer->next=temp->next;
                       newer->prev=temp;
                       p=temp->next;
                       p->prev=newer;
                       temp->next=newer;

                   }
                   else
                   {
                      newer->next=temp->next;
                       newer->prev=temp;
                       temp->next=newer;

                   }
                   flag=true;


                }
                temp=temp->next;
             temp=NULL;
            }
            if(flag==false)
            {
                cout<<"\n\tID is not Found! :"<<endl;

            }

       }
   }
   void add_before()
   {
       if (head==NULL)
       {
            cout<<"\n\ttLink is empty !:"<<endl;
               cout<<"\n\ttAdd a new record\n\tPress J or K:"<<endl;
               cin>>ch;                                             
               if (ch=='J'||ch=='j')                             
               {
                   add_first();
                   return;
               }
                 else
                 {
                    // exit)(1);

           }
             }
                 else
        {
            int val;
            bool flag=false;
            cout<<"\n\tEnter the ID Before  which you want to add a new record:"<<endl;
            cin>>val;
            node *temp=head;
            node*p;
            while(temp!=NULL)
            {
                //if (temp->id==val)
                 if(flag=true)

                {
                    node *newer=new node ;

                    cout<<"\n\tEnter the student ID:"<<endl;
                    cin>>newer->id;
                    cout<<"\n\t\t Enter the student Full name :"<<endl;
                    cin.getline(newer->name,50);
                    cin>>newer->name;

                    cout<<"\n\t\t Enter the section :"<<endl;
                    cin.getline(newer->sec,30);
                    cin>>newer->sec;

                    cout<<"\n\t\t Enter the Address of student :"<<endl;
                    cin.getline(newer->addrs ,50);
                    cin>>newer->addrs;

                    cout<<"\n\t\t Enter the City:"<<endl;
                    cin.getline(newer->city,30);
                    cin>>newer->city;

                    cout<<"\n\t\t Enter the student department :"<<endl;
                    cin.getline(newer->dept,50);
                    cin>>newer->dept;

                    cout<<"\n\t\tEnter the student fee:"<<endl;
                    cin>>newer->fee;

                    cout<<"\n\t\t\ Enter the addmission Date :"<<endl;
                    cin.getline(newer->date,30);
                    cin>>newer->date;


                   if (temp->next!=NULL)
                   {
                       newer->next=temp->next;
                       newer->prev=temp;
                       p=temp->next;
                       p->prev=newer;
                       temp->next=newer;

                   }
                   else
                   {
                      newer->next=temp->next;
                       newer->prev=temp;
                       temp->next=newer;

                   }
                   flag=true;


                }
                temp=temp->next;
                temp=NULL;

            }
            if(flag==false)
            {
                cout<<"\n\tID is not Found! :"<<endl;

            }

       }

       }


   void del()
   {
       if (head==NULL)
       {
               cout<<"\n\t\tLink is empty !:"<<endl;
               cout<<"\n\t\tAdd a new record\n\tPress J or K:"<<endl;
               cin>>ch;
               if (ch=='J'||ch=='k')
               {
                   add_first();
                   return;
               }
                 else
                 {
                    // exit)(1);

                 }
       }
           else
            {
            int val;
           // bool flag=false;
            cout<<"\n\tEnter the ID after which you want to Delete a  record:"<<endl;
            cin>>val;

            node *temp=head;//head is pointer in the form of empty
            bool flag=false;
            if(temp->id==val)
                   {
                    head =temp->next;
                    head->prev=NULL;
                    flag=true;
                    delete temp;
                    if (flag==true)
                    {
                        cout<<"\n\tRecord has deleted Successfully:"<<endl;


                    }
                  }
                  else
                  {
                   while(temp!=NULL)
                   {
                       if(temp->id==val)
                       {
                           node *p,*q;
                           if(temp->next==NULL)
                           {
                               p=temp->prev;
                               p->next=NULL;
                               flag=true;
                               delete temp;

                           }
                           else
                           {
                               p=temp->prev;
                               q=temp->next;
                               p->next=q;
                               q->prev=p;
                               flag=true;
                               delete temp;
                           }
                       }
                       temp=temp->next;

                   }
                   if(flag==false)
                   {
                       cout<<"\n\tValue is Not Found !"<<endl;

                   }
                  }

       }
   }

   void show()
   {
       if (head==NULL)
       {
               cout<<"\n\t\tLink is empty !:"<<endl;
               cout<<"\n\t\tAdd a new record\n\tPress J or K:"<<endl;
               cin>>ch;
               if (ch=='J'||ch=='j')
               {
                   add_first();
                   return;
               }
                 else
                 {
                     //exit)(1);

                 }
             }
                 else
                 {
                     node *temp=head;
                     while(temp!=NULL)
                     {
                         cout<<"***********************INFORMATION OF STUDENT**********************"<<endl;
                         cout<<"\n\t\tID :"<<temp->id<<endl;
                         cout<<"\n\t\tName:"<<temp->name<<endl;
                         cout<<"\n\t\tSection:"<<temp->sec<<endl;
                         cout<<"\n\t\tAddress:"<<temp->addrs<<endl;
                         cout<<"\n\t\tCity:"<<temp->city<<endl;
                         cout<<"\n\t\/tDepartment:"<<temp->dept<<endl;
                         cout<<"\n\t\tfee :"<<temp->fee<<endl;
                         cout<<"\n\t\tAddmission Date:"<<temp->date<<endl;
                         temp=temp->next;

                     }
                 }


   }
   void search()
   {
       if (head==NULL)
       {
            cout<<"\n\t\tLink is empty !:"<<endl;
               cout<<"\n\t\tAdd a new record\n\tPress J or K:"<<endl;
               cin>>ch;
               if (ch=='J'||ch=='j')
               {
                   add_first();
                   return;
               }
                 else
                 {
                    //exit)(1);

                 }
            }
                 else
                    {
            int val;
            cout<<"\n\tEnter the student ID which you want to search  a  record:"<<endl;
            cin>>val;

            node *temp=head;

            bool flag=false;

            if (temp->id==val)
                {
                    cout<<"***********************INFORMATION OF STUDENT**********************"<<endl;
                         cout<<"\n\t\tID :"<<temp->id<<endl;
                         cout<<"\n\t\tName:"<<temp->name<<endl;
                         cout<<"\n\t\tSection:"<<temp->sec<<endl;
                         cout<<"\n\t\tAddress:"<<temp->addrs<<endl;
                         cout<<"\n\t\tCity:"<<temp->city<<endl;
                         cout<<"\n\t\tDepartment:"<<temp->dept<<endl;
                         cout<<"\n\t\tFee :"<<temp->fee<<endl;
                         cout<<"\n\t\tAddmission Date:"<<temp->date<<endl;
                         temp=temp->next;
                         return;
						  }
                    }
					}

   void update()
   {
      if (head==NULL)
       {
            cout<<"\n\t\tLink is empty !:"<<endl;
               cout<<"\n\t\tAdd a new record\n\tPress J or K:"<<endl;
               cin>>ch;
               if (ch=='J'||ch=='j')
               {
                   add_first();
                   return;
               }
                 else
                 {
                     //exit)(1);


                 }

  }
               else

                 {
                   int val;
                   cout<<"\n\tEnter the ID after which you want to add a new record:"<<endl;
                   cin>>val;

                   node *temp=head;

                   while(temp!=NULL)
                        {
                           if (temp->id==val)
                            {


                                   cout<<"\n\tEnter the student ID:"<<endl;
                                   cin>>temp->id;

                                   cout<<"\n\t\tEnter the student Full name :"<<endl;
                                   cin.getline(temp->name,50);
                                   cin>>temp->name;

                                   cout<<"\n\t\t Enter the section :"<<endl;
                                   cin.getline(temp->sec,30);
                                   cin>>temp->sec;


                                   cout<<"\n\t\t Enter the Address of student :"<<endl;
                                   cin.getline(temp->addrs ,50);
                                   cin>>temp->addrs;

                                   cout<<"\n\t\t Enter the City:"<<endl;
                                   cin.getline(temp->city,30);
                                   cin>>temp->city;

                                   cout<<"\n\t\t Enter the student department :"<<endl;
                                   cin.getline(temp->dept,50);
                                   cin>>temp->dept;

                                  cout<<"\n\t\t\Enter the student fee:"<<endl;
                                  cin>>temp->fee;

                                  cout<<"\n\t\t\ Enter the addmission Date :"<<endl;
                                  cin.getline(temp->date,30);
                                  cin>>temp->date;
								    }
                            temp=temp->next;
                        }

                           cout<<"\n\tRecord has been Updated Successfully "<<endl;
                           cout<<"\n\t **********THANK YOU ********* "<<endl;
                 }
       }
};
int main()
{
    int n;
    char ch;
     student st;//class object liya h

    x2 ://this is label
     st.menu();
    cout<<"\n\tEnter your choice: ";
    cin>>n;
    if(n==1)
    {
        x1:
            cout<<"\n\tWhere you want to add record:- "<<endl;
            cout<<"\n\t 1- Very first record:"<<endl;
            cout<<"\n\t 2-Very last record: "<<endl;
            cout<<"\n\t 3-Your Location add record to after record: "<<endl;
            cout<<"\n\t 4-Add before record: "<<endl;
            cout<<"\n\t Enter choice :";
            cin>>n;
            if(n==1)
            {
                st.add_first();
                cout<<"\n\tDo you want to go main menu?"<<endl;
                 cout<<"\n\t press J:--";
                cin>>ch;

                if (ch=='J'||ch=='j')
               {
                   goto x2;

               }
                 else
                 {
                   //  exit)(1);
                   return 0;

                 }


            }
            else if(n==2)
            {
                st.add_last() ;
                cout<<"\n\tDo you want to go main menu?"<<endl;
                 cout<<"\n\t press Y:-";
                cin>>ch;

                if (ch=='J'||ch=='j')
               {
                   goto x2;


               }
                 else
                 {
                     //exit)(1);
                     return 0;

                 }


            }
          else if (n==3)
          {
              st.add_after();
              cout<<"\n\tDo you want to go main menu?"<<endl;
               cout<<"\n\t press J:--";
                cin>>ch;

                if (ch=='J'||ch=='j')
               {
                   goto x2;


               }
                 else
                 {
                   //  exit)(1);
                   return 0;

                 }

          }
          else if(n==4)
          {
              st.add_before();
              cout<<"\n\tDo you want to go main menu?"<<endl;
               cout<<"\n\t press J:--";
                cin>>ch;

                if (ch=='J'||ch=='j')
               {
                   goto x2;


               }
                 else
                 {
                     //exit)(1);

                    return 0;
                 }

          }
          else
          {
              cout<<"\n\tChoose correct answer:"<<endl;
              goto x1;

          }
    }
    else if(n==2)
    {
        st.search();

                cout<<"\n\tID is not Found! :"<<endl;


              cout<<"\n\tDo you want to go main menu?"<<endl;
               cout<<"\n\t press J:--";
                cin>>ch;

                if (ch=='J'||ch=='j')
               {
                   goto x2;


               }
                 else
                 {
                    // exit)(1);
                    return 0;

                 }
    }

    else if(n==3)
    {
        st.update();
              cout<<"\n\tDo you want to go main menu?"<<endl;
              cout<<"\n\t press J:--";
                cin>>ch;

                if (ch=='J'||ch=='j')
               {
                   goto x2;


               }
                 else
                 {
                   //  exit)(1);
                   return 0;

                 }
    }
    else if (n==4)
    {
        st.del();
              cout<<"\n\tDo you want to go main menu?"<<endl;
              cout<<"\n\t press J:--";
                cin>>ch;


                if (ch=='J'||ch=='j')
               {
                   goto x2;


               }
                 else
                 {
                    // exit)(1);
                    return 0;

                 }
    }
    else if (n==5)
    {
        st.show();
              cout<<"\n\tDo you want to go main menu?"<<endl;
              cout<<"\n\t press J:--";
                cin>>ch;

                if (ch=='J'||ch=='j')
               {
                   goto x2;
            }
                 else
                 {
                    // exit)(1);
                   return 0;
				     }
    }
    else if (n==6)
    {
        return 0;
   }
    else
    {
        cout<<"\n\t\t Choose correct answer:"<<endl;
        goto x2;

    }
 }
