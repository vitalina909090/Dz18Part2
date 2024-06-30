#include "newfail.h"

using namespace std;

string Tran(const string& ukrText) {
    const char ukrChars[] = {
        'à', 'á', 'â', 'ã', '´', 'ä', 'å', 'º', 'æ', 'ç', 'è', '³', '¿', 'é', 'ê', 'ë',
        'ì', 'í', 'î', 'ï', 'ð', 'ñ', 'ò', 'ó', 'ô', 'õ', 'ö', '÷', 'ø', 'ù', 'ü', 'þ', 'ÿ'
    };

    const string translit[] = {
        "a", "b", "v", "h", "g", "d", "e", "ie", "zh", "z", "y", "i", "i", "i", "k", "l",
        "m", "n", "o", "p", "r", "s", "t", "u", "f", "kh", "ts", "ch", "sh", "shch", "", "iu", "ia"
    };

    string result;
    for (char a : ukrText) {
        bool check = false;
        for (int i = 0; i < sizeof(ukrChars); i++) {
            if (tolower(a) == ukrChars[i]) {
                result += translit[i];
                check = true;
                break;
            }
        }
        if (!check) {
            result += a;
        }
    }
    return result;
}