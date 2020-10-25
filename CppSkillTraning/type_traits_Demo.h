#pragma once
/*!
 * \file        type_traits_Demo.h
 * \author      Timor
 * \date        2020/10/23
 * \description 类型特征萃取
 * \reference   Book 《Boost程序库揭秘》
 */
template<typename U,typename V>
auto func(U u, V v)->decltype(u + v)
{
	return u + v;
}
namespace Type_Traits {

	//is_integral 的实现原理
	template<class T, T val>
	struct integral_constant
	{
		typedef integral_constant<T, val> type;
		typedef T                         value_type;
		static const T                    value = val;
	};

	typedef integral_constant<bool, true>   true_type;
	typedef integral_constant<bool, false>  false_type;

	template<typename T>
	struct is_Integral :false_type {};

	//模板特化技术
	template<>
	struct is_Integral<bool> : ::true_type {};

	template<>
	struct is_Integral<int> : ::true_type {};

	template<>
	struct is_Integral<char> : ::true_type {};

	template<>
	struct is_Integral<short> : ::true_type {};

	template<>
	struct is_Integral<unsigned> : ::true_type {};

	//实现元函数：如果输入的元数据T是指针类型就返回const T，否则返回const T*

}




