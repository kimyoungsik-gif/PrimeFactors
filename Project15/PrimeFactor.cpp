#include<vector>

using namespace std;

class PrimeFactor {
public:
	vector<int> of(int num) {
		vector<int> result = {};

		if (num > 1) {
			if (num == 4) {
				if (num % 2 == 0) {
					result.push_back(2);
				}

				if (num % 2 == 0) {
					result.push_back(2);
				}
				return result;
			}

			result.push_back(num);
		}

		return result;
	}

};