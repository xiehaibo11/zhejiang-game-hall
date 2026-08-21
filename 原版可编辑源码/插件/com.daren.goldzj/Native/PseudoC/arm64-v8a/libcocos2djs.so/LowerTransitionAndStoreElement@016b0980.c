
/* v8::internal::compiler::EffectControlLinearizer::LowerTransitionAndStoreElement(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerTransitionAndStoreElement
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  Node *pNVar1;
  long lVar2;
  AccessBuilder *pAVar3;
  Node *pNVar4;
  Node *pNVar5;
  Node *pNVar6;
  AccessBuilder *this_01;
  undefined8 uVar7;
  AccessBuilder *this_02;
  Node *pNVar8;
  AccessBuilder *this_03;
  Node *pNVar9;
  EffectControlLinearizer *pEVar10;
  ElementAccess aEStack_200 [56];
  AccessBuilder local_1c8 [4];
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  GraphAssemblerLabel local_190 [4];
  undefined4 local_18c;
  AccessBuilder *local_188;
  undefined8 uStack_180;
  GraphAssemblerLabel local_158 [4];
  undefined4 local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  GraphAssemblerLabel local_120 [4];
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  FieldAccess local_e8 [4];
  undefined4 local_e4;
  BasicBlock *local_e0;
  undefined8 uStack_d8;
  Node *local_c0;
  undefined1 local_b0;
  FieldAccess local_a8 [4];
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar8 = *(Node **)pNVar4;
  pNVar1 = *(Node **)(pNVar4 + 8);
  pNVar9 = *(Node **)(pNVar4 + 0x10);
  this_00 = (GraphAssembler *)(this + 0x38);
  AccessBuilder::ForMap((AccessBuilder *)this);
  pAVar3 = (AccessBuilder *)GraphAssembler::LoadField(this_00,local_e8,pNVar8);
  AccessBuilder::ForMapBitField2(pAVar3);
  pNVar4 = (Node *)GraphAssembler::LoadField(this_00,local_e8,(Node *)pAVar3);
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,0xf8);
  pNVar4 = (Node *)GraphAssembler::Word32And(this_00,pNVar4,pNVar5);
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,3);
  pNVar4 = (Node *)GraphAssembler::Word32Shr(this_00,pNVar4,pNVar5);
  local_e0 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_d8 = 0;
  local_e8[0] = (FieldAccess)0x0;
  local_e4 = 1;
  local_b0 = 4;
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar5 = (Node *)GraphAssembler::Word32And(this_00,pNVar9,pNVar5);
  pNVar6 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  pNVar5 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar5,pNVar6);
  GraphAssembler::GotoIf<v8::internal::compiler::Node*>
            (this_00,pNVar5,(GraphAssemblerLabel *)local_e8,pNVar4);
  local_118 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_110 = 0;
  local_120[0] = (GraphAssemblerLabel)0x0;
  local_11c = 0;
  local_150 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_148 = 0;
  local_158[0] = (GraphAssemblerLabel)0x0;
  local_154 = 0;
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar5 = (Node *)GraphAssembler::Int32LessThan(this_00,pNVar5,pNVar4);
  GraphAssembler::GotoIfNot<>(this_00,pNVar5,local_120);
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,3);
  pNVar5 = (Node *)GraphAssembler::Int32LessThan(this_00,pNVar5,pNVar4);
  GraphAssembler::GotoIfNot<v8::internal::compiler::Node*>
            (this_00,pNVar5,(GraphAssemblerLabel *)local_e8,pNVar4);
  AccessBuilder::ForMap(this_01);
  pNVar5 = (Node *)GraphAssembler::LoadField(this_00,local_a8,pNVar9);
  pNVar6 = (Node *)GraphAssembler::HeapNumberMapConstant(this_00);
  pNVar5 = (Node *)GraphAssembler::TaggedEqual(this_00,pNVar5,pNVar6);
  GraphAssembler::GotoIfNot<>(this_00,pNVar5,local_158);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>
            (this_00,(GraphAssemblerLabel *)local_e8,pNVar4);
  GraphAssembler::GotoBasicBlock(this_00,local_e0);
  pEVar10 = this + 0x58;
  *(undefined8 *)pEVar10 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_120);
  local_188 = (AccessBuilder *)GraphAssembler::NewBasicBlock(this_00,false);
  local_190[0] = (GraphAssemblerLabel)0x0;
  local_18c = 1;
  uStack_180 = 0;
  AccessBuilder::ForMap(local_188);
  pNVar4 = (Node *)GraphAssembler::LoadField(this_00,local_a8,pNVar9);
  pNVar5 = (Node *)GraphAssembler::HeapNumberMapConstant(this_00);
  pNVar4 = (Node *)GraphAssembler::TaggedEqual(this_00,pNVar4,pNVar5);
  GraphAssembler::GotoIfNot<>(this_00,pNVar4,local_190);
  TransitionElementsTo(this,param_1,pNVar8,1,5);
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,5);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>
            (this_00,(GraphAssemblerLabel *)local_e8,pNVar4);
  GraphAssembler::GotoBasicBlock(this_00,local_e0);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)pEVar10 = 0;
  GraphAssembler::Bind<0ul>(this_00,local_190);
  uVar7 = FastMapParameterOf(*(Operator **)param_1);
  pAVar3 = (AccessBuilder *)GraphAssembler::HeapConstant(this_00,uVar7);
  AccessBuilder::ForMap(pAVar3);
  GraphAssembler::StoreField(this_00,local_a8,pNVar8,(Node *)pAVar3);
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,3);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>
            (this_00,(GraphAssemblerLabel *)local_e8,pNVar4);
  GraphAssembler::GotoBasicBlock(this_00,local_e0);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)pEVar10 = 0;
  GraphAssembler::Bind<0ul>(this_00,local_158);
  TransitionElementsTo(this,param_1,pNVar8,5,3);
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,3);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>
            (this_00,(GraphAssemblerLabel *)local_e8,pNVar4);
  GraphAssembler::GotoBasicBlock(this_00,local_e0);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)pEVar10 = 0;
  GraphAssembler::Bind<1ul>(this_00,(GraphAssemblerLabel *)local_e8);
  AccessBuilder::ForJSObjectElements(this_02);
  pNVar4 = (Node *)GraphAssembler::LoadField(this_00,local_a8,pNVar8);
  local_a0 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_98 = 0;
  local_a8[0] = (FieldAccess)0x0;
  local_a4 = 1;
  local_188 = (AccessBuilder *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_180 = 0;
  local_190[0] = (GraphAssemblerLabel)0x0;
  local_18c = 1;
  pNVar8 = (Node *)GraphAssembler::Int32Constant(this_00,3);
  pNVar8 = (Node *)GraphAssembler::Int32LessThan(this_00,pNVar8,local_c0);
  GraphAssembler::GotoIf<>(this_00,pNVar8,(GraphAssemblerLabel *)local_a8);
  AccessBuilder::ForFixedArrayElement(local_1c8,3,1);
  GraphAssembler::StoreElement(this_00,(ElementAccess *)local_1c8,pNVar4,pNVar1,pNVar9);
  GraphAssembler::MergeState<>(this_00,local_190);
  GraphAssembler::GotoBasicBlock(this_00,(BasicBlock *)local_188);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)pEVar10 = 0;
  GraphAssembler::Bind<0ul>(this_00,(GraphAssemblerLabel *)local_a8);
  local_1c0 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_1b8 = 0;
  local_1c8[0] = (AccessBuilder)0x0;
  local_1c4 = 1;
  pNVar8 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar8 = (Node *)GraphAssembler::Word32And(this_00,pNVar9,pNVar8);
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  pNVar8 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar8,pNVar5);
  GraphAssembler::GotoIfNot<>(this_00,pNVar8,(GraphAssemblerLabel *)local_1c8);
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pNVar8 = (Node *)GraphAssembler::TruncateInt64ToInt32(this_00,pNVar9);
    if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
      pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,1);
    }
    else {
      pNVar5 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
    }
    pNVar8 = (Node *)GraphAssembler::Word32Sar(this_00,pNVar8,pNVar5);
  }
  else {
    pNVar8 = (Node *)ChangeSmiToIntPtr(this,pNVar9);
  }
  pAVar3 = (AccessBuilder *)GraphAssembler::ChangeInt32ToFloat64(this_00,pNVar8);
  AccessBuilder::ForFixedDoubleArrayElement(pAVar3);
  GraphAssembler::StoreElement(this_00,aEStack_200,pNVar4,pNVar1,(Node *)pAVar3);
  GraphAssembler::MergeState<>(this_00,local_190);
  GraphAssembler::GotoBasicBlock(this_00,(BasicBlock *)local_188);
  *(undefined8 *)pEVar10 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,(GraphAssemblerLabel *)local_1c8);
  AccessBuilder::ForHeapNumberValue(this_03);
  pAVar3 = (AccessBuilder *)GraphAssembler::LoadField(this_00,(FieldAccess *)aEStack_200,pNVar9);
  AccessBuilder::ForFixedDoubleArrayElement(pAVar3);
  pNVar8 = (Node *)GraphAssembler::Float64SilenceNaN(this_00,(Node *)pAVar3);
  GraphAssembler::StoreElement(this_00,aEStack_200,pNVar4,pNVar1,pNVar8);
  GraphAssembler::MergeState<>(this_00,local_190);
  GraphAssembler::GotoBasicBlock(this_00,(BasicBlock *)local_188);
  *(undefined8 *)pEVar10 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_190);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

