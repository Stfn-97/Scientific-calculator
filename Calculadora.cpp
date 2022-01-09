// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float firts;
	int opc;
	float result;
	float second;
	cout << "Calculator" << endl;
	cout << "Welcome to the or Calculator" << endl;
	cout << "Enter firts value" << endl;
	cin >> firts;
	cout << "Enter second value" << endl;
	cin >> second;
	cout << "" << endl;
	cout << "1.- Add" << endl;
	cout << "2.- Subtract" << endl;
	cout << "3.- Divide" << endl;
	cout << "4.- Multiply" << endl;
	cout << "Choose an option" << endl;
	cin >> opc;
	switch ((opc)) {
	case 1:
		result = firts+second;
		break;
	case 2:
		result = firts-second;
		break;
	case 3:
		result = firts/second;
		break;
	case 4:
		result = firts*second;
		break;
	}
	// Image//
	cout << "_#" << endl;
	cout << "_##" << endl;
	cout << "_###" << endl;
	cout << "__####" << endl;
	cout << "___#####" << endl;
	cout << "___#######" << endl;
	cout << "____#######" << endl;
	cout << "____########" << endl;
	cout << "____########" << endl;
	cout << "____#########" << endl;
	cout << "____##########" << endl;
	cout << "___############" << endl;
	cout << "_##############" << endl;
	cout << "################" << endl;
	cout << "_################" << endl;
	cout << "___##############" << endl;
	cout << "____##############_____________________________________________###" << endl;
	cout << "____##############__________________________________________####" << endl;
	cout << "_____##############_____________________________________######" << endl;
	cout << "_____##############________________________________##########" << endl;
	cout << "_____###############_____________________________############" << endl;
	cout << "_____################__________________________#############" << endl;
	cout << "____#################______#_________________###############" << endl;
	cout << "____##################_____##____#__________################" << endl;
	cout << "___####################___###___##_________################" << endl;
	cout << "________################__########_________################" << endl;
	cout << "_________################__#######________##################" << endl;
	cout << "___________#######################______####################" << endl;
	cout << "____________#####################______##################" << endl;
	cout << "______________##########################################" << endl;
	cout << "_______________#########################################" << endl;
	cout << "_______________########################################" << endl;
	cout << "________________######################################" << endl;
	cout << "________________######################################" << endl;
	cout << "_________________####################################" << endl;
	cout << "_________________####################################" << endl;
	cout << "__________________#########################______####" << endl;
	cout << "__________________###__##################___________#" << endl;
	cout << "__________________##____###############" << endl;
	cout << "__________________#_____##__##########" << endl;
	cout << "____________________________##____###" << endl;
	cout << "__________________________________##" << endl;
	cout << "__________________________________#" << endl;
	cout << "The result is: " << result << endl;
	return 0;
}

