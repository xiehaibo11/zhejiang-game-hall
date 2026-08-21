
/* v8::internal::compiler::RegisterAllocationData::IsBlockBoundary(v8::internal::compiler::LifetimePosition)
   const */

bool __thiscall
v8::internal::compiler::RegisterAllocationData::IsBlockBoundary
          (RegisterAllocationData *this,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  if ((param_2 & 3) != 0) {
    return false;
  }
  uVar1 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar1 = param_2;
  }
  lVar2 = InstructionSequence::GetInstructionBlock
                    (*(InstructionSequence **)(this + 0x10),(int)uVar1 >> 2);
  return *(int *)(lVar2 + 0x70) == (int)uVar1 >> 2;
}

