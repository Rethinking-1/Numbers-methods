#pragma once

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <sstream>
												// 1-� �������
struct angle {
	double grad = 0;
	double min = 0;
	double sec = 0;

	double rad;

	void toRad() { rad = (grad / 57.2958) + (min / (60.0 * 57.2958)) + (sec / (3600.0 * 57.2958)); }
	void toGrad() { grad = round(rad * 0.017453);  min = 0.000291 * rad; sec = 0.000005 * rad; }
};


double fac(int n);


double sinA(angle a, int numAftPnt);
double cosA(angle a, double numAftPnt);


double shA(double value, double numAftPnt);
double chA(double value, double numAftPnt);



double lnA(double x, double numAftPnt);

												// 2-� �������

double supa(double X);	  // ������� ������� ��� "�" �/��� "b"
double infa(double X);	  // ������ ������� ��� "a" �/��� "b"

double supA(double a, double b); // ������� ������� ������� �
double infA(double a, double b); // ������ ������� ������� �


double deltaA(double a, double b); // ����������� ���������� ������� �
double A(double a = 2.156, double b = 0.9270); // ���������� ������� � �� ������ ������


												// 3-� �������

double monom(double x = 0.0, int j = 0, int n = 5, double* arg = NULL);
double Lagrange(double x = 0.0, int n = 5, double* arg = {}, double* func = {});
                  
                                                // 4-� ������� 

double _derivative(double x, double h); // ������������ �������� �����������

double supX(double X, double h);  // ������� ������� ��� x+h
	
double infX(double X, double h);  // ������ ������� ��� x-h

double derivative(double x);   // ����������� exp(x)

double deltaX(double x, double h); // ���������� ������������

double M3(double x, double h); // ��������� �3

double searchH(double x, double h);  // ���������� ������������ ����