#include <conio.h>
#include <iostream>
using namespace std;
class Point{
	// Default private access
	int x;
	int y;
	public:
		// Default Constructor 
		// has no input parameters
		Point(){
			x = 5;
			y = 5;
			//cout<<"Default Constructor is called"<<endl;
		}
		// Constructor
		// has input parameter(s)
		Point(int tx, int ty){
			x = tx;
			y = ty;
			//cout<<"Constructor 1 is called"<<endl;
		}
				// has input parameter(s)
		Point(int tx){
			x = tx;
			y = 0;
			//cout<<"Constructor 2 is called"<<endl;
		}
		void setX(int xa){
			x = xa;
		}
		void setY(int ya){
			y = ya;
		}
		void move(int xa,int ya){
			x = xa;
			y = ya;
		}
		void up(){
			if(y>1)
				y--;
		}
		void down(){
				y++;
		}		
		void left(){
			if(x>1)
				x--;
		} 			
		void right(){
			x++;
		}	
		void show(){
			cout<<"X:"<<x<<endl;
			cout<<"Y:"<<y<<endl;
		}
		void draw(){
			system("cls");
			for(int j=1;j<y;j++){
				cout<<" "<<endl;	
			}			
			for(int i=1;i<x;i++){
				cout<<" ";
			}	
			cout<<"*";
		}
};
int main(){
	Point A;  // Constructor will be called
    int ch;
    
	A.draw();
	while(1){
        ch = getch();
        if (ch == 224) {
            ch = getch();
            switch (ch) {
        	    case 72: A.up();    break;
            	case 80: A.down();  break;
            	case 77: A.right(); break;
            	case 75: A.left();  break;
            }
        }
		A.draw();
	}
	return 0;
}

