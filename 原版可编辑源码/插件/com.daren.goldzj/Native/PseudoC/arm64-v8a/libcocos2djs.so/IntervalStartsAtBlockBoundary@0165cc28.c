
/* v8::internal::compiler::LiveRangeBuilder::IntervalStartsAtBlockBoundary(v8::internal::compiler::UseInterval
   const*) const */

bool __thiscall
v8::internal::compiler::LiveRangeBuilder::IntervalStartsAtBlockBoundary
          (LiveRangeBuilder *this,UseInterval *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  
  uVar2 = *(uint *)param_1;
  if ((uVar2 & 3) == 0) {
    uVar1 = uVar2 + 3;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    lVar4 = InstructionSequence::GetInstructionBlock
                      (*(InstructionSequence **)(*(long *)this + 0x10),(int)uVar1 >> 2);
    bVar3 = *(int *)(lVar4 + 0x70) == (int)uVar1 >> 2;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

