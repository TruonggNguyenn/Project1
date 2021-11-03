#include<iostream>
#include<iomanip>
#include<string>
#include<istream>

using namespace std;

class NhanSu
{
protected:
	int Ma;
	string Ten;
public:
	NhanSu();
	NhanSu(int ma,string ten);
	virtual float TinhLuong()=0;
	virtual void Nhap();
	virtual void Xuat();

};

NhanSu::NhanSu()
{
	this->Ma=0;
	this->Ten="";
}

NhanSu::NhanSu(int ma,string ten)
{
	this->Ma= ma;
	this->Ten=ten;
}

void NhanSu::Nhap()
{
	cout<<"Nhap ma: ";
	cin>>Ma;
	cin.ignore();
	cout<<"Moi nhap ten: ";
	getline(cin,Ten);	
}

void NhanSu::Xuat()
{
	cout<< setw(4) << Ma <<setw(30)<<Ten<<endl;
}
//===============================
class NhanVien: public NhanSu{
public:
	float LuongTheoNgay;
	int NgayLam;
	NhanVien();
	NhanVien(int NL,float LTN);
	float TinhLuong();
	void Nhap();
};

NhanVien::NhanVien()
{
	this->NgayLam= 0;
	this->LuongTheoNgay= 100000;	
}

NhanVien::NhanVien(int NL,float LTN)
{
	this->NgayLam= NL;
	this->LuongTheoNgay= 100000;
}

float NhanVien::TinhLuong()
{
	float luong;
	luong = this->NgayLam* this->LuongTheoNgay;
	return luong;
}

void NhanVien::Nhap()
{
	cout<<"Nhap ma: ";
	cin>>Ma;
	cin.ignore();
	cout<<"Moi nhap ten: ";
	getline(cin,Ten);	
	cout<<"Moi nhap ngay lam: ";
	cin>>NgayLam;
}
//============================================
class GiangVien: public NhanSu{
public:
	string HocVi;
	float HeSoLuong;
	float LuongCoBan;
	GiangVien();
	GiangVien(string HV,float HSL);
	float TinhLuong();
	void Nhap();
};

GiangVien::GiangVien()
{
	this->HocVi="";
	this->HeSoLuong= 0;
	this->LuongCoBan = 3000000;
}

GiangVien::GiangVien(string HV,float HSL)
{
	this->HocVi=HV;
	this->HeSoLuong= HSL;
	this->LuongCoBan = 3000000;
}

float GiangVien::TinhLuong()
{
	float luong;
	luong = this->HeSoLuong* this->LuongCoBan;
	return luong;
}
void GiangVien::Nhap()
{
	cout<<"Nhap ma: ";
	cin>>Ma;
	cin.ignore();
	cout<<"Moi nhap ten: ";
	getline(cin,Ten);	
	cin.ignore();
	cout<<"Moi nhap hoc vi: ";
	getline(cin,HocVi);
	cout<<"Moi nhap he so luong: ";
	cin>>HeSoLuong;	
}
//=================================================
class TroGiang: public NhanSu{
public:
	int SoGioCong;
	float LuongTheoGio;
	TroGiang();
	TroGiang(int SoGioCong);
	float TinhLuong();
	void Nhap();
};

TroGiang::TroGiang()
{
	this->SoGioCong=0;
	this->LuongTheoGio =100000;
}

TroGiang::TroGiang(int SoGioCong)
{
	this->SoGioCong=SoGioCong;
	this->LuongTheoGio =100000;
}

float TroGiang::TinhLuong()
{
	float luong;
	luong = this->LuongTheoGio*this->SoGioCong;
	return luong;
}

void TroGiang::Nhap()
{
	cout<<"Nhap ma: ";
	cin>>Ma;
	cin.ignore();
	cout<<"Moi nhap ten: ";
	getline(cin,Ten);	
	cin.ignore();
	cout<<"Moi nhap hoc vi: ";
	getline(cin,HocVi);
	cout<<"Moi nhap he so luong: ";
	cin>>HeSoLuong;	
}

int main()
{
	
}
