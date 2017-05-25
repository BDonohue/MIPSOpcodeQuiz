#include <string>
using namespace std;

class Instruction{
	public:
		explicit Instruction(string addName, string addType, int addOpcode);
		void setName(string addName);
		void setType(string addType);
		void setOpcode(int addOpcode);
		string getName();
		string getType();
		int getOpcode();
	private:
		string name;
		string type;
		int opcode;
};