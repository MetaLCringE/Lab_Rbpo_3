module BPZ1902.Perov.Lab3.Task4:f3;

namespace RBPO {
	namespace Lab3 {
		namespace Task4 {
			double f3(int n) {
				double acc = 0.0;
				int i = 0;
				do {
					acc += a(i);
					i++;
				} while (i <= n);
				return acc;
			};
		}
	}
}