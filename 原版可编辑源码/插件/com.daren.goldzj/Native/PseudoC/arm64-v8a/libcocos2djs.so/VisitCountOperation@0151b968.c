
/* v8::internal::interpreter::BytecodeGenerator::VisitCountOperation(v8::internal::CountOperation*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitCountOperation
          (BytecodeGenerator *this,CountOperation *param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  BytecodeArrayBuilder *pBVar11;
  undefined8 uVar12;
  Property *pPVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  AstRawString *pAVar17;
  int iVar18;
  AstNode *pAVar19;
  undefined8 local_98;
  BytecodeGenerator *local_90;
  int local_88;
  undefined8 local_80;
  long local_78;
  
  lVar15 = tpidr_el0;
  local_78 = *(long *)(lVar15 + 0x28);
  pPVar13 = *(Property **)(param_1 + 8);
  if ((*(uint *)(pPVar13 + 4) & 0x3f) != 0x2c) {
    pPVar13 = (Property *)0x0;
  }
  uVar4 = Property::GetAssignType(pPVar13);
  if ((char)param_1[4] < '\0') {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(*(long *)(this + 0x300) + 0x18) != 1;
  }
  switch((ulong)uVar4) {
  case 0:
    lVar14 = *(long *)(param_1 + 8);
    local_98 = *(undefined8 *)(this + 0x300);
    if ((*(uint *)(lVar14 + 4) & 0x3f) != 0x35) {
      lVar14 = 0;
    }
    uVar12 = *(undefined8 *)(lVar14 + 8);
    uVar1 = *(uint *)(lVar14 + 4);
    local_88 = *(int *)(this + 0x118);
    local_80 = 2;
    *(undefined8 **)(this + 0x300) = &local_98;
    local_90 = this;
    BuildVariableLoad(this,uVar12,uVar1 >> 0xb & 1,1);
    *(undefined8 *)(local_90 + 0x300) = local_98;
    plVar10 = *(long **)(local_90 + 0x120);
    iVar7 = *(int *)(local_90 + 0x118);
    *(int *)(local_90 + 0x118) = local_88;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10,CONCAT44(iVar7 - local_88,local_88));
    }
    break;
  case 1:
    uVar5 = VisitForRegisterValue(this,*(Expression **)(pPVar13 + 8));
    lVar14 = *(long *)(pPVar13 + 0x10);
    if ((*(uint *)(lVar14 + 4) & 0x3f) != 0x29) {
      lVar14 = 0;
    }
    pAVar17 = *(AstRawString **)(lVar14 + 8);
    uVar12 = GetCachedLoadICSlot(this,*(Expression **)(pPVar13 + 8),pAVar17);
    BytecodeArrayBuilder::LoadNamedProperty
              ((BytecodeArrayBuilder *)(this + 0x18),uVar5,pAVar17,uVar12);
    break;
  case 2:
    uVar5 = VisitForRegisterValue(this,*(Expression **)(pPVar13 + 8));
    iVar18 = *(int *)(this + 0x118);
    iVar7 = *(int *)(this + 0x11c);
    plVar10 = *(long **)(this + 0x120);
    local_88 = iVar18 + 1;
    if (iVar7 <= local_88) {
      iVar7 = iVar18 + 1;
    }
    *(int *)(this + 0x118) = local_88;
    *(int *)(this + 0x11c) = iVar7;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,iVar18);
      local_88 = *(int *)(this + 0x118);
    }
    local_98 = *(undefined8 *)(this + 0x300);
    pAVar19 = *(AstNode **)(pPVar13 + 0x10);
    local_80 = 2;
    *(undefined8 **)(this + 0x300) = &local_98;
    local_90 = this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar16 = GetCurrentStackPosition();
      if (uVar16 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar19);
      }
    }
    *(undefined8 *)(local_90 + 0x300) = local_98;
    plVar10 = *(long **)(local_90 + 0x120);
    iVar7 = *(int *)(local_90 + 0x118);
    *(int *)(local_90 + 0x118) = local_88;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10,CONCAT44(iVar7 - local_88,local_88));
    }
    pBVar11 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::StoreAccumulatorInRegister
                        ((BytecodeArrayBuilder *)(this + 0x18),iVar18);
    uVar12 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),8);
    BytecodeArrayBuilder::LoadKeyedProperty(pBVar11,uVar5,uVar12);
    break;
  case 3:
    uVar1 = *(uint *)(this + 0x118);
    uVar16 = (ulong)uVar1;
    plVar10 = *(long **)(this + 0x120);
    iVar7 = uVar1 + 4;
    iVar18 = *(int *)(this + 0x11c);
    if (*(int *)(this + 0x11c) <= iVar7) {
      iVar18 = iVar7;
    }
    *(int *)(this + 0x118) = iVar7;
    *(int *)(this + 0x11c) = iVar18;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10,uVar16 | 0x400000000);
    }
    lVar14 = *(long *)(pPVar13 + 8);
    if ((*(uint *)(lVar14 + 4) & 0x3f) != 0x30) {
      lVar14 = 0;
    }
    lVar8 = Scope::GetReceiverScope(*(Scope **)(this + 0x1e0));
    BuildVariableLoad(this,*(undefined8 *)(lVar8 + 0xb0),1 < *(byte *)(lVar8 + 0x85) - 5,1);
    pBVar11 = (BytecodeArrayBuilder *)(this + 0x18);
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar11,uVar16);
    local_98 = *(undefined8 *)(this + 0x300);
    pAVar19 = *(AstNode **)(lVar14 + 8);
    local_88 = *(int *)(this + 0x118);
    local_80 = 2;
    *(undefined8 **)(this + 0x300) = &local_98;
    local_90 = this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar9 = GetCurrentStackPosition();
      if (uVar9 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar19);
      }
    }
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar11,uVar1 + 1);
    *(undefined8 *)(local_90 + 0x300) = local_98;
    plVar10 = *(long **)(local_90 + 0x120);
    iVar7 = *(int *)(local_90 + 0x118);
    *(int *)(local_90 + 0x118) = local_88;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10,CONCAT44(iVar7 - local_88,local_88));
    }
    lVar14 = *(long *)(pPVar13 + 0x10);
    if ((*(uint *)(lVar14 + 4) & 0x3f) != 0x29) {
      lVar14 = 0;
    }
    pBVar11 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::LoadLiteral(pBVar11,*(AstRawString **)(lVar14 + 8));
    pBVar11 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar11,uVar1 + 2);
    uVar12 = 0x24;
    goto LAB_0151bfb4;
  case 4:
    uVar1 = *(uint *)(this + 0x118);
    uVar16 = (ulong)uVar1;
    plVar10 = *(long **)(this + 0x120);
    iVar7 = uVar1 + 4;
    iVar18 = *(int *)(this + 0x11c);
    if (*(int *)(this + 0x11c) <= iVar7) {
      iVar18 = iVar7;
    }
    *(int *)(this + 0x118) = iVar7;
    *(int *)(this + 0x11c) = iVar18;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10,uVar16 | 0x400000000);
    }
    lVar14 = *(long *)(pPVar13 + 8);
    if ((*(uint *)(lVar14 + 4) & 0x3f) != 0x30) {
      lVar14 = 0;
    }
    lVar8 = Scope::GetReceiverScope(*(Scope **)(this + 0x1e0));
    BuildVariableLoad(this,*(undefined8 *)(lVar8 + 0xb0),1 < *(byte *)(lVar8 + 0x85) - 5,1);
    pBVar11 = (BytecodeArrayBuilder *)(this + 0x18);
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar11,uVar16);
    local_98 = *(undefined8 *)(this + 0x300);
    pAVar19 = *(AstNode **)(lVar14 + 8);
    local_88 = *(int *)(this + 0x118);
    local_80 = 2;
    *(undefined8 **)(this + 0x300) = &local_98;
    local_90 = this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar9 = GetCurrentStackPosition();
      if (uVar9 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar19);
      }
    }
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar11,uVar1 + 1);
    *(undefined8 *)(local_90 + 0x300) = local_98;
    plVar10 = *(long **)(local_90 + 0x120);
    iVar7 = *(int *)(local_90 + 0x118);
    *(int *)(local_90 + 0x118) = local_88;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10,CONCAT44(iVar7 - local_88,local_88));
    }
    local_98 = *(undefined8 *)(this + 0x300);
    pAVar19 = *(AstNode **)(pPVar13 + 0x10);
    local_88 = *(int *)(this + 0x118);
    local_80 = 2;
    *(undefined8 **)(this + 0x300) = &local_98;
    local_90 = this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar9 = GetCurrentStackPosition();
      if (uVar9 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar19);
      }
    }
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar11,uVar1 + 2);
    *(undefined8 *)(local_90 + 0x300) = local_98;
    plVar10 = *(long **)(local_90 + 0x120);
    iVar7 = *(int *)(local_90 + 0x118);
    *(int *)(local_90 + 0x118) = local_88;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10,CONCAT44(iVar7 - local_88,local_88));
    }
    uVar12 = 0x25;
LAB_0151bfb4:
    BytecodeArrayBuilder::CallRuntime(pBVar11,uVar12,uVar16 | 0x300000000);
    break;
  case 5:
    uVar12 = 0x106;
    goto LAB_0151bd50;
  case 6:
    uVar12 = 0x108;
    goto LAB_0151bd50;
  case 7:
    uVar12 = 0x107;
LAB_0151bd50:
    BuildInvalidPropertyAccess(this,uVar12,pPVar13);
    lVar15 = *(long *)(lVar15 + 0x28);
    goto LAB_0151c2e4;
  case 8:
    uVar5 = VisitForRegisterValue(this,*(Expression **)(pPVar13 + 8));
    uVar6 = VisitForRegisterValue(this,*(Expression **)(pPVar13 + 0x10));
    BuildPrivateBrandCheck(this,pPVar13,uVar5,0x104);
    BuildPrivateGetterAccess(this,uVar5,uVar6);
  }
  iVar7 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),0xf);
  if (bVar3) {
    iVar18 = *(int *)(this + 0x118);
    iVar2 = *(int *)(this + 0x11c);
    plVar10 = *(long **)(this + 0x120);
    if (iVar2 <= iVar18 + 1) {
      iVar2 = iVar18 + 1;
    }
    *(int *)(this + 0x118) = iVar18 + 1;
    *(int *)(this + 0x11c) = iVar2;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,iVar18);
    }
    pBVar11 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::ToNumeric((BytecodeArrayBuilder *)(this + 0x18),iVar7);
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar11,iVar18);
  }
  else {
    iVar18 = 0x7fffffff;
  }
  BytecodeArrayBuilder::UnaryOperation
            ((BytecodeArrayBuilder *)(this + 0x18),(byte)param_1[5] & 0x7f,iVar7);
  iVar7 = *(int *)param_1;
  if ((iVar7 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
    this[0x1c0] = (BytecodeGenerator)0x1;
    *(int *)(this + 0x1c4) = iVar7;
  }
  if (uVar4 < 9) {
                    /* WARNING: Could not recover jumptable at 0x0151c090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_0151c094 + (ulong)(byte)(&DAT_01a49fa4)[uVar4] * 4))();
    return;
  }
  if (bVar3) {
    BytecodeArrayBuilder::LoadAccumulatorWithRegister((BytecodeArrayBuilder *)(this + 0x18),iVar18);
  }
  lVar15 = *(long *)(lVar15 + 0x28);
LAB_0151c2e4:
  if (lVar15 != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

