
/* v8::internal::compiler::EffectControlLinearizer::LowerNewDoubleElements(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerNewDoubleElements
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Node *pNVar5;
  Node *pNVar6;
  AccessBuilder *this_01;
  AccessBuilder *pAVar7;
  Node *pNVar8;
  ElementAccess local_f0 [4];
  undefined4 local_ec;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined1 local_de;
  undefined4 local_dc;
  FieldAccess local_d8 [4];
  undefined4 local_d4;
  BasicBlock *local_d0;
  undefined8 uStack_c8;
  Node *local_b0;
  undefined1 local_a0;
  GraphAssemblerLabel local_98 [4];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = AllocationTypeOf(*(Operator **)param_1);
  pNVar8 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
  }
  pNVar8 = *(Node **)pNVar8;
  this_00 = (GraphAssembler *)(this + 0x38);
  local_90 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_88 = 0;
  local_98[0] = (GraphAssemblerLabel)0x0;
  local_94 = 1;
  local_60 = 7;
  GraphAssembler::IntPtrConstant(this_00,0);
  uVar3 = GraphAssembler::IntPtrEqual((Node *)this_00,pNVar8);
  uVar4 = GraphAssembler::HeapConstant(this_00,*(long *)(*(long *)this + 0x168) + 0x168);
  GraphAssembler::GotoIf<v8::internal::TNode<v8::internal::HeapObject>>
            (this_00,uVar3,local_98,uVar4);
  pNVar5 = (Node *)GraphAssembler::IntPtrConstant(this_00,3);
  pNVar5 = (Node *)GraphAssembler::WordShl(this_00,pNVar8,pNVar5);
  pNVar6 = (Node *)GraphAssembler::IntPtrConstant(this_00,8);
  uVar3 = GraphAssembler::IntAdd(this_00,pNVar5,pNVar6);
  this_01 = (AccessBuilder *)GraphAssembler::Allocate(this_00,uVar2,uVar3);
  AccessBuilder::ForMap(this_01);
  pNVar5 = (Node *)GraphAssembler::FixedDoubleArrayMapConstant(this_00);
  pAVar7 = (AccessBuilder *)GraphAssembler::StoreField(this_00,local_d8,(Node *)this_01,pNVar5);
  AccessBuilder::ForFixedArrayLength(pAVar7);
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,1);
    pNVar5 = (Node *)GraphAssembler::Word32Shl(this_00,pNVar8,pNVar5);
    pNVar5 = (Node *)GraphAssembler::BitcastWord32ToWord64(this_00,pNVar5);
  }
  else {
    pNVar5 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
    pNVar5 = (Node *)GraphAssembler::WordShl(this_00,pNVar8,pNVar5);
  }
  pAVar7 = (AccessBuilder *)GraphAssembler::StoreField(this_00,local_d8,(Node *)this_01,pNVar5);
  AccessBuilder::ForHeapNumberValue(pAVar7);
  pNVar5 = (Node *)GraphAssembler::TheHoleConstant(this_00);
  pNVar5 = (Node *)GraphAssembler::LoadField(this_00,local_d8,pNVar5);
  local_d0 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_c8 = 0;
  local_d8[0] = (FieldAccess)0x0;
  local_d4 = 2;
  local_a0 = 5;
  pNVar6 = (Node *)GraphAssembler::IntPtrConstant(this_00,0);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>
            (this_00,(GraphAssemblerLabel *)local_d8,pNVar6);
  GraphAssembler::GotoBasicBlock(this_00,local_d0);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,(GraphAssemblerLabel *)local_d8);
  pNVar8 = (Node *)GraphAssembler::UintLessThan(this_00,local_b0,pNVar8);
  GraphAssembler::GotoIfNot<v8::internal::compiler::Node*>(this_00,pNVar8,local_98,(Node *)this_01);
  local_de = 0;
  local_f0[0] = (ElementAccess)0x1;
  local_ec = 8;
  local_e8 = 0x801c5f;
  local_e0 = 0x60c;
  local_dc = 1;
  GraphAssembler::StoreElement(this_00,local_f0,(Node *)this_01,local_b0,pNVar5);
  pNVar8 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
  pNVar8 = (Node *)GraphAssembler::IntAdd(this_00,local_b0,pNVar8);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>
            (this_00,(GraphAssemblerLabel *)local_d8,pNVar8);
  GraphAssembler::GotoBasicBlock(this_00,local_d0);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_98);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_70);
}

