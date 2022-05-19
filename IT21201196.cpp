//code system admin
#include<iostream>
#include<cstring>
#define SIZE
using namespace std;

//class
class systemAdmin:public registeredUser{
	private:
		string hotelId;
		string hotelName;
		string location;
		int contactNo;
		
	public:
		systemAdmin();
		void addHotel(string hId,string hName,string hLocation,int cNo);
		void updateHotel();
		void deleteHotel();
		void changedetails();
		~systemAdmin();
};

//code for system manager

// classes
class systemManager:public registeredUser{
	private:
		int reviewNo;
		int reportNo;
		string review;
	public:
		systemManager();
		void getCashFlowSt(int repNo,report *r1);
		void enterReview();
		void getIncomeReport(int repNo,report *r);
		~systemManager();
};

//code for table class
class table{
	private:
		int tableNo;
		int noOfPeople;
		int date;
		string time;
		string tableType;
		int menuNo;
		int status;
		int noOfSeats;
		
	public:
		table();
		void diplayMenu();
		void tableStatus(int id);
		string getStatus(int id);
		void changeStatus();
		void displaySeats();
		~table();
		
};

//code for report class
class report{
	private:
		payment *p1
		int reportID;
		string reportType;
		float cashIn;
		void cashOut;
		
	public:
		report(payment *p);
		void storeCashIn();
		void storeCashOut();
		float CashOut();
		~report();
};


int main(){
	
	systemAdmin ad1;
	systemManager man1;
	Hotel *hotel1;
	hotel1= new hotel();
	payment *p;
	p=new payment();
	report *r1;
	r1=new report(p);
	
	
	delete hotel1;
	delete p;
	delete r1;
	
	return 0;
	
}
