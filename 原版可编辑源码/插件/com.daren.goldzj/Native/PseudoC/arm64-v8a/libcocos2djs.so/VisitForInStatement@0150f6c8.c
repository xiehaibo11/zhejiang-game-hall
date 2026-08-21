
/* v8::internal::interpreter::BytecodeGenerator::VisitForInStatement(v8::internal::ForInStatement*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitForInStatement
          (BytecodeGenerator *this,ForInStatement *param_1)

{
  BytecodeArrayBuilder *this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  AstNode *pAVar9;
  BytecodeLabel local_150 [8];
  undefined8 local_148;
  undefined **local_140;
  BytecodeGenerator *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  ForInStatement *local_120;
  undefined8 *puStack_118;
  undefined8 local_110;
  BytecodeGenerator *pBStack_108;
  int local_100;
  undefined8 local_f8;
  undefined **local_f0;
  BytecodeGenerator *local_e8;
  undefined8 **local_e0;
  undefined8 **local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  ForInStatement *local_b8;
  BlockCoverageBuilder *pBStack_b0;
  undefined8 local_a8;
  BytecodeLabels *local_a0;
  BytecodeLabels *pBStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  uVar6 = Expression::IsNullLiteral(*(Expression **)(param_1 + 0x28));
  if (((uVar6 & 1) == 0) &&
     (uVar6 = Expression::IsUndefinedLiteral(*(Expression **)(param_1 + 0x28)), (uVar6 & 1) == 0)) {
    local_150[0] = (BytecodeLabel)0x0;
    local_148 = 0xffffffffffffffff;
    uVar6 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),0x14)
    ;
    pAVar9 = *(AstNode **)(param_1 + 0x28);
    iVar1 = *(int *)pAVar9;
    if (iVar1 != -1) {
      this[0x1c0] = (BytecodeGenerator)0x2;
      *(int *)(this + 0x1c4) = iVar1;
      pAVar9 = *(AstNode **)(param_1 + 0x28);
    }
    local_f0 = *(undefined ***)(this + 0x300);
    this_00 = (BytecodeArrayBuilder *)(this + 0x18);
    local_d8 = (undefined8 **)0x2;
    local_e0 = (undefined8 **)CONCAT44(local_e0._4_4_,*(undefined4 *)(this + 0x118));
    *(undefined ****)(this + 0x300) = &local_f0;
    local_e8 = this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar7 = GetCurrentStackPosition();
      if (uVar7 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar9);
      }
    }
    *(undefined ***)(local_e8 + 0x300) = local_f0;
    plVar8 = *(long **)(local_e8 + 0x120);
    iVar1 = *(int *)(local_e8 + 0x118);
    *(int *)(local_e8 + 0x118) = (int)local_e0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))(plVar8,CONCAT44(iVar1 - (int)local_e0,(int)local_e0));
    }
    BytecodeArrayBuilder::JumpIfUndefinedOrNull(this_00,local_150);
    iVar2 = *(int *)(this + 0x118);
    iVar1 = *(int *)(this + 0x11c);
    plVar8 = *(long **)(this + 0x120);
    if (iVar1 <= iVar2 + 1) {
      iVar1 = iVar2 + 1;
    }
    *(int *)(this + 0x118) = iVar2 + 1;
    *(int *)(this + 0x11c) = iVar1;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,iVar2);
    }
    BytecodeArrayBuilder::ToObject(this_00,iVar2);
    uVar3 = *(uint *)(this + 0x118);
    plVar8 = *(long **)(this + 0x120);
    iVar1 = uVar3 + 3;
    iVar4 = *(int *)(this + 0x11c);
    if (*(int *)(this + 0x11c) <= iVar1) {
      iVar4 = iVar1;
    }
    uVar7 = (ulong)uVar3 | 0x300000000;
    *(int *)(this + 0x118) = iVar1;
    *(int *)(this + 0x11c) = iVar4;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))(plVar8,uVar7);
    }
    BytecodeArrayBuilder::ForInEnumerate(this_00,iVar2);
    BytecodeArrayBuilder::ForInPrepare(this_00,uVar7,uVar6 & 0xffffffff);
    iVar4 = *(int *)(this + 0x118);
    iVar1 = *(int *)(this + 0x11c);
    plVar8 = *(long **)(this + 0x120);
    if (iVar1 <= iVar4 + 1) {
      iVar1 = iVar4 + 1;
    }
    *(int *)(this + 0x118) = iVar4 + 1;
    *(int *)(this + 0x11c) = iVar1;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,iVar4);
    }
    BytecodeArrayBuilder::LoadLiteral(this_00,0);
    BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,iVar4);
    pBStack_b0 = *(BlockCoverageBuilder **)(this + 0x208);
    uStack_c8 = *(undefined8 *)(this + 0x18);
    local_f0 = &PTR__LoopBuilder_01cc7128;
    local_c0 = 0;
    local_a8 = 0xffffffffffffffff;
    local_d0 = 0;
    local_90 = 0;
    local_80 = 0;
    local_e8 = (BytecodeGenerator *)this_00;
    local_e0 = &local_e0;
    local_d8 = &local_e0;
    local_b8 = param_1;
    local_a0 = (BytecodeLabels *)&local_a0;
    pBStack_98 = (BytecodeLabels *)&local_a0;
    uStack_88 = uStack_c8;
    if (pBStack_b0 != (BlockCoverageBuilder *)0x0) {
      local_78 = BlockCoverageBuilder::AllocateBlockCoverageSlot(pBStack_b0,param_1,0);
    }
    LoopBuilder::LoopHeader((LoopBuilder *)&local_f0);
    iVar1 = **(int **)(param_1 + 0x20);
    if (iVar1 != -1) {
      this[0x1c0] = (BytecodeGenerator)0x2;
      *(int *)(this + 0x1c4) = iVar1;
    }
    BytecodeArrayBuilder::ForInContinue(this_00,iVar4,uVar3 + 2);
    BreakableControlFlowBuilder::EmitJumpIfFalse
              ((BreakableControlFlowBuilder *)&local_f0,1,&local_e0);
    BytecodeArrayBuilder::ForInNext(this_00,iVar2,iVar4,(ulong)uVar3 | 0x200000000,uVar6);
    BreakableControlFlowBuilder::EmitJumpIfUndefined
              ((BreakableControlFlowBuilder *)&local_f0,(BytecodeLabels *)&local_a0);
    local_110 = *(undefined8 *)(this + 0x300);
    local_100 = *(int *)(this + 0x118);
    local_f8 = 1;
    *(undefined8 **)(this + 0x300) = &local_110;
    pBStack_108 = this;
    PrepareAssignmentLhs(&local_140,this,*(undefined8 *)(param_1 + 0x20),1);
    iVar1 = **(int **)(param_1 + 0x20);
    if ((iVar1 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
      this[0x1c0] = (BytecodeGenerator)0x1;
      *(int *)(this + 0x1c4) = iVar1;
    }
    BuildAssignment(this,&local_140,0x11,0);
    *(undefined8 *)(pBStack_108 + 0x300) = local_110;
    plVar8 = *(long **)(pBStack_108 + 0x120);
    iVar1 = *(int *)(pBStack_108 + 0x118);
    *(int *)(pBStack_108 + 0x118) = local_100;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))(plVar8,CONCAT44(iVar1 - local_100,local_100));
    }
    LoopBuilder::LoopBody((LoopBuilder *)&local_f0);
    uStack_128 = *(undefined8 *)(this + 0x2f8);
    local_130 = *(undefined8 *)(this + 0x2f0);
    local_140 = &PTR__ControlScopeForIteration_01cc7090;
    *(undefined ****)(this + 0x2f0) = &local_140;
    *(int *)(this + 0x334) = *(int *)(this + 0x334) + 1;
    local_138 = this;
    local_120 = param_1;
    puStack_118 = &local_f0;
    BytecodeArrayBuilder::StackCheck(this_00,*(int *)param_1);
    if (this[8] == (BytecodeGenerator)0x0) {
      pAVar9 = *(AstNode **)(param_1 + 0x18);
      uVar6 = GetCurrentStackPosition();
      if (uVar6 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar9);
      }
    }
    LoopBuilder::BindContinueTarget((LoopBuilder *)&local_f0);
    *(int *)(local_138 + 0x334) = *(int *)(local_138 + 0x334) + -1;
    local_140 = &PTR__ControlScope_01cc7020;
    *(undefined8 *)(local_138 + 0x2f0) = local_130;
    BytecodeArrayBuilder::ForInStep(this_00,iVar4);
    BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,iVar4);
    LoopBuilder::JumpToHeader((LoopBuilder *)&local_f0,*(int *)(this + 0x334));
    LoopBuilder::~LoopBuilder((LoopBuilder *)&local_f0);
    BytecodeArrayBuilder::Bind(this_00,local_150);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

