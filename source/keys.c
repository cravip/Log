#include "keycode.h" 

char* getcha (int a)
{
	char *ret;
	switch (a)
	{
		case 1:
			ret = "esc" ;
			break;
		case 2:
			ret = "1" ;
			break;
		case 3:
			ret = "2" ;
			break;

		case 4:
			ret = "3" ;
			break;
		case 5:
			ret = "4" ;
			break;
		case 6:
			ret = "5" ;
			break;
		case 7:
			ret = "6" ;
			break;
		case 8:
			ret = "7" ;
			break;
		case 9:
			ret = "8" ;
			break;
		case 10:
			ret = "9" ;
			break;
		case 11:
			ret = "0" ;
			break;
		case 12:
			ret = "-" ;
			break;
		case 13:
			ret = "=" ;
			break;
		case 14:
			ret = "BCKSPC" ;
			break;
		case 15:
			ret = "tab" ;
			break;
		case 16:
			ret = "q" ;
			break;
		case 17:
			ret = "w" ;
			break;
		case 18:
			ret = "e" ;
			break;
		case 19:
			ret = "r" ;
			break;
		case 20:
			ret = "t" ;
			break;
		case 21:
			ret = "y" ;
			break;
		case 22:
			ret = "u" ;
			break;
		case 23:
			ret = "i" ;
			break;
		case 24:
			ret = "o" ;
			break;
		case 25:
			ret = "p" ;
			break;
		case 26:
			ret = "{" ;
			break;
		case 27:
			ret = "}" ;
			break;
		case 28:
			ret = "ent" ;
			break;
		case 29:
			ret = "Lcnt" ;
			break;
		case 30:
			ret = "a" ;
			break;
		case 31:
			ret = "s" ;
			break;
		case 32:
			ret = "d" ;
			break;
		case 33:
			ret = "f" ;
			break;
		case 34:
			ret = "g" ;
			break;
		case 35:
			ret = "h" ;
			break;
		case 36:
			ret = "j" ;
			break;
		case 37:
			ret = "k" ;
			break;
		case 38:
			ret = "l" ;
			break;

		case 39:
			ret = ";" ;
			break;
		case 40:
			ret = "'" ;
			break;

		case 41:
			ret = "grv" ;
			break;
		case 42:
			ret = "Lsft" ;
			break;
		case 43:
			ret = " BkSls " ;
			break;
		case 44:
			ret = "z" ;
			break;
		case 45:
			ret = "x" ;
			break;
		case 46:
			ret = "c" ;
			break;
		case 47:
			ret = "v" ;
			break;
		case 48:
			ret = "b" ;
			break;
		case 49:
			ret = "n" ;
			break;
		case 50:
			ret = "m" ;
			break;
		case 51:
			ret = "," ;
			break;
		case 52:
			ret = "." ;
			break;
		case 53:
			ret = "/" ;
			break;
		case 54:
			ret = "Rsft" ;
			break;
		case 55:
			ret = "*" ;
			break;
		case 56:
			ret = "Lalt" ;
			break;
		case 57:
			ret = "spc" ;
			break;
		case 58:
			ret = "Cplk" ;
			break;
		case 59:
			ret = "f1" ;
			break;
		case 60:
			ret = "f2" ;
			break;
		case 61:
			ret = "f3" ;
			break;
		case 62:
			ret = "f4" ;
			break;
		case 63:
			ret = "f5" ;
			break;
		case 64:
			ret = "f6" ;
			break;
		case 65:
			ret = "f7" ;
			break;
		case 66:
			ret = "f8" ;
			break;
		case 67:
			ret = "f9" ;
			break;
		case 68:
			ret = "f10" ;
			break;
		case 69:
			ret = "NumLck" ;
			break;
		case 70:
			ret = "ScrLck" ;
			break;
		case 71:
			ret = "KP7" ;
			break;
		case 72:
			ret = "KP8" ;
			break;
		case 73:
			ret = "KP9" ;
			break;
		case 74:
			ret = "KP-" ;
			break;
		case 75:
			ret = "KP4" ;
			break;
		case 76:
			ret = "KP5" ;
			break;
		case 77:
			ret = "KP6" ;
			break;
		case 78:
			ret = "KP+" ;
			break;
		case 79:
			ret = "KP1" ;
			break;
		case 80:
			ret = "KP2" ;
			break;
		case 81:
			ret = "KP3" ;
			break;
		case 82:
			ret = "KP0" ;
			break;
		case 83:
			ret = "KP." ;
			break;
		
		case 87:
			ret = "f11" ;
			break;
		case 88:
			ret = "f12" ;
			break;
		case 96:
			ret = "KPent" ;
			break;
		case 97:
			ret = "Rcnt" ;
			break;
		case 98:
			ret = "KP/" ;
			break;
		case 100:
			ret = "Ralt" ;
			break;
		case 102:
			ret = "HOME" ;
			break;
		case 103:
			ret = "UP" ;
			break;
		case 104:
			ret = "PGUP" ;
			break;
		case 105:
			ret = "LFT" ;
			break;
		case 106:
			ret = "RGT" ;
			break;
		case 107:
			ret = "END" ;
			break;
		case 108:
			ret = "DWN" ;
			break;
		case 109:
			ret = "PGDWN" ;
			break;
		case 110:
			ret = "INSRT" ;
			break;
		case 111:
			ret = "DEL" ;
			break;
		


		
		default:
			ret = "DFLT" ;
			break;
	}
return ret;

}



