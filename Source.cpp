#include <iostream>
using namespace std;
int main() {
	//for1
	/*int n, k;
	cout << "n:";
	cin >> n;
	cout << "k:";
	cin >> k;
	for (int i = 0; i < n; i = i + 1) {
		cout << k << endl;
	}
	system("pause");*/
	//for2 
	/*int a, b;
	int n = 0;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	for (int i = a; i <= b; i = i + 1) {
		cout << i << "";
		n++;
	}
	cout << "qty=" << n << endl;*/
	//For3.
	/*int a, b;
	int n = 0;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	for (int i = b-1; i <= a; i = i - 1) {
		cout << i << "" <<endl;
		n++;
	}
	cout << "qty=" << n << endl;*/
	/*/For4.*/	/*double price;	cout << "input price: ";	cin >> price;	for (int weight = 1; weight <= 10; weight++) {		cout << weight << "kg costs" << weight *price << "$" << endl;	}
	system("pause");*/
	/*/for 5*/
	/*double price;	cout << "input price: ";	cin >> price;	for (double weight = 0.1; weight <= 1; weight = weight ++ 0.1) {		cout << weight << "kg costs" << weight *price << "$" << endl;
	}*/
	/*/For6.*/
	/*double price;	cout << "input price: ";	cin >> price;	for (double weight = 1.2; weight <= 2; weight = weight + 0.2) {		cout << weight << "kg costs" << weight *price << "$" << endl;
	}*/
	/*/For7.*/
	/*int a, b;	cout << "a:";	cin >> a;	cout << "b:";	cin >> b;	int t = 0;	for (int i = a; i <= b; i=i+1) {		t += 1;
	}
	cout << t;*/
	/*/For8.Даны два целых числа A и B(A < B).Найти произведение всех целых
	//чисел от A до B включительно.*/
	/*(int a, b;
	cout << "a:";
	cin >> a;
	cout << "b:";
	cin >> b;
	int pr = 1;
	for (int i = a; i <= b; ++i) {
		pr *= i;
	}
	cout << pr;*/
	/*//For9.Даны два целых числа A и B(A < B).Найти сумму квадратов всех целых
	//	чисел от A до B включительно.*/
	int a, b;
	cout << "a:";
	cin >> a;
	cout << "b:";
	cin >> b;
	int pr = 0;
	for (int i = a; i <= b; ++i) {
		pr += i *i;
	}
	cout << pr;
	system("pause");
}