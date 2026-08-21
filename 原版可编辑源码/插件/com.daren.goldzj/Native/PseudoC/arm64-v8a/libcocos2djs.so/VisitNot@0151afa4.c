
/* v8::internal::interpreter::BytecodeGenerator::VisitNot(v8::internal::UnaryOperation*) */

void v8::internal::interpreter::BytecodeGenerator::VisitNot(UnaryOperation *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long in_x1;
  long lVar6;
  AstNode *pAVar7;
  undefined1 auVar8 [16];
  long local_58;
  UnaryOperation *pUStack_50;
  int local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(param_1 + 0x300);
  if (*(int *)(lVar6 + 0x18) == 3) {
    iVar1 = (uint)(*(int *)(lVar6 + 0x24) != 1) << 1;
    auVar8 = NEON_ext(*(undefined1 (*) [16])(lVar6 + 0x28),*(undefined1 (*) [16])(lVar6 + 0x28),8,1)
    ;
    if (*(int *)(lVar6 + 0x24) == 0) {
      iVar1 = 1;
    }
    *(long *)(lVar6 + 0x30) = auVar8._8_8_;
    *(long *)(lVar6 + 0x28) = auVar8._0_8_;
    *(int *)(lVar6 + 0x24) = iVar1;
    iVar1 = *(int *)(param_1 + 0x118);
    if (param_1[8] == (UnaryOperation)0x0) {
      pAVar7 = *(AstNode **)(in_x1 + 8);
      uVar4 = GetCurrentStackPosition();
      if (uVar4 < *(ulong *)param_1) {
        param_1[8] = (UnaryOperation)0x1;
      }
      else {
        VisitNoStackOverflowCheck((BytecodeGenerator *)param_1,pAVar7);
      }
    }
    plVar5 = *(long **)(param_1 + 0x120);
    iVar2 = *(int *)(param_1 + 0x118);
    *(int *)(param_1 + 0x118) = iVar1;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5,CONCAT44(iVar2 - iVar1,iVar1));
    }
    lVar6 = *(long *)(param_1 + 0x300);
    if (*(char *)(lVar6 + 0x20) == '\0') {
      BuildTest((BytecodeGenerator *)param_1,*(int *)(lVar6 + 0x1c) == 1,
                *(undefined8 *)(lVar6 + 0x28),*(undefined8 *)(lVar6 + 0x30),
                *(undefined4 *)(lVar6 + 0x24));
      *(undefined1 *)(lVar6 + 0x20) = 1;
    }
  }
  else {
    local_58 = lVar6;
    pUStack_50 = param_1;
    if (*(int *)(lVar6 + 0x18) == 1) {
      pAVar7 = *(AstNode **)(in_x1 + 8);
      local_48 = *(int *)(param_1 + 0x118);
      local_40 = 1;
      *(long **)(param_1 + 0x300) = &local_58;
      if (param_1[8] == (UnaryOperation)0x0) {
        uVar4 = GetCurrentStackPosition();
        if (uVar4 < *(ulong *)param_1) {
          param_1[8] = (UnaryOperation)0x1;
        }
        else {
          VisitNoStackOverflowCheck((BytecodeGenerator *)param_1,pAVar7);
        }
      }
      *(long *)(pUStack_50 + 0x300) = local_58;
      plVar5 = *(long **)(pUStack_50 + 0x120);
      iVar1 = *(int *)(pUStack_50 + 0x118);
      *(int *)(pUStack_50 + 0x118) = local_48;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5,CONCAT44(iVar1 - local_48,local_48));
      }
    }
    else {
      pAVar7 = *(AstNode **)(in_x1 + 8);
      local_48 = *(int *)(param_1 + 0x118);
      local_40 = 2;
      *(long **)(param_1 + 0x300) = &local_58;
      if (param_1[8] == (UnaryOperation)0x0) {
        uVar4 = GetCurrentStackPosition();
        if (uVar4 < *(ulong *)param_1) {
          param_1[8] = (UnaryOperation)0x1;
        }
        else {
          VisitNoStackOverflowCheck((BytecodeGenerator *)param_1,pAVar7);
        }
      }
      iVar2 = local_40._4_4_;
      *(long *)(pUStack_50 + 0x300) = local_58;
      plVar5 = *(long **)(pUStack_50 + 0x120);
      iVar1 = *(int *)(pUStack_50 + 0x118);
      *(int *)(pUStack_50 + 0x118) = local_48;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5,CONCAT44(iVar1 - local_48,local_48));
      }
      BytecodeArrayBuilder::LogicalNot((BytecodeArrayBuilder *)(param_1 + 0x18),iVar2 == 1);
      *(undefined4 *)(*(long *)(param_1 + 0x300) + 0x1c) = 1;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

