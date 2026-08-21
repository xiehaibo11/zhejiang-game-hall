
/* v8::internal::interpreter::BytecodeGenerator::VisitBlock(v8::internal::Block*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitBlock(BytecodeGenerator *this,Block *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  Scope *pSVar6;
  BytecodeGenerator *pBVar7;
  long lVar8;
  long lVar9;
  BytecodeGenerator *local_68;
  BytecodeGenerator *pBStack_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar8 = *(long *)(this + 0x1e8);
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(this + 0x1e8) = *(long *)(param_1 + 0x18);
    pSVar6 = *(Scope **)(param_1 + 0x18);
    if ((pSVar6 != (Scope *)0x0) && (0 < *(int *)(pSVar6 + 0x7c))) {
      local_68 = *(BytecodeGenerator **)(this + 0x300);
      local_50 = 2;
      local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(this + 0x118));
      *(BytecodeGenerator ***)(this + 0x300) = &local_68;
      pBStack_60 = this;
      BytecodeArrayBuilder::CreateBlockContext((BytecodeArrayBuilder *)(this + 0x18),pSVar6);
      *(BytecodeGenerator **)(pBStack_60 + 0x300) = local_68;
      plVar5 = *(long **)(pBStack_60 + 0x120);
      iVar1 = *(int *)(pBStack_60 + 0x118);
      *(int *)(pBStack_60 + 0x118) = (int)local_58;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5,CONCAT44(iVar1 - (int)local_58,(int)local_58));
      }
      pBStack_60 = *(BytecodeGenerator **)(param_1 + 0x18);
      lVar9 = *(long *)(this + 0x2f8);
      local_68 = this;
      local_58 = lVar9;
      uVar4 = Register::current_context();
      local_50 = (ulong)uVar4;
      pBVar7 = this;
      if (lVar9 != 0) {
        local_50 = CONCAT44(*(int *)(lVar9 + 0x1c) + 1,uVar4);
        iVar2 = *(int *)(this + 0x118);
        iVar1 = *(int *)(this + 0x11c);
        plVar5 = *(long **)(this + 0x120);
        if (iVar1 <= iVar2 + 1) {
          iVar1 = iVar2 + 1;
        }
        *(int *)(this + 0x118) = iVar2 + 1;
        *(int *)(this + 0x11c) = iVar1;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,iVar2);
          pBVar7 = local_68;
          lVar9 = local_58;
        }
        *(int *)(lVar9 + 0x18) = iVar2;
        BytecodeArrayBuilder::PushContext((BytecodeArrayBuilder *)(pBVar7 + 0x18),iVar2);
        pBVar7 = local_68;
      }
      *(BytecodeGenerator ***)(pBVar7 + 0x2f8) = &local_68;
      VisitBlockDeclarationsAndStatements(this,param_1);
      if (local_58 != 0) {
        BytecodeArrayBuilder::PopContext
                  ((BytecodeArrayBuilder *)(local_68 + 0x18),*(undefined4 *)(local_58 + 0x18));
        *(undefined4 *)(local_58 + 0x18) = (undefined4)local_50;
      }
      *(long *)(local_68 + 0x2f8) = local_58;
      goto LAB_0150ce04;
    }
  }
  VisitBlockDeclarationsAndStatements(this,param_1);
LAB_0150ce04:
  if (lVar8 != *(long *)(this + 0x1e8)) {
    *(long *)(this + 0x1e8) = lVar8;
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

