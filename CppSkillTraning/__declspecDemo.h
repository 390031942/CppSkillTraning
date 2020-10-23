#pragma once
/*!
 * \file        __declspecDemo.h
 * \author      Timor
 * \date        2020/10/23
 * \description Keyword __declspec Demo
 *              '__declspec'��Microsoft c++��ר�õĹؼ���
 *              �������һЩ���Կ��ԶԱ�׼C++�������䡣 
 */

/***** __declspec(novtable) �÷�*****/

//ʵ�����ã�����һ�� �������麯���� ����
#define interface class __declspec(novtable)

interface ISomething
{
public:
	virtual void Method_One();
	virtual void Method_Two();
};

#undef interface

/***** __declspec(property(get=FN_Get, put=PN_Put)) varType varName; *****/

//ʵ�����ã��á�=�������������һ�����ݽ���get��set�����������ܿ���get��set��Ȩ

class TestClass_Property
{
private:
	int private_var;
public:
	__declspec(property(get = GetVar, put = SetVar)) int public_var;

	int GetVar() { return private_var; }
	void SetVar(int value) { private_var = value; }
};

/***** __declspec( align(#) ) *****/

//ʵ�����ã��ṹ�� ���� �е� �ֽڶ���
#pragma pack( push, 4 )

__declspec(align(32))struct alignTest_struct_1
{
	int i1;
	double d1;
	int i2;
	int i3;
};

struct alignTest_struct_2
{
	int i1;
	double d1;
	int i2;
	int i3;
};

