
/* std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,
   v8::internal::compiler::InstructionOperand>, v8::internal::compiler::InstructionOperand>,
   std::__ndk1::__map_value_compare<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,
   v8::internal::compiler::InstructionOperand>,
   std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,
   v8::internal::compiler::InstructionOperand>, v8::internal::compiler::InstructionOperand>,
   v8::internal::compiler::DelayedInsertionMapCompare, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,
   v8::internal::compiler::InstructionOperand>, v8::internal::compiler::InstructionOperand> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,
   v8::internal::compiler::InstructionOperand>, v8::internal::compiler::InstructionOperand>,
   void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::InstructionOperand>,std::__ndk1::__map_value_compare<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::DelayedInsertionMapCompare,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::InstructionOperand>>>
::destroy(__tree<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::InstructionOperand>,std::__ndk1::__map_value_compare<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::DelayedInsertionMapCompare,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::InstructionOperand>>>
          *this,__tree_node *param_1)

{
  for (; param_1 != (__tree_node *)0x0; param_1 = *(__tree_node **)(param_1 + 8)) {
    destroy(this,*(__tree_node **)param_1);
  }
  return;
}

