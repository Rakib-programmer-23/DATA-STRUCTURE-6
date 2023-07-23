#include<bits/stdc++.h>
using namespace std;
class student 
{
    public :

        string name;
        int roll;
        int marks;
        student(string name, int roll, int marks)
        {
            this->marks=marks;
            this->roll=roll;
            this->name=name;
        }
};

class cmp
{
    public:
        bool operator()(student a, student b)
        {
            if (a.marks != b.marks)
                return a.marks < b.marks; 
            else
                 return a.roll > b.roll;
        }
};

int main()
{
    int n;
    cin>>n;

    priority_queue<student,vector<student>,cmp>pq;

    while(n--)
    {
        string name;
        int roll;
        int marks;
        cin>>name>>roll>>marks;
        student obj(name,roll,marks);
        pq.push(obj);
    }

    int Q;
    cin>>Q;
    while(Q--)
    {
        int c;
        cin>>c;
        if(c==0)
        {
            string name;
            int roll;
            int marks;
            cin>>name>>roll>>marks;
            student obj(name,roll,marks);
            pq.push(obj);
            if(!pq.empty())
            {
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }

        if(c==1)
        {
            if(!pq.empty())
            {
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
        else if(c==2)
        {
            if(!pq.empty())
            {
                pq.pop();
            }
            if(!pq.empty())
            {
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
    }
      
    return 0;
}