#include "Instruction.h"

Instruction::Instruction(string addName, string addType, int addOpcode){
	setName(addName);
	setType(addType);
	setOpcode(addOpcode);
}

void Instruction::setName(string addName){
	name = addName;
}
void Instruction::setType(string addType){
	type = addType;
}
void Instruction::setOpcode(int addOpcode){
	opcode = addOpcode;
}
string Instruction::getName(){
	return name;
}
string Instruction::getType(){
	return type;
}
int Instruction::getOpcode(){
	return opcode;
}