#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
#include"c.h"
using namespace std;
int my_x,my_y,my_in,mianbao;
int bao;
double qian_tong,qian_jinb;
struct shuxin{
	int clever;
};
shuxin my;
int mp[100][100];
void out(){
	blue;
	for(int i=1;i<=6;i++){
		for(int j=1;j<=6;j++){
			if(j==my_x&&i==my_y)cout<<"我";
			else  if(mp[i][j]==1)cout<<"店";
			else  if(mp[i][j]==2)cout<<"工";
			else cout<<"  ";
			
		}
		cout<<"\n";
	}
	green;
	cout<<"饱食度:"<<bao<<"智商"<<my.clever<<"\n";
	cout<<"铜币:"<<qian_tong<<" 今币:"<<qian_jinb;
	bai;
}
void bag(){
	red;
	cout<<"面包"<<mianbao<<"个(按1使用)";
	string in;
	cin>>in;
	if(in=="1"){
		if(mianbao<1){
			cout<<"面包不足！";
			system("pause");
		}
		else{
			bao+=50;
		}
	}
	
}
void shop(){
	system("cls");
	red;
	cout<<"商店\n";
	yello;
	cout<<"面包\n    "<<"价格（3.75铜币 or 0.258 金币)\n    ";
	cout<<"功能：饱食度+50 \n    (按1购买)";
	string in;
	cin>>in;
	green;
	if(in=="1"){
		cout<<"支付方式 1.铜币支付 2.mc币支付3.退出支付";
		
		string in2;
		cin>>in2;
		if(in2=="1"){
			if(qian_tong<3.75){
				cout<<"铜币不足";
				system("pause");
			}
			else {
				cout<<"购买成功";
				qian_tong-=3.75,mianbao++;
				system("pause");
			}
		}
		else if(in2=="2"){
			if(qian_jinb<0.258){
				cout<<"mc币不足";
				system("pause");
			}
			else {
				qian_jinb-=0.258,mianbao++;
				cout<<"购买成功";
				system("pause");
			}
		}
	}
	bai;
	cout<<"\n";
	system("pause");
}
void gong(){
	int d;
	for(int i=1;i<=10;i++){
		
		int a=rand()%100;
		int b=rand()%100;
		int c=rand()%2;
		blue;
		cout<<"第"<<i<<"题:"<<max(a,b)<<(c==1?'+':'-')<<min(a,b)<<"=";
		bai;
		int in=intin();
		cout<<"\n";
		if(c==0&&a-b==in)d++;
		if(c==1&&a+b==in)d++;
		
	}
	qian_tong+= d/2;
}
void in(){//输出
	
	char tempin;
	tempin=0;
	tempin=getch();
	if(tempin=='w'){
		if(my_y>1){
			my_y--;
			bao--;
		}
		
	}
	else if(tempin=='d'){
		if(my_x<6){
			my_x++;
			bao--;
		}
		
	}
	else if(tempin=='a'){
		if(my_x>1){
			my_x--;
			bao--;
			
		}
	}
	else if(tempin=='s'){
		if(my_y<6){
			my_y++;
			bao--;
		}
	}
	else if(tempin=='f'){
		if(mp[my_y][my_x]==1){
			shop();
		}
		if(mp[my_y][my_x]==2){
			gong();
		}
	}
	else if(tempin=='b'){
		system("cls");
		bag();
		
	}
	
}

void chshihua(){
	mp[2][1]=1;
	mp[3][4]=2;
	my_x=1;
	my_y=1;
	bao=100;
	qian_tong=5;
	qian_jinb=1;
}
int main(){
	srand(time(0));
	chshihua();
	system("title 打怪生存2 a0.1.1");
	while(1){
		out();
		in();
		
		system("cls");
		
	}
	
	
}



