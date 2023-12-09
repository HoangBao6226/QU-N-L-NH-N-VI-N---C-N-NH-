#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

typedef struct Node* Nodeptr;
struct CanNha {
	char maNha[10];
	double dienTich;
	double donGia;
	char diaChi[50];
};
struct Node {
	CanNha data;
	Nodeptr next;
};

void khoiTao(Nodeptr& list);
int isEmpty(Nodeptr list);
void giaiPhong(Nodeptr& list);
Nodeptr taoNode(CanNha x);
Nodeptr themDau(Nodeptr& list, CanNha x);
bool kiemTraTrungMa(Nodeptr& list, char* ma);
Nodeptr timDonGia(Nodeptr& list);
Nodeptr timDienTich(Nodeptr& list);
Nodeptr themViTri(Nodeptr& list);
void nhapDSCN(Nodeptr& list);
<<<<<<< HEAD
void xuatDSCN(Nodeptr list);
=======
void xuatDSCN(Nodeptr list);
>>>>>>> 3ba424a1bb85a075cee8c88e43721e394f7b8826
