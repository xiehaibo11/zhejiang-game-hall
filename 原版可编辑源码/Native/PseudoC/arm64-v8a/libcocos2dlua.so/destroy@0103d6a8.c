
/* std::__ndk1::__tree<long long, std::__ndk1::greater<long long>, std::__ndk1::allocator<long long>
   >::destroy(std::__ndk1::__tree_node<long long, void*>*) */

void __thiscall
std::__ndk1::__tree<long_long,std::__ndk1::greater<long_long>,std::__ndk1::allocator<long_long>>::
destroy(__tree<long_long,std::__ndk1::greater<long_long>,std::__ndk1::allocator<long_long>> *this,
       __tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    operator_delete(param_1);
    return;
  }
  return;
}

