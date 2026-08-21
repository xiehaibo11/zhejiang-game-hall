
/* v8::internal::interpreter::BytecodeGenerator::VisitYieldStar(v8::internal::YieldStar*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitYieldStar
          (BytecodeGenerator *this,YieldStar *param_1)

{
  BytecodeArrayBuilder *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  long lVar8;
  char cVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  BytecodeArrayBuilder *pBVar14;
  undefined8 uVar15;
  BytecodeJumpTable *pBVar16;
  BytecodeLabel *pBVar17;
  ulong uVar18;
  long ****pppplVar19;
  int iVar20;
  AstNode *pAVar21;
  BlockCoverageBuilder *pBVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong local_150;
  int local_148;
  long ***local_140;
  long ***local_138;
  long local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  long ***local_118;
  long ***local_110;
  long local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined **local_f0;
  BytecodeArrayBuilder *local_e8;
  undefined8 ***local_e0;
  undefined8 ***local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 ***local_a0;
  undefined8 ***pppuStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  iVar1 = *(int *)(this + 0x118);
  iVar20 = *(int *)(this + 0x11c);
  plVar11 = *(long **)(this + 0x120);
  iVar10 = iVar1 + 1;
  if (iVar20 <= iVar10) {
    iVar20 = iVar1 + 1;
  }
  *(int *)(this + 0x118) = iVar10;
  *(int *)(this + 0x11c) = iVar20;
  plVar12 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x10))(plVar11,iVar1);
    iVar10 = *(int *)(this + 0x118);
    iVar20 = *(int *)(this + 0x11c);
    plVar12 = *(long **)(this + 0x120);
  }
  if (iVar20 <= iVar10 + 1) {
    iVar20 = iVar10 + 1;
  }
  *(int *)(this + 0x118) = iVar10 + 1;
  *(int *)(this + 0x11c) = iVar20;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x10))(plVar12,iVar10);
  }
  cVar9 = FunctionLiteral::kind(*(FunctionLiteral **)(*(long *)(this + 0x1d0) + 0x10));
  uVar2 = *(uint *)(this + 0x118);
  uVar23 = (ulong)uVar2;
  bVar7 = cVar9 - 0xd;
  plVar11 = *(long **)(this + 0x120);
  iVar20 = uVar2 + 2;
  iVar3 = *(int *)(this + 0x11c);
  if (*(int *)(this + 0x11c) <= iVar20) {
    iVar3 = iVar20;
  }
  *(int *)(this + 0x118) = iVar20;
  *(int *)(this + 0x11c) = iVar3;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11,uVar23 | 0x200000000);
    iVar20 = *(int *)(this + 0x118);
  }
  local_f0 = *(undefined ***)(this + 0x300);
  pAVar21 = *(AstNode **)(param_1 + 8);
  local_e0 = (undefined8 ***)CONCAT44(local_e0._4_4_,iVar20);
  local_d8 = (undefined8 ***)0x2;
  *(undefined ****)(this + 0x300) = &local_f0;
  local_e8 = (BytecodeArrayBuilder *)this;
  if (this[8] == (BytecodeGenerator)0x0) {
    uVar13 = GetCurrentStackPosition();
    if (uVar13 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar21);
    }
  }
  *(undefined ***)(local_e8 + 0x300) = local_f0;
  plVar11 = *(long **)(local_e8 + 0x120);
  iVar20 = *(int *)(local_e8 + 0x118);
  *(int *)(local_e8 + 0x118) = (int)local_e0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11,CONCAT44(iVar20 - (int)local_e0,(int)local_e0));
  }
  iVar3 = *(int *)(this + 0x118);
  iVar20 = *(int *)(this + 0x11c);
  plVar11 = *(long **)(this + 0x120);
  if (iVar20 <= iVar3 + 1) {
    iVar20 = iVar3 + 1;
  }
  *(int *)(this + 0x118) = iVar3 + 1;
  *(int *)(this + 0x11c) = iVar20;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x10))(plVar11,iVar3);
  }
  BuildGetIterator(this,bVar7 < 2);
  this_00 = (BytecodeArrayBuilder *)(this + 0x18);
  pBVar14 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,uVar23)
  ;
  uVar24 = *(undefined8 *)(*(long *)(this + 0x1d8) + 0x170);
  uVar15 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),5);
  pBVar14 = (BytecodeArrayBuilder *)
            BytecodeArrayBuilder::LoadNamedProperty(pBVar14,uVar23,uVar24,uVar15);
  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar14,iVar3);
  local_150 = (ulong)(bVar7 < 2) | uVar23 << 0x20;
  iVar20 = uVar2 + 1;
  local_148 = iVar3;
  pBVar14 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadUndefined(this_00);
  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar14,iVar20);
  pBVar14 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadLiteral(this_00,0);
  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar14,iVar10);
  uStack_c8 = *(undefined8 *)(this + 0x18);
  local_f0 = &PTR__LoopBuilder_01cc7128;
  local_a0 = &local_a0;
  local_c0 = 0;
  local_b0 = 0;
  uStack_a8 = 0xffffffffffffffff;
  local_b8 = 0;
  local_d0 = 0;
  local_90 = 0;
  local_80 = 0;
  local_e8 = this_00;
  local_e0 = &local_e0;
  local_d8 = &local_e0;
  pppuStack_98 = local_a0;
  uStack_88 = uStack_c8;
  LoopBuilder::LoopHeader((LoopBuilder *)&local_f0);
  uStack_100 = *(undefined8 *)(this + 0x10);
  local_118 = (long ***)&local_118;
  local_108 = 0;
  local_f8 = 0;
  local_110 = local_118;
  pBVar16 = (BytecodeJumpTable *)BytecodeArrayBuilder::AllocateJumpTable(this_00,2,1);
  pBVar14 = (BytecodeArrayBuilder *)
            BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,iVar10);
  BytecodeArrayBuilder::SwitchOnSmiNoFeedback(pBVar14,pBVar16);
  uVar15 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),4);
  uVar13 = uVar23 | 0x200000000;
  BytecodeArrayBuilder::CallProperty(this_00,iVar3,uVar13,uVar15);
  pBVar17 = (BytecodeLabel *)BytecodeLabels::New((BytecodeLabels *)&local_118);
  BytecodeArrayBuilder::Jump(this_00,pBVar17);
  BytecodeArrayBuilder::Bind(this_00,pBVar16,1);
  uStack_128 = *(undefined8 *)(this + 0x10);
  local_140 = (long ***)&local_140;
  uVar24 = *(undefined8 *)(*(long *)(this + 0x1d8) + 0x1a8);
  local_130 = 0;
  local_120 = 0;
  local_138 = local_140;
  uVar15 = BytecodeLabels::New((BytecodeLabels *)&local_118);
  BuildCallIteratorMethod(this,uVar23,uVar24,uVar13,uVar15,&local_140);
  BytecodeLabels::Bind((BytecodeLabels *)&local_140,this_00);
  BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,iVar20);
  if (bVar7 < 2) {
    BuildAwait(this,*(int *)param_1);
    plVar11 = *(long **)(this + 0x2f0);
    do {
      uVar18 = (**(code **)(*plVar11 + 0x10))(plVar11,3,0,0xffffffff);
      if ((uVar18 & 1) != 0) goto LAB_01518180;
      plVar11 = (long *)plVar11[2];
    } while (plVar11 != (long *)0x0);
  }
  else {
    plVar11 = *(long **)(this + 0x2f0);
    do {
      uVar18 = (**(code **)(*plVar11 + 0x10))(plVar11,2,0,0xffffffff);
      if ((uVar18 & 1) != 0) goto LAB_01518180;
      plVar11 = (long *)plVar11[2];
    } while (plVar11 != (long *)0x0);
  }
  goto LAB_01518618;
LAB_01518180:
  if (local_130 != 0) {
    (*local_138)[1] = (long *)local_140[1];
    *local_140[1] = (long *)*local_138;
    local_130 = 0;
    for (pppplVar19 = (long ****)local_138; pppplVar19 != &local_140;
        pppplVar19 = (long ****)pppplVar19[1]) {
    }
  }
  BytecodeArrayBuilder::Bind(this_00,pBVar16,2);
  uStack_128 = *(undefined8 *)(this + 0x10);
  uVar24 = *(undefined8 *)(*(long *)(this + 0x1d8) + 0x1e8);
  local_130 = 0;
  local_120 = 0;
  local_140 = (long ***)&local_140;
  local_138 = (long ***)&local_140;
  uVar15 = BytecodeLabels::New((BytecodeLabels *)&local_118);
  BuildCallIteratorMethod(this,uVar23,uVar24,uVar13,uVar15,&local_140);
  BytecodeLabels::Bind((BytecodeLabels *)&local_140,this_00);
  BuildIteratorClose(this,(IteratorRecord *)&local_150,(Expression *)param_1);
  BytecodeArrayBuilder::CallRuntime(this_00,0xb5);
  if (local_130 != 0) {
    (*local_138)[1] = (long *)local_140[1];
    *local_140[1] = (long *)*local_138;
    local_130 = 0;
    if ((long ****)local_138 != &local_140) {
      pppplVar19 = (long ****)local_138;
      do {
        pppplVar19 = (long ****)pppplVar19[1];
      } while (pppplVar19 != &local_140);
    }
  }
  BytecodeLabels::Bind((BytecodeLabels *)&local_118,this_00);
  if (local_108 != 0) {
    (*local_110)[1] = (long *)local_118[1];
    *local_118[1] = (long *)*local_110;
    local_108 = 0;
    if ((long ****)local_110 != &local_118) {
      pppplVar19 = (long ****)local_110;
      do {
        pppplVar19 = (long ****)pppplVar19[1];
      } while (pppplVar19 != &local_118);
    }
  }
  if (bVar7 < 2) {
    BuildAwait(this,*(int *)param_1);
  }
  local_118 = (long ***)((ulong)local_118 & 0xffffffffffffff00);
  local_110 = (long ***)0xffffffffffffffff;
  pBVar14 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,iVar1);
  pBVar14 = (BytecodeArrayBuilder *)
            BytecodeArrayBuilder::JumpIfJSReceiver(pBVar14,(BytecodeLabel *)&local_118);
  BytecodeArrayBuilder::CallRuntime(pBVar14,0xac,iVar1);
  BytecodeArrayBuilder::Bind(this_00,(BytecodeLabel *)&local_118);
  uVar24 = *(undefined8 *)(*(long *)(this + 0x1d8) + 0xc0);
  uVar15 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),5);
  BytecodeArrayBuilder::LoadNamedProperty(this_00,iVar1,uVar24,uVar15);
  BreakableControlFlowBuilder::EmitJumpIfTrue((BreakableControlFlowBuilder *)&local_f0,0,&local_e0);
  if (bVar7 < 2) {
    iVar4 = *(int *)(this + 0x118);
    uVar24 = *(undefined8 *)(*(long *)(this + 0x1d8) + 0x1f8);
    uVar15 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),5);
    BytecodeArrayBuilder::LoadNamedProperty(this_00,iVar1,uVar24,uVar15);
    uVar5 = *(uint *)(this + 0x118);
    plVar11 = *(long **)(this + 0x120);
    iVar3 = uVar5 + 3;
    iVar6 = *(int *)(this + 0x11c);
    if (*(int *)(this + 0x11c) <= iVar3) {
      iVar6 = iVar3;
    }
    uVar13 = (ulong)uVar5 | 0x300000000;
    *(int *)(this + 0x118) = iVar3;
    *(int *)(this + 0x11c) = iVar6;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11,uVar13);
    }
    pBVar14 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::MoveRegister(this_00,*(undefined4 *)(this + 0x308),(ulong)uVar5)
    ;
    pBVar14 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar14,uVar5 + 1);
    pBVar14 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::LoadBoolean(pBVar14,*(int *)(this + 0x338) != 4);
    pBVar14 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar14,uVar5 + 2);
    BytecodeArrayBuilder::CallRuntime(pBVar14,0x1e7,uVar13);
    plVar11 = *(long **)(this + 0x120);
    iVar3 = *(int *)(this + 0x118);
    *(int *)(this + 0x118) = iVar4;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))(plVar11,CONCAT44(iVar3 - iVar4,iVar4));
    }
  }
  else {
    BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,iVar1);
  }
  if (this[0x1b2] == (BytecodeGenerator)0x0) {
    iVar3 = *(int *)(this + 0x330);
    iVar6 = *(int *)param_1;
    uVar5 = *(uint *)(this + 0x118);
    *(int *)(this + 0x330) = iVar3 + 1;
    if ((iVar6 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
      this[0x1c0] = (BytecodeGenerator)0x1;
      *(int *)(this + 0x1c4) = iVar6;
    }
    BytecodeArrayBuilder::SuspendGenerator
              (this_00,*(undefined4 *)(this + 0x308),(ulong)uVar5 << 0x20,iVar3);
    BytecodeArrayBuilder::Bind(this_00,*(BytecodeJumpTable **)(this + 0x328),iVar3);
    BytecodeArrayBuilder::ResumeGenerator
              (this_00,*(undefined4 *)(this + 0x308),(ulong)uVar5 << 0x20);
  }
  BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,iVar20);
  pBVar14 = (BytecodeArrayBuilder *)
            BytecodeArrayBuilder::CallRuntime(this_00,0x1ea,*(undefined4 *)(this + 0x308));
  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar14,iVar10);
  LoopBuilder::BindContinueTarget((LoopBuilder *)&local_f0);
  LoopBuilder::JumpToHeader((LoopBuilder *)&local_f0,*(int *)(this + 0x334));
  LoopBuilder::~LoopBuilder((LoopBuilder *)&local_f0);
  plVar12 = *(long **)(this + 0x120);
  iVar3 = *(int *)(this + 0x118);
  *(uint *)(this + 0x118) = uVar2;
  plVar11 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12,CONCAT44(iVar3 - uVar2,uVar2));
    uVar23 = (ulong)*(uint *)(this + 0x118);
    plVar11 = *(long **)(this + 0x120);
    iVar20 = *(uint *)(this + 0x118) + 1;
  }
  local_f0 = (undefined **)((ulong)local_f0 & 0xffffffffffffff00);
  local_e8 = (BytecodeArrayBuilder *)0xffffffffffffffff;
  *(int *)(this + 0x118) = iVar20;
  iVar3 = *(int *)(this + 0x11c);
  if (*(int *)(this + 0x11c) <= iVar20) {
    iVar3 = iVar20;
  }
  *(int *)(this + 0x11c) = iVar3;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x10))(plVar11,uVar23);
  }
  uVar24 = *(undefined8 *)(*(long *)(this + 0x1d8) + 0x1f8);
  uVar15 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),5);
  pBVar14 = (BytecodeArrayBuilder *)
            BytecodeArrayBuilder::LoadNamedProperty(this_00,iVar1,uVar24,uVar15);
  pBVar14 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar14,uVar23)
  ;
  pBVar14 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadLiteral(pBVar14,2);
  pBVar14 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::CompareReference(pBVar14,iVar10);
  pBVar14 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::JumpIfFalse(pBVar14,1,&local_f0);
  BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar14,uVar23);
  plVar11 = *(long **)(this + 0x2f0);
  if (bVar7 < 2) {
    do {
      uVar13 = (**(code **)(*plVar11 + 0x10))(plVar11,3,0,0xffffffff);
      if ((uVar13 & 1) != 0) {
LAB_01518624:
        BytecodeArrayBuilder::Bind(this_00,(BytecodeLabel *)&local_f0);
        pBVar22 = *(BlockCoverageBuilder **)(this + 0x208);
        if ((pBVar22 != (BlockCoverageBuilder *)0x0) &&
           (iVar10 = BlockCoverageBuilder::AllocateBlockCoverageSlot(pBVar22,param_1,2),
           iVar10 != -1)) {
          BytecodeArrayBuilder::IncBlockCounter(*(BytecodeArrayBuilder **)(pBVar22 + 0x20),iVar10);
        }
        BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,uVar23);
        if (*(long *)(lVar8 + 0x28) == local_70) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      plVar11 = (long *)plVar11[2];
    } while (plVar11 != (long *)0x0);
  }
  else {
    do {
      uVar13 = (**(code **)(*plVar11 + 0x10))(plVar11,2,0,0xffffffff);
      if ((uVar13 & 1) != 0) goto LAB_01518624;
      plVar11 = (long *)plVar11[2];
    } while (plVar11 != (long *)0x0);
  }
LAB_01518618:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

