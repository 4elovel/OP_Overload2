#include <iostream>
#include <windows.h>

using namespace std;

enum months { January = 1, February, March, April, May, June, July, August, September, October, November, December };

months operator+(months day, int days) {
	return months((int(day) + days) % 12);
}

months operator-(months day, int days) {
	return months((int(day) - days) % 12);
}

ostream& operator<< (ostream& strm, months day) {
	switch ((day)) {
	case January:   strm << "January - Winter\n";     break;
	case February:  strm << "February - Winter\n";    break;
	case March:     strm << "March - Spring\n";       break;
	case April:     strm << "April - Spring\n";       break;
	case May:       strm << "May - Spring\n";         break;
	case June:      strm << "June - Summer\n";       break;
	case July:      strm << "July - Summer\n";        break;
	case August:    strm << "August - Summer\n";      break;
	case September: strm << "September - Autumn\n";   break;
	case October:   strm << "October - Autumn\n";     break;
	case November:  strm << "November - Autumn\n";    break;
	case December:  strm << "December - Winter\n";    break;

	default:        strm << "UNKNOWN MONTH\n";        break;
	}
	return strm;
}

int main() {

	months d = January;

	cout << d;

	d = d + 41;
	cout << d;

	d = d + 33;
	cout << d;
}