/*企业发放的奖金根据利润提成。利润（I）低于或等于10万元时，奖金可提10%；利润高于10万元，低于20万（100000<I<=200000）元时，
低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；200000<I<=400000时，高于20万元的部分按5%提成；
400000<I<=600000时，高于40万元的部分按3%提成；600000<I<=1000000时，高于60万的部分按1.5%提成；
I>1000000时，超过100万的部分按1%提成。从键盘输入当月利润I，求应发放奖金总数。要求：用switch语句编程序实现。
**输入格式要求："%ld" 提示信息："请输入利润："
**输出格式要求："奖金是%10.2f"
程序的运行示例如下：
请输入利润：234000
奖金是  19200.00*/
#include<iostream>
using namespace ::std;
//int main()
//{
//	int I=0;
//	float bonus;
//	cout<<"提示信息：\"请输入利润:\""<<endl;
//
//	cin>>I;
//	int tmp=I/100000;
//	switch (tmp) {
//		case 0:
//			bonus=I*0.1;
//			break;
//		case 1:
//			bonus=0.075*(I-1e5)+1e5*0.1;
//			break;
//		case 2:
//		case 3:
//			bonus=0.05*(I-2e5)+0.075*1e5+1e5*0.1;
//			break;
//		case 4:
//		case 5:
//			bonus=0.03*(I-4e5)+0.05*2e5+0.075*1e5+1e5*0.1;
//			break;
//		case 6:
//		case 7:
//		case 8:
//		case 9:
//			bonus=0.015*(I-6e5)+0.03*2e5+0.05*2e5+0.075*1e5+1e5*0.1;
//			break;
//		default:
//			bonus=0.01*(I-1e6)+0.015*4e5+0.03*2e5+0.05*2e5+0.075*1e5+1e5*0.1;
//			break;
//	}
//	printf("奖金是%.2f",bonus);
//}
