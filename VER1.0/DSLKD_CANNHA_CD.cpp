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

Nodeptr timDienTich(Nodeptr& list)
{
	double dt;
	cout << "Nhap dien tich can nha muon tim kiem: ";
	cin >> dt;
	Nodeptr p = list;
	Nodeptr q = NULL;
	while (p != NULL)
	{
		if (p->data.dienTich == dt)
		{
			if (q == NULL)
				q = taoNode(p->data);
			else
			{
				themDau(q, p->data);
			}
		}
		p = p->next;
	}
	return q;
}