#include<iostream>
#include<iomanip>
using namespace std;
struct Box
{
	int height;
	int width;
	int length;
	
}box1,box2;

int volume(Box box);

int main()
{
	
	
	
	int totalvolume;
	
	cout<<"enter the box1 height:";
	cin>>box1.height;
	
	cout<<"enter the box1 width:";
	cin>>box1.width;
	
	cout<<"enter the box1 length:";
	cin>>box1.length;
	
	cout<<"enter the box2 height:";
	cin>>box2.height;
	
	cout<<"enter the box2 width:";
	cin>>box2.width;
	
	cout<<"enter the box2 length:";
	cin>>box2.length;
	
	totalvolume=volume(box1)+volume(box2);
	
	cout<<"totalvolume is:"<<totalvolume<<endl;
	
	return 0;
	
	
	
	
}

int volume(Box box){
	return box.height*box.width*box.length;
}
