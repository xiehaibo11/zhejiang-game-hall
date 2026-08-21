
/* v8::internal::compiler::EffectControlLinearizer::LowerFindOrderedHashMapEntryForInt32Key(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerFindOrderedHashMapEntryForInt32Key
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  AccessBuilder *this_01;
  Node *pNVar4;
  Node *pNVar5;
  Node *pNVar6;
  undefined8 uVar7;
  Node *pNVar8;
  AccessBuilder *this_02;
  AccessBuilder *this_03;
  EffectControlLinearizer *pEVar9;
  undefined4 uVar10;
  FieldAccess aFStack_1d0 [56];
  GraphAssemblerLabel local_198 [4];
  undefined4 local_194;
  undefined8 local_190;
  undefined8 uStack_188;
  GraphAssemblerLabel local_160 [4];
  int local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  GraphAssemblerLabel local_128 [4];
  int local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  GraphAssemblerLabel local_f0 [4];
  undefined4 local_ec;
  BasicBlock *local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined1 local_b8;
  FieldAccess local_b0 [4];
  undefined4 local_ac;
  BasicBlock *local_a8;
  undefined8 uStack_a0;
  Node *local_88;
  undefined1 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,0);
  pNVar3 = (Node *)NodeProperties::GetValueInput(param_1,1);
  this_01 = (AccessBuilder *)ComputeUnseededHash(this,pNVar3);
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    this_01 = (AccessBuilder *)
              GraphAssembler::ChangeUint32ToUint64((GraphAssembler *)(this + 0x38),(Node *)this_01);
  }
  this_00 = (GraphAssembler *)(this + 0x38);
  AccessBuilder::ForOrderedHashMapOrSetNumberOfBuckets(this_01);
  pNVar4 = (Node *)GraphAssembler::LoadField(this_00,local_b0,pNVar2);
  pNVar4 = (Node *)ChangeSmiToIntPtr(this,pNVar4);
  pNVar5 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
  pNVar5 = (Node *)GraphAssembler::IntSub(this_00,pNVar4,pNVar5);
  pNVar5 = (Node *)GraphAssembler::WordAnd(this_00,(Node *)this_01,pNVar5);
  pNVar6 = (Node *)GraphAssembler::IntPtrConstant(this_00,2);
  pNVar5 = (Node *)GraphAssembler::WordShl(this_00,pNVar5,pNVar6);
  pNVar6 = (Node *)GraphAssembler::IntPtrConstant(this_00,0x13);
  uVar7 = GraphAssembler::IntAdd(this_00,pNVar5,pNVar6);
  pNVar5 = (Node *)GraphAssembler::Load(this_00,0x206,pNVar2,uVar7);
  pNVar5 = (Node *)ChangeSmiToIntPtr(this,pNVar5);
  local_a8 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  local_ac = 2;
  uStack_a0 = 0;
  local_b0[0] = (FieldAccess)0x0;
  local_78 = 5;
  local_e8 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_e0 = 0;
  local_f0[0] = (GraphAssemblerLabel)0x0;
  local_ec = 1;
  local_b8 = 5;
  GraphAssembler::MergeState<v8::internal::compiler::Node*>
            (this_00,(GraphAssemblerLabel *)local_b0,pNVar5);
  GraphAssembler::GotoBasicBlock(this_00,local_a8);
  pEVar9 = this + 0x58;
  *(undefined8 *)pEVar9 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,(GraphAssemblerLabel *)local_b0);
  GraphAssembler::IntPtrConstant(this_00,-1);
  pNVar5 = (Node *)GraphAssembler::IntPtrEqual((Node *)this_00,local_88);
  GraphAssembler::GotoIf<v8::internal::compiler::Node*>(this_00,pNVar5,local_f0,local_88);
  pNVar5 = (Node *)GraphAssembler::IntPtrConstant(this_00,3);
  pNVar5 = (Node *)GraphAssembler::IntMul(this_00,local_88,pNVar5);
  pNVar4 = (Node *)GraphAssembler::IntAdd(this_00,pNVar5,pNVar4);
  pNVar5 = (Node *)GraphAssembler::IntPtrConstant(this_00,2);
  pNVar5 = (Node *)GraphAssembler::WordShl(this_00,pNVar4,pNVar5);
  pNVar6 = (Node *)GraphAssembler::IntPtrConstant(this_00,0x13);
  uVar7 = GraphAssembler::IntAdd(this_00,pNVar5,pNVar6);
  pNVar5 = (Node *)GraphAssembler::Load(this_00,0x708,pNVar2,uVar7);
  local_120 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_118 = 0;
  local_128[0] = (GraphAssemblerLabel)0x0;
  local_124 = 1;
  local_158 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_150 = 0;
  local_160[0] = (GraphAssemblerLabel)0x0;
  local_15c = 1;
  local_190 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_188 = 0;
  local_198[0] = (GraphAssemblerLabel)0x0;
  local_194 = 0;
  pNVar6 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar6 = (Node *)GraphAssembler::Word32And(this_00,pNVar5,pNVar6);
  pNVar8 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  pNVar6 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar6,pNVar8);
  GraphAssembler::GotoIfNot<>(this_00,pNVar6,local_198);
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pNVar6 = (Node *)GraphAssembler::TruncateInt64ToInt32(this_00,pNVar5);
    if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
      pNVar8 = (Node *)GraphAssembler::Int32Constant(this_00,1);
    }
    else {
      pNVar8 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
    }
    pNVar6 = (Node *)GraphAssembler::Word32Sar(this_00,pNVar6,pNVar8);
  }
  else {
    pNVar6 = (Node *)ChangeSmiToIntPtr(this,pNVar5);
  }
  uVar7 = GraphAssembler::Word32Equal(this_00,pNVar6,pNVar3);
  uVar10 = 1;
  if (local_15c != 0) {
    uVar10 = 2;
  }
  if ((local_124 == 0) == (local_15c == 0)) {
    uVar10 = 0;
  }
  GraphAssembler::BranchImpl<>(this_00,uVar7,local_128,local_160,uVar10,2);
  GraphAssembler::Bind<0ul>(this_00,local_198);
  AccessBuilder::ForMap(this_02);
  pNVar6 = (Node *)GraphAssembler::LoadField(this_00,aFStack_1d0,pNVar5);
  pNVar8 = (Node *)GraphAssembler::HeapNumberMapConstant(this_00);
  pNVar6 = (Node *)GraphAssembler::TaggedEqual(this_00,pNVar6,pNVar8);
  GraphAssembler::GotoIfNot<>(this_00,pNVar6,local_160);
  AccessBuilder::ForHeapNumberValue(this_03);
  pNVar5 = (Node *)GraphAssembler::LoadField(this_00,aFStack_1d0,pNVar5);
  pNVar3 = (Node *)GraphAssembler::ChangeInt32ToFloat64(this_00,pNVar3);
  uVar7 = GraphAssembler::Float64Equal(this_00,pNVar5,pNVar3);
  uVar10 = 1;
  if (local_15c != 0) {
    uVar10 = 2;
  }
  if ((local_124 == 0) == (local_15c == 0)) {
    uVar10 = 0;
  }
  GraphAssembler::BranchImpl<>(this_00,uVar7,local_128,local_160,uVar10,2);
  GraphAssembler::Bind<0ul>(this_00,local_128);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_f0,pNVar4);
  GraphAssembler::GotoBasicBlock(this_00,local_e8);
  *(undefined8 *)pEVar9 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_160);
  pNVar3 = (Node *)GraphAssembler::IntPtrConstant(this_00,2);
  pNVar3 = (Node *)GraphAssembler::WordShl(this_00,pNVar4,pNVar3);
  pNVar4 = (Node *)GraphAssembler::IntPtrConstant(this_00,0x1b);
  uVar7 = GraphAssembler::IntAdd(this_00,pNVar3,pNVar4);
  pNVar2 = (Node *)GraphAssembler::Load(this_00,0x206,pNVar2,uVar7);
  pNVar2 = (Node *)ChangeSmiToIntPtr(this,pNVar2);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>
            (this_00,(GraphAssemblerLabel *)local_b0,pNVar2);
  GraphAssembler::GotoBasicBlock(this_00,local_a8);
  *(undefined8 *)pEVar9 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_f0);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_c8);
}

