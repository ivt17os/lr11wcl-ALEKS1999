#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip> 
#include <windows.h>
#include <fstream>

using namespace std;

int main(int argc, char** argv ) {
	long long t1, t2, freq, n=0;
	string str;
	
	//if (argc == 1) 
    //{
    //    cerr << "Error: need text file\n";
    //    return 1;
    //}
	
	cout << "Opening file a.txt\n"; // << argv[1] << "\n";
	
	ifstream f("a.txt");
	
    
	QueryPerformanceFrequency((LARGE_INTEGER *)&freq);// ����������� ����� ����� � 1 ���


	QueryPerformanceCounter((LARGE_INTEGER *)&t1);// ������� ����� ����� ��������� �����
	
	while (!f.eof()){
		getline(f, str);
		n++;
	}
	
	QueryPerformanceCounter((LARGE_INTEGER *)&t2);// ������� ����� ����� ��������� �����

	cout << str << "\n Time spent:" << (t2-t1)/(1.*freq) << "\n";
	cout << "n =" << n;
	return 0;
}