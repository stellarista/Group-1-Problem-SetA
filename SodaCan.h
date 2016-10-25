#ifndef SODACAN_H_INCLUDED
#define SODACAN_H_INCLUDED
#include <iostream>
#include <string>

class SodaCan {
private:
	string my_Brand;
	int my_Contents;
	int my_Size;
public:
	//~SodaCan();
	SodaCan();
	SodaCan(string brand, int size, int contents)
	{
        my_Brand = brand;
        my_Size = size;
        my_Contents = contents;
	};
	bool isEmpty()
	{
        if(my_Contents == 0) return 0;
        else return 1;
}   ;
	void pourInSoda(int amount)
	{
        my_Contents = amount;
    };
	void drink(int amount)
	{
        my_Contents = my_Contents - amount;
    };
	void setBrand(string brand)
	{
	    my_Brand = brand;
	};
	void setSize(int size)
	{
        my_Size = size;
    };
	string getBrand()
	{
	    return my_Brand;
	};
	int getContents()
	{
	    return my_Contents;
	};
	int getSize()
	{
        return my_Size;
    };

};


#endif // SODACAN_H_INCLUDED
