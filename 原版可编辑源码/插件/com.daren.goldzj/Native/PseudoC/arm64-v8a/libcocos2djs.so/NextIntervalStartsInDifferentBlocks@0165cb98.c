
/* v8::internal::compiler::LiveRangeBuilder::NextIntervalStartsInDifferentBlocks(v8::internal::compiler::UseInterval
   const*) const */

bool __thiscall
v8::internal::compiler::LiveRangeBuilder::NextIntervalStartsInDifferentBlocks
          (LiveRangeBuilder *this,UseInterval *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = *(uint *)(param_1 + 4);
  iVar4 = **(int **)(param_1 + 8);
  uVar1 = uVar3 - 2 | 1;
  if ((uVar3 & 1) != 0) {
    uVar1 = uVar3 & 0xfffffffe;
  }
  uVar3 = uVar1 + 3;
  if (-1 < (int)uVar1) {
    uVar3 = uVar1;
  }
  lVar5 = InstructionSequence::GetInstructionBlock
                    (*(InstructionSequence **)(*(long *)this + 0x10),(int)uVar3 >> 2);
  iVar2 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  lVar6 = InstructionSequence::GetInstructionBlock
                    (*(InstructionSequence **)(*(long *)this + 0x10),iVar2 >> 2);
  return *(int *)(lVar5 + 100) < *(int *)(lVar6 + 100);
}

