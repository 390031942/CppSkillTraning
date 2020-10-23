#pragma once
/*!
 * \file        __declspecDemo.h
 * \author      Timor
 * \date        2020/10/23
 * \description Keyword __declspec Demo
 *              '__declspec'是Microsoft c++中专用的关键字
 *              它配合着一些属性可以对标准C++进行扩充。 
 */

/***** __declspec(novtable) 用法*****/

//实际作用：定义一个 不生成虚函数表 的类
#define interface class __declspec(novtable)

interface ISomething
{
public:
	virtual void Method_One();
	virtual void Method_Two();
};

#undef interface

/***** __declspec(property(get=FN_Get, put=PN_Put)) varType varName; *****/

//实际作用：用“=”操作符对类的一个数据进行get或set操作，而且能控制get和set的权

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

//实际作用：结构体 或类 中的 字节对齐
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

