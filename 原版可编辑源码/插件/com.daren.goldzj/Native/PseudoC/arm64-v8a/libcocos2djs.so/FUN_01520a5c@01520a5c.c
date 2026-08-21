
void FUN_01520a5c(undefined8 *param_1)

{
  BytecodeArrayBuilder *this;
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  BytecodeArrayBuilder *pBVar5;
  undefined8 uVar6;
  ulong uVar7;
  BytecodeGenerator *this_00;
  int *piVar8;
  AstNode *pAVar9;
  undefined8 uVar10;
  undefined1 auStack_148 [48];
  undefined **local_118;
  BytecodeGenerator *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  int *local_f8;
  undefined8 *puStack_f0;
  undefined **local_e8;
  BytecodeArrayBuilder *pBStack_e0;
  undefined8 **local_d8;
  undefined8 **ppuStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  BlockCoverageBuilder *local_a8;
  undefined8 uStack_a0;
  undefined8 **local_98;
  undefined8 **ppuStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this_00 = (BytecodeGenerator *)*param_1;
  iVar1 = *(int *)(this_00 + 0x118);
  iVar2 = *(int *)(this_00 + 0x11c);
  plVar4 = *(long **)(this_00 + 0x120);
  if (iVar2 <= iVar1 + 1) {
    iVar2 = iVar1 + 1;
  }
  *(int *)(this_00 + 0x118) = iVar1 + 1;
  *(int *)(this_00 + 0x11c) = iVar2;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,iVar1);
  }
  local_a8 = *(BlockCoverageBuilder **)(this_00 + 0x208);
  this = (BytecodeArrayBuilder *)(this_00 + 0x18);
  local_b0 = *(undefined8 *)param_1[1];
  local_e8 = &PTR__LoopBuilder_01cc7128;
  uStack_c0 = *(undefined8 *)(this_00 + 0x18);
  local_b8 = 0;
  uStack_a0 = 0xffffffffffffffff;
  local_c8 = 0;
  uStack_80 = *(undefined8 *)(this_00 + 0x18);
  local_98 = &local_98;
  local_78 = 0;
  local_88 = 0;
  pBStack_e0 = this;
  local_d8 = &local_d8;
  ppuStack_d0 = &local_d8;
  ppuStack_90 = local_98;
  if (local_a8 != (BlockCoverageBuilder *)0x0) {
    local_70 = v8::internal::interpreter::BlockCoverageBuilder::AllocateBlockCoverageSlot
                         (local_a8,local_b0,0);
  }
  v8::internal::interpreter::LoopBuilder::LoopHeader((LoopBuilder *)&local_e8);
  pBVar5 = (BytecodeArrayBuilder *)v8::internal::interpreter::BytecodeArrayBuilder::LoadTrue(this);
  v8::internal::interpreter::BytecodeArrayBuilder::StoreAccumulatorInRegister
            (pBVar5,*(undefined4 *)param_1[2]);
  iVar2 = **(int **)(*(long *)param_1[1] + 0x20);
  if (iVar2 != -1) {
    this_00[0x1c0] = (BytecodeGenerator)0x2;
    *(int *)(this_00 + 0x1c4) = iVar2;
  }
  v8::internal::interpreter::BytecodeGenerator::BuildIteratorNext(this_00,param_1[3],iVar1);
  uVar10 = *(undefined8 *)(*(long *)(this_00 + 0x1d8) + 0xc0);
  uVar6 = v8::internal::FeedbackVectorSpec::AddSlot
                    ((FeedbackVectorSpec *)(*(long *)(this_00 + 0x1d0) + 0x38),5);
  v8::internal::interpreter::BytecodeArrayBuilder::LoadNamedProperty(this,iVar1,uVar10,uVar6);
  v8::internal::interpreter::BreakableControlFlowBuilder::EmitJumpIfTrue
            ((BreakableControlFlowBuilder *)&local_e8,0,&local_d8);
  uVar10 = *(undefined8 *)(*(long *)(this_00 + 0x1d8) + 0x1f8);
  uVar6 = v8::internal::FeedbackVectorSpec::AddSlot
                    ((FeedbackVectorSpec *)(*(long *)(this_00 + 0x1d0) + 0x38),5);
  v8::internal::interpreter::BytecodeArrayBuilder::LoadNamedProperty(this,iVar1,uVar10,uVar6);
  pBVar5 = (BytecodeArrayBuilder *)
           v8::internal::interpreter::BytecodeArrayBuilder::StoreAccumulatorInRegister(this,iVar1);
  pBVar5 = (BytecodeArrayBuilder *)
           v8::internal::interpreter::BytecodeArrayBuilder::LoadFalse(pBVar5);
  v8::internal::interpreter::BytecodeArrayBuilder::StoreAccumulatorInRegister
            (pBVar5,*(undefined4 *)param_1[2]);
  v8::internal::interpreter::BytecodeGenerator::PrepareAssignmentLhs
            (auStack_148,this_00,*(undefined8 *)(*(long *)param_1[1] + 0x20),0);
  v8::internal::interpreter::BytecodeArrayBuilder::LoadAccumulatorWithRegister(this,iVar1);
  v8::internal::interpreter::BytecodeGenerator::BuildAssignment(this_00,auStack_148,0x11,0);
  piVar8 = *(int **)param_1[1];
  v8::internal::interpreter::LoopBuilder::LoopBody((LoopBuilder *)&local_e8);
  uStack_100 = *(undefined8 *)(this_00 + 0x2f8);
  local_108 = *(undefined8 *)(this_00 + 0x2f0);
  local_118 = &PTR__ControlScopeForIteration_01cc7090;
  *(undefined ****)(this_00 + 0x2f0) = &local_118;
  *(int *)(this_00 + 0x334) = *(int *)(this_00 + 0x334) + 1;
  local_110 = this_00;
  local_f8 = piVar8;
  puStack_f0 = &local_e8;
  v8::internal::interpreter::BytecodeArrayBuilder::StackCheck(this,*piVar8);
  if (this_00[8] == (BytecodeGenerator)0x0) {
    pAVar9 = *(AstNode **)(piVar8 + 6);
    uVar7 = v8::internal::GetCurrentStackPosition();
    if (uVar7 < *(ulong *)this_00) {
      this_00[8] = (BytecodeGenerator)0x1;
    }
    else {
      v8::internal::interpreter::BytecodeGenerator::VisitNoStackOverflowCheck(this_00,pAVar9);
    }
  }
  v8::internal::interpreter::LoopBuilder::BindContinueTarget((LoopBuilder *)&local_e8);
  *(int *)(local_110 + 0x334) = *(int *)(local_110 + 0x334) + -1;
  local_118 = &PTR__ControlScope_01cc7020;
  *(undefined8 *)(local_110 + 0x2f0) = local_108;
  v8::internal::interpreter::LoopBuilder::JumpToHeader
            ((LoopBuilder *)&local_e8,*(int *)(this_00 + 0x334));
  v8::internal::interpreter::LoopBuilder::~LoopBuilder((LoopBuilder *)&local_e8);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

