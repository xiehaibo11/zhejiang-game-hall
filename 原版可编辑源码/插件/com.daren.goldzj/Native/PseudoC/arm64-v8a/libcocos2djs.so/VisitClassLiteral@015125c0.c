
/* v8::internal::interpreter::BytecodeGenerator::VisitClassLiteral(v8::internal::ClassLiteral*,
   v8::internal::interpreter::Register) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitClassLiteral
          (BytecodeGenerator *this,long param_1,undefined4 param_3)

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
  BytecodeGenerator *local_78;
  BytecodeGenerator *pBStack_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar8 = *(long *)(this + 0x1e8);
  if (*(long *)(param_1 + 0x10) == 0) {
    pSVar6 = (Scope *)0x0;
  }
  else {
    *(long *)(this + 0x1e8) = *(long *)(param_1 + 0x10);
    pSVar6 = *(Scope **)(param_1 + 0x10);
  }
  if (*(int *)(pSVar6 + 0x7c) < 1) {
    BuildClassLiteral(this,param_1,param_3);
  }
  else {
    local_78 = *(BytecodeGenerator **)(this + 0x300);
    local_60 = 2;
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(this + 0x118));
    *(BytecodeGenerator ***)(this + 0x300) = &local_78;
    pBStack_70 = this;
    BytecodeArrayBuilder::CreateBlockContext((BytecodeArrayBuilder *)(this + 0x18),pSVar6);
    *(BytecodeGenerator **)(pBStack_70 + 0x300) = local_78;
    plVar5 = *(long **)(pBStack_70 + 0x120);
    iVar1 = *(int *)(pBStack_70 + 0x118);
    *(int *)(pBStack_70 + 0x118) = (int)local_68;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5,CONCAT44(iVar1 - (int)local_68,(int)local_68));
    }
    pBStack_70 = *(BytecodeGenerator **)(param_1 + 0x10);
    lVar9 = *(long *)(this + 0x2f8);
    local_78 = this;
    local_68 = lVar9;
    uVar4 = Register::current_context();
    local_60 = (ulong)uVar4;
    pBVar7 = this;
    if (lVar9 != 0) {
      local_60 = CONCAT44(*(int *)(lVar9 + 0x1c) + 1,uVar4);
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
        pBVar7 = local_78;
        lVar9 = local_68;
      }
      *(int *)(lVar9 + 0x18) = iVar2;
      BytecodeArrayBuilder::PushContext((BytecodeArrayBuilder *)(pBVar7 + 0x18),iVar2);
      pBVar7 = local_78;
    }
    *(BytecodeGenerator ***)(pBVar7 + 0x2f8) = &local_78;
    BuildClassLiteral(this,param_1,param_3);
    if (local_68 != 0) {
      BytecodeArrayBuilder::PopContext
                ((BytecodeArrayBuilder *)(local_78 + 0x18),*(undefined4 *)(local_68 + 0x18));
      *(undefined4 *)(local_68 + 0x18) = (undefined4)local_60;
    }
    *(long *)(local_78 + 0x2f8) = local_68;
  }
  if (lVar8 != *(long *)(this + 0x1e8)) {
    *(long *)(this + 0x1e8) = lVar8;
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

