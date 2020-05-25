//#include<iostream>
//#include<string>
//using namespace std;
//
//class Item {
//private: 
//	string title;
//	string description;
//	double price;
//
//public:
//	Item() : title(""), description(""), price(0.00) {}
//	void setTitle(string newTitle) {
//		title = newTitle;
//	}
//	string getTitle() {
//		return title;
//	}
//	void setDescription(string newDescription) {
//		description = newDescription;
//	}
//	string getDescription() {
//		return description;
//	}
//	void setPrice(double newPrice) {
//		price = newPrice;
//	}
//	double getPrice() {
//		return price;
//	}
//	virtual void print() = 0;
//};
//
//class Book : public Item {
//public:
//	virtual void print() {
//		cout << "Book: " << getTitle() << "\nDescription: " << getDescription() << endl;
//		cout << "Cost (in dollars) : " << getPrice() << endl;
//	}
//};
//
//class Movie : public Item {
//public :
//	virtual void print() {
//		cout << "Movie Title: " << getTitle() << "\nDescription: " << getDescription() << endl;
//		cout << "Cost (in dollars): " << getPrice() << endl;
//	}
//
//};
//class CD : public Item {
//public: 
//	virtual void print() {
//		cout << "CD Title: " << getTitle() << "\nDescription: " << getDescription() << endl;
//		cout << "Price in dollars: " << getPrice() << endl;
//	}
//};
//
//class ShoppingCart {
//private:
//	Item** array;
//	int itemCount;
//	int size;
//
//public:
//	ShoppingCart(int inSize) {
//		size = inSize;
//		array = new Item* [size];
//		itemCount = 0;
//	}
//	void add(Item *item) {
//		if (itemCount == size) {
//			return;
//		}
//		array[itemCount++] = item;
//			
//	}
//	void print() {
//		for (int i = 0; i < itemCount; i++) {
//			array[i]->print();
//		}
//	}
//};
//
//int main()
//{
//	int maxCartSize = 3;
//	Book pageCount;
//	pageCount.setTitle("DaVinci Code");
//	pageCount.setDescription("A great book about things");
//	pageCount.setPrice(1000.01);
//
//	Movie length;
//	length.setTitle("JAWS");
//	length.setDescription("A film about sharks");
//	length.setPrice(9.75);
//
//	CD trackCount;
//	trackCount.setTitle("No me quittes pas");
//	trackCount.setDescription("Please dont leave me");
//	trackCount.setPrice(1.99);
//	
//	ShoppingCart myCart(maxCartSize);
//	myCart.add(&pageCount);
//	myCart.add(&length);
//	myCart.add(&trackCount);
//	myCart.print();
//
//	system("pause");
//	return 0;
//}