#pragma once
/*!
 * \file        type_traits_Demo.h
 * \author      Timor
 * \date        2020/10/23
 * \description ����������ȡ
 * \reference   Book ��Boost�������ء�
 */
template<typename U,typename V>
auto func(U u, V v)->decltype(u + v)
{
	return u + v;
}
namespace Type_Traits {

	//is_integral ��ʵ��ԭ��
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

	//ģ���ػ�����
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

	//ʵ��Ԫ��������������Ԫ����T��ָ�����;ͷ���const T�����򷵻�const T*

}




