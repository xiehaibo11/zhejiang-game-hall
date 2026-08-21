
/* std::__ndk1::__tree<std::__ndk1::pair<v8::internal::compiler::RpoNumber, int>,
   std::__ndk1::less<std::__ndk1::pair<v8::internal::compiler::RpoNumber, int> >,
   v8::internal::ZoneAllocator<std::__ndk1::pair<v8::internal::compiler::RpoNumber, int> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::pair<v8::internal::compiler::RpoNumber, int>,
   void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::pair<v8::internal::compiler::RpoNumber,int>,std::__ndk1::less<std::__ndk1::pair<v8::internal::compiler::RpoNumber,int>>,v8::internal::ZoneAllocator<std::__ndk1::pair<v8::internal::compiler::RpoNumber,int>>>
::destroy(__tree<std::__ndk1::pair<v8::internal::compiler::RpoNumber,int>,std::__ndk1::less<std::__ndk1::pair<v8::internal::compiler::RpoNumber,int>>,v8::internal::ZoneAllocator<std::__ndk1::pair<v8::internal::compiler::RpoNumber,int>>>
          *this,__tree_node *param_1)

{
  for (; param_1 != (__tree_node *)0x0; param_1 = *(__tree_node **)(param_1 + 8)) {
    destroy(this,*(__tree_node **)param_1);
  }
  return;
}

