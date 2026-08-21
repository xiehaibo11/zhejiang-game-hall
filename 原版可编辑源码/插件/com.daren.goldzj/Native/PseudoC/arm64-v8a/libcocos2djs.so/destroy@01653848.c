
/* std::__ndk1::__tree<v8::internal::compiler::RpoNumber,
   std::__ndk1::less<v8::internal::compiler::RpoNumber>,
   v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>
   >::destroy(std::__ndk1::__tree_node<v8::internal::compiler::RpoNumber, void*>*) */

void __thiscall
std::__ndk1::
__tree<v8::internal::compiler::RpoNumber,std::__ndk1::less<v8::internal::compiler::RpoNumber>,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
::destroy(__tree<v8::internal::compiler::RpoNumber,std::__ndk1::less<v8::internal::compiler::RpoNumber>,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
          *this,__tree_node *param_1)

{
  for (; param_1 != (__tree_node *)0x0; param_1 = *(__tree_node **)(param_1 + 8)) {
    destroy(this,*(__tree_node **)param_1);
  }
  return;
}

