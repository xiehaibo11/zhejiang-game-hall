
/* v8::internal::compiler::EffectControlLinearizer::LowerTruncateBigIntToUint64(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerTruncateBigIntToUint64
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  AccessBuilder *this_01;
  Node *pNVar4;
  FieldAccess aFStack_130 [56];
  GraphAssemblerLabel local_f8 [4];
  undefined4 local_f4;
  AccessBuilder *local_f0;
  undefined8 uStack_e8;
  GraphAssemblerLabel local_c0 [4];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  GraphAssemblerLabel local_88 [4];
  undefined4 local_84;
  BasicBlock *local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (GraphAssembler *)(this + 0x38);
  local_80 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_78 = 0;
  local_88[0] = (GraphAssemblerLabel)0x0;
  local_84 = 1;
  local_50 = 5;
  local_b8 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_b0 = 0;
  local_c0[0] = (GraphAssemblerLabel)0x0;
  local_bc = 1;
  local_f0 = (AccessBuilder *)GraphAssembler::NewBasicBlock(this_00,false);
  local_f8[0] = (GraphAssemblerLabel)0x0;
  local_f4 = 1;
  uStack_e8 = 0;
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar4 = *(Node **)pNVar4;
  AccessBuilder::ForBigIntBitfield(local_f0);
  pNVar2 = (Node *)GraphAssembler::LoadField(this_00,aFStack_130,pNVar4);
  pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  pNVar3 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar2,pNVar3);
  GraphAssembler::GotoIfNot<>(this_00,pNVar3,local_f8);
  pNVar3 = (Node *)GraphAssembler::Int64Constant(this_00,0);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_88,pNVar3);
  GraphAssembler::GotoBasicBlock(this_00,local_80);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_f8);
  AccessBuilder::ForBigIntLeastSignificantDigit64(this_01);
  pNVar4 = (Node *)GraphAssembler::LoadField(this_00,aFStack_130,pNVar4);
  pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar2 = (Node *)GraphAssembler::Word32And(this_00,pNVar2,pNVar3);
  pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar2 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar2,pNVar3);
  GraphAssembler::GotoIf<>(this_00,pNVar2,local_c0);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_88,pNVar4);
  GraphAssembler::GotoBasicBlock(this_00,local_80);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_c0);
  pNVar2 = (Node *)GraphAssembler::Int64Constant(this_00,0);
  pNVar4 = (Node *)GraphAssembler::Int64Sub(this_00,pNVar2,pNVar4);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_88,pNVar4);
  GraphAssembler::GotoBasicBlock(this_00,local_80);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_88);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_60);
}

