#include <iostream>
#include <list>

using namespace std;

int main()
{
	int cmd_num = 0;

	enum commands { PUSH_FRONT = 1, POP_FRONT = 2, PUSH_BACK = 3, POP_BACK = 4 };
	cin >> cmd_num;

	list<int> buffer;
	bool result = true;
	int temp = -1;

	while (cmd_num > 0) {
		int cmd = 0; 	cin >> cmd;
		int value = 0; cin >> value;

		switch (cmd) 
		{
			case commands::PUSH_FRONT:
				buffer.push_front(value);
				break;
			case commands::POP_FRONT:
				temp = -1;
				if (!buffer.empty()) {
				temp = (*buffer.begin());
				buffer.pop_front();
				}
				if (value != temp) result = false;
			break;
			case commands::PUSH_BACK:
				buffer.push_back(value);
				break;
			case commands::POP_BACK:
				temp = -1;
				if (!buffer.empty()) {
					temp = (*(--buffer.end()));
					buffer.pop_back();
				}
				if (value != temp) result = false;
			break;
		default:
				cerr << "Unknown command: " << cmd << endl;
		}
		--cmd_num;
	}

	if (result) {
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	system("pause");
	return 0;
}