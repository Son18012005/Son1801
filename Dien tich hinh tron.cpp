#include <iostream>
using namespace std;

class HinhTron{
private:
	double banKinh;
public:
	HinhTron(double r){
		banKinh = r;
	}
	double tinhChuVi(){
		return 2 * 3.14 * banKinh;
	}
	double tinhDienTich(){
		return 3.14 * banKinh * banKinh;
	}
};

int main() {
	HinhTron c1(10);
	cout << "Chu vi:" << c1.tinhChuvi() << endl ;
	cout << "Dien tich:" << c1.tinhDIenTich() << endl;
	return 0;
}
 

