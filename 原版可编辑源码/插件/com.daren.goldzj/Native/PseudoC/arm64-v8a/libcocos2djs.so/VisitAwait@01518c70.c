
/* v8::internal::interpreter::BytecodeGenerator::VisitAwait(v8::internal::Await*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitAwait(BytecodeGenerator *this,Await *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  BlockCoverageBuilder *pBVar5;
  AstNode *pAVar6;
  undefined8 local_58;
  BytecodeGenerator *pBStack_50;
  int local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = *(int *)param_1;
  if ((iVar2 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
    this[0x1c0] = (BytecodeGenerator)0x1;
    *(int *)(this + 0x1c4) = iVar2;
  }
  local_58 = *(undefined8 *)(this + 0x300);
  pAVar6 = *(AstNode **)(param_1 + 8);
  local_48 = *(int *)(this + 0x118);
  local_40 = 2;
  *(undefined8 **)(this + 0x300) = &local_58;
  pBStack_50 = this;
  if (this[8] == (BytecodeGenerator)0x0) {
    uVar3 = GetCurrentStackPosition();
    if (uVar3 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar6);
    }
  }
  *(undefined8 *)(pBStack_50 + 0x300) = local_58;
  plVar4 = *(long **)(pBStack_50 + 0x120);
  iVar2 = *(int *)(pBStack_50 + 0x118);
  *(int *)(pBStack_50 + 0x118) = local_48;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,CONCAT44(iVar2 - local_48,local_48));
  }
  BuildAwait(this,*(int *)param_1);
  pBVar5 = *(BlockCoverageBuilder **)(this + 0x208);
  if ((pBVar5 != (BlockCoverageBuilder *)0x0) &&
     (iVar2 = BlockCoverageBuilder::AllocateBlockCoverageSlot(pBVar5,param_1,2), iVar2 != -1)) {
    BytecodeArrayBuilder::IncBlockCounter(*(BytecodeArrayBuilder **)(pBVar5 + 0x20),iVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

