//PITIGOI BIANCA-MIHAELA


#include<iostream>
#include <vector>
#include <string>
#include <string>
#include <deque>
using namespace std;

void ecuatie_1()
{
	float a, b, c;
	float x1, x2;
	cout << "Introduceti coeficientii ecuatiei:";
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "c= ";
	cin >> c;
	float delta = b * b - 4 * a * c;
	if (delta > 0) {

		cout << "Delta>0" << endl;
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "x1= " << x1 << endl;
		cout << "x2= " << x2 << endl;
	}
	else if (delta == 0) {

		cout << "Delta = 0" << endl;
		x1 = -b / (2 * a);
		x2 = x1;
		cout << "x1=x2=  " << x1 << endl;

	}
	else {
		float real;
		float imaginar;
		real = -b / (2 * a);
		imaginar = (sqrt(-delta)) / (2 * a);
		cout << "Delta<0" << endl;

		cout << "x1= " << real << " + " << imaginar << "i" << endl;
		cout << "x1= " << real << " - " << imaginar << "i" << endl;

	}
}

void inmultire_matrici() {
	int linii1, coloane1, linii2, coloane2;
	int mat1[10][10], mat2[10][10], mat_produs[10][10];

	cout << "Introdueceti cate linii si cate coloane are matricea 1: ";
	cout << "linii= "; cin >> linii1;
	cout << "coloane= "; cin >> coloane1;

	cout << "Introdueceti cate linii si cate coloane are matricea 2: ";
	cout << "linii= "; cin >> linii2;
	cout << "coloane= "; cin >> coloane2;

	while (coloane1 != linii2) {
		cout << "Eroare! Nr.linii nu este egal cu nr. de coloane";

		cout << "Introdueceti cate linii si cate coloane are matricea 1: ";
		cout << "linii= "; cin >> linii1;
		cout << "coloane= "; cin >> coloane1;

		cout << "Introdueceti cate linii si cate coloane are matricea 2: ";
		cout << "linii= "; cin >> linii2;
		cout << "coloane= "; cin >> coloane2;
	}

	cout << "Introduceti elementele matricei 1 " << endl;
	for (int i = 0; i < linii1; i++) {
		for (int j = 0; j < coloane1; j++) {
			cout << "mat1[" << i + 1 << "][" << j + 1 << "]= ";
			cin >> mat1[i][j];
		}
	}


	cout << "Introduceti elementele matricei 2 " << endl;
	for (int i = 0; i < linii2; i++) {
		for (int j = 0; j < coloane2; j++) {
			cout << "mat2[" << i + 1 << "][" << j + 1 << "]= ";
			cin >> mat2[i][j];
		}
	}
	for (int i = 0; i < linii1; i++) {
		for (int j = 0; j < coloane2; j++) {
			mat_produs[i][j] = 0;
		}
	}

	for (int i = 0; i < linii1; i++)
		for (int j = 0; j < coloane2; j++)
			for (int k = 0; k < coloane1; k++)
			{
				mat_produs[i][j] += mat1[i][k] * mat2[k][j];
			}

	cout << endl << "Matrice rezultat: " << endl;
	for (int i = 0; i < linii1; ++i)
		for (int j = 0; j < coloane2; ++j)
		{
			cout << " " << mat_produs[i][j];
			if (j == coloane2 - 1)
				cout << endl;
		}
}

void nr_prim() {

	int  n;
	bool Prim = true;

	cout << "Introduceti un numar intreg pozitiv: ";
	cin >> n;

	if (n == 0 || n == 1) {
		Prim = false;
	}
	else {
		for (int i = 2; i <= n / 2; i++) {
			if (n % i == 0) {
				Prim = false;
				break;
			}
		}
	}
	if (Prim == true)
		cout << n << " este un numar prim";
	else
		cout << n << " nu este un numar prim";
}

void schimbare_baza() {

	int numar, baza;
	cin >> numar >> baza;
	string baze = "0123456789ABCDEF";
	string rezultat = "";

	while (numar > 0) {
		rezultat = baze[numar % baza] + rezultat;
		numar /= baza;
	}
	cout << rezultat;
}

void bubble_sort()
{
	int n, v[10];
	cout << "Cate numere sa aiba vectorul?" << endl;
	cin >> n;
	cout << "Introduceti numerele din vector:" << endl;


	for (int i = 0; i < n; i++) {
		cout << "v[" << i << "]= ";
		cin >> v[i];
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++)
			if (v[j] > v[j + 1]) {
				int aux;
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
			}
	}
	cout << "Vectorul sortat este:" << endl;
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}

void selection_sort()
{


	int n, v[10], min_j, min_n;
	cout << "Cate numere sa aiba vectorul?" << endl;
	cin >> n;
	cout << "Introduceti numerele din vector:" << endl;


	for (int i = 0; i < n; i++) {
		cout << "v[" << i << "]= ";
		cin >> v[i];
	}

	for (int i = 0; i < n; i++) {

		min_j = i;
		min_n = v[i];
		for (int j = i + 1; j < n; j++) {
			if (v[j] < min_n) {
				min_j = j;
				min_n = v[j];
			}
		}
		v[min_j] = v[i];
		v[i] = min_n;

	}

	cout << "Vectorul sortat este:" << endl;
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";

	}
}

void counting_sort() {
	int n, v[10], u[10], w[10];
	cout << "Cate numere sa aiba vectorul?" << endl;
	cin >> n;
	cout << "Introduceti numerele din vector:" << endl;

	for (int i = 0; i < n; i++) {
		cout << "v[" << i << "]= ";
		cin >> v[i];
	}

	for (int i = 0; i < n; i++) {
		w[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (v[i] <= v[j]) {
				w[j]++;
			}
			else {
				w[i]++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		u[w[i]] = v[i];
	}

	cout << "Vectorul sortat este:" << endl;
	for (int i = 0; i < n; i++) {
		cout << u[i] << " ";
	}

}

void interclasare(int v[], int s, int d, int m) {
	int u[50], i, j, k;
	i = s;
	j = m + 1;
	k = 1;
	for (int i = 0; i < 10; i++) {
		u[i] = 0;
	}
	while (i <= m && j <= d) {
		if (v[i] <= v[j]) {
			u[k] = v[i];
			i++;
			k++;
		}
		else {
			u[k] = v[j];
			j++;
			k++;
		}
	}
	while (i <= m) {
		u[k] = v[i];
		k++;
		i++;
	}

	while (j <= d) {
		u[k] = v[j];
		k++;
		j++;
	}

	k = 0;
	for (i = s; i <= d; i++) {
		v[i] = u[k];
		k++;
	}
}
void sortare(int v[], int s, int d) {
	int aux;
	if (v[s] > v[d]) {
		aux = v[s];
		v[s] = v[d];
		v[d] = aux;


	}
}
void divimp(int v[], int s, int d) {
	int m;
	if (d - s <= 1) {
		sortare(v, s, d);
	}
	else {
		m = (s + d) / 2;
		divimp(v, s, m);
		divimp(v, m + 1, d);
		interclasare(v, s, d, m);
	}
}
void merge_sort() {
	int n, v[10];
	cout << "Cate numere sa aiba vectorul?" << endl;
	cin >> n;
	cout << "Introduceti numerele din vector:" << endl;


	for (int i = 0; i < n; i++) {
		cout << "v[" << i << "]= ";
		cin >> v[i];
	}

	divimp(v, 0, n - 1);

	cout << "Vectorul sortat este:" << endl;
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";

	}
}

int pivot(int v[], int s, int d) {
	int aux, i, j;
	int pivot;
	pivot = v[d];
	i = s;
	for (j = s; j < d; j++) {
		if (v[j] <= pivot) {
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			i++;
		}
	}
	aux = v[i];
	v[i] = v[d];
	v[d] = aux;
	return i;
}
void quick_sort(int v[], int s, int d) {
	int p;
	if (s < d) {
		p = pivot(v, s, d);
		quick_sort(v, s, p - 1);
		quick_sort(v, p + 1, d);
	}
}

void insertion_sort(int v[], int n) {

	int x, j;
	for (int i = 1; i < n; i++) {
		x = v[i];
		j = i - 1;
		while (j >= 0 && x < v[j]) {
			v[j + 1] = v[j];
			j--;
		}
		v[j + 1] = x;
	}
}

void shell_sort(int v[], int n) {
	int inc, i, j, aux;
	for (inc = n / 2; inc > 0; inc = inc / 2) {
		for (i = inc; i < n; i++) {
			for (j = i - inc; j >= 0; j = j - inc) {
				if (v[j] >= v[j + inc]) {
					aux = v[j];
					v[j] = v[j + inc];
					v[j + inc] = aux;
				}
			}
		}
	}
}

int getMax(int v[], int n) {
	int max = v[0];
	for (int i = 1; i < n; i++)
		if (v[i] > max)
			max = v[i];
	return max;
}
void countingSort(int v[], int n, int pozitie) {
	const int max = 10;
	int* u;
	u = new int[n];
	int count[max];

	for (int i = 0; i < max; ++i)
		count[i] = 0;

	for (int i = 0; i < n; i++)
		count[(v[i] / pozitie) % 10]++;

	for (int i = 1; i < max; i++)
		count[i] += count[i - 1];

	for (int i = n - 1; i >= 0; i--) {
		u[count[(v[i] / pozitie) % 10] - 1] = v[i];
		count[(v[i] / pozitie) % 10]--;
	}

	for (int i = 0; i < n; i++)
		v[i] = u[i];

	delete[] u;
}

void CautareSecventiala()
{
	int nr, gasit, i, nrCautat, a[100];
	cout << "Nr. elemente:\n";
	cin >> nr;
	cout << "Introduceti numarul cautat:";
	cin >> nrCautat;
	for (int i = 0; i < nr - 1; i++)
	{
		cout << "a[" << i << "]=" << endl;
		cin >> a[i];
	}
	for (gasit = i = 0; i < nr && !gasit; i++)
	{
		if (a[i] == nrCautat)
		{
			gasit = 1;

		}

	}
	if (gasit == 0)
	{
		cout << "Elementul nu a fost gasit: " << gasit;
	}
	else cout << "Elementul  " << nrCautat << "  a fost gasit";

}

void CautareBinara()
{
	int nr, left, right, gasit = 0, a[100];
	cout << "Nr. elemente:\n";
	cin >> nr;
	int mijloc;
	for (int i = 0; i < nr - 1; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
	int x;// nr cautat
	cout << "Introduceti numarul cautat :";
	cin >> x;// citesc nr cautat;

	for (left = 0, right = nr - 1; !gasit && left <= right; )
	{
		mijloc = (left + right) / 2;
		if (a[mijloc] == x)
		{
			gasit = 1;
		}
		else
		{
			if (a[mijloc] < x)
			{
				left = mijloc + 1;
			}
			else
			{
				right = mijloc - 1;
			}
		}
	}
	if (gasit)
	{
		cout << x << " se gaseste pe pozitia " << mijloc;
	}
	else cout << x << " nu se afla in vector ";

}

void radix_sort(int v[], int dimensiune) {
	int max = getMax(v, dimensiune);

	for (int pozitie = 1; max / pozitie > 0; pozitie *= 10)
		countingSort(v, dimensiune, pozitie);
}

struct Node {
	int data;
	Node* urm;
};
struct Node* top;

void afisare_lista(Node* cap) {
	while (cap != NULL) {
		cout << cap->data << " ";
		cap = cap->urm;
	}
}

Node* creare_lista()
{
	Node* cap, * u, * p;
	int x;
	char a;
	cap = new Node;  // creeaza capatul
	cout << "Valoare cap lista "; cin >> x;
	cap->data = x;
	cap->urm = NULL;
	u = cap; //initializare u care este ultimul element din lista
	do
	{
		cout << "Adauga elemente in lista ";
		cin >> a;
		if ((a == 'd') || (a == 'D'))
		{
			p = new Node;
			cout << "Valoare de adaugat x=";
			cin >> x;
			p->data = x;
			p->urm = NULL;
			u->urm = p;
			u = p;
		}
	} while ((a == 'd') || (a == 'D'));
	return cap;
}

void adaugare_inceput_lista(Node*& cap, int valoare) {
	Node* element = new Node;
	element->data = valoare;
	element->urm = cap;
	cap = element;
}

void stergere_element(Node* predecesor) {
	Node* victima = predecesor->urm;
	predecesor->urm = predecesor->urm->urm;
	delete victima;
}

void stergere_valoare(Node*& cap, int valoare) {
	if (cap->data == valoare) {
		Node* victima = cap;
		cap = cap->urm;
		delete victima;
		return;
	}

	Node* elem = cap;
	while (elem->urm != NULL && elem->urm->data != valoare)
		elem = elem->urm;
	if (elem->urm != NULL)
		stergere_element(elem);
}



struct Nod {
	int numar;
	Nod* urm;
	Nod* ant;
};
Nod* cap = NULL;

void adaugare_inceput(Nod*& cap, int valoare) {
	Nod* elem = new Nod;
	elem->numar = valoare;
	elem->urm = cap;
	elem->ant = nullptr;

	if (cap != nullptr) {
		cap->ant = elem;
	}
	cap = elem;
}

void afisare_listaDI(Nod* cap) {
	while (cap != NULL) {
		cout << cap->numar << " ";
		cap = cap->urm;
	}
}

Nod* cautare_pozitie(Nod* cap, int pozitie) {
	int i = 0;
	while (cap != nullptr && i < pozitie) {
		cap = cap->urm;
		i++;
	}
	if (i == pozitie) {
		return cap;
	}
	else {
		return nullptr;
	}
}

void stergere_element(Nod* elem) {
	elem->ant->urm = elem->urm;
	elem->urm->ant = elem->ant;
	delete elem;
}

void stergere_pozitie(Nod*& cap, int pozitie) {
	if (pozitie == 0) {
		Nod* victima = cap;
		cap = cap->urm;
		cap->ant = nullptr;
		delete victima;
	}
	else {
		Nod* predecesor = cautare_pozitie(cap, pozitie);
		stergere_element(predecesor);
	}
}

typedef struct Stiva {
	int data;
	Stiva* urm;
};
struct Stiva* capat;

void push(int data) {
	Stiva* u;
	u = new Stiva();
	u->data = data;
	u->urm = capat;
	capat = u;
}

void pop() {
	Stiva* u;
	if (capat == NULL) {
		cout << "Stiva Nula";
		exit(1);
	}
	else {
		u = capat;
		capat = capat->urm;
		u->urm = NULL;
		free(u);
	}
}

void display() {
	Stiva* u;
	if (capat == NULL) {
		cout << "Stiva Nula";
		exit(1);
	}
	else {
		u = capat;
		cout << "Stiva contine: ";
		while (u != NULL) {
			cout << u->data << ", ";
			u = u->urm;
		}
	}
}

typedef struct Coada {
	int v;
	Coada* urm;
}; //Coada* head = NULL;

void InserareCoada(Coada*& cap, int valoare)
{
	Coada* elem = new Coada;
	elem->v = valoare;
	elem->urm = nullptr;
	if (cap == nullptr)
		cap = elem;
	else {
		Coada* nod_curent = cap;
		while (nod_curent->urm != nullptr)
			nod_curent = nod_curent->urm;
		nod_curent->urm = elem;
	}
}

void StergereCoada(Coada* cap)
{
	Coada* victima = cap;
	cap = cap->urm;
	//delete victima;
}
void AfisareCoada(Coada* cap)
{
	while (cap != NULL) {
		cout << cap->v << " ";
		cap = cap->urm;
	}
}

void parcurgere_lista(Node* cap)
{
	Node* p;
	cout << endl;

	if (cap == NULL)
	{
		cout << "Lista este vida!" << endl;
	}
	else
	{
		p = cap;
		while (p != NULL)
		{
			cout << p->data << " ";
			p = p->urm;
		}
	}
	cout << endl;
}

Node* creaza_lista_ordonata()
{
	Node* L; // capat lista
	Node* c; // element curent
	Node* p, * prec; // prec=precedentul lui p , p fiind elementul de parcurgere
	int i, x, n;
	bool ok = true; // ok=false daca elementul a fost adaugat

	// citeste primul element din lista
	L = new Node;
	cout << "Primul element x= ";
	cin >> x;
	L->data = x;
	L->urm = NULL;

	// citeste urmatoarele elemente
	cout << "Numar de elemente in lista n= ";
	cin >> n;

	for (i = 2; i <= n; i++)
	{
		cout << "Elementul al" << i << "-lea este x= ";
		cin >> x;
		c = new Node;
		c->data = x;
		p = L;
		prec = NULL;
		while ((p) && (!ok))
		{
			if (p->data <= x)
			{
				prec = p;
				p = p->urm;
			}
			else
			{
				// insereaza x inaintea lui p
				if (!prec) // precedentul este NULL
				{
					// inseram inaintea capatului de lista L=p
					c->urm = p;
					L = c;
				}
				else
				{
					prec->urm = c;
					c->urm = p;
				}
				prec = c;
				p = p->urm;
				ok = true;
			}

		}// end while
		if ((!p) && (!ok))
		{
			// adauga dupa ultimul elemet continu in prec
			c->urm = NULL;
			prec->urm = c;
		}
		parcurgere_lista(L);

	}
	return L;
}

//###########################################################################################################################################
namespace prob4 {
	struct MatriceAdiacenta {
	public:
		vector<vector<int>> A;

		explicit MatriceAdiacenta(vector<vector<int>>& a) : A(a) {}

		string printeaza() {
			unsigned long marime = A.size();
			string res{ "Matrice adiacenta:" };
			for (int i = 0; i < marime; ++i) {
				res += "\n";
				for (int j = 0; j < marime; ++j) {
					res += to_string(A[i][j]) += " ";
				}
			}
			return res += "\n";
		}

		void parcurge_in_adancime(int i) {
			vector<bool> vizitat = vector<bool>(A.size(), false);
			parcurge_nod_in_adancime(i, vizitat);
		}

		void parcurge_nod_in_adancime(int i, vector<bool>& vizitat) {
			cout << ("Am vizitat nodul: " + to_string(i) + "\n");
			vizitat[i] = true;
			for (int j = 0; j < A.size(); ++j) {
				if (!vizitat[j] && A[i][j] == 1) {
					parcurge_nod_in_adancime(j, vizitat);
				}
			}
		}

		/*void parcurge_in_latime(int nod_initial) {
			vector<bool> vizitat = vector<bool>(A.size(), false);
			queue<int> coada_vizitare;
			coada_vizitare.push(nod_initial);
			while (!coada_vizitare.empty()) {
				int nod_curent = coada_vizitare.front();
				vizitat[nod_curent] = true;
				cout << ("Am vizitat nodul: " + to_string(nod_curent) + "\n");

				for (int j = 0; j < A.size(); ++j) {
					if (!vizitat[j] && A[nod_curent][j] == 1) {
						coada_vizitare.push(j);
					}
				}
				coada_vizitare.pop();
			}
		}*/
	};

	struct ListaNoduri {
	public:
		vector<vector<int>> L;

		explicit ListaNoduri(const vector<vector<int>>& l) : L(l) {}

		string printeaza() {
			string ret{ "Lista noduri:" };
			int nod = 0;
			for (const auto& nod_sursa : L) {
				ret += ("\nNod " + to_string(nod)) += ":";
				for (const auto& nod_dest : nod_sursa) {
					ret += to_string(nod_dest) += ", ";
				}
				++nod;
			}
			return ret;
		}
	};


	struct Muchie {
		int sursa;
		int destinatie;

		Muchie(int sursa, int destinatie) : sursa(sursa), destinatie(destinatie) {}

		string printeaza() {
			return "(" + to_string(sursa) + ", " + to_string(destinatie) + ")";
		}
	};

	struct ListaMuchii {
	public:
		vector<Muchie> M;

		explicit ListaMuchii(const vector<Muchie>& m) : M(m) {}

		string printeaza() {
			const unsigned long one_before_last = M.size() - 1;
			string res{ "Muchii:\n[" };
			for (int i = 0; i < one_before_last; ++i) {
				res += M[i].printeaza() += ", ";
			}
			return res += M[M.size() - 1].printeaza() += "]";
		}

		static ListaMuchii& creeaza() {
			char adauga;
			vector<Muchie> ret;
			cout << "Nodurile incep numerotarea de la 0!\n";
			while (true) {
				cout << "Adauga muchie? (d/n):";
				cin >> adauga;
				if (adauga != 'd' && adauga != 'D') {
					return *new ListaMuchii(ret);
				}

				int sursa, dest;
				cout << "Sursa muchie:";
				cin >> sursa;
				cout << "Destinatie muchie:";
				cin >> dest;
				ret.push_back(*new Muchie(sursa, dest));
			}
		}
	};

	MatriceAdiacenta& transforma_catre_matrice_adiacenta(ListaMuchii& listaMuchii) {
		int numar_noduri = 0;
		for (const auto& muchie : listaMuchii.M) {
			if (numar_noduri < muchie.sursa) {
				numar_noduri = muchie.sursa;
			}
			if (numar_noduri < muchie.destinatie) {
				numar_noduri = muchie.destinatie;
			}
		}
		++numar_noduri; // ultimul nod e "n" => vector de "n+1"
		vector<vector<int>> a = vector<vector<int>>(numar_noduri, vector<int>(numar_noduri, 0));
		for (const auto& muchie : listaMuchii.M) {
			a[muchie.sursa][muchie.destinatie] = 1;
		}
		return *new MatriceAdiacenta(a);
	}

	ListaMuchii& transforma_catre_lista_muchii(MatriceAdiacenta& matriceAdiacenta) {
		unsigned long size = matriceAdiacenta.A.size();
		vector<Muchie> ret;
		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < size; ++j) {
				if (matriceAdiacenta.A[i][j] == 1) {
					ret.push_back(*new Muchie(i, j));
				}
			}
		}
		return *new ListaMuchii(ret);
	}

	ListaNoduri& transforma_catre_lista_noduri(ListaMuchii& listaMuchii) {
		int numar_noduri = 0;
		for (const auto& muchie : listaMuchii.M) {
			if (numar_noduri < muchie.sursa) {
				numar_noduri = muchie.sursa;
			}
			if (numar_noduri < muchie.destinatie) {
				numar_noduri = muchie.destinatie;
			}
		}
		++numar_noduri;
		vector<vector<int>> l = vector<vector<int>>(numar_noduri);
		for (const auto& muchie : listaMuchii.M) {
			l[muchie.sursa].push_back(muchie.destinatie);
		}
		return *new ListaNoduri(l);
	}

	ListaMuchii& transforma_catre_lista_muchii(ListaNoduri& listaNoduri) {
		unsigned long numar_noduri = listaNoduri.L.size();
		vector<Muchie> m;
		for (int i = 0; i < numar_noduri; ++i) {
			for (const auto& item : listaNoduri.L[i]) {
				m.push_back(*new Muchie(i, item));
			}
		}
		return *new ListaMuchii(m);
	}

	MatriceAdiacenta& transforma_catre_matrice_adiacenta(ListaNoduri& listaNoduri) {
		unsigned long numar_noduri = listaNoduri.L.size();
		vector<vector<int>> a = vector<vector<int>>(numar_noduri, vector<int>(numar_noduri, 0));
		for (int i = 0; i < numar_noduri; ++i) {
			for (const auto& nod : listaNoduri.L[i]) {
				a[i][nod] = 1;
			}
		}
		return *new MatriceAdiacenta(a);
	}

	ListaNoduri& transforma_catre_lista_noduri(MatriceAdiacenta& matriceAdiacenta) {
		unsigned long numar_noduri = matriceAdiacenta.A.size();
		vector<vector<int>> l = vector<vector<int>>(numar_noduri);
		for (int i = 0; i < numar_noduri; ++i) {
			for (int j = 0; j < numar_noduri; ++j) {
				if (matriceAdiacenta.A[i][j] == 1) {
					l[i].push_back(j);
				}
			}
		}
		return *new ListaNoduri(l);
	}

	void problema4_1() {
		ListaMuchii& muchii = ListaMuchii::creeaza();

		ListaNoduri& lista_noduri = transforma_catre_lista_noduri(muchii);
		cout << "\n" << lista_noduri.printeaza();

		MatriceAdiacenta& matrice_adiacenta = transforma_catre_matrice_adiacenta(lista_noduri);
		cout << "\n\nMatrice adiacenta din lista noduri:\n" << matrice_adiacenta.printeaza();

		ListaNoduri& lista_noduri_2 = transforma_catre_lista_noduri(matrice_adiacenta);
		cout << "\n\nLista noduri din matrice adiacenta:\n" << lista_noduri_2.printeaza();
	}

	void problema4_2() {
		ListaMuchii& muchii = ListaMuchii::creeaza();
		cout << "\n" << muchii.printeaza();
		MatriceAdiacenta& adiacenta = transforma_catre_matrice_adiacenta(muchii);
		cout << "\n\nMatrice adiacenta din muchii:\n" << adiacenta.printeaza();
		ListaMuchii& muchii2 = transforma_catre_lista_muchii(adiacenta);
		cout << "\n\nMuchii din matrice adiacenta:\n" << muchii2.printeaza();
	}

	void problema4_3() {
		ListaMuchii& muchii = ListaMuchii::creeaza();
		ListaNoduri& lista_noduri = transforma_catre_lista_noduri(muchii);
		cout << "\n" << muchii.printeaza();
		cout << "\n\nLista noduri din lista muchii:\n" << lista_noduri.printeaza();
		ListaMuchii& muchii2 = transforma_catre_lista_muchii(lista_noduri);
		cout << "\n\nLista muchii din lista noduri:\n" << muchii2.printeaza();
	}

	void problema4_4() {
		ListaMuchii& muchii = ListaMuchii::creeaza();
		MatriceAdiacenta& matrice_adiacenta = transforma_catre_matrice_adiacenta(muchii);
		cout << "\n" << muchii.printeaza();
		cout << "\n" << matrice_adiacenta.printeaza();
		cout << "\nAlege un nod de la care sa se parcurga:";

		int nod;
		cin >> nod;
		cout << "\nParcurge in adancime:\n";
		matrice_adiacenta.parcurge_in_adancime(nod);

		cout << "\nParcurge in latime:\n";
		//matrice_adiacenta.parcurge_in_latime(nod);
	}

	void problema4_5() {
		ListaMuchii& muchii = ListaMuchii::creeaza();
		MatriceAdiacenta& matrice_adiacenta = transforma_catre_matrice_adiacenta(muchii);
		cout << "\n" << muchii.printeaza();
		cout << "\n" << matrice_adiacenta.printeaza();

		cout << "\nAlege nodul initial pentru verificare existenta drum:";
		int initial;
		cin >> initial;

		cout << "Alege nodul final pentru verificare existenta drum:";
		int final;
		cin >> final;

		vector<bool>& noduri_vizitate = *new vector<bool>(matrice_adiacenta.A.size(), false);
		matrice_adiacenta.parcurge_nod_in_adancime(initial, noduri_vizitate);
		cout << "Drumul exista: " << (noduri_vizitate[final] ? "adevarat" : "fals");
	}

}













typedef struct monom {
	float coef;
	int grad;
	monom* urm;
}monom;

monom* citeste_polinom()
{
	// polinom ca lista simplu inlantuita
	monom* p, * q, * u;
	float c;
	int n, g;

	cout << "Primul coeficient este c="; cin >> c;
	cout << "   pentru gradul g = "; cin >> g;
	p = new monom;
	p->coef = c;
	p->grad = g;
	p->urm = NULL;
	u = p; //ultimul element
	cout << "Cate monoame are polinomul n="; cin >> n;
	for (int i = 1; i < n; i++)
	{
		//citeste o valoare si o adauga in stiva
		cout << "Monomul al " << i + 1 << "-lea are coeficientul c="; cin >> c;
		cout << "       si gradul g = "; cin >> g;
		q = new monom;
		q->coef = c;
		q->grad = g;
		q->urm = NULL;
		u->urm = q;
		u = q;
	}

	return p;
}

void afiseaza_polinom(monom* p)
{
	monom* q;

	if (!p)
		cout << "Polinomul este vid!" << endl;
	else
	{
		q = p;
		while (q)
		{
			if (q->coef >= 0)
				cout << "+";
			cout << q->coef << "*X^" << q->grad;
			q = q->urm;
		}
		cout << endl;
	}
}

void AdunarePolinom(struct monom* poly1,
	struct monom* poly2,
	struct monom* poly)
{
	while (poly1->urm &&
		poly2->urm)
	{

		if (poly1->grad > poly2->grad)
		{
			poly->grad = poly1->grad;
			poly->coef = poly1->coef;
			poly1 = poly1->urm;
		}


		else if (poly1->grad < poly2->grad)
		{
			poly->grad = poly2->grad;
			poly->coef = poly2->coef;
			poly2 = poly2->urm;
		}

		{
			poly->grad = poly1->grad;
			poly->coef = (poly1->coef +
				poly2->coef);
			poly1 = poly1->urm;
			poly2 = poly2->urm;
		}


		poly->urm =
			(struct monom*)malloc(sizeof(struct monom));
		poly = poly->urm;
		poly->urm = NULL;
	}
	while (poly1->urm || poly2->urm)
	{
		if (poly1->grad)
		{
			poly->grad = poly1->grad;
			poly->coef = poly1->coef;
			poly1 = poly1->urm;
		}
		if (poly2->urm)
		{
			poly->grad = poly2->grad;
			poly->coef = poly2->coef;
			poly2 = poly2->urm;
		}
		poly->urm =
			(struct monom*)malloc(sizeof(struct monom));
		poly = poly->urm;
		poly->urm = NULL;
	}
}



int main() {

	int op; // optiunea pentru capitol sau iesire din program
	int op1; //optiune capitol 1
	int op2;
	int op3;
	int op4;

	do {

		cout << "PROGRAME ASD" << endl;
		cout << "1. Probleme simple de programare" << endl;
		cout << "2. Algoritmi de sortare" << endl;
		cout << "3. Liste dinamice. Aplicatii" << endl;
		cout << "4. GRAFURI" << endl;
		// se vor completa urmatoarele capitole
		cout << "0.Incheiere program! " << endl;
		//citeste optiune
		cout << endl << "Citeste optiune op = "; cin >> op;
		cout << endl << endl;

		switch (op) {

		case 1:
			do {
				cout << "1. PROBLEME SIMPLE DE PROGRAMARE" << endl;
				cout << "1.1. Rezolvare completa ecuatie de gradul al doilea" << endl;
				cout << "1.2. Inmultire de matrici" << endl;
				cout << "1.3. Testare numar prim" << endl;
				cout << "1.4. Schimbarea bazei de numeratie" << endl;
				cout << "1.5. Afisare nr prime" << endl;
				cout << "1.0. Incheiere capitol 1" << endl;
				cout << "Optiune capitol 1 op1 =  ";
				cin >> op1;

				switch (op1) {

				case 1:
					cout << endl << "Rezolvarea ecuatiei de gradul al doilea:" << endl;
					ecuatie_1();
					break;

				case 2:
					inmultire_matrici();
					break;

				case 3:
					cout << "Testeaza nr prim;" << endl;
					nr_prim();
					break;

				case 4:
					schimbare_baza();
					break;

				case 0:
					cout << "Iesire din capitol 1!" << endl;
					break;
				}
			} while (op1 != 0);
			cout << endl << endl;
			break;

		case 2:
			do {
				cout << "     2. Algoritmi de sortare si cautare" << endl;
				cout << "     2.1. Bubble Sort" << endl;
				cout << "     2.2. Selection Sort" << endl;
				cout << "     2.3. Counting Sort" << endl;
				cout << "     2.4. Merge Sort" << endl;
				cout << "     2.5. Quicksort" << endl;
				cout << "     2.6. Insertion Sort" << endl;
				cout << "     2.7. Shell Sort" << endl;
				cout << "     2.8. Radix Sort" << endl;
				cout << "     2.9. Cautare secventiala" << endl;
				cout << "     2.10. Cautare binara" << endl;
				cout << "     2.0. Iesire din capitol algoritmi de sortare" << endl;
				cout << "     Alege optiune capitol 2: "; cin >> op2;

				switch (op2)
				{
				case 1:
					bubble_sort();
					break;

				case 2:
					selection_sort();
					break;

				case 3:
					counting_sort();
					break;

				case 4:
					merge_sort();
					break;

				case 5:
					int v[10], N, i;
					cout << "Cate numere sa fie in vector: ";
					cin >> N;
					cout << "Introduceti numerele: \n";
					for (i = 0; i < N; i++) {
						cout << "v[" << i << "] = ";
						cin >> v[i];
					}
					quick_sort(v, 0, N - 1);
					break;

				case 6:
					int u[10], n, j;
					cout << "Cate numere sa fie in vector: ";
					cin >> n;
					cout << "Introduceti numerele: \n";
					for (j = 0; j < n; j++) {
						cout << "u[" << j << "] = ";
						cin >> u[j];
					}
					insertion_sort(u, n);
					break;

				case 7:
					int w[10], m, k;
					cout << "Cate numere sa fie in vector: ";
					cin >> m;
					cout << "Introduceti numerele: \n";
					for (k = 0; k < m; k++) {
						cout << "w[" << k << "] = ";
						cin >> w[k];
					}
					shell_sort(w, m);
					break;

				case 8:
					int V[10], M, I;
					cout << "Cate numere sa fie in vector: ";
					cin >> M;
					cout << "Introduceti numerele: \n";
					for (I = 0; I < M; I++) {
						cout << "V[" << I << "] = ";
						cin >> V[I];
					}
					radix_sort(V, M);
					for (k = 0; i < m; k++) {
						cout << w[k] << " ";
					}
					break;

				case 9:
					CautareSecventiala();
					break;

				case 10:
					CautareBinara();
					break;

				case 0:
					cout << " A inchis capitolul 2!" << endl << endl;
					break;

				default:
					cout << endl << "Optiune invalida!" << endl << endl;
					break;
				}

			} while (op2 != 0);
			cout << endl << endl;
			break;

		case 0:
			cout << "La revedere!" << endl;
			break;

		case 3:
			do {
				cout << "     3. Liste dinamice." << endl;
				cout << "     3.1 Operatii cu liste simplu inlantuite: creare,parcurgere,adaugare,stergere.modificare" << endl;
				cout << "     3.2 Operatii cu liste dublu inlantuite: creare,parcurgere,adaugare,stergere.modificare" << endl;
				cout << "     3.3 Operatii cu stive" << endl;
				cout << "     3.4. Operatii cu cozi: creare, parcurgere, adaugare, stergere. " << endl;
				cout << "     3.5. Creearea unei liste ordonata crescator." << endl;
				cout << "     3.6. Interclasarea a doua liste ordonate crescator." << endl;
				cout << "     3.7. Adunarea si inmultirea polinoamelor cu ajutorul listelor." << endl;
				cout << "     3.8. Verificarea corectitudinii parantezelor intr-o expresie aritmetica." << endl;
				cout << "     3.0. Iesire din capitol algoritmi de sortare" << endl;
				cout << "     Alege optiune capitol 3: "; cin >> op3;
				cout << endl << endl;

				switch (op3)
				{
				case 1:// Liste simplu inlantuite
					Node * cap_lista;
					// creare lista
					cap_lista = creare_lista();
					//pargurgere lista
					cout << "Lista dupa creare este: ";
					afisare_lista(cap_lista);
					cout << endl;
					// adaugare in lista
					int val;
					// adaugare la inceput
					cout << "Valoare de adaugat in lista xa = "; cin >> val;
					adaugare_inceput_lista(cap_lista, val);
					cout << "Lista dupa adaugare este" << endl;
					// parcugere lista dupa adaugare
					afisare_lista(cap_lista);
					// stergere
					int sa;
					cout << "Sterge elementele cu valoarea s="; cin >> sa;
					stergere_valoare(cap_lista, sa);
					// parcurgere lista dupa stergere
					cout << "Lista dupa stergere este: ";
					afisare_lista(cap_lista);
					cout << endl;
					break;

				case 2:
					Nod * cap_listaDI;
					int xb, sb;
					cout << "Adaugati un element in lista: "; cin >> xb;
					cout << endl;
					adaugare_inceput(cap_listaDI, xb);
					cout << "Lista este: ";
					afisare_listaDI(cap_listaDI);
					cout << "Sterge elementele cu valoarea s= "; cin >> sb; cout << endl;
					stergere_pozitie(cap_listaDI, sb);
					cout << "Lista este: ";
					afisare_listaDI(cap_listaDI);
					cout << endl;
					break;

				case 0:
					cout << "La revedere!" << endl;
					break;
				case 3: //Stive
					Stiva * cap_stiva;
					int a, b, c;
					char q;
					cout << "Adaugati capul stivei: "; cin >> a;
					push(a);
					cout << "Cate elemente vreti sa adaugati in stiva? "; cin >> b;
					for (int i = 0; i < b; i++) {
						cout << "[" << i << "]= ";
						cin >> c;
						push(c);
					}
					cout << endl;
					display();
					cout << "\nStergeti un element din stiva? [d]/[n]";
					cin >> q;
					while (q == 'd') {
						if (q == 'd') {
							pop();
						}
						cout << "\nStergeti un element din stiva? [d]/[n]";
						cin >> q;
					}
					display();
					cout << endl;
					cout << endl;
					break;

				case 4:
				{
					int ac, d = 0;
					Coada* cap_coada = new Coada;
					cout << "Cate elemente vreti sa adaugati in coada? "; cin >> ac;
					for (int i = 0; i < ac; i++)
					{
						cin >> d;
						InserareCoada(cap_coada, d);
					}
					AfisareCoada(cap_coada);
					cout << endl;
					cout << "Cate elemente vreti sa stergeti din coada? "; cin >> ac;
					for (int i = 0; i < ac; i++)
					{
						StergereCoada(cap_coada);
					}
					AfisareCoada(cap_coada);
				}
				break;

				case 5:
				{
					Node* lo; // lista simplu inlantuita de numere intregi oronata
					lo = creaza_lista_ordonata();
					cout << "Lista ordonata este:" << endl;
					parcurgere_lista(lo);
					cout << endl;

				}
				break;
				}
		case 7: // adunarea si inmultirea de polinoame
			monom * p1, * p2, * p3 = NULL;

			cout << "p1 este: " << endl;
			p1 = citeste_polinom();
			cout << endl;
			cout << "p2 este: " << endl;
			p2 = citeste_polinom();
			cout << "p1 = "; afiseaza_polinom(p1);
			cout << "p2 = "; afiseaza_polinom(p2);

			p3 = (struct monom*)malloc(sizeof(struct monom));

			AdunarePolinom(p1, p2, p3);
			cout << "p3 = "; afiseaza_polinom(p3);

			// creeaza un polinom suma din cele doua polinoame citindu-le si adaugand
			// elemente noi in suma; pastreaza polinoamele citite

			// afiseaza suma

			// parcurgem polinomul suma si pentru fiecare element cautam elemente de acelasi grad care
			// urmeaza dupa elementul curent; cand gaseste aceleasi grad reduce elementul astfel:
			// adauga coeficientul sau la elementul curent si apoi il sterge din lista suma

			// afiseaza suma dupa ce aredus terminii asemenea
			break;
			} while (op3 != 0);
			cout << endl << endl;
			break;
		case 4:

			do {
				cout << "4. GRAFURI \n";
				cout << " 4.1. Reprezentare matrice de adiacenta <=> lista de noduri.\n";
				cout << "4.2. Reprezentare matrice de adiacenta <=> lista de muchii.\n";
				cout << "4.3. Reprezentare lista de noduri <=> lista de muchii.  \n";
				cout << "4.4. Moduri de parcurgere grafuri: in adancime si in latime. \n";
				cout << "4.5. Verificare existenta drum intre oricare doua noduri   \n";
				cout << "4.0. Incheiere capitol 4" << endl;
				cout << "Optiune capitol 4 op4 =  ";
				cin >> op4;

				switch (op4) {

				case 1:
					prob4::problema4_1();
					break;

				case 2:
					prob4::problema4_2();
					break;

				case 3:
					prob4::problema4_3();
					break;

				case 4:
					prob4::problema4_4();
					break;
				case 5:
					prob4::problema4_5();
					break;
				case 0:
					cout << "Iesire din capitol 1!" << endl;
					break;
				}
			} while (op4 != 0);
			cout << endl << endl;
			break;

		}
	} while (op != 0);
	return 0;
}
