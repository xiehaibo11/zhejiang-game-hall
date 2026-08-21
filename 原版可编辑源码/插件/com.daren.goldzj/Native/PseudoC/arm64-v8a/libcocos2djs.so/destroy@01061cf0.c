
/* std::__ndk1::__tree<int, std::__ndk1::less<int>, std::__ndk1::allocator<int>
   >::destroy(std::__ndk1::__tree_node<int, void*>*) */

void __thiscall
std::__ndk1::__tree<int,std::__ndk1::less<int>,std::__ndk1::allocator<int>>::destroy
          (__tree<int,std::__ndk1::less<int>,std::__ndk1::allocator<int>> *this,__tree_node *param_1
          )

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    operator_delete(param_1);
    return;
  }
  return;
}

