
void FUN_016f9024(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  GraphAssembler *this;
  undefined8 uVar8;
  undefined8 uVar9;
  MapInference *this_00;
  undefined8 uVar10;
  JSGraph *pJVar11;
  Node *pNVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  BasicBlock *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  param_3 = (undefined8 *)*param_3;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  uVar9 = *param_2;
  local_88 = *param_3;
  local_a8 = (Node *)**(undefined8 **)(param_1 + 0x18);
  local_a0 = (BasicBlock *)**(undefined8 **)(param_1 + 0x20);
  uStack_90 = **(undefined8 **)(param_1 + 0x28);
  this = *(GraphAssembler **)(param_1 + 8);
  uVar7 = 0x2c5;
  if (*(int *)(puVar1 + 3) != 0) {
    uVar7 = 0x2c0;
  }
  local_98 = uVar9;
  uVar4 = v8::internal::compiler::CreateJavaScriptBuiltinContinuationFrameState
                    (*puVar1,puVar1 + 1,uVar7,puVar1[5],puVar1[4],&local_a8,5,puVar1[6],0);
  v8::internal::compiler::GraphAssembler::Checkpoint(this,uVar4);
  if (**(char **)(param_1 + 0x38) == '\0') {
    local_a8 = *(Node **)(this + 0x20);
    this_00 = (MapInference *)**(undefined8 **)(param_1 + 0x30);
    pJVar11 = *(JSGraph **)(this + 0x18);
    pNVar12 = *(Node **)(this + 0x28);
    lVar5 = v8::internal::compiler::CallParametersOf((Operator *)**(undefined8 **)(this + 0x38));
    v8::internal::compiler::MapInference::InsertMapChecks
              (this_00,pJVar11,(Node **)&local_a8,pNVar12,(FeedbackSource *)(lVar5 + 8));
    v8::internal::compiler::GraphAssembler::InitializeEffectControl
              (this,local_a8,*(Node **)(this + 0x28));
  }
  auVar14 = v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::SafeLoadElement
                      ((IteratingArrayBuiltinReducerAssembler *)this,
                       **(undefined1 **)(param_1 + 0x40),**(undefined8 **)(param_1 + 0x18),uVar9);
  local_a0 = (BasicBlock *)v8::internal::compiler::GraphAssembler::NewBasicBlock(this,false);
  uVar3 = (uint)local_a8;
  local_98 = 0;
  local_a8 = (Node *)CONCAT44(1,uVar3 & 0xffffff00);
  local_70 = 8;
  uVar9 = v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::
          MaybeSkipHole<v8::internal::TNode<v8::internal::Object>>
                    ((IteratingArrayBuiltinReducerAssembler *)this,auVar14._8_8_,
                     **(undefined1 **)(param_1 + 0x40),&local_a8,*param_3);
  uVar10 = **(undefined8 **)(param_1 + 0x20);
  uVar4 = v8::internal::compiler::GraphAssembler::UndefinedConstant(this);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  uVar13 = *param_3;
  uVar8 = **(undefined8 **)(param_1 + 0x18);
  uStack_c0 = **(undefined8 **)(param_1 + 0x20);
  uStack_b0 = **(undefined8 **)(param_1 + 0x28);
  uVar7 = 0x2c6;
  if (*(int *)(puVar1 + 3) != 0) {
    uVar7 = 0x2c1;
  }
  local_c8 = uVar8;
  local_b8 = auVar14._0_8_;
  uVar6 = v8::internal::compiler::CreateJavaScriptBuiltinContinuationFrameState
                    (*puVar1,puVar1 + 1,uVar7,puVar1[5],puVar1[4],&local_c8,4,puVar1[6],1);
  uVar9 = v8::internal::compiler::JSCallReducerAssembler::JSCall4
                    ((JSCallReducerAssembler *)this,uVar10,uVar4,uVar13,uVar9,auVar14._0_8_,uVar8,
                     uVar6);
  v8::internal::compiler::GraphAssembler::MergeState<v8::internal::TNode<v8::internal::Object>>
            (this,&local_a8,uVar9);
  v8::internal::compiler::GraphAssembler::GotoBasicBlock(this,local_a0);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  v8::internal::compiler::GraphAssembler::Bind<1ul>(this,(GraphAssemblerLabel *)&local_a8);
  *param_3 = local_80;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

