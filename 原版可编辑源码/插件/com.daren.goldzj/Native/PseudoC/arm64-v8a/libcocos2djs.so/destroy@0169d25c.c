
/* std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>, v8::internal::compiler::CsaLoadElimination::FieldInfo>,
   std::__ndk1::__map_value_compare<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>,
   std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>, v8::internal::compiler::CsaLoadElimination::FieldInfo>,
   std::__ndk1::less<std::__ndk1::pair<v8::internal::compiler::Node*, v8::internal::compiler::Node*>
   >, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>, v8::internal::compiler::CsaLoadElimination::FieldInfo> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>, v8::internal::compiler::CsaLoadElimination::FieldInfo>, void*>*)
    */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>,std::__ndk1::less<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>>>
::destroy(__tree<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>,std::__ndk1::less<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>>>
          *this,__tree_node *param_1)

{
  for (; param_1 != (__tree_node *)0x0; param_1 = *(__tree_node **)(param_1 + 8)) {
    destroy(this,*(__tree_node **)param_1);
  }
  return;
}

