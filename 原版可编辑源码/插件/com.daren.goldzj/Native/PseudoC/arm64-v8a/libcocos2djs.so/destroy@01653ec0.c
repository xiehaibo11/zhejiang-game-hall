
/* std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::Assessment*>,
   std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,
   std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::Assessment*>, v8::internal::compiler::OperandAsKeyLess, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::Assessment*> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::Assessment*>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
::destroy(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
          *this,__tree_node *param_1)

{
  for (; param_1 != (__tree_node *)0x0; param_1 = *(__tree_node **)(param_1 + 8)) {
    destroy(this,*(__tree_node **)param_1);
  }
  return;
}

