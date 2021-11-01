#include<iostream>
#include<iomanip>
using namespace std;

class SinhVien
{
	private:
		int MaSV;
		string TenSV;
		double Diem;
	public:
		SinhVien();
		SinhVien(int msv, string tsv, double d);
		//------
		int getMaSV();
		void setMaSV(int m);
		//------
		string getTenSV();
		void setTenSV(string tsv);
		//----------
		double getDiem();
		void setDiem(double d);
		//------------
		void Nhap();
		void Xuat();
		friend const bool operator >(const SinhVien &sv1, const SinhVien &sv2);
		
};

const bool operator >(const SinhVien &sv1, const SinhVien &sv2)
{
	return sv1.Diem > sv2.Diem;
}

SinhVien::SinhVien()
{
	MaSV = 0;
	TenSV = "";
	Diem = 0;
}

SinhVien::SinhVien(int msv, string tsv, double d)
{
	MaSV = msv;
	TenSV=tsv;
	Diem= d;
}

int SinhVien::getMaSV()
{
	return MaSV;
}

void SinhVien::setMaSV(int m )
{
	MaSV = m;
}

string SinhVien::getTenSV()
{
	return TenSV;
}

void SinhVien::setTenSV(string tsv)
{
	TenSV = tsv;
}

double SinhVien::getDiem()
{
	return Diem;
}

void SinhVien::setDiem(double d)
{
	Diem = d;
}

void SinhVien::Nhap()
{
	cout<<"Moi nhap ma: ";
	cin>>MaSV;
	cin.ignore();
	cout<<"Moi nhap ten: ";
	getline(cin,TenSV);
	cout<<"Moi nhap diem: ";
	cin>>Diem;
}

void SinhVien::Xuat()
{
	cout<< setw(4) << MaSV<<setw(30)<<TenSV<<setw(4)<<Diem<<endl;
}

int main()
{
	SinhVien sv[100];
	int n;
	cout<<"Moi ban nhap so luong sinh vien:";
	cin>>n;
	cout<<"Moi ban nhap thong tin tung sinh vien:\n";
	for (int i=0;i<n; i++)
	{
		cout<<"Moi nhap sinh vien thu "<<i+1<<":"<<endl;
		sv[i].Nhap();
	}
	cout<<"Thong tin sinh vien da nhap "<<endl;
	cout<< setw(4) <<"Ma"<<setw(30)<<"Ten sinh vien"<<setw(4)<<"Diem"<<endl;
	for (int i=0;i<n; i++)
	{
		sv[i].Xuat();
	}
	return 0;
}
