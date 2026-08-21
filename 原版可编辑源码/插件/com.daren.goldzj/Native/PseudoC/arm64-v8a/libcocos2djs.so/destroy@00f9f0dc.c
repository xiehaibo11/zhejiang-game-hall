
/* std::__ndk1::__tree<unsigned long, std::__ndk1::less<unsigned long>,
   std::__ndk1::allocator<unsigned long> >::destroy(std::__ndk1::__tree_node<unsigned long, void*>*)
    */

void __thiscall
std::__ndk1::
__tree<unsigned_long,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<unsigned_long>>::
destroy(__tree<unsigned_long,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<unsigned_long>>
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

