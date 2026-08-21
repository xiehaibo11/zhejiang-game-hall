
/* v8::internal::compiler::ReferenceMap::RecordReference(v8::internal::compiler::AllocatedOperand
   const&) */

void __thiscall
v8::internal::compiler::ReferenceMap::RecordReference(ReferenceMap *this,AllocatedOperand *param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)param_1;
  if ((((uVar1 & 0x1c) != 0xc) || (10 < ((uint)(uVar1 >> 5) & 0xff))) || (-1 < (long)uVar1)) {
    if (*(ulong **)(this + 8) == *(ulong **)(this + 0x10)) {
      std::__ndk1::
      vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
      ::__push_back_slow_path<v8::internal::compiler::InstructionOperand_const&>
                ((vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
                  *)this,(InstructionOperand *)param_1);
      return;
    }
    **(ulong **)(this + 8) = uVar1;
    *(long *)(this + 8) = *(long *)(this + 8) + 8;
  }
  return;
}

