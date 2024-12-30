#include "UmaSCE_Main.h"
#include <type_traits>
#include <iostream>
#include<math.h>

using namespace std;

UmaSCE_Main::UmaSCE_Main() 
{
	//private
	unstrike_v1_ept = 0;
	is_notice = true;

	//protected
    type_static = 0;
    friendship_static = 0;
    friendship_award = 0;
    enthusiasm_award = 0;
    training_award = 0;
    strike_point = 0;
    friendship_point = 0;
    speed_bonus = 0;
    stamina_bonus = 0;
    power_bonus = 0;
    willpower_bonus = 0;
    wit_bonus = 0;
    sp_bonus = 0;
	v1_ept = 0;
	v2_ept = 0;
	v3_ept = 0;
	v4main_ept = 0;
	v4fold_ept = 0;
	v4sp_ept = 0;
	v5main_ept = 0;
	v5fold_ept = 0;
	v5sp_ept = 0;

}

UmaSCE_Main::~UmaSCE_Main() {
    type_static = 0;
    friendship_static = 0;
    friendship_award = 0;
    enthusiasm_award = 0;
    training_award = 0;
    strike_point = 0;
    friendship_point = 0;
    speed_bonus = 0;
    stamina_bonus = 0;
    power_bonus = 0;
    willpower_bonus = 0;
    wit_bonus = 0;
    sp_bonus = 0;
	v1_ept = 0;
	v2_ept = 0;
	v3_ept = 0;
	v4main_ept = 0;
	v4fold_ept = 0;
	v4sp_ept = 0;
	v5main_ept = 0;
	v5fold_ept = 0;
	v5sp_ept = 0;
}

void UmaSCE_Main::Exchange(UmaSCE_Main temp) {
    swap(type_static, temp.type_static);
    swap(friendship_static, temp.friendship_static);
    swap(friendship_award, temp.friendship_award);
    swap(enthusiasm_award, temp.enthusiasm_award);
    swap(training_award, temp.training_award);
    swap(strike_point, temp.strike_point);
    swap(friendship_point, temp.friendship_point);
    swap(speed_bonus, temp.speed_bonus);
    swap(stamina_bonus, temp.stamina_bonus);
    swap(power_bonus, temp.power_bonus);
    swap(willpower_bonus, temp.willpower_bonus);
    swap(wit_bonus, temp.wit_bonus);
    swap(sp_bonus, temp.sp_bonus);
	swap(v1_ept, temp.v1_ept);
	swap(v2_ept, temp.v2_ept);
	swap(v3_ept, temp.v3_ept);
	swap(v4main_ept, temp.v4main_ept);
	swap(v4fold_ept, temp.v4fold_ept);
	swap(v4sp_ept, temp.v4sp_ept);
	swap(v5main_ept, temp.v5main_ept);
	swap(v5fold_ept, temp.v5fold_ept);
	swap(v5sp_ept, temp.v5sp_ept);
}

void UmaSCE_Main::Copy(UmaSCE_Main temp) {
    type_static = temp.type_static;
    friendship_static = temp.friendship_static;
    friendship_award = temp.friendship_award;
    enthusiasm_award = temp.enthusiasm_award;
    training_award = temp.training_award;
    strike_point = temp.strike_point;
    friendship_point = temp.friendship_point;
    speed_bonus = temp.speed_bonus;
    stamina_bonus = temp.stamina_bonus;
    power_bonus = temp.power_bonus;
    willpower_bonus = temp.willpower_bonus;
    wit_bonus = temp.wit_bonus;
    sp_bonus = temp.sp_bonus;
	v1_ept = temp.v1_ept;
	v2_ept = temp.v2_ept;
	v3_ept = temp.v3_ept;
	v4main_ept = temp.v4main_ept;
	v4fold_ept = temp.v4fold_ept;
	v4sp_ept = temp.v4sp_ept;
	v5main_ept = temp.v5main_ept;
	v5fold_ept = temp.v5fold_ept;
	v5sp_ept = temp.v5sp_ept;
}

void UmaSCE_Main::Input(string Val_Typename, int Value) 
{
	if (Value < 0 and is_notice)
	{
		throw("Value不能为负数");
		abort();
	}
    if (Val_Typename == "type_static" and is_notice) 
	{
        type_static = Value;
		if (type_static > 4)
		{
			throw("type_static的值只能是[ 0 , 4 ]");
			abort();
		}
    } 
	else if (Val_Typename == "friendship_static") {
        friendship_static = Value;
    } 
	else if (Val_Typename == "friendship_award") {
        friendship_award = Value;
    } 
	else if (Val_Typename == "enthusiasm_award") {
        enthusiasm_award = Value;
    } 
	else if (Val_Typename == "training_award") {
        training_award = Value;
    } 
	else if (Val_Typename == "strike_point") {
        strike_point = Value;
    } 
	else if (Val_Typename == "friendship_point") {
        friendship_point = Value;
    } 
	else if (Val_Typename == "speed_bonus") {
        speed_bonus = Value;
    } 
	else if (Val_Typename == "stamina_bonus") {
        stamina_bonus = Value;
    } 
	else if (Val_Typename == "power_bonus") {
        power_bonus = Value;
    } 
	else if (Val_Typename == "willpower_bonus") {
        willpower_bonus = Value;
    } 
	else if (Val_Typename == "wit_bonus") {
        wit_bonus = Value;
    } 
	else if (Val_Typename == "sp_bonus") {
        sp_bonus = Value;
	}
    else if (Val_Typename == "v1_ept") {
        v1_ept = Value;
	}
	else if (Val_Typename == "v2_ept") {
		v2_ept = Value;
	}
	else if (Val_Typename == "v3_ept") {
		v3_ept = Value;
	}
	else if (Val_Typename == "v4main_ept") {
		v4main_ept = Value;
	}
	else if (Val_Typename == "v4fold_ept") {
		v4fold_ept = Value;
	}
	else if (Val_Typename == "v4sp_ept") {
		v4sp_ept = Value;
	}
	else if (Val_Typename == "v5main_ept") {
		v5main_ept = Value;
	}
	else if (Val_Typename == "v5fold_ept") {
		v5fold_ept = Value;
	}
    else if (Val_Typename == "v5sp_ept") {
        v5sp_ept = Value;
    }
}

void UmaSCE_Main::Import(int type_static_, int friendship_static_, int friendship_award_, int enthusiasm_award_, int training_award_, int strike_point_, int friendship_point_, int speed_bonus_, int stamina_bonus_, int power_bonus_, int willpower_bonus_, int wit_bonus_, int sp_bonus_)
{
	type_static = type_static_;
	friendship_static = friendship_static_;
	friendship_award = friendship_award_;
	enthusiasm_award = enthusiasm_award_;
	training_award = training_award_;
	strike_point = strike_point_;
	friendship_point = friendship_point_;
	speed_bonus = speed_bonus_;
	stamina_bonus = stamina_bonus_;
	power_bonus = power_bonus_;
	willpower_bonus = willpower_bonus_;
	wit_bonus = wit_bonus_;
	sp_bonus = sp_bonus_;
}

void UmaSCE_Main::Output(string Val_Typename) const {
    if (Val_Typename == "type_static") 
	{
        cout << type_static;
    } 
	else if (Val_Typename == "friendship_static") {
        cout << friendship_static;
    } 
	else if (Val_Typename == "friendship_award") {
        cout << friendship_award;
    } 
	else if (Val_Typename == "enthusiasm_award") {
        cout << enthusiasm_award;
    } 
	else if (Val_Typename == "training_award") {
        cout << training_award;
    } 
	else if (Val_Typename == "strike_point") {
        cout << strike_point;
    } 
	else if (Val_Typename == "friendship_point") {
        cout << friendship_point;
    } 
	else if (Val_Typename == "speed_bonus") {
        cout << speed_bonus;
    } 
	else if (Val_Typename == "stamina_bonus") {
        cout << stamina_bonus;
    } 
	else if (Val_Typename == "power_bonus") {
        cout << power_bonus;
    } 
	else if (Val_Typename == "willpower_bonus") {
        cout << willpower_bonus;
    } 
	else if (Val_Typename == "wit_bonus") {
        cout << wit_bonus;
    } 
	else if (Val_Typename == "sp_bonus") {
        cout << sp_bonus;
	}
	else if (Val_Typename == "v1_ept") {
		cout << v1_ept;
	}
	else if (Val_Typename == "v2_ept") {
		cout << v2_ept;
	}
	else if (Val_Typename == "v3_ept") {
		cout << v3_ept;
	}
	else if (Val_Typename == "v4main_ept") {
		cout << v4main_ept;
	}
	else if (Val_Typename == "v4fold_ept") {
		cout << v4fold_ept;
	}
	else if (Val_Typename == "v4sp_ept") {
		cout << v4sp_ept;
	}
	else if (Val_Typename == "v5main_ept") {
		cout << v5main_ept;
	}
	else if (Val_Typename == "v5fold_ept") {
		cout << v5fold_ept;
	}
    else if (Val_Typename == "v5sp_ept") {
        cout << v5sp_ept;
    }
	else
	{
		if(is_notice)
		{
			throw ("无法识别的Val_Typename");
			abort();
		}
	}
}

void UmaSCE_Main::Destroy()
{
	type_static = 0;
	friendship_static = 0;
	friendship_award = 0;
	enthusiasm_award = 0;
	training_award = 0;
	strike_point = 0;
	friendship_point = 0;
	speed_bonus = 0;
	stamina_bonus = 0;
	power_bonus = 0;
	willpower_bonus = 0;
	wit_bonus = 0;
	sp_bonus = 0;
	v1_ept = 0;
	v2_ept = 0;
	v3_ept = 0;
	v4main_ept = 0;
	v4fold_ept = 0;
	v4sp_ept = 0;
	v5main_ept = 0;
	v5fold_ept = 0;
	v5sp_ept = 0;
}

void UmaSCE_Main::Destroy(string Val_Typename)
{
	if (Val_Typename == "ALL")
	{
		type_static = 0;
		friendship_static = 0;
		friendship_award = 0;
		enthusiasm_award = 0;
		training_award = 0;
		strike_point = 0;
		friendship_point = 0;
		speed_bonus = 0;
		stamina_bonus = 0;
		power_bonus = 0;
		willpower_bonus = 0;
		wit_bonus = 0;
		sp_bonus = 0;
		v1_ept = 0;
		v2_ept = 0;
		v3_ept = 0;
		v4main_ept = 0;
		v4fold_ept = 0;
		v4sp_ept = 0;
		v5main_ept = 0;
		v5fold_ept = 0;
		v5sp_ept = 0;
	}
    else if (Val_Typename == "EPT")
    {
		v1_ept = 0;
		v2_ept = 0;
		v3_ept = 0;
		v4main_ept = 0;
		v4fold_ept = 0;
		v4sp_ept = 0;
		v5main_ept = 0;
		v5fold_ept = 0;
		v5sp_ept = 0;
    }
	else if (Val_Typename == "VAL")
	{
		type_static = 0;
		friendship_static = 0;
		friendship_award = 0;
		enthusiasm_award = 0;
		training_award = 0;
		strike_point = 0;
		friendship_point = 0;
		speed_bonus = 0;
		stamina_bonus = 0;
		power_bonus = 0;
		willpower_bonus = 0;
		wit_bonus = 0;
		sp_bonus = 0;
	}
	else
	{
		if (is_notice)
		{
			throw("无法识别的Val_Typename");
			abort();
		}
	}
}

void UmaSCE_Main::SetNotice(bool is_notice_)
{
	is_notice = is_notice_;
}

void UmaSCE_Main::EvalV1()
{
	v1_ept = (friendship_award * 0.01 + 1) * (friendship_static * 0.01 + 1) * (enthusiasm_award * 0.002 + 1) * (training_award * 0.01 + 1);
	unstrike_v1_ept = (enthusiasm_award * 0.002 + 1) * (training_award * 0.01 + 1);
	if (v1_ept < 0 and is_notice)
	{
		throw("v1_ept的值发生异常，其结果不能为负数");
		abort();
	}
}

void UmaSCE_Main::EvalV2()
{
	int v2_bonus = 0;
	switch (type_static)
	{
	case 0:v2_bonus = speed_bonus; break;
	case 1:v2_bonus = stamina_bonus; break;
	case 2:v2_bonus = power_bonus; break;
	case 3:v2_bonus = willpower_bonus; break;
	case 4:v2_bonus = wit_bonus; break;
	}
	EvalV1();
	v2_ept = v1_ept + 0.1 * v1_ept * v2_bonus;
	if (v2_ept < 0 and is_notice)
	{
		throw("v2_ept的值发生异常，其结果不能为负数");
		abort();
	}
}

void UmaSCE_Main::EvalV3()
{
	int v3_bonus = 0;
	switch (type_static)
	{
	case 0:v3_bonus = speed_bonus; break;
	case 1:v3_bonus = stamina_bonus; break;
	case 2:v3_bonus = power_bonus; break;
	case 3:v3_bonus = willpower_bonus; break;
	case 4:v3_bonus = wit_bonus; break;
	}
	EvalV2();
	double strike_rate = (strike_point + static_cast<double>(100)) / (strike_point + 550);
	double unstrike_rate = 100 / (strike_point + static_cast<double>(550));
	double strike_v2_ept = v1_ept + 0.1 * v1_ept * v3_bonus;
	double unstrike_v2_ept = unstrike_v1_ept + 0.1 * unstrike_v1_ept * v3_bonus;
	v3_ept = ((strike_rate * strike_v2_ept + (unstrike_rate * unstrike_v2_ept) * 4) - 0.909) * 10000;
	if (v3_ept < 0 and is_notice)
	{
		throw("v3_ept的值发生异常，其结果不能为负数");
		abort();
	}
}

void UmaSCE_Main::EvalV4()
{
	EvalV2();
	double unstrike_v2_ept = unstrike_v1_ept + 0.1 * unstrike_v1_ept * sp_bonus;
	double strike_rate = (strike_point + static_cast<double>(100)) / (strike_point + 550);
	double unstrike_rate = 100 / (strike_point + static_cast<double>(550));
	double failure_rate = ((static_cast<double>(80) - friendship_point) / 5) / 72;
	double failure_strike_rate = failure_rate * strike_rate;
	double success_strike_rate = strike_rate - failure_strike_rate;
	double failure_unstrike_rate = failure_rate * unstrike_rate;
	double success_unstrike_rate = unstrike_rate - failure_unstrike_rate;

	v4main_ept = ((v2_ept * success_strike_rate) + (unstrike_v2_ept * failure_strike_rate) - strike_rate) * 10000;
	v4sp_ept = ((failure_strike_rate + failure_unstrike_rate) * (unstrike_v1_ept + 0.1 * unstrike_v1_ept * sp_bonus) + (success_strike_rate + success_unstrike_rate) * (v1_ept + 0.1 * v1_ept * sp_bonus) - (strike_rate + unstrike_rate)) * 10000;

	switch (type_static)
	{
	case 0:(v4fold_ept = unstrike_rate * (4 * unstrike_v1_ept + 0.1 * unstrike_v1_ept * (stamina_bonus + power_bonus + willpower_bonus + wit_bonus)) - unstrike_rate) * 10000;break;
	case 1:(v4fold_ept = unstrike_rate * (4 * unstrike_v1_ept + 0.1 * unstrike_v1_ept * (speed_bonus + power_bonus + willpower_bonus + wit_bonus)) - unstrike_rate) * 10000; break;
	case 2:(v4fold_ept = unstrike_rate * (4 * unstrike_v1_ept + 0.1 * unstrike_v1_ept * (speed_bonus + stamina_bonus + willpower_bonus + wit_bonus)) - unstrike_rate) * 10000; break;
	case 3:(v4fold_ept = unstrike_rate * (4 * unstrike_v1_ept + 0.1 * unstrike_v1_ept * (speed_bonus + stamina_bonus + power_bonus + wit_bonus)) - unstrike_rate) * 10000; break;
	case 4:(v4fold_ept = unstrike_rate * (4 * unstrike_v1_ept + 0.1 * unstrike_v1_ept * (speed_bonus + stamina_bonus + power_bonus + willpower_bonus)) - unstrike_rate) * 10000; break;
	default:if (is_notice) { throw("意料之外的type_static值"); abort(); }
	}
	if(is_notice)
	{
		if (v4main_ept < 0)
		{
			throw("v4main_ept的值发生异常，其结果不能为负数");
			abort();
		}
		if (v4fold_ept < 0)
		{
			throw("v4fold_ept的值发生异常，其结果不能为负数");
			abort();
		}
		if (v4sp_ept < 0)
		{
			throw("v4sp_ept的值发生异常，其结果不能为负数");
			abort();
		}
	}
}

void UmaSCE_Main::EvalDi(UmaSCE_Main_Diset diset)
{
	UmaSCE_Main transcript{};
	int all_friendship_award = (((friendship_award * 0.01 + 1) * (friendship_static * 0.01 + 1)) - 1) * 100;

	int arrv[5] = { all_friendship_award,enthusiasm_award,training_award,strike_point,friendship_point };
	double scaling_di[5] = { 0,0,0,0,0 };

	for (int i = 0; i < 5; i++)
	{
		scaling_di[i] = - cos(arrv[i] * 0.5 * sqrt(diset.abex_di[i] * diset.abex_di[i] * diset.tolerance_di[i] * 0.01));
	}
	transcript.type_static = type_static;
	if()
	transcript.friendship_award += all_friendship_award * scaling_di[0];
	transcript.enthusiasm_award += enthusiasm_award * scaling_di[1];
	transcript.training_award += training_award * scaling_di[2];
	transcript.strike_point += strike_point * scaling_di[3];
	transcript.friendship_point += friendship_point * scaling_di[4];
	transcript.speed_bonus = speed_bonus;
	transcript.stamina_bonus = stamina_bonus;
	transcript.power_bonus = power_bonus;
	transcript.willpower_bonus = willpower_bonus;
	transcript.wit_bonus = wit_bonus;
	transcript.sp_bonus = sp_bonus;
	transcript.EvalV4();
	v4main_ept = transcript.v4main_ept;
	v4fold_ept = transcript.v4fold_ept;
	v4sp_ept = transcript.v4sp_ept;
}

void UmaSCE_Main::EvalV5()
{
}
