#include <iostream>
#include "Instruction.h"
using namespace std;

int main(){
	map<string,Instruction> isa;
	Instruction instruction;
	isa["add"] = 
	new Instruction("add");
	/*
	//Initialize instructions
	string instruction[64];
	instruction[0b100000] = "add";
	instruction[0b100001] = "addu";
	instruction[0b001000] = "addi";
	instruction[0b001001] = "addiu";
	instruction[0b100100] = "and";
	instruction[0b001100] = "andi";
	instruction[0b011010] = "div";
	instruction[0b011011] = "divu";
	instruction[0b011000] = "mult";
	instruction[0b011001] = "multu";
	instruction[0b100111] = "nor";
	instruction[0b100101] = "or";
	instruction[0b001101] = "ori";
	instruction[0b000000] = "sll";
	instruction[0b000100] = "sllv";
	instruction[0b000011] = "sra";
	instruction[0b000111] = "srav";
	instruction[0b000010] = "srl";
	instruction[0b000110] = "srlv";
	instruction[0b100010] = "sub";
	instruction[0b100011] = "subu";
	instruction[0b100110] = "xor";
	instruction[0b001110] = "xori";
	instruction[0b011001] = "lhi";
	instruction[0b011000] = "llo";
	instruction[0b101010] = "slt";
	instruction[0b101001] = "sltu";
	instruction[0b001010] = "slti";
	instruction[0b001001] = "stliu";
	instruction[0b000100] = "beq";
	instruction[0b000111] = "bgtz";
	instruction[0b000110] = "blez";
	instruction[0b000101] = "bne";
	instruction[0b000010] = "j";
	instruction[0b000011] = "jal";
	instruction[0b001001] = "jalr";
	instruction[0b001000] = "jr";
	instruction[0b100000] = "lb";
	instruction[0b100100] = "lbu";
	instruction[0b100001] = "lh";
	instruction[0b100101] = "lhu";
	instruction[0b100011] = "lw";
	instruction[0b101000] = "sb";
	instruction[0b101001] = "sh";
	instruction[0b101011] = "sw";
	instruction[0b010000] = "mfhi";
	instruction[0b010010] = "mflo";
	instruction[0b010001] = "mthi";
	instruction[0b010011] = "mtlo";
	instruction[0b011010] = "trap";

	for(int i = 0; i < 64; i++){
		cout << i << " " << instruction[i] << endl;
	}
	*/
	/*
	int cinNum;
	cout << "Enter Opcode: " << endl;
	cin >> hex >> cinNum;
	cout << cinNum << " " << hex << cinNum << endl;
	*/
	return 0;
}