#include <iostream>
#include"UmaSCE_Main.h"
using namespace std;

int main()
{
	UmaSCE_Main uma1;
	UmaSCE_Main uma2;
	try
	{
		uma1.Output("dsdhshdh");
	}
	catch (exception&q)
	{
		q.what();
	}
	//double a=0;
	//uma1.Import(0, 10, 30, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0);
	//UmaSCE_Main::UmaSCE_Main_Diset diset;
	//for (int i = 0; i < 5; i++)
	//{
	//	diset.abex_di[i] = 20;
	//	diset.tolerance_di[i] = 100;
	//}
	////uma1.EvalDi(diset);
	//uma1.EvalV4();
	//uma1.Output("v4main_ept") ;
	//uma1.Copy(uma2);
	//uma1.Export("type_static");
	return 0;
}

