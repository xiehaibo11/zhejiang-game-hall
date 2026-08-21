
/* v8::internal::interpreter::BytecodeGenerator::VisitImportCallExpression(v8::internal::ImportCallExpression*)
    */

void v8::internal::interpreter::BytecodeGenerator::VisitImportCallExpression
               (ImportCallExpression *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  BytecodeArrayBuilder *pBVar7;
  long in_x1;
  ulong uVar8;
  AstNode *pAVar9;
  undefined8 local_68;
  ImportCallExpression *pIStack_60;
  int local_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x118);
  uVar8 = (ulong)uVar1;
  plVar5 = *(long **)(param_1 + 0x120);
  local_58 = uVar1 + 2;
  iVar2 = *(int *)(param_1 + 0x11c);
  if (*(int *)(param_1 + 0x11c) <= local_58) {
    iVar2 = local_58;
  }
  *(int *)(param_1 + 0x118) = local_58;
  *(int *)(param_1 + 0x11c) = iVar2;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5,uVar8 | 0x200000000);
    local_58 = *(int *)(param_1 + 0x118);
  }
  local_68 = *(undefined8 *)(param_1 + 0x300);
  pAVar9 = *(AstNode **)(in_x1 + 8);
  local_50 = 2;
  *(undefined8 **)(param_1 + 0x300) = &local_68;
  pIStack_60 = param_1;
  if (param_1[8] == (ImportCallExpression)0x0) {
    uVar6 = GetCurrentStackPosition();
    if (uVar6 < *(ulong *)param_1) {
      param_1[8] = (ImportCallExpression)0x1;
    }
    else {
      VisitNoStackOverflowCheck((BytecodeGenerator *)param_1,pAVar9);
    }
  }
  BytecodeArrayBuilder::StoreAccumulatorInRegister
            ((BytecodeArrayBuilder *)(param_1 + 0x18),uVar1 + 1);
  *(undefined8 *)(pIStack_60 + 0x300) = local_68;
  plVar5 = *(long **)(pIStack_60 + 0x120);
  iVar2 = *(int *)(pIStack_60 + 0x118);
  *(int *)(pIStack_60 + 0x118) = local_58;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,CONCAT44(iVar2 - local_58,local_58));
  }
  uVar4 = Register::function_closure();
  pBVar7 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::MoveRegister((BytecodeArrayBuilder *)(param_1 + 0x18),uVar4,uVar8);
  BytecodeArrayBuilder::CallRuntime(pBVar7,0xbf,uVar8 | 0x200000000);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

