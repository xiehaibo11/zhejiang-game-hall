
/* std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::InstanceType,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__map_value_compare<v8::internal::InstanceType,
   std::__ndk1::__value_type<v8::internal::InstanceType, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::less<v8::internal::InstanceType>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::InstanceType,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   > >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::InstanceType,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::InstanceType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<v8::internal::InstanceType,std::__ndk1::__value_type<v8::internal::InstanceType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<v8::internal::InstanceType>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::InstanceType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
::destroy(__tree<std::__ndk1::__value_type<v8::internal::InstanceType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<v8::internal::InstanceType,std::__ndk1::__value_type<v8::internal::InstanceType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<v8::internal::InstanceType>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::InstanceType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    if (((byte)param_1[0x28] & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x38));
    }
    operator_delete(param_1);
    return;
  }
  return;
}

