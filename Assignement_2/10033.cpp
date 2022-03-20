#include <iostream>
#include <cstring>

using namespace std;
#define RAM_MAX_SIZE 1000
#define REGISTER_SIZE 10 

int main()
{

	int command, registers[REGISTER_SIZE], nbrTestCase = 0;
	int ram[RAM_MAX_SIZE];
	string line;
	getline(cin,line);
	nbrTestCase = stoi(line);
	getline(cin,line);
	for (int cas = 0, count = 0; cas < nbrTestCase; cas++, count = 0)
	{
		bool end = false;
		memset(registers, 0, REGISTER_SIZE * sizeof(*registers));
		memset(ram, 0, RAM_MAX_SIZE * sizeof(*ram));
		//Enegistrer les instructions
		for (int addr = 0; addr < RAM_MAX_SIZE; addr++){
			getline(cin,line);
			if(line.empty())
				break;
			ram[addr] = stoi(line);
		}
			;
		for (int addr = 0,end = false; !end && addr < RAM_MAX_SIZE; addr++, count++)
		{
			command = ram[addr];
			int dizaine = ((command % 100 - command % 10) / 10),
				centaine = (command % 10);
			// cout << command;
			switch ((command % 1000 / 100))
			{
			case 0:
				//cout << ">> 0ds" << endl;

				if (registers[centaine] != 0)
				{
					addr = registers[dizaine] - 1;
				}
				break;
			case 1:
				end = true;
				break;
			case 2:
				//cout << ">> 2dn";
				registers[dizaine] = centaine;
				break;
			case 3:
				//cout << ">> 3dn";
				registers[dizaine] = (registers[dizaine] + centaine) % 1000;
				break;
			case 4:
				//cout << ">> 4dn";
				registers[dizaine] = (registers[dizaine] * centaine) % 1000;
				break;
			case 5:
				//cout << ">> 5ds";
				registers[dizaine] = registers[centaine];
				break;
			case 6:
				//cout << ">> 6ds";
				registers[dizaine] = (registers[dizaine] + registers[centaine])%1000;
				break;
			case 7:
				//cout << ">> 7ds";
				registers[dizaine] = (registers[dizaine] * registers[centaine]) %1000;
				break;
			case 8:
				//cout << ">> 8da";
				registers[dizaine] = ram[registers[centaine]];
				break;
			case 9:
				//cout << ">> 9sa";
				ram[registers[centaine]] = registers[dizaine];
				break;
			}
			// cout << "\n";
		}
		cout << (cas ? "\n" : "") << count<<"\n";
	}
}
