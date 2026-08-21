
/* v8::internal::compiler::EffectControlLinearizer::LowerStringFromSingleCharCode(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerStringFromSingleCharCode
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
  undefined8 uVar6;
  AccessBuilder *pAVar7;
  AccessBuilder *pAVar8;
  Node *pNVar9;
  ElementAccess aEStack_140 [56];
  GraphAssemblerLabel local_108 [4];
  undefined4 local_104;
  BasicBlock *local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined1 local_d0;
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
  pNVar9 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
  }
  pNVar9 = *(Node **)pNVar9;
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar2 = (Node *)GraphAssembler::Uint32Constant(this_00,0xffff);
  pNVar3 = (Node *)GraphAssembler::Word32And(this_00,pNVar9,pNVar2);
  local_88 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_80 = 0;
  local_90[0] = (GraphAssemblerLabel)0x0;
  local_8c = 0;
  local_c0 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_b8 = 0;
  local_c8[0] = (GraphAssemblerLabel)0x0;
  local_c4 = 0;
  local_100 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_f8 = 0;
  local_108[0] = (GraphAssemblerLabel)0x0;
  local_104 = 1;
  local_d0 = 8;
  pNVar9 = (Node *)GraphAssembler::Uint32Constant(this_00,0xff);
  pNVar9 = (Node *)GraphAssembler::Uint32LessThanOrEqual(this_00,pNVar3,pNVar9);
  GraphAssembler::GotoIfNot<>(this_00,pNVar9,local_90);
  pNVar4 = (Node *)GraphAssembler::HeapConstant(this_00,*(long *)(*(long *)this + 0x168) + 0xf18);
  pNVar9 = pNVar4;
  pNVar2 = pNVar3;
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) != '\x04') {
    pNVar9 = (Node *)GraphAssembler::ChangeUint32ToUint64(this_00,pNVar3);
    pNVar2 = pNVar9;
  }
  AccessBuilder::ForFixedArrayElement((AccessBuilder *)pNVar9);
  pNVar9 = (Node *)GraphAssembler::LoadElement(this_00,aEStack_140,pNVar4,pNVar2);
  pNVar5 = (Node *)GraphAssembler::UndefinedConstant(this_00);
  pNVar5 = (Node *)GraphAssembler::TaggedEqual(this_00,pNVar9,pNVar5);
  GraphAssembler::GotoIf<>(this_00,pNVar5,local_c8);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_108,pNVar9);
  GraphAssembler::GotoBasicBlock(this_00,local_100);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_c8);
  uVar6 = GraphAssembler::IntPtrConstant(this_00,0x10);
  pAVar7 = (AccessBuilder *)GraphAssembler::Allocate(this_00,0,uVar6);
  AccessBuilder::ForMap(pAVar7);
  pNVar9 = (Node *)GraphAssembler::HeapConstant(this_00,*(long *)(*(long *)this + 0x168) + 0x100);
  pAVar8 = (AccessBuilder *)
           GraphAssembler::StoreField(this_00,(FieldAccess *)aEStack_140,(Node *)pAVar7,pNVar9);
  AccessBuilder::ForNameHashField(pAVar8);
  pNVar9 = (Node *)GraphAssembler::Int32Constant(this_00,7);
  pAVar8 = (AccessBuilder *)
           GraphAssembler::StoreField(this_00,(FieldAccess *)aEStack_140,(Node *)pAVar7,pNVar9);
  AccessBuilder::ForStringLength(pAVar8);
  pNVar9 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  GraphAssembler::StoreField(this_00,(FieldAccess *)aEStack_140,(Node *)pAVar7,pNVar9);
  uVar6 = GraphAssembler::IntPtrConstant(this_00,0xb);
  pAVar8 = (AccessBuilder *)GraphAssembler::Store(this_00,2,pAVar7,uVar6,pNVar3);
  AccessBuilder::ForFixedArrayElement(pAVar8);
  GraphAssembler::StoreElement(this_00,aEStack_140,pNVar4,pNVar2,(Node *)pAVar7);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_108,(Node *)pAVar7);
  GraphAssembler::GotoBasicBlock(this_00,local_100);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_90);
  uVar6 = GraphAssembler::IntPtrConstant(this_00,0x10);
  pAVar7 = (AccessBuilder *)GraphAssembler::Allocate(this_00,0,uVar6);
  AccessBuilder::ForMap(pAVar7);
  pNVar9 = (Node *)GraphAssembler::HeapConstant(this_00,*(long *)(*(long *)this + 0x168) + 0x2e0);
  pAVar8 = (AccessBuilder *)
           GraphAssembler::StoreField(this_00,(FieldAccess *)aEStack_140,(Node *)pAVar7,pNVar9);
  AccessBuilder::ForNameHashField(pAVar8);
  pNVar9 = (Node *)GraphAssembler::Int32Constant(this_00,7);
  pAVar8 = (AccessBuilder *)
           GraphAssembler::StoreField(this_00,(FieldAccess *)aEStack_140,(Node *)pAVar7,pNVar9);
  AccessBuilder::ForStringLength(pAVar8);
  pNVar9 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  GraphAssembler::StoreField(this_00,(FieldAccess *)aEStack_140,(Node *)pAVar7,pNVar9);
  uVar6 = GraphAssembler::IntPtrConstant(this_00,0xb);
  GraphAssembler::Store(this_00,3,pAVar7,uVar6,pNVar3);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_108,(Node *)pAVar7);
  GraphAssembler::GotoBasicBlock(this_00,local_100);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_108);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_e0);
}

