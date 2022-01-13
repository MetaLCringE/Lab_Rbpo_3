export module BPZ1902.Perov.Lab3.Task5;

import <cmath>;

export namespace RBPO {
	namespace Lab3 { 
		namespace Task5 {
		double f1(double x);
		double f2(double x);
		double a(int i);
		double f3(int n);
		double f4(double eps);
	}
	}
	
}

module :private;

double RBPO::Lab3::Task5::f1(double x) {
	return tan(3*x);
}

double RBPO::Lab3::Task5::f2(double x) {
	if (x > 3) return (cos(abs(2 + x)));
	else return (sqrt(x * x + 4));
}

double RBPO::Lab3::Task5::a(int i) {
	return (pow(-1.0, i) * ((i + 1) / (double)((i + 1) * (i + 1))));
}

double RBPO::Lab3::Task5::f3(int n) {
	double acc = 0.0;
	for (int i = 0; i <= n; i++) {
		acc += a(i);
	}
	return acc;
}

double RBPO::Lab3::Task5::f4(double eps) {
	double prev = a(0);
	double curr = a(1);
	double acc = prev + curr;
	for (int i = 2; abs(prev - curr) > eps; i++) {
		prev = curr;
		curr = a(i);
		acc += curr;
	}
	return acc;
}