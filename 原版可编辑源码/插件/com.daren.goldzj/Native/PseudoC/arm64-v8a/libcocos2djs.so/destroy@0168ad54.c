
/* std::__ndk1::__tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,
   v8::internal::compiler::CodeAssemblerVariable::ImplComparator,
   v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>
   >::destroy(std::__ndk1::__tree_node<v8::internal::compiler::CodeAssemblerVariable::Impl*,
   void*>*) */

void __thiscall
std::__ndk1::
__tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
::destroy(__tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
          *this,__tree_node *param_1)

{
  for (; param_1 != (__tree_node *)0x0; param_1 = *(__tree_node **)(param_1 + 8)) {
    destroy(this,*(__tree_node **)param_1);
  }
  return;
}

