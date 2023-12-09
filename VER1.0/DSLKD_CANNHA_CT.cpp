#include "DSLKD_CANNHA_TV.h"
void main()
{
	Nodeptr dscn;
    int menu;
    do
    {
        cout << ("1/ Them thong tin 1 can nha vao vi tri chi dinh.") << endl;
        cout << ("2/ Tim cac can nha theo dien tich.") << endl;
        cout << ("3/ Tim cac can nha theo don gia.") << endl;
        cout << ("4/ Xoa cac can nha theo ma.") << endl;
        cout << ("5/ Xoa cac can nha theo dia chi.") << endl;
        cout << ("6/ Sap xep cac can nha theo dien tich giam dan.") << endl;
        cout << ("7/ Sap xep cac can nha theo don gia tang dan.") << endl;
        cout << ("0/ Thoat chuong trinh!!!") << endl;
        cout << ("Nhap lua chon cua ban: ");
        cin >> menu;
        switch (menu)
        {
        case 0:
            return;
        case 1:
        {
            
            break;
        }
        case 2:
        {
            
            break;
        }
        case 3:
        {
            
            break;
        }
        case 4:
        {
            
            break;
        }
        case 5:
        {
            
            break;
        }
        case 6:
        {
            sapXepDT_TangDan(dscn);

            break;
        }
        case 7:
        {
            
            break;
        }
        default:
        {
            cout << ("Chuc nang khong ton tai! Moi nhap lai!");
            break;
        }
        }
        system("pause");
        system("cls");
    } while (menu != 0);
}