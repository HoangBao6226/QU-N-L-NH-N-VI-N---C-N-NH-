#include "DSLKD_CANNHA_TV.h"

void khoiTao(Nodeptr& list)
{
	list = NULL;
}

int isEmpty(Nodeptr list)
{
	return list == NULL ? 1 : 0;
}

void giaiPhong(Nodeptr& list)
{
	Nodeptr p = list;
	while (p != NULL)
	{
		list = list->next;
		delete p;
		p = list;
	}
}

Nodeptr taoNode(CanNha x)
{
	Nodeptr p;
	p = new Node;
	p->data = x;
	p->next = NULL;
	return p;
}

Nodeptr themDau(Nodeptr& list, CanNha x)
{
	Nodeptr p = taoNode(x);
	p->next = list;
	list = p;
	return p;
}

bool kiemTraTrungMa(Nodeptr& list, char* ma)
{
	Nodeptr p = list;
	while (p != NULL)
	{
		if (strcmp(p->data.maNha, ma) == 0)
			return true;
		p = p->next;
	}
	return false;
}
void xuatDSCN(Nodeptr list)
{
	if (list == NULL)
	{
		cout << "Danh sach can nha rong!" << endl;
		return;
	}
	cout << setw(10) << left << "STT" << "|";
	cout << setw(20) << left << "Ma can nha" << "|";
	cout << setw(20) << left << "Dien tich" << "|";
	cout << setw(20) << left << "Don gia" << "|";
	cout << setw(40) << left << "Dia chi" << endl;
	cout << setfill('-');
	cout << setw(120) << "-" << endl;
	cout << setfill(' ');
	int count = 1;
	while (list != NULL)
	{
		cout << setw(10) << left << count++ << "|";
		cout << setw(20) << left << list->data.maNha << "|";
		cout << setw(20) << left << list->data.dienTich << "|";
		cout << setw(20) << left << list->data.donGia << "|";
		cout << setw(40) << left << list->data.diaChi << endl;
		list = list->next;
	}
void nhapDSCN(Nodeptr& list)
{
	//khoiTao(list);
	CanNha x;
	do {
		cout << "Nhap ma can nha (nhan Enter de thoat): ";
		cin.getline(x.maNha, 10);
		while (kiemTraTrungMa(list, x.maNha))
		{
			cout << "Ma nha bi trung!" << endl;
			cout << "Moi nhap lai ma can nha: ";
			cin.getline(x.maNha, 10);
		}
		if (strcmp(x.maNha, "") == 0)
			break;
		cout << "Nhap dien tich can nha: ";
		cin >> x.dienTich;
		//cin.ignore();
		cout << "Nhap don gia can nha: ";
		cin >> x.donGia;
		cin.ignore();
		cout << "Nhap dia chi nha: ";
		cin.getline(x.diaChi, 50);
		themDau(list, x);
	} while (true);
}