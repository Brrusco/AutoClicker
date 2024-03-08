#include <iostream>
#include <Windows.h>
#include <conio.h> 
using namespace std;
bool l, r, x, m5;
/////////////////////////////////////////////////////////////////////////
int personalized(){

	return 0;
}
/////////////////////////////////////////////////////////////////////////
int fastleft() {
	m5 = false;
	while (1) {
		l = GetAsyncKeyState(VK_LBUTTON);
		x = GetAsyncKeyState(VK_XBUTTON1);
		if (GetAsyncKeyState(VK_NUMPAD0)) {//exit
			return 0;
		}
		while ((!l || !x) && !m5) {
			if (GetAsyncKeyState(VK_NUMPAD0)) {//exit
				return 0;
			}
			l = GetAsyncKeyState(VK_LBUTTON);
			x = GetAsyncKeyState(VK_XBUTTON1);
			if (GetAsyncKeyState(VK_NUMPAD5)) {
				m5 = true;
				cout << "modalita' automatica attivata" << endl;
			}
			Sleep(10);
		}
		Sleep(10);
		INPUT fliNPUT = { 0 };
		fliNPUT.type = INPUT_MOUSE;
		fliNPUT.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
		SendInput(1, &fliNPUT, sizeof(fliNPUT));
		ZeroMemory(&fliNPUT, sizeof(fliNPUT));
		fliNPUT.type = INPUT_MOUSE;
		fliNPUT.mi.dwFlags = MOUSEEVENTF_LEFTUP;
		SendInput(1, &fliNPUT, sizeof(fliNPUT));
	}
}
int fastright() {
	m5 = false;
	while (1) {
		r = GetAsyncKeyState(VK_RBUTTON);
		x = GetAsyncKeyState(VK_XBUTTON1);
		if (GetAsyncKeyState(VK_NUMPAD0)) {//exit
			return 0;
		}
		while ((!r || !x) && !m5) {
			if (GetAsyncKeyState(VK_NUMPAD0)) {//exit
				return 0;
			}
			r = GetAsyncKeyState(VK_RBUTTON);
			x = GetAsyncKeyState(VK_XBUTTON1);
			if (GetAsyncKeyState(VK_NUMPAD5)) {
				m5 = true;
				cout << "modalita' automatica attivata" << endl;
			}
			Sleep(10);
		}
		Sleep(10);
		INPUT friNPUT = { 0 };
		friNPUT.type = INPUT_MOUSE;
		friNPUT.mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;
		SendInput(1, &friNPUT, sizeof(friNPUT));
		ZeroMemory(&friNPUT, sizeof(friNPUT));
		friNPUT.type = INPUT_MOUSE;
		friNPUT.mi.dwFlags = MOUSEEVENTF_RIGHTUP;
		SendInput(1, &friNPUT, sizeof(friNPUT));
	}
}
int left1000() {
	m5 = false;
	while (1) {
		l = GetAsyncKeyState(VK_LBUTTON);
		x = GetAsyncKeyState(VK_XBUTTON1);
		if (GetAsyncKeyState(VK_NUMPAD0)) {//exit
			return 0;
		}
		while ((!l || !x) && !m5) {
			if (GetAsyncKeyState(VK_NUMPAD0)) {//exit
				return 0;
			}
			l = GetAsyncKeyState(VK_LBUTTON);
			x = GetAsyncKeyState(VK_XBUTTON1);
			if (GetAsyncKeyState(VK_NUMPAD5)) {
				m5 = true;
				cout << "modalita' automatica attivata" << endl;
			}
			Sleep(100);
		}
		INPUT l1iNPUT = { 0 };
		l1iNPUT.type = INPUT_MOUSE;
		l1iNPUT.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
		SendInput(1, &l1iNPUT, sizeof(l1iNPUT));
		ZeroMemory(&l1iNPUT, sizeof(l1iNPUT));
		l1iNPUT.type = INPUT_MOUSE;
		l1iNPUT.mi.dwFlags = MOUSEEVENTF_LEFTUP;
		SendInput(1, &l1iNPUT, sizeof(l1iNPUT));
		Sleep(1000);
	}
}
int right1000() {
	m5 = false;
	while (1) {
		r = GetAsyncKeyState(VK_RBUTTON);
		x = GetAsyncKeyState(VK_XBUTTON1);
		if (GetAsyncKeyState(VK_NUMPAD0)) {//exit
			return 0;
		}
		while ((!r || !x) && !m5) {
			if (GetAsyncKeyState(VK_NUMPAD0)) {//exit
				return 0;
			}
			r = GetAsyncKeyState(VK_RBUTTON);
			x = GetAsyncKeyState(VK_XBUTTON1);
			if (GetAsyncKeyState(VK_NUMPAD5)) {
				m5 = true;
				cout << "modalita' automatica attivata" << endl;
			}
			Sleep(100);
		}
		INPUT r1iNPUT = { 0 };
		r1iNPUT.type = INPUT_MOUSE;
		r1iNPUT.mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;
		SendInput(1, &r1iNPUT, sizeof(r1iNPUT));
		ZeroMemory(&r1iNPUT, sizeof(r1iNPUT));
		r1iNPUT.type = INPUT_MOUSE;
		r1iNPUT.mi.dwFlags = MOUSEEVENTF_RIGHTUP;
		SendInput(1, &r1iNPUT, sizeof(r1iNPUT));
		Sleep(1000);
	}
}
int leftpress() {
	while (1) {
		x = GetAsyncKeyState(VK_XBUTTON1);
		while (!x) {
			x = GetAsyncKeyState(VK_XBUTTON1);
			Sleep(500);
			if (GetAsyncKeyState(VK_NUMPAD0)) {
				return 0;
			}
		}
		INPUT lpiNPUT = { 0 };
		lpiNPUT.type = INPUT_MOUSE;
		lpiNPUT.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
		SendInput(1, &lpiNPUT, sizeof(lpiNPUT));
		while (!x) {
			x = GetAsyncKeyState(VK_XBUTTON1);
			Sleep(500);
			if (GetAsyncKeyState(VK_NUMPAD0)) {
				return 0;
			}
		}
		ZeroMemory(&lpiNPUT, sizeof(lpiNPUT));
		lpiNPUT.type = INPUT_MOUSE;
		lpiNPUT.mi.dwFlags = MOUSEEVENTF_LEFTUP;
		SendInput(1, &lpiNPUT, sizeof(lpiNPUT));
		if (GetAsyncKeyState(VK_NUMPAD0)) {
			return 0;
		}
		Sleep(500);
	}
}
int leftrightpress() {
	INPUT RpiNPUT = { 0 };
	RpiNPUT.type = INPUT_MOUSE;
	RpiNPUT.mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;
	SendInput(1, &RpiNPUT, sizeof(RpiNPUT));
	INPUT LpiNPUT = { 0 };
	LpiNPUT.type = INPUT_MOUSE;
	LpiNPUT.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
	SendInput(1, &LpiNPUT, sizeof(LpiNPUT));
	while (!GetAsyncKeyState(VK_NUMPAD0)) {
		Sleep(500);
	}
	ZeroMemory(&RpiNPUT, sizeof(RpiNPUT));
	RpiNPUT.type = INPUT_MOUSE;
	RpiNPUT.mi.dwFlags = MOUSEEVENTF_RIGHTUP;
	SendInput(1, &RpiNPUT, sizeof(RpiNPUT));
	ZeroMemory(&LpiNPUT, sizeof(LpiNPUT));
	LpiNPUT.type = INPUT_MOUSE;
	LpiNPUT.mi.dwFlags = MOUSEEVENTF_LEFTUP;
	SendInput(1, &LpiNPUT, sizeof(LpiNPUT));
	return 0;
}
int rightpress() {
	INPUT rpiNPUT = { 0 };
	rpiNPUT.type = INPUT_MOUSE;
	rpiNPUT.mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;
	SendInput(1, &rpiNPUT, sizeof(rpiNPUT));
	while (!GetAsyncKeyState(VK_NUMPAD0)) {
		Sleep(500);
	}
	ZeroMemory(&rpiNPUT, sizeof(rpiNPUT));
	rpiNPUT.type = INPUT_MOUSE;
	rpiNPUT.mi.dwFlags = MOUSEEVENTF_RIGHTUP;
	SendInput(1, &rpiNPUT, sizeof(rpiNPUT));
	return 0;
}
int main() {
	string NomeAutore = "Bruno Cecchet", NomeProgetto = "AuotClicker", Versione = "1.2.1.1";
	system("color 90");
	cout << NomeProgetto << " da " << NomeAutore << " Versione " << Versione << endl;
	cout << "7 modalita, premi la cifra sul tastierino numerico per scegliere una modalita'" << endl;
	cout << "premi 0 sul tastierino numerico per interrompere l'autoclicker" << endl;
	cout << "premi 2 sultastierino numerico per interromper il programma" << endl;
	cout << "nelle modalita' 1, 3, 4, 6 e' necessario premere sia il tasto corrispondente che il tasto ctrl(sinistro) per farle funzionare" << endl;
	cout << "nelle modalita' 1, 3, 4, 6 puoi premere 5 sul tastierino numerico per attivare la modalita' automatica(non serve tenere premuto per far funzionare l'autoclicker)" << endl;
	cout << "se non vengono rilevati i tasti premuti sul tastierino prova a cliccare i tasto bloc num sul tasierino" << endl;
	cout << "scegli modalita:" << endl;
	cout << "1 = sinistro mouse 100 volte al secondo" << endl;
	cout << "3 = destro mouse 100 volte al secondo" << endl;
	cout << "4 = sinistro mouse 1 volta al secondo" << endl;
	cout << "6 = destro mouse 1 volta al secondo" << endl;
	cout << "7 = tiene premuto sinistro mouse" << endl;
	cout << "8 = tiene premuto destro e sinistro mouse contemporaneamente" << endl;
	cout << "9 = tiene premuto destro mouse" << endl;
	while (true) {
		Sleep(200);
		if (GetAsyncKeyState(VK_NUMPAD2)) {//exit
			return 0;
			cout << "terminazione programma" << endl;
		}
		if (GetAsyncKeyState(VK_NUMPAD1)) {//se non prende i tasti del tastierino numerico premi il tasto bloc num
			cout << "modalita 1 attivata" << endl;
			fastleft();
			cout << "modalita 1 terminata" << endl;
		}
		if (GetAsyncKeyState(VK_NUMPAD3)) {
			cout << "modalita 3 attivata" << endl;
			fastright();
			cout << "modalita 3 terminata" << endl;
		}
		if (GetAsyncKeyState(VK_NUMPAD4)) {
			cout << "modalita 4 attivata" << endl;
			left1000();
			cout << "modalita 4 terminata" << endl;
		}
		if (GetAsyncKeyState(VK_NUMPAD6)) {
			cout << "modalita 6 attivata" << endl;
			right1000();
			cout << "modalita 6 terminata" << endl;
		}
		if (GetAsyncKeyState(VK_NUMPAD7)) {
			cout << "modalita 7 attivata" << endl;
			leftpress();
			cout << "modalita 7 terminata" << endl;
		}
		if (GetAsyncKeyState(VK_NUMPAD8)) {
			cout << "modalita 8 attivata" << endl;
			leftrightpress();
			cout << "modalita 8 terminata" << endl;
		}
		if (GetAsyncKeyState(VK_NUMPAD9)) {
			cout << "modalita 9 attivata" << endl;
			rightpress();
			cout << "modalita 9 terminata" << endl;
		}
	}
}