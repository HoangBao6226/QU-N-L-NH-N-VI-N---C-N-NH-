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
Nodeptr xoaMa(Nodeptr& list)
{
	Nodeptr p = list;
	Nodeptr prev = NULL;
	char ma[10];
	cout << "Nhap ma can nha muon xoa: ";
	cin.ignore();
	cin.getline(ma, 10);
	while (p != NULL)
	{
		if (strcmp(p->data.maNha, ma)==0)
		{
			if (prev == NULL) {
				prev = list;
				list = list->next;
				delete prev;
				break;
			}
			prev->next = p->next;
			delete p;
			break;
		}
		prev = p;
		p = p->next;
	}
	return list;
}