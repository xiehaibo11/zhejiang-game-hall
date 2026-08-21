
/* std::__ndk1::__tree<std::__ndk1::__value_type<int, int>, std::__ndk1::__map_value_compare<int,
   std::__ndk1::__value_type<int, int>, std::__ndk1::less<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<int, int> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<int, int>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
::destroy(__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
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

