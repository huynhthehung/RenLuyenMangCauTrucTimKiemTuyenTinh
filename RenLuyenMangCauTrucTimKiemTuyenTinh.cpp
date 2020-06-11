// RenLuyenMangCauTrucTimKiemTuyenTinh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct Book
{
    int ma;
    char ten[150];
    int nam;
};
void NhapDanhSach(Book dsBook[], int n);
void XuatDanhSach(Book dsbook[], int n);
int soSachTimDuoc = 0;
Book* TimSachTheoNamXuatBan(Book dsbook[], int n, int year);
int main()
{
    Book dsbook[100];
    int n;
    int year;
    cout << "Nhap so cuon sach: ";
    cin >> n;
    NhapDanhSach(dsbook, n);
    cout << "Sach sau khi nhap la: \n";
    XuatDanhSach(dsbook, n);
    cout << "Nhap nam can tim: \n";
    cin >> year;
    Book* dsbookTimDuoc = TimSachTheoNamXuatBan(dsbook, n, year);
    if (soSachTimDuoc == 0)
        cout << "Khong co cuon sach nao co nam xuat ban " << year;
    else
    { 
        cout << "Cac sach tim duoc: \n";
        XuatDanhSach(dsbookTimDuoc, soSachTimDuoc);
    }
    return 0;
        

}

void NhapDanhSach(Book dsBook[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap sach thu " << i << endl;
        cout << "Ma: ";
        cin >> dsBook[i].ma;
        cout << "Ten: ";
        cin >> dsBook[i].ten;
        cout << "Nam: ";
        cin >> dsBook[i].nam;
    }
}

void XuatDanhSach(Book dsbook[], int n)
{
    for (int i = 0; i < n; i++)
    {
        Book b = dsbook[i];
        cout << b.ma << "\t" << b.ten << "\t" << b.nam << endl;
    }
}

Book* TimSachTheoNamXuatBan(Book dsbook[], int n, int year)
{
    Book dsTimDuoc[100];
    soSachTimDuoc = 0;
    for (int i = 0; i < n; i++)
    {
        Book b = dsbook[i];
        if (b.nam == year)
        {
            dsTimDuoc[soSachTimDuoc] = b;
            soSachTimDuoc++;
        }
    }
    return dsTimDuoc;
}


