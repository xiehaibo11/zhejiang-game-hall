
void FUN_016f8438(long param_1,undefined8 *param_2)

{
  GraphAssembler *this;
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  MapInference *this_00;
  JSGraph *pJVar8;
  undefined8 uVar9;
  Node *pNVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  BasicBlock *local_88;
  undefined8 uStack_80;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = *(GraphAssembler **)(param_1 + 8);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  uVar7 = *param_2;
  uStack_b8 = puVar5[7];
  local_c0 = puVar5[6];
  local_b0 = puVar5[8];
  local_a0 = puVar5[9];
  uStack_a8 = uVar7;
  uVar3 = v8::internal::compiler::CreateJavaScriptBuiltinContinuationFrameState
                    (*puVar5,puVar5 + 1,0x2a9,puVar5[4],puVar5[3],&local_c0,5,puVar5[5],0);
  v8::internal::compiler::GraphAssembler::Checkpoint(this,uVar3);
  if (**(char **)(param_1 + 0x20) == '\0') {
    local_90 = *(Node **)(this + 0x20);
    this_00 = (MapInference *)**(undefined8 **)(param_1 + 0x18);
    pJVar8 = *(JSGraph **)(this + 0x18);
    pNVar10 = *(Node **)(this + 0x28);
    lVar4 = v8::internal::compiler::CallParametersOf((Operator *)**(undefined8 **)(this + 0x38));
    v8::internal::compiler::MapInference::InsertMapChecks
              (this_00,pJVar8,(Node **)&local_90,pNVar10,(FeedbackSource *)(lVar4 + 8));
    v8::internal::compiler::GraphAssembler::InitializeEffectControl
              (this,local_90,*(Node **)(this + 0x28));
  }
  auVar12 = v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::SafeLoadElement
                      ((IteratingArrayBuiltinReducerAssembler *)this,
                       **(undefined1 **)(param_1 + 0x28),**(undefined8 **)(param_1 + 0x30),uVar7);
  local_88 = (BasicBlock *)v8::internal::compiler::GraphAssembler::NewBasicBlock(this,false);
  uVar2 = (uint)local_90;
  local_90 = (Node *)CONCAT44(1,uVar2 & 0xffffff00);
  uStack_80 = 0;
  uVar3 = v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::MaybeSkipHole<>
                    ((IteratingArrayBuiltinReducerAssembler *)this,auVar12._8_8_,
                     **(undefined1 **)(param_1 + 0x28),&local_90);
  uVar7 = v8::internal::compiler::GraphAssembler::OneConstant(this);
  uStack_a8 = v8::internal::compiler::GraphAssembler::NumberAdd(this,auVar12._0_8_,uVar7);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  uStack_b8 = puVar5[7];
  local_c0 = puVar5[6];
  uVar6 = **(undefined8 **)(param_1 + 0x38);
  uVar9 = **(undefined8 **)(param_1 + 0x40);
  uVar11 = **(undefined8 **)(param_1 + 0x30);
  local_b0 = puVar5[8];
  local_a0 = puVar5[9];
  uVar7 = v8::internal::compiler::CreateJavaScriptBuiltinContinuationFrameState
                    (*puVar5,puVar5 + 1,0x2aa,puVar5[4],puVar5[3],&local_c0,5,puVar5[5],1);
  v8::internal::compiler::JSCallReducerAssembler::JSCall3
            ((JSCallReducerAssembler *)this,uVar6,uVar9,uVar3,auVar12._0_8_,uVar11,uVar7);
  v8::internal::compiler::GraphAssembler::MergeState<>(this,(GraphAssemblerLabel *)&local_90);
  v8::internal::compiler::GraphAssembler::GotoBasicBlock(this,local_88);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  v8::internal::compiler::GraphAssembler::Bind<0ul>(this,(GraphAssemblerLabel *)&local_90);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

