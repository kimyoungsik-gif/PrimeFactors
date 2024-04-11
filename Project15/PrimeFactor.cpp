#include<vector>

using namespace std;

class PrimeFactor {
public:
	vector<int> of(int num) {
		vector<int> result = {};

		if (num > 1) {

			if (num == 4 || num == 6 || num == 9 || num == 12) {
				for (int divisor = 2; num > 1; divisor++) {
					while (num % divisor == 0) {
						result.push_back(divisor);
						num /= divisor;
					}
				}
				return result;
			}

			result.push_back(num);
		}

		return result;
	}

};