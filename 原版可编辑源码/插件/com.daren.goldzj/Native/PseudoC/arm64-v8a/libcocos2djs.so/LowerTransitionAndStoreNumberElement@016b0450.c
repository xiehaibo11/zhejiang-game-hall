
/* v8::internal::compiler::EffectControlLinearizer::LowerTransitionAndStoreNumberElement(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerTransitionAndStoreNumberElement
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  Node *pNVar1;
  Node *pNVar2;
  long lVar3;
  AccessBuilder *pAVar4;
  Node *pNVar5;
  Node *pNVar6;
  AccessBuilder *this_01;
  Node *pNVar7;
  FieldAccess aFStack_100 [56];
  GraphAssemblerLabel local_c8 [4];
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  FieldAccess local_90 [4];
  undefined4 local_8c;
  BasicBlock *local_88;
  undefined8 uStack_80;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar1 = *(Node **)pNVar5;
  pNVar2 = *(Node **)(pNVar5 + 8);
  pNVar7 = *(Node **)(pNVar5 + 0x10);
  this_00 = (GraphAssembler *)(this + 0x38);
  AccessBuilder::ForMap((AccessBuilder *)this);
  pAVar4 = (AccessBuilder *)GraphAssembler::LoadField(this_00,local_90,pNVar1);
  AccessBuilder::ForMapBitField2(pAVar4);
  pNVar5 = (Node *)GraphAssembler::LoadField(this_00,local_90,(Node *)pAVar4);
  pNVar6 = (Node *)GraphAssembler::Int32Constant(this_00,0xf8);
  pNVar5 = (Node *)GraphAssembler::Word32And(this_00,pNVar5,pNVar6);
  pNVar6 = (Node *)GraphAssembler::Int32Constant(this_00,3);
  pNVar5 = (Node *)GraphAssembler::Word32Shr(this_00,pNVar5,pNVar6);
  local_88 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_80 = 0;
  local_90[0] = (FieldAccess)0x0;
  local_8c = 1;
  local_c0 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_b8 = 0;
  local_c8[0] = (GraphAssemblerLabel)0x0;
  local_c4 = 0;
  pNVar6 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar6 = (Node *)GraphAssembler::Int32LessThan(this_00,pNVar6,pNVar5);
  GraphAssembler::GotoIfNot<>(this_00,pNVar6,local_c8);
  pNVar6 = (Node *)GraphAssembler::Int32Constant(this_00,5);
  pNVar5 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar5,pNVar6);
  GraphAssembler::GotoIf<>(this_00,pNVar5,(GraphAssemblerLabel *)local_90);
  GraphAssembler::DebugBreak(this_00);
  GraphAssembler::MergeState<>(this_00,(GraphAssemblerLabel *)local_90);
  GraphAssembler::GotoBasicBlock(this_00,local_88);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_c8);
  TransitionElementsTo(this,param_1,pNVar1,1,5);
  GraphAssembler::MergeState<>(this_00,(GraphAssemblerLabel *)local_90);
  GraphAssembler::GotoBasicBlock(this_00,local_88);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,(GraphAssemblerLabel *)local_90);
  AccessBuilder::ForJSObjectElements(this_01);
  pAVar4 = (AccessBuilder *)GraphAssembler::LoadField(this_00,aFStack_100,pNVar1);
  AccessBuilder::ForFixedDoubleArrayElement(pAVar4);
  pNVar5 = (Node *)GraphAssembler::Float64SilenceNaN(this_00,pNVar7);
  GraphAssembler::StoreElement(this_00,(ElementAccess *)aFStack_100,(Node *)pAVar4,pNVar2,pNVar5);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

