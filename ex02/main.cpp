# include <algorithm>
# include <iostream>
# include <limits.h>
# include <vector>

int main(void)
{
	std::vector<int>					vector;

	vector.push_back(1);
	vector.push_back(12);
	vector.push_back(1998);
	vector.push_back(3);
	std::cout << vector.size() << std::endl;

	return (0);
}