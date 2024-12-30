#pragma once

#include<string>
using namespace std;

class UmaSCE_Main
{
private:

	double unstrike_v1_ept;
	bool is_notice;

protected:


	int type_static;
	int friendship_static;

	int friendship_award;
	int enthusiasm_award;
	int training_award;

	int strike_point;
	int friendship_point;

	int speed_bonus;
	int stamina_bonus;
	int power_bonus;
	int willpower_bonus;
	int wit_bonus;
	int sp_bonus;

	double v1_ept;
	double v2_ept;
	double v3_ept;

	double v4main_ept;
	double v4fold_ept;
	double v4sp_ept;

	int v5main_ept;
	int v5fold_ept;
	int v5sp_ept;
public:
	UmaSCE_Main();
	~UmaSCE_Main();

	struct UmaSCE_Main_Diset
	{
		int abex_di[5] = {};
		int tolerance_di[5] = {};
	};

	void Exchange(UmaSCE_Main);//a与b交换
	void Copy(UmaSCE_Main);//a从b复制（b的值给a)
	void Input(string,int);//从外部赋值给a
	void Import(int, int, int, int, int, int, int, int, int, int, int, int, int);//从外部赋值给a
	void Output(string) const;//输出a的值
	void Destroy();//清空a的值
	void Destroy(string);//清空a的值

	void SetNotice(bool is_notice_);

	void EvalV1();//计算v1
	void EvalV2();//计算v2
	void EvalV3();//计算v3
	void EvalV4();//计算v4
	void EvalDi(UmaSCE_Main_Diset diset);//计算di
	void EvalV5();//计算v5

};
