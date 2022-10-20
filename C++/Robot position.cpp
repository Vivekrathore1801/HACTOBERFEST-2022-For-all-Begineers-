#include <bits/stdc++.h> 
using namespace std; 

//Funcion to find final position  
void findPos(string dir) 
{ 
    int up = 0, down = 0; 
    int left = 0, right = 0; 
  
    for (int i = 0; dir[i] != '\0' ; i++) { 
  
        //Counts each direction
        if (dir[i] == 'U' || dir[i] == 'u') 
            up++; 
        else if (dir[i] == 'D' || dir[i] == 'd') 
            down++; 
        else if (dir[i] == 'L' || dir[i] == 'l') 
            left++; 
        else if (dir[i] == 'R' || dir[i] == 'r') 
            right++; 
        
        //In case of illegal character in the string 
        else
        {
            cout<<"Position Unable to Find, Enter Correct Direction.";
            exit(0);
        }
    } 
  
    //Final position of robot 
    cout << "Final Position of the Robot: ("
         << (right - left)<< ", " << (up - down)<< ")"; 
} 
  
int main() 
{ 
    string dir;
    
    //Input the direction string
    cout<<"Enter the Direction String:  ";
    cin>>dir;
    
    //Function call to calculate position 
    findPos(dir); 
    
    return 0; 
}
