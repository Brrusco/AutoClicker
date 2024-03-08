AutoClicker  
Tool per la ripetizione a lungo termine di semplici input dal mouse  
simulazione imput realizzata tramte la funzione SendInput presente nella libreria Windows.h  
snippet esempio simulazione :  
    INPUT fliNPUT = { 0 };  
		fliNPUT.type = INPUT_MOUSE;  
		fliNPUT.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;  
		SendInput(1, &fliNPUT, sizeof(fliNPUT));  
		ZeroMemory(&fliNPUT, sizeof(fliNPUT));  
		fliNPUT.type = INPUT_MOUSE;  
		fliNPUT.mi.dwFlags = MOUSEEVENTF_LEFTUP;  
		SendInput(1, &fliNPUT, sizeof(fliNPUT));  
