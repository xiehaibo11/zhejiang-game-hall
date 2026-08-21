
/* std::__ndk1::__tree<unsigned int, std::__ndk1::less<unsigned int>,
   v8::internal::ZoneAllocator<unsigned int> >::destroy(std::__ndk1::__tree_node<unsigned int,
   void*>*) */

void __thiscall
std::__ndk1::
__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>::
destroy(__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
        *this,__tree_node *param_1)

{
  for (; param_1 != (__tree_node *)0x0; param_1 = *(__tree_node **)(param_1 + 8)) {
    destroy(this,*(__tree_node **)param_1);
  }
  return;
}

