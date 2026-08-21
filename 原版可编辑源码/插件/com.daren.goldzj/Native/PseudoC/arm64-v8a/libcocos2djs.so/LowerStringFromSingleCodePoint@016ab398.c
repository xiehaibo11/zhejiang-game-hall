
/* v8::internal::compiler::EffectControlLinearizer::LowerStringFromSingleCodePoint(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerStringFromSingleCodePoint
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  Node *pNVar4;
  undefined8 uVar5;
  AccessBuilder *pAVar6;
  AccessBuilder *pAVar7;
  Node *pNVar8;
  undefined8 uVar9;
  Node *pNVar10;
  ElementAccess aEStack_178 [56];
  GraphAssemblerLabel local_140 [4];
  undefined4 local_13c;
  BasicBlock *local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined1 local_108;
  GraphAssemblerLabel local_100 [4];
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  GraphAssemblerLabel local_c8 [4];
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  GraphAssemblerLabel local_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pNVar10 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar10 = (Node *)(*(long *)pNVar10 + 0x10);
  }
  pNVar10 = *(Node **)pNVar10;
  this_00 = (GraphAssembler *)(this + 0x38);
  local_88 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_80 = 0;
  local_90[0] = (GraphAssemblerLabel)0x0;
  local_8c = 0;
  local_c0 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_b8 = 0;
  local_c8[0] = (GraphAssemblerLabel)0x0;
  local_c4 = 0;
  local_f8 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_f0 = 0;
  local_100[0] = (GraphAssemblerLabel)0x0;
  local_fc = 0;
  local_138 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_130 = 0;
  local_140[0] = (GraphAssemblerLabel)0x0;
  local_13c = 1;
  local_108 = 8;
  pNVar2 = (Node *)GraphAssembler::Uint32Constant(this_00,0xffff);
  pNVar2 = (Node *)GraphAssembler::Uint32LessThanOrEqual(this_00,pNVar10,pNVar2);
  GraphAssembler::GotoIfNot<>(this_00,pNVar2,local_90);
  pNVar2 = (Node *)GraphAssembler::Uint32Constant(this_00,0xff);
  pNVar2 = (Node *)GraphAssembler::Uint32LessThanOrEqual(this_00,pNVar10,pNVar2);
  GraphAssembler::GotoIfNot<>(this_00,pNVar2,local_c8);
  pNVar3 = (Node *)GraphAssembler::HeapConstant(this_00,*(long *)(*(long *)this + 0x168) + 0xf18);
  pNVar2 = pNVar3;
  pNVar8 = pNVar10;
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) != '\x04') {
    pNVar2 = (Node *)GraphAssembler::ChangeUint32ToUint64(this_00,pNVar10);
    pNVar8 = pNVar2;
  }
  AccessBuilder::ForFixedArrayElement((AccessBuilder *)pNVar2);
  pNVar2 = (Node *)GraphAssembler::LoadElement(this_00,aEStack_178,pNVar3,pNVar8);
  pNVar4 = (Node *)GraphAssembler::UndefinedConstant(this_00);
  pNVar4 = (Node *)GraphAssembler::TaggedEqual(this_00,pNVar2,pNVar4);
  GraphAssembler::GotoIf<>(this_00,pNVar4,local_100);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_140,pNVar2);
  GraphAssembler::GotoBasicBlock(this_00,local_138);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_100);
  uVar5 = GraphAssembler::IntPtrConstant(this_00,0x10);
  pAVar6 = (AccessBuilder *)GraphAssembler::Allocate(this_00,0,uVar5);
  AccessBuilder::ForMap(pAVar6);
  pNVar2 = (Node *)GraphAssembler::HeapConstant(this_00,*(long *)(*(long *)this + 0x168) + 0x100);
  pAVar7 = (AccessBuilder *)
           GraphAssembler::StoreField(this_00,(FieldAccess *)aEStack_178,(Node *)pAVar6,pNVar2);
  AccessBuilder::ForNameHashField(pAVar7);
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,7);
  pAVar7 = (AccessBuilder *)
           GraphAssembler::StoreField(this_00,(FieldAccess *)aEStack_178,(Node *)pAVar6,pNVar2);
  AccessBuilder::ForStringLength(pAVar7);
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  GraphAssembler::StoreField(this_00,(FieldAccess *)aEStack_178,(Node *)pAVar6,pNVar2);
  uVar5 = GraphAssembler::IntPtrConstant(this_00,0xb);
  pAVar7 = (AccessBuilder *)GraphAssembler::Store(this_00,2,pAVar6,uVar5,pNVar10);
  AccessBuilder::ForFixedArrayElement(pAVar7);
  GraphAssembler::StoreElement(this_00,aEStack_178,pNVar3,pNVar8,(Node *)pAVar6);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_140,(Node *)pAVar6);
  GraphAssembler::GotoBasicBlock(this_00,local_138);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_c8);
  uVar5 = GraphAssembler::IntPtrConstant(this_00,0x10);
  pAVar6 = (AccessBuilder *)GraphAssembler::Allocate(this_00,0,uVar5);
  AccessBuilder::ForMap(pAVar6);
  pNVar2 = (Node *)GraphAssembler::HeapConstant(this_00,*(long *)(*(long *)this + 0x168) + 0x2e0);
  pAVar7 = (AccessBuilder *)
           GraphAssembler::StoreField(this_00,(FieldAccess *)aEStack_178,(Node *)pAVar6,pNVar2);
  AccessBuilder::ForNameHashField(pAVar7);
  pNVar2 = (Node *)GraphAssembler::IntPtrConstant(this_00,7);
  pAVar7 = (AccessBuilder *)
           GraphAssembler::StoreField(this_00,(FieldAccess *)aEStack_178,(Node *)pAVar6,pNVar2);
  AccessBuilder::ForStringLength(pAVar7);
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  GraphAssembler::StoreField(this_00,(FieldAccess *)aEStack_178,(Node *)pAVar6,pNVar2);
  uVar5 = GraphAssembler::IntPtrConstant(this_00,0xb);
  GraphAssembler::Store(this_00,3,pAVar6,uVar5,pNVar10);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_140,(Node *)pAVar6);
  GraphAssembler::GotoBasicBlock(this_00,local_138);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_90);
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,0xd7c0);
  pNVar8 = (Node *)GraphAssembler::Int32Constant(this_00,10);
  pNVar8 = (Node *)GraphAssembler::Word32Shr(this_00,pNVar10,pNVar8);
  pNVar2 = (Node *)GraphAssembler::Int32Add(this_00,pNVar8,pNVar2);
  pNVar8 = (Node *)GraphAssembler::Int32Constant(this_00,0x3ff);
  pNVar10 = (Node *)GraphAssembler::Word32And(this_00,pNVar10,pNVar8);
  pNVar8 = (Node *)GraphAssembler::Int32Constant(this_00,0xdc00);
  pNVar10 = (Node *)GraphAssembler::Int32Add(this_00,pNVar10,pNVar8);
  pNVar8 = (Node *)GraphAssembler::Int32Constant(this_00,0x10);
  pNVar10 = (Node *)GraphAssembler::Word32Shl(this_00,pNVar10,pNVar8);
  uVar5 = GraphAssembler::Word32Or(this_00,pNVar10,pNVar2);
  uVar9 = GraphAssembler::IntPtrConstant(this_00,0x10);
  pAVar6 = (AccessBuilder *)GraphAssembler::Allocate(this_00,0,uVar9);
  AccessBuilder::ForMap(pAVar6);
  pNVar10 = (Node *)GraphAssembler::HeapConstant(this_00,*(long *)(*(long *)this + 0x168) + 0x2e0);
  pAVar7 = (AccessBuilder *)
           GraphAssembler::StoreField(this_00,(FieldAccess *)aEStack_178,(Node *)pAVar6,pNVar10);
  AccessBuilder::ForNameHashField(pAVar7);
  pNVar10 = (Node *)GraphAssembler::Int32Constant(this_00,7);
  pAVar7 = (AccessBuilder *)
           GraphAssembler::StoreField(this_00,(FieldAccess *)aEStack_178,(Node *)pAVar6,pNVar10);
  AccessBuilder::ForStringLength(pAVar7);
  pNVar10 = (Node *)GraphAssembler::Int32Constant(this_00,2);
  GraphAssembler::StoreField(this_00,(FieldAccess *)aEStack_178,(Node *)pAVar6,pNVar10);
  uVar9 = GraphAssembler::IntPtrConstant(this_00,0xb);
  GraphAssembler::Store(this_00,4,pAVar6,uVar9,uVar5);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_140,(Node *)pAVar6);
  GraphAssembler::GotoBasicBlock(this_00,local_138);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_140);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_118);
}

