
/* v8::internal::compiler::EffectControlLinearizer::LowerNewConsString(v8::internal::compiler::Node*)
    */

AccessBuilder * __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerNewConsString
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  Node *pNVar1;
  Node *pNVar2;
  long lVar3;
  AccessBuilder *pAVar4;
  AccessBuilder *pAVar5;
  Node *pNVar6;
  Node *pNVar7;
  undefined8 uVar8;
  Node *pNVar9;
  FieldAccess aFStack_150 [56];
  FieldAccess local_118 [4];
  undefined4 local_114;
  BasicBlock *local_110;
  undefined8 uStack_108;
  Node *local_f0;
  undefined1 local_e0;
  GraphAssemblerLabel local_d8 [4];
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  GraphAssemblerLabel local_a0 [4];
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pNVar6 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  pNVar1 = *(Node **)pNVar6;
  pNVar2 = *(Node **)(pNVar6 + 8);
  pNVar9 = *(Node **)(pNVar6 + 0x10);
  this_00 = (GraphAssembler *)(this + 0x38);
  AccessBuilder::ForMap((AccessBuilder *)this);
  pAVar4 = (AccessBuilder *)GraphAssembler::LoadField(this_00,local_118,pNVar2);
  AccessBuilder::ForMapInstanceType(pAVar4);
  pAVar4 = (AccessBuilder *)GraphAssembler::LoadField(this_00,local_118,(Node *)pAVar4);
  AccessBuilder::ForMap(pAVar4);
  pAVar5 = (AccessBuilder *)GraphAssembler::LoadField(this_00,local_118,pNVar9);
  AccessBuilder::ForMapInstanceType(pAVar5);
  pNVar6 = (Node *)GraphAssembler::LoadField(this_00,local_118,(Node *)pAVar5);
  local_98 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_90 = 0;
  local_a0[0] = (GraphAssemblerLabel)0x0;
  local_9c = 1;
  local_d0 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_c8 = 0;
  local_d8[0] = (GraphAssemblerLabel)0x0;
  local_d4 = 1;
  local_110 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_108 = 0;
  local_118[0] = (FieldAccess)0x0;
  local_114 = 1;
  local_e0 = 7;
  pNVar6 = (Node *)GraphAssembler::Word32And(this_00,(Node *)pAVar4,pNVar6);
  pNVar7 = (Node *)GraphAssembler::Int32Constant(this_00,8);
  pNVar6 = (Node *)GraphAssembler::Word32And(this_00,pNVar6,pNVar7);
  pNVar7 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  uVar8 = GraphAssembler::Word32Equal(this_00,pNVar6,pNVar7);
  GraphAssembler::BranchImpl<>(this_00,uVar8,local_d8,local_a0,0,2);
  GraphAssembler::Bind<0ul>(this_00,local_a0);
  uVar8 = GraphAssembler::HeapConstant(this_00,*(long *)(*(long *)this + 0x168) + 0x2e8);
  GraphAssembler::MergeState<v8::internal::TNode<v8::internal::HeapObject>>(this_00,local_118,uVar8)
  ;
  GraphAssembler::GotoBasicBlock(this_00,local_110);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_d8);
  uVar8 = GraphAssembler::HeapConstant(this_00,*(long *)(*(long *)this + 0x168) + 0x2f0);
  GraphAssembler::MergeState<v8::internal::TNode<v8::internal::HeapObject>>(this_00,local_118,uVar8)
  ;
  GraphAssembler::GotoBasicBlock(this_00,local_110);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,(GraphAssemblerLabel *)local_118);
  uVar8 = GraphAssembler::IntPtrConstant(this_00,0x14);
  pAVar4 = (AccessBuilder *)GraphAssembler::Allocate(this_00,0,uVar8);
  AccessBuilder::ForMap(pAVar4);
  pAVar5 = (AccessBuilder *)GraphAssembler::StoreField(this_00,aFStack_150,(Node *)pAVar4,local_f0);
  AccessBuilder::ForNameHashField(pAVar5);
  pNVar6 = (Node *)GraphAssembler::Int32Constant(this_00,7);
  pAVar5 = (AccessBuilder *)GraphAssembler::StoreField(this_00,aFStack_150,(Node *)pAVar4,pNVar6);
  AccessBuilder::ForStringLength(pAVar5);
  pAVar5 = (AccessBuilder *)GraphAssembler::StoreField(this_00,aFStack_150,(Node *)pAVar4,pNVar1);
  AccessBuilder::ForConsStringFirst(pAVar5);
  pAVar5 = (AccessBuilder *)GraphAssembler::StoreField(this_00,aFStack_150,(Node *)pAVar4,pNVar2);
  AccessBuilder::ForConsStringSecond(pAVar5);
  GraphAssembler::StoreField(this_00,aFStack_150,(Node *)pAVar4,pNVar9);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return pAVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

