
/* v8::internal::compiler::EffectControlLinearizer::LowerChangeUint64ToBigInt(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerChangeUint64ToBigInt
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  AccessBuilder *pAVar5;
  AccessBuilder *pAVar6;
  Node *pNVar7;
  FieldAccess aFStack_140 [56];
  GraphAssemblerLabel local_108 [4];
  undefined4 local_104;
  BasicBlock *local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined1 local_d0;
  GraphAssemblerLabel local_c8 [4];
  undefined4 local_c4;
  BasicBlock *local_c0;
  undefined8 uStack_b8;
  GraphAssemblerLabel local_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pNVar7 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
  }
  pNVar7 = *(Node **)pNVar7;
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar2 = (Node *)GraphAssembler::HeapConstant(this_00,*(long *)(*(long *)this + 0x168) + 0x1c0);
  local_88 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_80 = 0;
  local_90[0] = (GraphAssemblerLabel)0x0;
  local_8c = 1;
  local_c0 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_b8 = 0;
  local_c8[0] = (GraphAssemblerLabel)0x0;
  local_c4 = 1;
  local_100 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_f8 = 0;
  local_108[0] = (GraphAssemblerLabel)0x0;
  local_104 = 1;
  local_d0 = 8;
  pNVar3 = (Node *)GraphAssembler::IntPtrConstant(this_00,0);
  pNVar3 = (Node *)GraphAssembler::Word64Equal(this_00,pNVar7,pNVar3);
  GraphAssembler::GotoIf<>(this_00,pNVar3,local_90);
  GraphAssembler::MergeState<>(this_00,local_c8);
  GraphAssembler::GotoBasicBlock(this_00,local_c0);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_c8);
  uVar4 = GraphAssembler::IntPtrConstant(this_00,0x10);
  pAVar5 = (AccessBuilder *)GraphAssembler::Allocate(this_00,0,uVar4);
  AccessBuilder::ForMap(pAVar5);
  pAVar6 = (AccessBuilder *)GraphAssembler::StoreField(this_00,aFStack_140,(Node *)pAVar5,pNVar2);
  AccessBuilder::ForBigIntBitfield(pAVar6);
  pNVar3 = (Node *)GraphAssembler::IntPtrConstant(this_00,2);
  pAVar6 = (AccessBuilder *)GraphAssembler::StoreField(this_00,aFStack_140,(Node *)pAVar5,pNVar3);
  AccessBuilder::ForBigIntLeastSignificantDigit64(pAVar6);
  GraphAssembler::StoreField(this_00,aFStack_140,(Node *)pAVar5,pNVar7);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_108,(Node *)pAVar5);
  GraphAssembler::GotoBasicBlock(this_00,local_100);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_90);
  uVar4 = GraphAssembler::IntPtrConstant(this_00,8);
  pAVar5 = (AccessBuilder *)GraphAssembler::Allocate(this_00,0,uVar4);
  AccessBuilder::ForMap(pAVar5);
  pAVar6 = (AccessBuilder *)GraphAssembler::StoreField(this_00,aFStack_140,(Node *)pAVar5,pNVar2);
  AccessBuilder::ForBigIntBitfield(pAVar6);
  pNVar7 = (Node *)GraphAssembler::IntPtrConstant(this_00,0);
  GraphAssembler::StoreField(this_00,aFStack_140,(Node *)pAVar5,pNVar7);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_108,(Node *)pAVar5);
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

