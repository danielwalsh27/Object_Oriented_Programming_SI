//This was not something I had the students do on the whiteboard, I gave
//them printouts and walked through the code with them. In this Program we'll
//use Composition and Inheritance. The inheritance is too the prior program, but
//the last class "House" is composed of ("has-a" relationship) all other classes
//in the program

#include <iostream>
using namespace std;

//Base Class
//this class holds the sqFt of each location of the house
//later to be calculated by the House class
class Size{
private:
	int length, width;
public:
	Size() 					{length = 0, width = 0;}		//default constructor
	Size(int len, int wid)								//parameterized constructor
	:length(len), width(wid) {}
	int getLen()	 const		{ return length;}			//getters
	int getWid()	 const		{ return width;}
	int getArea() const		{ return length * width;}
	void setLen(int len) 	{ length = len;}				//setters
	void setWid(int wid)		{ width = wid;}
};

//Derived Class, Inherits Size
class Kitchen : public Size{
private:
	string microwave;									//each private member needs a setter and getter
	bool stove, oven, fridge, sink;
public:													//default and parameterized constructors
	Kitchen() {Size(), microwave = "", stove = false, oven = false, fridge = false, sink = false;}
	Kitchen(int len, int wid, string mic, bool sto, bool ov, bool frid, bool si)
	:Size(len, wid), microwave(mic), stove(sto), oven(ov), fridge(frid), sink(si){}
	string getMic() const	{ return microwave;}			//getters
	bool getStove() const	{ return stove;}
	bool getOven() const		{ return oven;}
	bool getFridge() const	{ return fridge;}
	bool getSink() const		{ return sink;}
	void setMic(string mic) 	{ microwave = mic;}			//setters
	void setSto(bool sto) 	{ stove = sto;}
	void setOv(bool ov) 		{ oven = ov;}
	void setFrid(bool frid) 	{ fridge = frid;}
	void setSink(bool si) 	{ sink = si;}
};

//Derived Class, Inherits Size
class Garage : public Size{
private:
	bool parkSpot;										//each private member needs a setter and getter
public:													//default constructor and parameterized constructor
	Garage() {Size(), parkSpot = false;}
	Garage(int len, int wid, bool spot)
	:Size(len, wid), parkSpot(spot){}
	bool getSpot() const		{ return parkSpot;}			//getter
	void setSpot(bool spot)	{ parkSpot = spot;}			//setter
};

//Derived Class, Inherits Size
class LivingRoom : public Size{
private:
	bool couch;											//each private member needs a setter and getter
	string TV;
public:													//default constructor and parameterized constructor
	LivingRoom()				{Size(), couch = false, TV = "";}
	LivingRoom(int len, int wid, bool c, string tv)
	:Size(len, wid), couch(c), TV(tv){}
	bool getCou() const		{ return couch;}				//getters
	string getTV() const		{ return TV;}
	void setCou(bool c) 		{ couch = c;}				//setters
	void setTV(string tv) 	{ TV = tv;}
};

//Derived Class, Inherits Size
class MasterBed : public Size{
private:
	bool bed, closet;									//each private member needs a setter and getter
public:													//default constructor and parameterized constructor
	MasterBed() 				{Size(), bed = false, closet = false;}
	MasterBed(int len, int wid, bool b, bool c)
	:Size(len, wid), bed(b), closet(c){}
	bool getBed()			{ return bed;}				//getters
	bool getClo()			{ return closet;}
	void setBed(bool b)		{ bed = b;}					//setters
	void setClo(bool c) 		{ closet = c;}
};

//House class DOES NOT inherit from size. This is composed of all the other 4 classes
//It has three constructors, default, object parameterized & primitive type(in obj order)
//			one with 0 parameters^, 		one with 4^	    	and 		one with 18^

class House{
private:													//adding objects as data members for the House Class
	Kitchen MyKitchen;
	Garage MyGarage;
	LivingRoom MyLivingRoom;
	MasterBed MyMasterBed;
public:
	House() 					{Kitchen(), Garage(), LivingRoom(), MasterBed();}		//calling all objects default constructors
	House(Kitchen myKit, Garage myGar, LivingRoom myLiv, MasterBed myMaster)		//calling all objects parameterized constructors
	:MyKitchen(myKit), MyGarage(myGar), MyLivingRoom(myLiv), MyMasterBed(myMaster){}
	House(int l, int w, string micro, bool sto, bool ov, bool frid, bool si, int le, int wi, bool spot, int len, int wid, bool cou, string tv,int leng, int widt, bool b, bool clo)
	:MyKitchen(l, w, micro, sto, ov, frid, si), MyGarage(le, wi, spot), MyLivingRoom(len, wid, cou, tv), MyMasterBed(leng, widt, b, clo){}

//getters
	Kitchen getKit() const			{ return MyKitchen; }
	Garage getGar() const			{ return MyGarage; }
	LivingRoom getLiv() const		{ return MyLivingRoom; }
	MasterBed getMas() const			{ return MyMasterBed; }
	int get_HouseSqFt() const 		{
		cout << MyKitchen.getArea() << " + " << MyGarage.getArea() << " + "<< MyLivingRoom.getArea() <<" + " << MyMasterBed.getArea() << " = \n";
		return MyKitchen.getArea() + MyGarage.getArea() + MyLivingRoom.getArea() + MyMasterBed.getArea();
	}
//setters
	void setKit(string micro, bool sto, bool ov, bool frid, bool si){
		MyKitchen.setMic(micro);
		MyKitchen.setSto(sto);
		MyKitchen.setOv(ov);
		MyKitchen.setFrid(frid);
		MyKitchen.setSink(si);
	}
	void setGar(bool spot){
		MyGarage.setSpot(spot);
	}
	void setLiv(bool cou, string tv){
		MyLivingRoom.setCou(cou);
		MyLivingRoom.setTV(tv);
	}
	void setMas(bool b, bool clo){
		MyMasterBed.setBed(b);
		MyMasterBed.setClo(clo);
	}
};

int main(){
	Kitchen MyKitchen(25, 17,"Amazon Microwave",true,true,true,true);
	Garage MyGarage(30,30,true);
	LivingRoom MyLivingRoom(20, 28, true, "Vizio 40in");
	MasterBed MyMasterBed(15, 18, true, false);
	House Housey(MyKitchen, MyGarage, MyLivingRoom, MyMasterBed);
//calling the getSqFt function on the House.
	cout << Housey.get_HouseSqFt();

}
