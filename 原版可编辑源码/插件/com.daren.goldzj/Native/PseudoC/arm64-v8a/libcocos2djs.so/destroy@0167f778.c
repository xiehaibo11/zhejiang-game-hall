
/* std::__ndk1::__tree<std::__ndk1::__value_type<int,
   v8::internal::compiler::BytecodeGraphBuilder::Environment*>,
   std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int,
   v8::internal::compiler::BytecodeGraphBuilder::Environment*>, std::__ndk1::less<int>, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,
   v8::internal::compiler::BytecodeGraphBuilder::Environment*> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<int,
   v8::internal::compiler::BytecodeGraphBuilder::Environment*>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>>>
::destroy(__tree<std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>>>
          *this,__tree_node *param_1)

{
  for (; param_1 != (__tree_node *)0x0; param_1 = *(__tree_node **)(param_1 + 8)) {
    destroy(this,*(__tree_node **)param_1);
  }
  return;
}

