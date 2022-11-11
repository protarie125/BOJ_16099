#include <iostream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	while (0 < (t--)) {
		ll lt, wt, le, we;
		cin >> lt >> wt >> le >> we;

		const auto& at = lt * wt;
		const auto& ae = le * we;

		if (ae < at) {
			cout << "TelecomParisTech\n";
		}
		else if (at < ae) {
			cout << "Eurecom\n";
		}
		else {
			cout << "Tie\n";
		}
	}

	return 0;
}