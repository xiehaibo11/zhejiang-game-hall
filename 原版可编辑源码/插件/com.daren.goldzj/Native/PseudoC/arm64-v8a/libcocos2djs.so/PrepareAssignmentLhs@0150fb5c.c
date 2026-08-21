
/* v8::internal::interpreter::BytecodeGenerator::PrepareAssignmentLhs(v8::internal::Expression*,
   v8::internal::interpreter::BytecodeGenerator::AccumulatorPreservingMode) */

void v8::internal::interpreter::BytecodeGenerator::PrepareAssignmentLhs
               (undefined4 *param_1_00,BytecodeGenerator *param_1,Property *param_3,int param_4)

{
  Property *pPVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  BytecodeArrayBuilder *pBVar12;
  long lVar13;
  undefined8 uVar14;
  int iVar15;
  ulong uVar16;
  AstNode *pAVar17;
  undefined8 local_88;
  BytecodeGenerator *pBStack_80;
  int local_78;
  undefined8 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  pPVar1 = param_3;
  if ((*(uint *)(param_3 + 4) & 0x3f) != 0x2c) {
    pPVar1 = (Property *)0x0;
  }
  uVar8 = Property::GetAssignType(pPVar1);
  switch(uVar8) {
  case 0:
    *param_1_00 = 0;
    *(undefined8 *)(param_1_00 + 8) = 0;
    *(undefined8 *)(param_1_00 + 10) = 0;
    *(Property **)(param_1_00 + 2) = param_3;
    break;
  case 1:
    if (param_4 == 1) {
      iVar15 = *(int *)(param_1 + 0x118);
      iVar3 = *(int *)(param_1 + 0x11c);
      plVar9 = *(long **)(param_1 + 0x120);
      if (iVar3 <= iVar15 + 1) {
        iVar3 = iVar15 + 1;
      }
      *(int *)(param_1 + 0x118) = iVar15 + 1;
      *(int *)(param_1 + 0x11c) = iVar3;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,iVar15);
      }
      BytecodeArrayBuilder::StoreAccumulatorInRegister
                ((BytecodeArrayBuilder *)(param_1 + 0x18),iVar15);
    }
    else {
      iVar15 = 0x7fffffff;
    }
    local_88 = *(undefined8 *)(param_1 + 0x300);
    pAVar17 = *(AstNode **)(pPVar1 + 8);
    local_78 = *(int *)(param_1 + 0x118);
    local_70 = 2;
    *(undefined8 **)(param_1 + 0x300) = &local_88;
    pBStack_80 = param_1;
    if (param_1[8] == (BytecodeGenerator)0x0) {
      uVar16 = GetCurrentStackPosition();
      if (uVar16 < *(ulong *)param_1) {
        param_1[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(param_1,pAVar17);
      }
    }
    *(undefined8 *)(pBStack_80 + 0x300) = local_88;
    plVar9 = *(long **)(pBStack_80 + 0x120);
    iVar3 = *(int *)(pBStack_80 + 0x118);
    *(int *)(pBStack_80 + 0x118) = local_78;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar3 - local_78,local_78));
    }
    iVar5 = *(int *)(param_1 + 0x118);
    iVar3 = *(int *)(param_1 + 0x11c);
    plVar9 = *(long **)(param_1 + 0x120);
    if (iVar3 <= iVar5 + 1) {
      iVar3 = iVar5 + 1;
    }
    *(int *)(param_1 + 0x118) = iVar5 + 1;
    *(int *)(param_1 + 0x11c) = iVar3;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,iVar5);
    }
    BytecodeArrayBuilder::StoreAccumulatorInRegister((BytecodeArrayBuilder *)(param_1 + 0x18),iVar5)
    ;
    uVar2 = *(undefined8 *)(pPVar1 + 8);
    lVar13 = *(long *)(pPVar1 + 0x10);
    if ((*(uint *)(lVar13 + 4) & 0x3f) != 0x29) {
      lVar13 = 0;
    }
    uVar14 = *(undefined8 *)(lVar13 + 8);
    *param_1_00 = 1;
    *(undefined8 *)(param_1_00 + 2) = 0;
    *(undefined8 *)(param_1_00 + 4) = 0x7fffffff;
    param_1_00[6] = iVar5;
    param_1_00[7] = 0x7fffffff;
    *(undefined8 *)(param_1_00 + 8) = uVar2;
    *(undefined8 *)(param_1_00 + 10) = uVar14;
    goto joined_r0x01510328;
  case 2:
    if (param_4 == 1) {
      iVar15 = *(int *)(param_1 + 0x118);
      iVar3 = *(int *)(param_1 + 0x11c);
      plVar9 = *(long **)(param_1 + 0x120);
      if (iVar3 <= iVar15 + 1) {
        iVar3 = iVar15 + 1;
      }
      *(int *)(param_1 + 0x118) = iVar15 + 1;
      *(int *)(param_1 + 0x11c) = iVar3;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,iVar15);
      }
      BytecodeArrayBuilder::StoreAccumulatorInRegister
                ((BytecodeArrayBuilder *)(param_1 + 0x18),iVar15);
    }
    else {
      iVar15 = 0x7fffffff;
    }
    local_88 = *(undefined8 *)(param_1 + 0x300);
    pAVar17 = *(AstNode **)(pPVar1 + 8);
    local_78 = *(int *)(param_1 + 0x118);
    local_70 = 2;
    *(undefined8 **)(param_1 + 0x300) = &local_88;
    pBStack_80 = param_1;
    if (param_1[8] == (BytecodeGenerator)0x0) {
      uVar16 = GetCurrentStackPosition();
      if (uVar16 < *(ulong *)param_1) {
        param_1[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(param_1,pAVar17);
      }
    }
    *(undefined8 *)(pBStack_80 + 0x300) = local_88;
    plVar9 = *(long **)(pBStack_80 + 0x120);
    iVar3 = *(int *)(pBStack_80 + 0x118);
    *(int *)(pBStack_80 + 0x118) = local_78;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar3 - local_78,local_78));
    }
    iVar5 = *(int *)(param_1 + 0x118);
    iVar3 = *(int *)(param_1 + 0x11c);
    plVar9 = *(long **)(param_1 + 0x120);
    if (iVar3 <= iVar5 + 1) {
      iVar3 = iVar5 + 1;
    }
    *(int *)(param_1 + 0x118) = iVar5 + 1;
    *(int *)(param_1 + 0x11c) = iVar3;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,iVar5);
    }
    BytecodeArrayBuilder::StoreAccumulatorInRegister((BytecodeArrayBuilder *)(param_1 + 0x18),iVar5)
    ;
    local_88 = *(undefined8 *)(param_1 + 0x300);
    pAVar17 = *(AstNode **)(pPVar1 + 0x10);
    local_78 = *(int *)(param_1 + 0x118);
    local_70 = 2;
    *(undefined8 **)(param_1 + 0x300) = &local_88;
    pBStack_80 = param_1;
    if (param_1[8] == (BytecodeGenerator)0x0) {
      uVar16 = GetCurrentStackPosition();
      if (uVar16 < *(ulong *)param_1) {
        param_1[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(param_1,pAVar17);
      }
    }
    *(undefined8 *)(pBStack_80 + 0x300) = local_88;
    plVar9 = *(long **)(pBStack_80 + 0x120);
    iVar3 = *(int *)(pBStack_80 + 0x118);
    *(int *)(pBStack_80 + 0x118) = local_78;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar3 - local_78,local_78));
    }
    iVar6 = *(int *)(param_1 + 0x118);
    iVar3 = *(int *)(param_1 + 0x11c);
    plVar9 = *(long **)(param_1 + 0x120);
    if (iVar3 <= iVar6 + 1) {
      iVar3 = iVar6 + 1;
    }
    *(int *)(param_1 + 0x118) = iVar6 + 1;
    *(int *)(param_1 + 0x11c) = iVar3;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,iVar6);
    }
    BytecodeArrayBuilder::StoreAccumulatorInRegister((BytecodeArrayBuilder *)(param_1 + 0x18),iVar6)
    ;
    param_1_00[6] = iVar5;
    param_1_00[7] = iVar6;
    *param_1_00 = 2;
    *(undefined8 *)(param_1_00 + 2) = 0;
    *(undefined8 *)(param_1_00 + 4) = 0x7fffffff;
    *(undefined8 *)(param_1_00 + 8) = 0;
    *(undefined8 *)(param_1_00 + 10) = 0;
joined_r0x01510328:
    if (iVar15 != 0x7fffffff) {
LAB_01510334:
      BytecodeArrayBuilder::LoadAccumulatorWithRegister
                ((BytecodeArrayBuilder *)(param_1 + 0x18),iVar15);
    }
    goto LAB_01510338;
  case 3:
    if (param_4 == 1) {
      iVar15 = *(int *)(param_1 + 0x118);
      iVar3 = *(int *)(param_1 + 0x11c);
      plVar9 = *(long **)(param_1 + 0x120);
      if (iVar3 <= iVar15 + 1) {
        iVar3 = iVar15 + 1;
      }
      *(int *)(param_1 + 0x118) = iVar15 + 1;
      *(int *)(param_1 + 0x11c) = iVar3;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,iVar15);
      }
      BytecodeArrayBuilder::StoreAccumulatorInRegister
                ((BytecodeArrayBuilder *)(param_1 + 0x18),iVar15);
    }
    else {
      iVar15 = 0x7fffffff;
    }
    uVar4 = *(uint *)(param_1 + 0x118);
    uVar16 = (ulong)uVar4;
    plVar9 = *(long **)(param_1 + 0x120);
    iVar3 = uVar4 + 4;
    iVar5 = *(int *)(param_1 + 0x11c);
    if (*(int *)(param_1 + 0x11c) <= iVar3) {
      iVar5 = iVar3;
    }
    *(int *)(param_1 + 0x118) = iVar3;
    *(int *)(param_1 + 0x11c) = iVar5;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9,uVar16 | 0x400000000);
    }
    lVar13 = *(long *)(pPVar1 + 8);
    if ((*(uint *)(lVar13 + 4) & 0x3f) != 0x30) {
      lVar13 = 0;
    }
    lVar10 = Scope::GetReceiverScope(*(Scope **)(param_1 + 0x1e0));
    BuildVariableLoad(param_1,*(undefined8 *)(lVar10 + 0xb0),1 < *(byte *)(lVar10 + 0x85) - 5,1);
    pBVar12 = (BytecodeArrayBuilder *)(param_1 + 0x18);
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar12,uVar16);
    local_88 = *(undefined8 *)(param_1 + 0x300);
    pAVar17 = *(AstNode **)(lVar13 + 8);
    local_78 = *(int *)(param_1 + 0x118);
    local_70 = 2;
    *(undefined8 **)(param_1 + 0x300) = &local_88;
    pBStack_80 = param_1;
    if (param_1[8] == (BytecodeGenerator)0x0) {
      uVar11 = GetCurrentStackPosition();
      if (uVar11 < *(ulong *)param_1) {
        param_1[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(param_1,pAVar17);
      }
    }
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar12,uVar4 + 1);
    *(undefined8 *)(pBStack_80 + 0x300) = local_88;
    plVar9 = *(long **)(pBStack_80 + 0x120);
    iVar3 = *(int *)(pBStack_80 + 0x118);
    *(int *)(pBStack_80 + 0x118) = local_78;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar3 - local_78,local_78));
    }
    lVar13 = *(long *)(pPVar1 + 0x10);
    if ((*(uint *)(lVar13 + 4) & 0x3f) != 0x29) {
      lVar13 = 0;
    }
    pBVar12 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::LoadLiteral(pBVar12,*(AstRawString **)(lVar13 + 8));
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar12,uVar4 + 2);
    uVar8 = 3;
    goto LAB_0151026c;
  case 4:
    if (param_4 == 1) {
      iVar15 = *(int *)(param_1 + 0x118);
      iVar3 = *(int *)(param_1 + 0x11c);
      plVar9 = *(long **)(param_1 + 0x120);
      if (iVar3 <= iVar15 + 1) {
        iVar3 = iVar15 + 1;
      }
      *(int *)(param_1 + 0x118) = iVar15 + 1;
      *(int *)(param_1 + 0x11c) = iVar3;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,iVar15);
      }
      BytecodeArrayBuilder::StoreAccumulatorInRegister
                ((BytecodeArrayBuilder *)(param_1 + 0x18),iVar15);
    }
    else {
      iVar15 = 0x7fffffff;
    }
    uVar4 = *(uint *)(param_1 + 0x118);
    uVar16 = (ulong)uVar4;
    plVar9 = *(long **)(param_1 + 0x120);
    iVar3 = uVar4 + 4;
    iVar5 = *(int *)(param_1 + 0x11c);
    if (*(int *)(param_1 + 0x11c) <= iVar3) {
      iVar5 = iVar3;
    }
    *(int *)(param_1 + 0x118) = iVar3;
    *(int *)(param_1 + 0x11c) = iVar5;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9,uVar16 | 0x400000000);
    }
    lVar13 = *(long *)(pPVar1 + 8);
    if ((*(uint *)(lVar13 + 4) & 0x3f) != 0x30) {
      lVar13 = 0;
    }
    lVar10 = Scope::GetReceiverScope(*(Scope **)(param_1 + 0x1e0));
    BuildVariableLoad(param_1,*(undefined8 *)(lVar10 + 0xb0),1 < *(byte *)(lVar10 + 0x85) - 5,1);
    pBVar12 = (BytecodeArrayBuilder *)(param_1 + 0x18);
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar12,uVar16);
    local_88 = *(undefined8 *)(param_1 + 0x300);
    pAVar17 = *(AstNode **)(lVar13 + 8);
    local_78 = *(int *)(param_1 + 0x118);
    local_70 = 2;
    *(undefined8 **)(param_1 + 0x300) = &local_88;
    pBStack_80 = param_1;
    if (param_1[8] == (BytecodeGenerator)0x0) {
      uVar11 = GetCurrentStackPosition();
      if (uVar11 < *(ulong *)param_1) {
        param_1[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(param_1,pAVar17);
      }
    }
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar12,uVar4 + 1);
    *(undefined8 *)(pBStack_80 + 0x300) = local_88;
    plVar9 = *(long **)(pBStack_80 + 0x120);
    iVar3 = *(int *)(pBStack_80 + 0x118);
    *(int *)(pBStack_80 + 0x118) = local_78;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar3 - local_78,local_78));
    }
    local_88 = *(undefined8 *)(param_1 + 0x300);
    pAVar17 = *(AstNode **)(pPVar1 + 0x10);
    local_78 = *(int *)(param_1 + 0x118);
    local_70 = 2;
    *(undefined8 **)(param_1 + 0x300) = &local_88;
    pBStack_80 = param_1;
    if (param_1[8] == (BytecodeGenerator)0x0) {
      uVar11 = GetCurrentStackPosition();
      if (uVar11 < *(ulong *)param_1) {
        param_1[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(param_1,pAVar17);
      }
    }
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar12,uVar4 + 2);
    *(undefined8 *)(pBStack_80 + 0x300) = local_88;
    plVar9 = *(long **)(pBStack_80 + 0x120);
    iVar3 = *(int *)(pBStack_80 + 0x118);
    *(int *)(pBStack_80 + 0x118) = local_78;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar3 - local_78,local_78));
    }
    uVar8 = 4;
LAB_0151026c:
    *param_1_00 = uVar8;
    *(undefined8 *)(param_1_00 + 2) = 0;
    *(ulong *)(param_1_00 + 4) = uVar16 | 0x400000000;
    *(undefined8 *)(param_1_00 + 6) = 0x7fffffff7fffffff;
    *(undefined8 *)(param_1_00 + 8) = 0;
    *(undefined8 *)(param_1_00 + 10) = 0;
    if (iVar15 == 0x7fffffff) goto LAB_01510338;
    goto LAB_01510334;
  case 5:
  case 6:
  case 7:
  case 8:
    *param_1_00 = uVar8;
    *(undefined8 *)(param_1_00 + 8) = 0;
    *(undefined8 *)(param_1_00 + 10) = 0;
    *(Property **)(param_1_00 + 2) = pPVar1;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  *(undefined8 *)(param_1_00 + 4) = 0x7fffffff;
  *(undefined8 *)(param_1_00 + 6) = 0x7fffffff7fffffff;
LAB_01510338:
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

