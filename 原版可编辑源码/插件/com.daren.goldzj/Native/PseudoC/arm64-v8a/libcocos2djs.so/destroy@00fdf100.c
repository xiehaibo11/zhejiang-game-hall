
/* std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::InstanceType, int>,
   std::__ndk1::__map_value_compare<v8::internal::InstanceType,
   std::__ndk1::__value_type<v8::internal::InstanceType, int>,
   std::__ndk1::less<v8::internal::InstanceType>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::InstanceType, int> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::InstanceType, int>,
   void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::InstanceType,int>,std::__ndk1::__map_value_compare<v8::internal::InstanceType,std::__ndk1::__value_type<v8::internal::InstanceType,int>,std::__ndk1::less<v8::internal::InstanceType>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::InstanceType,int>>>
::destroy(__tree<std::__ndk1::__value_type<v8::internal::InstanceType,int>,std::__ndk1::__map_value_compare<v8::internal::InstanceType,std::__ndk1::__value_type<v8::internal::InstanceType,int>,std::__ndk1::less<v8::internal::InstanceType>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::InstanceType,int>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    operator_delete(param_1);
    return;
  }
  return;
}

