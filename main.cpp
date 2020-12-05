//
//  main.cpp
//  AutoGenerateSetAndGet
//
//  Created by Mustafa Soby on 12/4/20.
//

#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main() {
	ifstream inFile;
	inFile.open("temp.txt");
	
	string type;
	string varName;
	const string parameter="in";
	string total="";
	if(!inFile.is_open()){
		cout<<"Bad";
		return 9;
	}
	while(!inFile.eof()){
		inFile>>type;
		if(type=="\n"){
			break;
		}
		inFile>>varName;
		if(varName=="\n"){
			break;
		}
		char firstChar=toupper(varName.substr(0,1).c_str()[0]);
		string newVarName=firstChar+varName.substr(1,varName.size()-2);
		
		
		total+="void set"+newVarName+"("+type+" in){\n"+varName.substr(0,varName.size()-1)+"="+"in;"+"\n}\n\n";
		total+=type+" get"+newVarName+"(){\nreturn "+varName+"\n}\n";
		
	}
	inFile.close();
	
	ofstream out;
	out.open("temp.txt");
	
	out<<endl;
	out<<total;
	out<<endl;
	out.close();
}
