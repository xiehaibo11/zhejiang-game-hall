
/* v8::internal::Instruction::ImmPCOffsetTarget() */

Instruction * __thiscall v8::internal::Instruction::ImmPCOffsetTarget(Instruction *this)

{
  long lVar1;
  
  lVar1 = ImmPCOffset(this);
  return this + lVar1;
}

