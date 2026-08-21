
/* v8::internal::compiler::RegisterAllocator::FindOptimalSplitPos(v8::internal::compiler::LifetimePosition,
   v8::internal::compiler::LifetimePosition) */

int __thiscall
v8::internal::compiler::RegisterAllocator::FindOptimalSplitPos
          (RegisterAllocator *this,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  iVar1 = param_2 + 3;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  iVar2 = param_3 + 3;
  if (-1 < param_3) {
    iVar2 = param_3;
  }
  if (iVar1 >> 2 != iVar2 >> 2) {
    lVar4 = InstructionSequence::GetInstructionBlock
                      (*(InstructionSequence **)(*(long *)this + 0x10),iVar1 >> 2);
    lVar5 = InstructionSequence::GetInstructionBlock
                      (*(InstructionSequence **)(*(long *)this + 0x10),iVar2 >> 2);
    lVar7 = lVar5;
    if (lVar5 != lVar4) {
      while (lVar6 = lVar7, uVar3 = *(uint *)(lVar6 + 0x68), -1 < (int)uVar3) {
        plVar8 = *(long **)(*(long *)(*(long *)this + 0x10) + 0x10);
        lVar7 = *plVar8;
        if ((ulong)(plVar8[1] - lVar7 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar7 = *(long *)(lVar7 + (ulong)uVar3 * 8);
        if ((lVar7 == 0) || (*(int *)(lVar7 + 100) <= *(int *)(lVar4 + 100))) break;
      }
      if ((lVar6 != lVar5) || (-1 < *(int *)(lVar5 + 0x6c))) {
        param_3 = *(int *)(lVar6 + 0x70) << 2;
      }
    }
  }
  return param_3;
}

