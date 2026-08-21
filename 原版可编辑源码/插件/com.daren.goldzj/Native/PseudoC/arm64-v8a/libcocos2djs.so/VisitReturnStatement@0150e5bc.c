
/* v8::internal::interpreter::BytecodeGenerator::VisitReturnStatement(v8::internal::ReturnStatement*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitReturnStatement
          (BytecodeGenerator *this,ReturnStatement *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  AstNode *pAVar6;
  undefined8 local_58;
  BytecodeGenerator *pBStack_50;
  int local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(BlockCoverageBuilder **)(this + 0x208) != (BlockCoverageBuilder *)0x0) {
    BlockCoverageBuilder::AllocateBlockCoverageSlot
              (*(BlockCoverageBuilder **)(this + 0x208),param_1,2);
  }
  iVar1 = *(int *)param_1;
  if (iVar1 != -1) {
    this[0x1c0] = (BytecodeGenerator)0x2;
    *(int *)(this + 0x1c4) = iVar1;
  }
  local_58 = *(undefined8 *)(this + 0x300);
  pAVar6 = *(AstNode **)(param_1 + 8);
  local_48 = *(int *)(this + 0x118);
  local_40 = 2;
  *(undefined8 **)(this + 0x300) = &local_58;
  pBStack_50 = this;
  if (this[8] == (BytecodeGenerator)0x0) {
    uVar4 = GetCurrentStackPosition();
    if (uVar4 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar6);
    }
  }
  *(undefined8 *)(pBStack_50 + 0x300) = local_58;
  plVar5 = *(long **)(pBStack_50 + 0x120);
  iVar1 = *(int *)(pBStack_50 + 0x118);
  *(int *)(pBStack_50 + 0x118) = local_48;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,CONCAT44(iVar1 - local_48,local_48));
  }
  plVar5 = *(long **)(this + 0x2f0);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  if (((byte)param_1[4] & 0xc0) == 0) {
    do {
      uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,2,0,uVar2);
      if ((uVar4 & 1) != 0) goto LAB_0150e700;
      plVar5 = (long *)plVar5[2];
    } while (plVar5 != (long *)0x0);
  }
  else {
    do {
      uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,3,0,uVar2);
      if ((uVar4 & 1) != 0) {
LAB_0150e700:
        if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      plVar5 = (long *)plVar5[2];
    } while (plVar5 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

