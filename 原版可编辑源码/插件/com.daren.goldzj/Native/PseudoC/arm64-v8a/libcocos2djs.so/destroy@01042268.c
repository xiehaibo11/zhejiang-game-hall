
/* std::__ndk1::__tree<std::__ndk1::__value_type<double, unsigned int>,
   std::__ndk1::__map_value_compare<double, std::__ndk1::__value_type<double, unsigned int>,
   std::__ndk1::less<double>, true>, v8::internal::ZoneAllocator<std::__ndk1::__value_type<double,
   unsigned int> > >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<double, unsigned
   int>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<double,unsigned_int>,std::__ndk1::__map_value_compare<double,std::__ndk1::__value_type<double,unsigned_int>,std::__ndk1::less<double>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<double,unsigned_int>>>
::destroy(__tree<std::__ndk1::__value_type<double,unsigned_int>,std::__ndk1::__map_value_compare<double,std::__ndk1::__value_type<double,unsigned_int>,std::__ndk1::less<double>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<double,unsigned_int>>>
          *this,__tree_node *param_1)

{
  for (; param_1 != (__tree_node *)0x0; param_1 = *(__tree_node **)(param_1 + 8)) {
    destroy(this,*(__tree_node **)param_1);
  }
  return;
}

