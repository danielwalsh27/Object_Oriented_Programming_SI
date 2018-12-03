#include <iostream>
using namespace std;


class Size{
private:
	int length, width;
public:
	Size() 					{length = 0, width = 0;}
	Size(int len, int wid)
	:length(len), width(wid) {}
	int getLen()				{ return length;}
	int getWid()				{ return width;}
	int getArea(int len, int wid) {return length * width;}
	void setLen(int len) 	{ length = len;}
	void setWid(int wid)		{ width = wid;}

};

class Kitchen : private Size{
private:
	string microwave;
	bool stove, oven, fridge, sink;
public:
	Kitchen() {Size(), microwave = "", stove = false, oven = false, fridge = false, sink = false;}
	Kitchen(int len, int wid, string mic, bool sto, bool ov, bool frid, bool si)
	:Size(len, wid), microwave(mic), stove(sto), oven(ov), fridge(frid), sink(si){}
	string getMic() 			{ return microwave;}
	bool getStove() 			{ return stove;}
	bool getOven() 			{ return oven;}
	bool getFridge() 		{ return fridge;}
	bool getSink() 			{ return sink;}
	void setMic(string mic) 	{ microwave = mic;}
	void setSto(bool sto) 	{ stove = sto;}
	void setOv(bool ov) 		{ oven = ov;}
	void setFrid(bool frid) 	{ fridge = frid;}
	void setSink(bool si) 	{ sink = si;}
};

class Garage : public Size{
private:
	bool parkSpot;
public:
	Garage() {Size(), parkSpot = false;}
	Garage(int len, int wid, bool spot)
	:Size(len, wid), parkSpot(spot){}
	bool getSpot()			{ return parkSpot;}
	void setSpot(bool spot)	{ parkSpot = spot;}
};

class LivingRoom : public Size{
private:
	bool couch;
	string TV;
public:
	LivingRoom()				{Size(), couch = false, TV = "";}
	LivingRoom(int len, int wid, bool c, string tv)
	:Size(len, wid), couch(c), TV(tv){}
	bool getCou() 			{ return couch;}
	string getTV() 			{ return TV;}
	void setCou(bool c) 		{ couch = c;}
	void setTV(string tv) 	{ TV = tv;}
};

class MasterBed : public Size{
private:
	bool bed, closet;
public:
	MasterBed() 				{Size(), bed = false, closet = false;}
	MasterBed(int len, int wid, bool b, bool c)
	:Size(len, wid), bed(b), closet(c){}
	bool getBed()			{ return bed;}
	bool getClo()			{ return closet;}
	void setBed(bool b)		{ bed = b;}
	void setClo(bool c) 		{ closet = c;}
};

class House{
private:
	Kitchen MyKitchen;
	Garage MyGarage;
	LivingRoom MyLivingRoom;
	MasterBed MyMasterBed;
public:
	House() 					{ Kitchen(), Garage(), LivingRoom(), MasterBed();}
	House(Kitchen myKit, Garage myGar, LivingRoom myLiv, MasterBed myMaster)
	:MyKitchen(myKit), MyGarage(myGar), MyLivingRoom(myLiv), MyMasterBed(myMaster){}
	House(int l, int w, string micro, bool sto, bool ov, bool frid, bool si, int le, int wi, bool spot, int len, int wid, bool cou, string tv,int leng, int widt, bool b, bool clo)
	:MyKitchen(l, w, micro, sto, ov, frid, si), MyGarage(le, wi, spot), MyLivingRoom(len, wid, cou, tv), MyMasterBed(leng, widt, b, clo){}
	Kitchen getKit() 		{ return MyKitchen;}
	Garage getGar() 			{ return MyGarage;}
	LivingRoom getLiv() 		{ return MyLivingRoom;}
	MasterBed getMas() 		{ return MyMasterBed;}
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
	House MyHouse(100,50,"GE Microwave",true,true,true,true,200,100,true,400,200,true,"Samsung 55inch",400,100,true,false);
}
