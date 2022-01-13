module BPZ1902.Perov.Lab3.Task1;


namespace RBPO {
	namespace Lab3{
		namespace Task1 {
			double f1(double x) {
				return tan(3*x);
			}

			double f2(double x) {
				return (x > 4) ? (cos(abs(2+x))) : (sqrt(x*x+4));
			}

			double a(int i) {
				return (pow(-1.0, i) * ((i + 1) / (double)((i + 1) * (i + 1))));
			}

			double f3(int n) {
				double acc = 0.0;
				for (int i = 0; i <= n; i++) {
					acc += a(i);
				}
				return acc;
			}

			double f4(double eps) {
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
		}
	}
}