
/* v8::internal::interpreter::BytecodeGenerator::VisitYield(v8::internal::Yield*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitYield(BytecodeGenerator *this,Yield *param_1)

{
  BytecodeArrayBuilder *this_00;
  uint uVar1;
  int iVar2;
  Yield YVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  BytecodeArrayBuilder *pBVar9;
  BytecodeJumpTable *pBVar10;
  undefined8 uVar11;
  BlockCoverageBuilder *pBVar12;
  AstNode *pAVar13;
  ulong uVar14;
  undefined8 local_78;
  BytecodeGenerator *pBStack_70;
  int local_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  iVar6 = *(int *)param_1;
  if ((iVar6 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
    this[0x1c0] = (BytecodeGenerator)0x1;
    *(int *)(this + 0x1c4) = iVar6;
  }
  local_78 = *(undefined8 *)(this + 0x300);
  pAVar13 = *(AstNode **)(param_1 + 8);
  local_68 = *(int *)(this + 0x118);
  local_60 = 2;
  *(undefined8 **)(this + 0x300) = &local_78;
  pBStack_70 = this;
  if (this[8] == (BytecodeGenerator)0x0) {
    uVar7 = GetCurrentStackPosition();
    if (uVar7 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar13);
    }
  }
  this_00 = (BytecodeArrayBuilder *)(this + 0x18);
  *(undefined8 *)(pBStack_70 + 0x300) = local_78;
  plVar8 = *(long **)(pBStack_70 + 0x120);
  iVar6 = *(int *)(pBStack_70 + 0x118);
  *(int *)(pBStack_70 + 0x118) = local_68;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8,CONCAT44(iVar6 - local_68,local_68));
  }
  if (0 < *(int *)(this + 0x330)) {
    cVar5 = FunctionLiteral::kind(*(FunctionLiteral **)(*(long *)(this + 0x1d0) + 0x10));
    uVar1 = *(uint *)(this + 0x118);
    uVar7 = (ulong)uVar1;
    if ((byte)(cVar5 - 0xdU) < 2) {
      plVar8 = *(long **)(this + 0x120);
      iVar6 = uVar1 + 3;
      uVar14 = uVar7 | 0x300000000;
      iVar2 = *(int *)(this + 0x11c);
      if (*(int *)(this + 0x11c) <= iVar6) {
        iVar2 = iVar6;
      }
      *(int *)(this + 0x118) = iVar6;
      *(int *)(this + 0x11c) = iVar2;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))(plVar8,uVar14);
      }
      pBVar9 = (BytecodeArrayBuilder *)
               BytecodeArrayBuilder::MoveRegister(this_00,*(undefined4 *)(this + 0x308),uVar7);
      pBVar9 = (BytecodeArrayBuilder *)
               BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar9,uVar1 + 1);
      pBVar9 = (BytecodeArrayBuilder *)
               BytecodeArrayBuilder::LoadBoolean(pBVar9,*(int *)(this + 0x338) != 4);
      pBVar9 = (BytecodeArrayBuilder *)
               BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar9,uVar1 + 2);
      uVar11 = 0x1e7;
    }
    else {
      plVar8 = *(long **)(this + 0x120);
      iVar6 = uVar1 + 2;
      uVar14 = uVar7 | 0x200000000;
      iVar2 = *(int *)(this + 0x11c);
      if (*(int *)(this + 0x11c) <= iVar6) {
        iVar2 = iVar6;
      }
      *(int *)(this + 0x118) = iVar6;
      *(int *)(this + 0x11c) = iVar2;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))(plVar8,uVar14);
      }
      pBVar9 = (BytecodeArrayBuilder *)
               BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,uVar7);
      pBVar9 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadFalse(pBVar9);
      pBVar9 = (BytecodeArrayBuilder *)
               BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar9,uVar1 + 1);
      uVar11 = 0x1f0;
    }
    BytecodeArrayBuilder::CallRuntime(pBVar9,uVar11,uVar14);
    plVar8 = *(long **)(this + 0x120);
    iVar6 = *(int *)(this + 0x118);
    *(uint *)(this + 0x118) = uVar1;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))(plVar8,CONCAT44(iVar6 - uVar1,uVar1));
    }
  }
  if (this[0x1b2] == (BytecodeGenerator)0x0) {
    iVar6 = *(int *)(this + 0x330);
    iVar2 = *(int *)param_1;
    uVar1 = *(uint *)(this + 0x118);
    *(int *)(this + 0x330) = iVar6 + 1;
    if ((iVar2 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
      this[0x1c0] = (BytecodeGenerator)0x1;
      *(int *)(this + 0x1c4) = iVar2;
    }
    BytecodeArrayBuilder::SuspendGenerator
              (this_00,*(undefined4 *)(this + 0x308),(ulong)uVar1 << 0x20,iVar6);
    BytecodeArrayBuilder::Bind(this_00,*(BytecodeJumpTable **)(this + 0x328),iVar6);
    BytecodeArrayBuilder::ResumeGenerator
              (this_00,*(undefined4 *)(this + 0x308),(ulong)uVar1 << 0x20);
    YVar3 = param_1[4];
  }
  else {
    YVar3 = param_1[4];
  }
  if (-1 < (char)YVar3) {
    iVar2 = *(int *)(this + 0x118);
    iVar6 = *(int *)(this + 0x11c);
    plVar8 = *(long **)(this + 0x120);
    if (iVar6 <= iVar2 + 1) {
      iVar6 = iVar2 + 1;
    }
    *(int *)(this + 0x118) = iVar2 + 1;
    *(int *)(this + 0x11c) = iVar6;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,iVar2);
    }
    pBVar9 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,iVar2)
    ;
    BytecodeArrayBuilder::CallRuntime(pBVar9,0x1ea,*(undefined4 *)(this + 0x308));
    pBVar10 = (BytecodeJumpTable *)BytecodeArrayBuilder::AllocateJumpTable(this_00,2,0);
    BytecodeArrayBuilder::SwitchOnSmiNoFeedback(this_00,pBVar10);
    iVar6 = *(int *)param_1;
    if ((iVar6 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
      this[0x1c0] = (BytecodeGenerator)0x1;
      *(int *)(this + 0x1c4) = iVar6;
    }
    BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,iVar2);
    BytecodeArrayBuilder::Throw(this_00);
    BytecodeArrayBuilder::Bind(this_00,pBVar10,1);
    BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,iVar2);
    cVar5 = FunctionLiteral::kind(*(FunctionLiteral **)(*(long *)(this + 0x1d0) + 0x10));
    plVar8 = *(long **)(this + 0x2f0);
    if ((byte)(cVar5 - 0xdU) < 2) {
      do {
        uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,3,0,0xffffffff);
        if ((uVar7 & 1) != 0) goto LAB_01517d14;
        plVar8 = (long *)plVar8[2];
      } while (plVar8 != (long *)0x0);
    }
    else {
      do {
        uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,2,0,0xffffffff);
        if ((uVar7 & 1) != 0) goto LAB_01517d14;
        plVar8 = (long *)plVar8[2];
      } while (plVar8 != (long *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
LAB_01517d5c:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_01517d14:
  BytecodeArrayBuilder::Bind(this_00,pBVar10,0);
  pBVar12 = *(BlockCoverageBuilder **)(this + 0x208);
  if ((pBVar12 != (BlockCoverageBuilder *)0x0) &&
     (iVar6 = BlockCoverageBuilder::AllocateBlockCoverageSlot(pBVar12,param_1,2), iVar6 != -1)) {
    BytecodeArrayBuilder::IncBlockCounter(*(BytecodeArrayBuilder **)(pBVar12 + 0x20),iVar6);
  }
  BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,iVar2);
  goto LAB_01517d5c;
}

