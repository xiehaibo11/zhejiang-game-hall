
/* std::__ndk1::__tree<int, std::__ndk1::less<int>, v8::internal::ZoneAllocator<int>
   >::destroy(std::__ndk1::__tree_node<int, void*>*) */

void __thiscall
std::__ndk1::__tree<int,std::__ndk1::less<int>,v8::internal::ZoneAllocator<int>>::destroy
          (__tree<int,std::__ndk1::less<int>,v8::internal::ZoneAllocator<int>> *this,
          __tree_node *param_1)

{
  for (; param_1 != (__tree_node *)0x0; param_1 = *(__tree_node **)(param_1 + 8)) {
    destroy(this,*(__tree_node **)param_1);
  }
  return;
}

