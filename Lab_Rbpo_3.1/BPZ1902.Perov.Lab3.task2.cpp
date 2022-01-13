module BPZ1902.Perov.Lab3.Task2;


namespace RBPO {
	namespace Lab3 {
		namespace Task2 {
			double f1(double x) {
				return tan(3*x);
			}

			double f2(double x) {
				if (x > 3) return (cos(abs(2 + x)));
				else return (sqrt(x * x + 4));
			}

			double a(int i) {
				return (pow(-1.0, i) * ((i + 1) / (double)((i + 1) * (i + 1))));
			}

			double f3(int n) {
				double acc = 0.0;
				int i = 0;
				while (i <=n){
					acc += a(i);
					i++;
				}
				return acc;
			}

			double f4(double eps) {
				double prev = a(0);
				double curr = a(1);
				double acc = prev + curr;
				int i = 2;
				while (abs(prev - curr) > eps) {
					prev = curr;
					curr = a(i);
					i++;
					acc += curr;
				}
				return acc;
			}
		}
	}

}