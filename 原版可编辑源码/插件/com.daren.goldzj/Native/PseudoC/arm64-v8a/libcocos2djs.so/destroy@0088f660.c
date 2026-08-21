
/* std::__ndk1::__tree<void*, std::__ndk1::less<void*>, std::__ndk1::allocator<void*>
   >::destroy(std::__ndk1::__tree_node<void*, void*>*) */

void __thiscall
std::__ndk1::__tree<void*,std::__ndk1::less<void*>,std::__ndk1::allocator<void*>>::destroy
          (__tree<void*,std::__ndk1::less<void*>,std::__ndk1::allocator<void*>> *this,
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

