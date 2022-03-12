#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int b, w;
	cin >> b >> w;

	if (0 == b + w) {
		cout << "Impossible";
		return 0;
	}

	if (b <= 1 || w <= 1) {
		cout << 1;
		return 0;
	}

	const auto& min = b < w ? b : w;
	auto ans = int{ 0 };
	while (ans * ans <= min * 2) {
		ans += 2;
	}

	ans -= 2;
	if (ans * ans == min * 2) {
		cout << ans;
		return 0;
	}

	ans += 1;
	if ((ans * ans) / 2 <= min &&
		(ans * ans) / 2 + 1 <= b + w - min) {
		cout << ans;
		return 0;
	}

	ans -= 1;
	cout << ans;

	return 0;
}