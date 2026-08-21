
void FUN_016f9414(long param_1,undefined8 *param_2)

{
  GraphAssembler *this;
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  MapInference *this_00;
  JSGraph *pJVar8;
  undefined8 uVar9;
  Node *pNVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  BasicBlock *local_98;
  undefined8 uStack_90;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = *(GraphAssembler **)(param_1 + 8);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  uVar7 = *param_2;
  uStack_c8 = puVar6[7];
  local_d0 = puVar6[6];
  uStack_b8 = puVar6[9];
  local_c0 = puVar6[8];
  uStack_a8 = puVar6[10];
  local_b0 = uVar7;
  uVar3 = v8::internal::compiler::CreateJavaScriptBuiltinContinuationFrameState
                    (*puVar6,puVar6 + 1,0x2ba,puVar6[4],puVar6[3],&local_d0,6,puVar6[5],0);
  v8::internal::compiler::GraphAssembler::Checkpoint(this,uVar3);
  if (**(char **)(param_1 + 0x20) == '\0') {
    local_a0 = *(Node **)(this + 0x20);
    this_00 = (MapInference *)**(undefined8 **)(param_1 + 0x18);
    pJVar8 = *(JSGraph **)(this + 0x18);
    pNVar10 = *(Node **)(this + 0x28);
    lVar4 = v8::internal::compiler::CallParametersOf((Operator *)**(undefined8 **)(this + 0x38));
    v8::internal::compiler::MapInference::InsertMapChecks
              (this_00,pJVar8,(Node **)&local_a0,pNVar10,(FeedbackSource *)(lVar4 + 8));
    v8::internal::compiler::GraphAssembler::InitializeEffectControl
              (this,local_a0,*(Node **)(this + 0x28));
  }
  auVar13 = v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::SafeLoadElement
                      ((IteratingArrayBuiltinReducerAssembler *)this,
                       **(undefined1 **)(param_1 + 0x28),**(undefined8 **)(param_1 + 0x30),uVar7);
  uVar3 = auVar13._0_8_;
  local_98 = (BasicBlock *)v8::internal::compiler::GraphAssembler::NewBasicBlock(this,false);
  uVar2 = (uint)local_a0;
  local_a0 = (Node *)CONCAT44(1,uVar2 & 0xffffff00);
  uStack_90 = 0;
  uVar7 = v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::MaybeSkipHole<>
                    ((IteratingArrayBuiltinReducerAssembler *)this,auVar13._8_8_,
                     **(undefined1 **)(param_1 + 0x28),&local_a0);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  uStack_c8 = puVar6[7];
  local_d0 = puVar6[6];
  uVar9 = **(undefined8 **)(param_1 + 0x38);
  uVar11 = **(undefined8 **)(param_1 + 0x40);
  uVar12 = **(undefined8 **)(param_1 + 0x30);
  uStack_b8 = puVar6[9];
  local_c0 = puVar6[8];
  uStack_a8 = puVar6[10];
  local_b0 = uVar3;
  uVar5 = v8::internal::compiler::CreateJavaScriptBuiltinContinuationFrameState
                    (*puVar6,puVar6 + 1,699,puVar6[4],puVar6[3],&local_d0,6,puVar6[5],1);
  uVar7 = v8::internal::compiler::JSCallReducerAssembler::JSCall3
                    ((JSCallReducerAssembler *)this,uVar9,uVar11,uVar7,uVar3,uVar12,uVar5);
  auVar13 = v8::internal::compiler::NativeContextRef::GetInitialJSArrayMap
                      (*(NativeContextRef **)(param_1 + 0x48),5);
  auVar14 = v8::internal::compiler::NativeContextRef::GetInitialJSArrayMap
                      (*(NativeContextRef **)(param_1 + 0x48),3);
  v8::internal::compiler::GraphAssembler::TransitionAndStoreElement
            (this,auVar13._0_8_,auVar13._8_8_,auVar14._0_8_,auVar14._8_8_,
             **(undefined8 **)(param_1 + 0x50),uVar3,uVar7);
  v8::internal::compiler::GraphAssembler::MergeState<>(this,(GraphAssemblerLabel *)&local_a0);
  v8::internal::compiler::GraphAssembler::GotoBasicBlock(this,local_98);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  v8::internal::compiler::GraphAssembler::Bind<0ul>(this,(GraphAssemblerLabel *)&local_a0);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

