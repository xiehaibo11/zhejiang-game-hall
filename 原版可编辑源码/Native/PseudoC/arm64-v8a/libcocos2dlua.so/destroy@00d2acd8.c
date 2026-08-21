
/* std::__ndk1::__tree<std::__ndk1::__value_type<int, std::__ndk1::vector<unsigned short,
   std::__ndk1::allocator<unsigned short> > >, std::__ndk1::__map_value_compare<int,
   std::__ndk1::__value_type<int, std::__ndk1::vector<unsigned short,
   std::__ndk1::allocator<unsigned short> > >, std::__ndk1::less<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<int, std::__ndk1::vector<unsigned short,
   std::__ndk1::allocator<unsigned short> > > >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<int, std::__ndk1::vector<unsigned
   short, std::__ndk1::allocator<unsigned short> > >, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<int,std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>>
::destroy(__tree<std::__ndk1::__value_type<int,std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>>
          *this,__tree_node *param_1)

{
  void *pvVar1;
  
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    pvVar1 = *(void **)(param_1 + 0x28);
    if (pvVar1 != (void *)0x0) {
      *(void **)(param_1 + 0x30) = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(param_1);
    return;
  }
  return;
}

