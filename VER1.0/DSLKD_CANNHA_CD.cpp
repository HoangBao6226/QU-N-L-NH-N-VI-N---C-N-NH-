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

Nodeptr themViTri(Nodeptr& list)
{
	int vt;
	cout << "Nhap vi tri muon chen them can nha: ";
	cin >> vt;
	cin.ignore();
	int dem = 0;
	CanNha x;
	Nodeptr p = list;
	Nodeptr a = new Node;
	cout << "Nhap ma can nha: ";
	cin.getline(x.maNha, 10);
	while (kiemTraTrungMa(p, x.maNha) || strcmp(x.maNha, "") == 0)
	{
		cout << "Ma nha khong hop le!" << endl;
		cout << "Moi nhap lai: " << endl;
		cin.getline(x.maNha, 10);
	}
	cout << "Nhap dien tich can nha: ";
	cin >> x.dienTich;
	cin.ignore();
	cout << "Nhap don gia can nha: ";
	cin >> x.donGia;
	cin.ignore();
	cout << "Nhap dia chi nha: ";
	cin.getline(x.diaChi, 50);
	a = taoNode(x);
	if (vt == 1)
	{
		a->next = list;
		return a;
	}
	while (p != NULL)
	{
		dem++;
		if (dem == (vt - 1))
			break;
		p = p->next;
	}
	a->next = p->next;
	p->next = a;
	return list;
}