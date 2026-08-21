
/* v8::internal::compiler::LiveRangeBuilder::MapPhiHint(v8::internal::compiler::InstructionOperand*,
   v8::internal::compiler::UsePosition*) */

void __thiscall
v8::internal::compiler::LiveRangeBuilder::MapPhiHint
          (LiveRangeBuilder *this,InstructionOperand *param_1,UsePosition *param_2)

{
  InstructionOperand *local_20;
  UsePosition *pUStack_18;
  
  local_20 = param_1;
  pUStack_18 = param_2;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand*,v8::internal::compiler::UsePosition*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand*,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand*,v8::internal::compiler::UsePosition*>,std::__ndk1::less<v8::internal::compiler::InstructionOperand*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand*,v8::internal::compiler::UsePosition*>>>
  ::
  __emplace_unique_key_args<v8::internal::compiler::InstructionOperand*,std::__ndk1::pair<v8::internal::compiler::InstructionOperand*,v8::internal::compiler::UsePosition*>>
            ((__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand*,v8::internal::compiler::UsePosition*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand*,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand*,v8::internal::compiler::UsePosition*>,std::__ndk1::less<v8::internal::compiler::InstructionOperand*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand*,v8::internal::compiler::UsePosition*>>>
              *)(this + 8),&local_20,(pair *)&local_20);
  return;
}

