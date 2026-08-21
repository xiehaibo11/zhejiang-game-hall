
/* v8::internal::RelocInfo::wasm_call_tag() const */

long __thiscall v8::internal::RelocInfo::wasm_call_tag(RelocInfo *this)

{
  long lVar1;
  Instruction *this_00;
  long *plVar2;
  long lVar3;
  
  this_00 = *(Instruction **)this;
  if (this_00[3] == (Instruction)0x58) {
    plVar2 = (long *)Instruction::ImmPCOffsetTarget(this_00);
    return *plVar2;
  }
  lVar3 = Instruction::ImmPCOffset(this_00);
  lVar1 = lVar3 + 3;
  if (-1 < lVar3) {
    lVar1 = lVar3;
  }
  return lVar1 >> 2;
}

