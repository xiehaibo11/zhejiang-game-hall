
/* v8::internal::interpreter::SwitchBuilder::SetCaseTarget(int, v8::internal::CaseClause*) */

void __thiscall
v8::internal::interpreter::SwitchBuilder::SetCaseTarget
          (SwitchBuilder *this,int param_1,CaseClause *param_2)

{
  int iVar1;
  BlockCoverageBuilder *pBVar2;
  
  if ((ulong)(*(long *)(this + 0x50) - *(long *)(this + 0x48) >> 4) <= (ulong)(long)param_1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  BytecodeArrayBuilder::Bind
            (*(BytecodeArrayBuilder **)(this + 8),
             (BytecodeLabel *)(*(long *)(this + 0x48) + (long)param_1 * 0x10));
  pBVar2 = *(BlockCoverageBuilder **)(this + 0x40);
  if ((pBVar2 != (BlockCoverageBuilder *)0x0) &&
     (iVar1 = BlockCoverageBuilder::AllocateBlockCoverageSlot(pBVar2,param_2,0), iVar1 != -1)) {
    BytecodeArrayBuilder::IncBlockCounter(*(BytecodeArrayBuilder **)(pBVar2 + 0x20),iVar1);
    return;
  }
  return;
}

