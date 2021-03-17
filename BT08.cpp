#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

//BaiA1
/*void f(int xval)
{
	int x;
	x = xval;
	cout << "x address: " << &x << endl;
	// in địa chỉ của x tại đây
}
void g(int yval)
{
	int y;
	cout << "y address: " << &y << endl;
	// in địa chỉ của y tại đây
}
int main()
{
	f(7);
	g(11);
	return 0;
}*/
// địa chỉ hai biến giống nhau (000000203A4FFB24)
// hai hàm đều có số biến giống nhau, sau khi hàm đầu tiên thực thi, dữ liệu hàm đó đc giải phóng rồi đc sử dụng chạy hàm thứ hai

//Bai A2a
/*int main()
{
	char a[4] = "abc";
	for (char* cp = a; (*cp) != '\0'; cp++) {
		cout << (void*)cp << " : " << (*cp) << endl;
	}
	return 0;
}*/

//Bai A2b
/*int main()
{
	int a[4] = { 1,2,3,4 };
	for (int* cp = a; cp <= &a[3]; cp++) {
		cout << (void*)cp << " : " << (*cp) << endl;
	}
	return 0;
}*/

//Bai A2c
/*int main()
{
	double a[4] = { 1,2,3,4 };
	for (double* cp = a; cp <= &a[3]; cp++) {
		cout << (void*)cp << " : " << (*cp) << endl;
	}
	return 0;
}*/

//Bai A2d
/*int main()
{
	double a[4] = { 1,2,3,4 };
	for (double* cp = a; cp <= &a[3]; cp += 2) {
		cout << (void*)cp << " : " << (*cp) << endl;
	}
	return 0;
}*/

//Bai A3
/*void swap_pointers(char* x, char* y)
{
	char* tmp;
	tmp = x;
	x = y;
	y = tmp;
}
int main()
{
	char a[] = "I should print second";
	char b[] = "I should print first";

	char* s1 = a;
	char* s2 = b;
	swap_pointers(s1, s2);
	cout << "s1 is " << s1 << endl;
	cout << "s2 is " << s2 << endl;
	return 0;
}*/
//con trỏ truyền vào bằng tham trị => phải truyền bằng con trỏ của con trỏ

//Bai A4
/*int main() {
	char** s = new char*;
	char foo[] = "Hello World";
	*s = foo;
	printf("s is %p\n", s);
	s[0] = foo;
	printf("s[0] is %p\n", s[0]);
	delete s;
	return(0);
}*/

//Bai C1
/*int strlen(char a[]) {
	int count = 0;
	for (char* pa = &a[0]; *pa != NULL; pa++) {
		count++;
	}
	return count;
}

void reverse(char a[]) {
	int n = strlen(a);
	for (int i = 0; i < n / 2; i++) {
		char swap = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = swap;
	}
}

void delete_char(char a[], char c) {
	int n = strlen(a);
	for (int i = 0; i < n; i++) {
		while (a[i] == c) {
			for (int j = i; j < n - 1; j++) {
				a[j] = a[j + 1];
			}
			a[n - 1] = NULL;
			n = strlen(a);
		}
	}
}

void pad_right(char a[], int n) {
	while (strlen(a) < n) {
		a[strlen(a) + 1] = NULL;
		a[strlen(a)] = ' ';
	}
}

void pad_left(char a[], int n) {
	while (strlen(a) < n) {
		a[strlen(a) + 1] = NULL;
		for (int i = strlen(a); i > 0; i--) {
			a[i] = a[i - 1];
		}
		a[0] = ' ';
	}
}

void truncate(char a[], int n) {
	for (char* pa = &a[n]; pa < &a[strlen(a)]; pa++) {
		*pa = NULL;
	}
}

bool is_palindrome(char a[]) {
	int n = strlen(a);
	for (int i = 0; i < n / 2; i++) {
		if (a[i] != a[n - 1 - i]) {
			return false;
		}
	}
	return true;
}

void trim_left(char a[]) {
	int count = 0;
	while (a[count] == ' ') {
		count++;
	}
	for (char* pa = a; pa < a + strlen(a); pa++) {
		if (*(pa + count) != NULL && *(pa - 1) != NULL) {
			*pa = *(pa + count);
		}
		else {
			*pa = NULL;
		}
	}
}

void trim_right(char a[]) {
	char* pa = &a[strlen(a) - 1];
	while (*pa == ' ') {
		*pa = NULL;
		pa--;
	}
}

int main() {
	char a[] = "Hello";
	cout << a << endl;
	if (is_palindrome(a)) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
	reverse(a);
	cout << a << endl;
	delete_char(a, 'l');
	cout << a << endl;
	pad_left(a, 5);
	cout << a << endl;
	trim_left(a);
	cout << a << endl;
	pad_right(a, 5);
	cout << a << a << endl;
	trim_right(a);
	cout << a << a << endl;
	truncate(a, 2);
	cout << a << endl;
}*/