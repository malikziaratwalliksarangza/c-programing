# include <iostream>
using namespace std;
class Distance
{
	private:
		int foot,inch;
		public:
			Distance():foot(0),inch(0){}
	Distance(int f,int in):foot(f),inch(in) {}
	void getdist()
	{
	cout<<"enter foot =";
	cin>>foot;
	cout<<"enter inch =";
	cin>>inch;
	}
	void displaydist()
	{
		cout<<foot<<"-"<<inch<<endl;
	}
	void sub_dist(Distance,Distance);
};
void Distance::sub_dist(Distance d2,Distance d3)
{
	inch=d2.inch-inch-d3.inch;
	foot=0;
	foot=d2.foot-d3.foot;
}
int main()
{
	Distance dist1,dist3;
	dist1.displaydist();
	dist3.getdist();
	Distance dist2(6,7);
	dist2.displaydist();
	dist1.getdist();
	dist3.sub_dist(dist1,dist2);
	
	
	cout<<"dist1=";
	dist1.displaydist();
	cout<<"dist2=";
	dist2.displaydist();
	cout<<"dist3=";
	dist3.displaydist();
	cout<<endl;
return 0;
}
