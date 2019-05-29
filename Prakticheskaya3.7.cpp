#include "Prakticheskaya3.3.cpp"
using namespace std;
struct library {
	int year;
	string adress;
	string status;
	Book books[100];
};

int main() {
	setlocale(0, "");
	library lib = {
		1862,
		(string)"Москва, 125000",
		(string)"Какая-то заурядная библиотека",
		{
			{
				2011,
				600,
				(string)"Играть чтобы жить",
				(string)"Дмитриц Рус"
			},
			{
				20011,
				300,
				(string)"Шаман",
				(string)"Маханенко"
			},
			{
				2013,
				500,
				(string)"Какая-то никчемная книга",
				(string)"Автор, более никчемный, чем его книга"
			}
		}
	};
	return 0;
}