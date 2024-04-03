#include <windows.h>
#include<bits/stdc++.h>
using namespace std;
void SetColorAndBackground(int ForgC, int BackC) {
	WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
}
#define red SetColorAndBackground(4,0)
#define yello SetColorAndBackground(14,0)
#define Orange  SetColorAndBackground(6,0)
#define green  SetColorAndBackground(10,0)
#define bai  SetColorAndBackground(7,0)
#define blue  SetColorAndBackground(3,0)
#define blue_s  SetColorAndBackground(11,0)
#define blue_b  SetColorAndBackground(1,0)
int intin(){
	string a;
	cin>>a;
	return stoi(a);
}

