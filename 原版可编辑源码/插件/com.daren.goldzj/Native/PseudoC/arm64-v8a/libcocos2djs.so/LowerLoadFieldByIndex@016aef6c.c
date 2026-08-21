
/* v8::internal::compiler::EffectControlLinearizer::LowerLoadFieldByIndex(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerLoadFieldByIndex
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
  Node *pNVar6;
  undefined8 uVar7;
  AccessBuilder *this_01;
  undefined8 uVar8;
  AccessBuilder *this_02;
  Node *pNVar9;
  AccessBuilder *this_03;
  AccessBuilder *this_04;
  AccessBuilder *this_05;
  AccessBuilder *this_06;
  GraphAssemblerLabel local_1d8 [4];
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  FieldAccess local_1a0 [4];
  undefined4 local_19c;
  BasicBlock *local_198;
  undefined8 uStack_190;
  Node *local_178;
  undefined1 local_168;
  GraphAssemblerLabel local_160 [4];
  undefined4 local_15c;
  BasicBlock *local_158;
  undefined8 uStack_150;
  Node *local_138;
  undefined1 local_128;
  GraphAssemblerLabel local_120 [4];
  undefined4 local_11c;
  BasicBlock *local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined1 local_e8;
  GraphAssemblerLabel local_e0 [4];
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  FieldAccess aFStack_a8 [56];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar9 = *(Node **)pNVar4;
  pNVar4 = *(Node **)(pNVar4 + 8);
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar2 = (Node *)GraphAssembler::IntPtrConstant(this_00,0);
  pNVar3 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pNVar4 = (Node *)GraphAssembler::ChangeInt32ToInt64(this_00,pNVar4);
  }
  local_d8 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_d0 = 0;
  local_e0[0] = (GraphAssemblerLabel)0x0;
  local_dc = 0;
  local_118 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_110 = 0;
  local_120[0] = (GraphAssemblerLabel)0x0;
  local_11c = 1;
  local_e8 = 8;
  pNVar5 = (Node *)GraphAssembler::WordAnd(this_00,pNVar4,pNVar3);
  pNVar5 = (Node *)GraphAssembler::IntPtrEqual((Node *)this_00,pNVar5);
  GraphAssembler::GotoIfNot<>(this_00,pNVar5,local_e0);
  local_158 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_150 = 0;
  local_160[0] = (GraphAssemblerLabel)0x0;
  local_15c = 1;
  pNVar5 = (Node *)GraphAssembler::IntLessThan(this_00,pNVar4,pNVar2);
  GraphAssembler::GotoIf<>(this_00,pNVar5,local_160);
  pNVar5 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
  pNVar5 = (Node *)GraphAssembler::WordShl(this_00,pNVar4,pNVar5);
  pNVar6 = (Node *)GraphAssembler::IntPtrConstant(this_00,0xb);
  uVar7 = GraphAssembler::IntAdd(this_00,pNVar5,pNVar6);
  pNVar5 = (Node *)GraphAssembler::Load(this_00,0x708,pNVar9,uVar7);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_120,pNVar5);
  GraphAssembler::GotoBasicBlock(this_00,local_118);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_160);
  AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(this_01);
  uVar7 = GraphAssembler::LoadField(this_00,local_1a0,pNVar9);
  pNVar5 = (Node *)GraphAssembler::IntSub(this_00,pNVar2,pNVar4);
  pNVar6 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
  pNVar5 = (Node *)GraphAssembler::WordShl(this_00,pNVar5,pNVar6);
  pNVar6 = (Node *)GraphAssembler::IntPtrConstant(this_00,3);
  uVar8 = GraphAssembler::IntAdd(this_00,pNVar5,pNVar6);
  pNVar5 = (Node *)GraphAssembler::Load(this_00,0x708,uVar7,uVar8);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_120,pNVar5);
  GraphAssembler::GotoBasicBlock(this_00,local_118);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_e0);
  local_158 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_150 = 0;
  local_160[0] = (GraphAssemblerLabel)0x0;
  local_15c = 1;
  local_128 = 8;
  local_198 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_190 = 0;
  local_1a0[0] = (FieldAccess)0x0;
  local_19c = 1;
  local_168 = 0xc;
  pNVar4 = (Node *)GraphAssembler::WordSar(this_00,pNVar4,pNVar3);
  local_1d0 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_1c8 = 0;
  local_1d8[0] = (GraphAssemblerLabel)0x0;
  local_1d4 = 1;
  pNVar3 = (Node *)GraphAssembler::IntLessThan(this_00,pNVar4,pNVar2);
  GraphAssembler::GotoIf<>(this_00,pNVar3,local_1d8);
  pNVar3 = (Node *)GraphAssembler::IntPtrConstant(this_00,2);
  pNVar3 = (Node *)GraphAssembler::WordShl(this_00,pNVar4,pNVar3);
  pNVar5 = (Node *)GraphAssembler::IntPtrConstant(this_00,0xb);
  uVar7 = GraphAssembler::IntAdd(this_00,pNVar3,pNVar5);
  pNVar3 = (Node *)GraphAssembler::Load(this_00,0x708,pNVar9,uVar7);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_160,pNVar3);
  GraphAssembler::GotoBasicBlock(this_00,local_158);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_1d8);
  AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(this_02);
  uVar7 = GraphAssembler::LoadField(this_00,aFStack_a8,pNVar9);
  pNVar4 = (Node *)GraphAssembler::IntSub(this_00,pNVar2,pNVar4);
  pNVar9 = (Node *)GraphAssembler::IntPtrConstant(this_00,2);
  pNVar4 = (Node *)GraphAssembler::WordShl(this_00,pNVar4,pNVar9);
  pNVar9 = (Node *)GraphAssembler::IntPtrConstant(this_00,3);
  uVar8 = GraphAssembler::IntAdd(this_00,pNVar4,pNVar9);
  pNVar4 = (Node *)GraphAssembler::Load(this_00,0x708,uVar7,uVar8);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_160,pNVar4);
  GraphAssembler::GotoBasicBlock(this_00,local_158);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_160);
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar4 = (Node *)GraphAssembler::Word32And(this_00,local_138,pNVar4);
  pNVar9 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  pNVar4 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar4,pNVar9);
  GraphAssembler::GotoIf<v8::internal::compiler::Node*>(this_00,pNVar4,local_120,local_138);
  AccessBuilder::ForMap(this_03);
  pNVar4 = (Node *)GraphAssembler::LoadField(this_00,aFStack_a8,local_138);
  pNVar9 = (Node *)GraphAssembler::HeapNumberMapConstant(this_00);
  pNVar4 = (Node *)GraphAssembler::TaggedEqual(this_00,pNVar4,pNVar9);
  GraphAssembler::GotoIfNot<v8::internal::compiler::Node*>(this_00,pNVar4,local_120,local_138);
  AccessBuilder::ForHeapNumberValue(this_04);
  pNVar4 = (Node *)GraphAssembler::LoadField(this_00,aFStack_a8,local_138);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>
            (this_00,(GraphAssemblerLabel *)local_1a0,pNVar4);
  GraphAssembler::GotoBasicBlock(this_00,local_198);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,(GraphAssemblerLabel *)local_1a0);
  uVar7 = GraphAssembler::IntPtrConstant(this_00,0xc);
  this_05 = (AccessBuilder *)GraphAssembler::Allocate(this_00,0,uVar7);
  AccessBuilder::ForMap(this_05);
  pNVar4 = (Node *)GraphAssembler::HeapNumberMapConstant(this_00);
  this_06 = (AccessBuilder *)GraphAssembler::StoreField(this_00,aFStack_a8,(Node *)this_05,pNVar4);
  AccessBuilder::ForHeapNumberValue(this_06);
  GraphAssembler::StoreField(this_00,aFStack_a8,(Node *)this_05,local_178);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_120,(Node *)this_05);
  GraphAssembler::GotoBasicBlock(this_00,local_118);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_120);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_f8);
}

