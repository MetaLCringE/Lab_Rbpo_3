module BPZ1902.Perov.Lab3.Task3;

namespace RBPO {
	namespace Lab3 {
		namespace Task3 {
			double f4(const double eps) {
				double prev = a(0);
				double curr = a(1);
				double acc = prev + curr;
				int i = 2;
				do {
					prev = curr;
					curr = a(i);
					i++;
					acc += curr;
				} while (abs(prev - curr) > eps);
				return acc;
			}
		}
	}
}