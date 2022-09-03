#include <vector>
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string str = "X W O T Z Y Q V U T Z Y X W O T Z Y Q V U T S X W V N Z Y X P U T Z R W V U M Y X W O T Z Y Q V U T S X W V N Z Y X P U T Z R W V U M Y X W O T Z Y Q V U T S X W V N Z Y X P U T Z";
	vector<char> table;
	char elem;
	int poz = 0, poz1 = 0;
	bool item = false;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] != ' ')
		{
			table.push_back(str[i]);
		}
	}
	cout << "¬вед≥ть елемент дл€ пошуку:	";
	cin >> elem;
	for (size_t i = 0; i < table.size(); i++)
	{
		if (table[i] == elem)
		{
			item = true;
			poz = poz1;
			poz1 = i;
		}
	}
	if (item = true) 
	{
		cout << poz1 - poz;
	}
	else {
		cout << "Symvol not found";
	}
}
