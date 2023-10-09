
#include<iostream> 
 #include<cstring> 
 #include<cstdlib> 
 #include<time.h> 
 using namespace std; 
 void checkcondition(int n,int c) 
 { 
         if(n==c) 
         { 
                 cout<<"Hurray!!! You have guessed correct number "<<endl; 
         } 
         else 
         { 
                 cout<<"Alas!!! Try again...."<<endl; 
                 if(n<c) 
                 { 
                         cout<<"The number which you have entered is low"<<endl; 
                 } 
                 else 
                 { 
                         cout<<"The number which you have entered is high"<<endl; 
                 } 
         } 
 } 
 int main() 
 { 
        
         srand(time(0)); 
         int c=(rand()%50)+1; 
         string name; 
         cout<<"***************WELCOME TO NUMBER GUESSING GAME***************"<<endl; 
         cout<<"Hii Player......"<<endl; 
         cout<<"Enter your name to play the game..."<<" "; 
         cin>>name; 
         while(1) 
         { 
        int n; 
        cout<<"Enter any number between 1 to 50 "<<" "; 
        cin>>n; 
        checkcondition(n,c);
}
}
