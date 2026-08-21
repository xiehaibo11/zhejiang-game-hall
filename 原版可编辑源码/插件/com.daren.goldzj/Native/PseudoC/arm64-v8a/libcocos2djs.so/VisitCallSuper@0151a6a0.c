
/* v8::internal::interpreter::BytecodeGenerator::VisitCallSuper(v8::internal::Call*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitCallSuper(BytecodeGenerator *this,Call *param_1)

{
  BytecodeArrayBuilder *pBVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  long *plVar10;
  BytecodeArrayBuilder *pBVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  AstNode *pAVar16;
  long lVar17;
  long lVar18;
  ulong local_90;
  undefined8 local_88;
  BytecodeGenerator *pBStack_80;
  uint local_78;
  undefined8 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  lVar14 = *(long *)(param_1 + 8);
  iVar3 = *(int *)(this + 0x118);
  if ((*(uint *)(lVar14 + 4) & 0x3f) != 0x2f) {
    lVar14 = 0;
  }
  if (*(int *)(param_1 + 0x1c) < 1) {
    lVar18 = 0;
  }
  else {
    lVar18 = 0;
    do {
      if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x10) + lVar18 * 8) + 4) & 0x3f) == 0x2d) break;
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(param_1 + 0x1c));
  }
  uVar8 = VisitForRegisterValue(this,*(Expression **)(lVar14 + 0x10));
  iVar4 = *(int *)(this + 0x118);
  iVar5 = *(int *)(this + 0x11c);
  plVar10 = *(long **)(this + 0x120);
  if (iVar5 <= iVar4 + 1) {
    iVar5 = iVar4 + 1;
  }
  *(int *)(this + 0x118) = iVar4 + 1;
  *(int *)(this + 0x11c) = iVar5;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x10))(plVar10,iVar4);
  }
  pBVar1 = (BytecodeArrayBuilder *)(this + 0x18);
  pBVar11 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar1,uVar8);
  BytecodeArrayBuilder::GetSuperConstructor(pBVar11,iVar4);
  pBStack_80 = this;
  if ((int)lVar18 < *(int *)(param_1 + 0x1c) + -1) {
    BuildCreateArrayLiteral(this,(ZoneList *)(param_1 + 0x10),(ArrayLiteral *)0x0);
    uVar9 = *(uint *)(this + 0x118);
    uVar15 = (ulong)uVar9;
    plVar10 = *(long **)(this + 0x120);
    iVar5 = uVar9 + 3;
    iVar2 = *(int *)(this + 0x11c);
    if (*(int *)(this + 0x11c) <= iVar5) {
      iVar2 = iVar5;
    }
    *(int *)(this + 0x118) = iVar5;
    *(int *)(this + 0x11c) = iVar2;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10,uVar15 | 0x300000000);
    }
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar1,uVar9 + 1);
    BytecodeArrayBuilder::MoveRegister(pBVar1,iVar4,uVar15);
    local_88 = *(undefined8 *)(this + 0x300);
    pAVar16 = *(AstNode **)(lVar14 + 8);
    local_78 = *(uint *)(this + 0x118);
    local_70 = 2;
    *(undefined8 **)(this + 0x300) = &local_88;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar12 = GetCurrentStackPosition();
      if (uVar12 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar16);
      }
    }
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar1,uVar9 + 2);
    *(undefined8 *)(pBStack_80 + 0x300) = local_88;
    plVar10 = *(long **)(pBStack_80 + 0x120);
    iVar5 = *(int *)(pBStack_80 + 0x118);
    *(uint *)(pBStack_80 + 0x118) = local_78;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10,CONCAT44(iVar5 - local_78,local_78));
    }
    BytecodeArrayBuilder::CallJSRuntime(pBVar1,0xfe,uVar15 | 0x300000000);
  }
  else {
    local_78 = *(uint *)(this + 0x118);
    local_90 = (ulong)local_78;
    if (0 < *(int *)(param_1 + 0x1c)) {
      lVar17 = 0;
      do {
        VisitAndPushIntoRegisterList
                  (this,*(Expression **)(*(long *)(param_1 + 0x10) + lVar17 * 8),
                   (RegisterList *)&local_90);
        lVar17 = lVar17 + 1;
      } while (lVar17 < *(int *)(param_1 + 0x1c));
      local_78 = *(uint *)(this + 0x118);
    }
    local_88 = *(undefined8 *)(this + 0x300);
    pAVar16 = *(AstNode **)(lVar14 + 8);
    local_70 = 2;
    *(undefined8 **)(this + 0x300) = &local_88;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar15 = GetCurrentStackPosition();
      if (uVar15 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar16);
      }
    }
    *(undefined8 *)(pBStack_80 + 0x300) = local_88;
    plVar10 = *(long **)(pBStack_80 + 0x120);
    iVar5 = *(int *)(pBStack_80 + 0x118);
    *(uint *)(pBStack_80 + 0x118) = local_78;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10,CONCAT44(iVar5 - local_78,local_78));
    }
    iVar5 = *(int *)param_1;
    if ((iVar5 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
      this[0x1c0] = (BytecodeGenerator)0x1;
      *(int *)(this + 0x1c4) = iVar5;
    }
    uVar13 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),4);
    if ((int)lVar18 == *(int *)(param_1 + 0x1c) + -1) {
      BytecodeArrayBuilder::ConstructWithSpread();
    }
    else {
      BytecodeArrayBuilder::Construct(pBVar1,iVar4,local_90,uVar13);
    }
  }
  uVar9 = FunctionLiteral::kind(*(FunctionLiteral **)(*(long *)(this + 0x1d0) + 0x10));
  if ((uVar9 & 0xfe) != 4) {
    lVar14 = Scope::GetReceiverScope(*(Scope **)(this + 0x1e0));
    BuildVariableAssignment(this,*(undefined8 *)(lVar14 + 0xb0),0x10,0,0);
  }
  iVar4 = *(int *)(this + 0x118);
  iVar5 = *(int *)(this + 0x11c);
  plVar10 = *(long **)(this + 0x120);
  if (iVar5 <= iVar4 + 1) {
    iVar5 = iVar4 + 1;
  }
  *(int *)(this + 0x118) = iVar4 + 1;
  *(int *)(this + 0x11c) = iVar5;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x10))(plVar10,iVar4);
  }
  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar1,iVar4);
  uVar15 = FunctionLiteral::requires_brand_initialization
                     (*(FunctionLiteral **)(*(long *)(this + 0x1d0) + 0x10));
  if ((uVar15 & 1) != 0) {
    BuildPrivateBrandInitialization(this,iVar4);
  }
  if ((((byte)(*(FunctionLiteral **)(*(long *)(this + 0x1d0) + 0x10))[6] >> 4 & 1) != 0) ||
     (cVar7 = FunctionLiteral::kind(*(FunctionLiteral **)(*(long *)(this + 0x1d0) + 0x10)),
     1 < (byte)(cVar7 - 5U))) {
    BuildInstanceMemberInitialization(this,uVar8,iVar4);
  }
  BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar1,iVar4);
  plVar10 = *(long **)(this + 0x120);
  iVar5 = *(int *)(this + 0x118);
  *(int *)(this + 0x118) = iVar3;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10,CONCAT44(iVar5 - iVar3,iVar3));
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

