
/* std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::Node*>,
   std::__ndk1::__map_value_compare<v8::internal::compiler::BasicBlock*,
   std::__ndk1::__value_type<v8::internal::compiler::BasicBlock*, v8::internal::compiler::Node*>,
   std::__ndk1::less<v8::internal::compiler::BasicBlock*>, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::Node*> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::Node*>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::compiler::BasicBlock*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::BasicBlock*,std::__ndk1::__value_type<v8::internal::compiler::BasicBlock*,v8::internal::compiler::Node*>,std::__ndk1::less<v8::internal::compiler::BasicBlock*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::BasicBlock*,v8::internal::compiler::Node*>>>
::destroy(__tree<std::__ndk1::__value_type<v8::internal::compiler::BasicBlock*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::BasicBlock*,std::__ndk1::__value_type<v8::internal::compiler::BasicBlock*,v8::internal::compiler::Node*>,std::__ndk1::less<v8::internal::compiler::BasicBlock*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::BasicBlock*,v8::internal::compiler::Node*>>>
          *this,__tree_node *param_1)

{
  for (; param_1 != (__tree_node *)0x0; param_1 = *(__tree_node **)(param_1 + 8)) {
    destroy(this,*(__tree_node **)param_1);
  }
  return;
}

