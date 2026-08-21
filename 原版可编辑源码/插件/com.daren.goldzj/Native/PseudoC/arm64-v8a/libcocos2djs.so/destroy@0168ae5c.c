
/* std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,
   v8::internal::compiler::Node*>,
   std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,
   std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,
   v8::internal::compiler::Node*>, v8::internal::compiler::CodeAssemblerVariable::ImplComparator,
   true>, 
   std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,
   v8::internal::compiler::Node*> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,
   v8::internal::compiler::Node*>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
::destroy(__tree<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::CodeAssemblerVariable::Impl*,std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::Node*>>>
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

