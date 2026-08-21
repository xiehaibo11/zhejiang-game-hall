
/* v8::internal::compiler::InstructionSequence::SetSourcePosition(v8::internal::compiler::Instruction
   const*, v8::internal::SourcePosition) */

void __thiscall
v8::internal::compiler::InstructionSequence::SetSourcePosition
          (InstructionSequence *this,Instruction *param_1,undefined8 param_3)

{
  Instruction *local_20;
  undefined8 uStack_18;
  
  local_20 = param_1;
  uStack_18 = param_3;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::compiler::Instruction_const*,v8::internal::SourcePosition>,std::__ndk1::__map_value_compare<v8::internal::compiler::Instruction_const*,std::__ndk1::__value_type<v8::internal::compiler::Instruction_const*,v8::internal::SourcePosition>,std::__ndk1::less<v8::internal::compiler::Instruction_const*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Instruction_const*,v8::internal::SourcePosition>>>
  ::
  __emplace_unique_key_args<v8::internal::compiler::Instruction_const*,std::__ndk1::pair<v8::internal::compiler::Instruction_const*,v8::internal::SourcePosition>>
            ((__tree<std::__ndk1::__value_type<v8::internal::compiler::Instruction_const*,v8::internal::SourcePosition>,std::__ndk1::__map_value_compare<v8::internal::compiler::Instruction_const*,std::__ndk1::__value_type<v8::internal::compiler::Instruction_const*,v8::internal::SourcePosition>,std::__ndk1::less<v8::internal::compiler::Instruction_const*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Instruction_const*,v8::internal::SourcePosition>>>
              *)(this + 0x20),&local_20,(pair *)&local_20);
  return;
}

