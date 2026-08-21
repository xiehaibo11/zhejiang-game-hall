
/* v8::internal::compiler::EffectControlLinearizer::TruncateTaggedPointerToBit(v8::internal::compiler::Node*,
   v8::internal::compiler::GraphAssemblerLabel<1ul>*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::TruncateTaggedPointerToBit
          (EffectControlLinearizer *this,Node *param_1,GraphAssemblerLabel *param_2)

{
  GraphAssembler *this_00;
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  Node *pNVar4;
  AccessBuilder *this_01;
  AccessBuilder *this_02;
  Node *pNVar5;
  AccessBuilder *this_03;
  AccessBuilder *this_04;
  Node *pNVar6;
  FieldAccess aFStack_110 [56];
  GraphAssemblerLabel local_d8 [4];
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  GraphAssemblerLabel local_a0 [4];
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pNVar6 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  pNVar6 = *(Node **)pNVar6;
  this_00 = (GraphAssembler *)(this + 0x38);
  local_98 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_90 = 0;
  local_a0[0] = (GraphAssemblerLabel)0x0;
  local_9c = 0;
  local_d0 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_c8 = 0;
  local_d8[0] = (GraphAssemblerLabel)0x0;
  local_d4 = 0;
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  pNVar3 = (Node *)GraphAssembler::Float64Constant(this_00,0.0);
  pNVar4 = (Node *)GraphAssembler::FalseConstant(this_00);
  pNVar4 = (Node *)GraphAssembler::TaggedEqual(this_00,pNVar6,pNVar4);
  GraphAssembler::GotoIf<v8::internal::compiler::Node*>(this_00,pNVar4,param_2,pNVar2);
  pNVar4 = (Node *)GraphAssembler::EmptyStringConstant(this_00);
  pNVar4 = (Node *)GraphAssembler::TaggedEqual(this_00,pNVar6,pNVar4);
  GraphAssembler::GotoIf<v8::internal::compiler::Node*>(this_00,pNVar4,param_2,pNVar2);
  AccessBuilder::ForMap(this_01);
  this_02 = (AccessBuilder *)GraphAssembler::LoadField(this_00,aFStack_110,pNVar6);
  AccessBuilder::ForMapBitField(this_02);
  pNVar4 = (Node *)GraphAssembler::LoadField(this_00,aFStack_110,(Node *)this_02);
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,0x10);
  pNVar4 = (Node *)GraphAssembler::Word32And(this_00,pNVar4,pNVar5);
  pNVar4 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar4,pNVar2);
  GraphAssembler::GotoIfNot<v8::internal::compiler::Node*>(this_00,pNVar4,param_2,pNVar2);
  pNVar4 = (Node *)GraphAssembler::HeapNumberMapConstant(this_00);
  pNVar4 = (Node *)GraphAssembler::TaggedEqual(this_00,(Node *)this_02,pNVar4);
  GraphAssembler::GotoIf<>(this_00,pNVar4,local_a0);
  pNVar4 = (Node *)GraphAssembler::BigIntMapConstant(this_00);
  pNVar4 = (Node *)GraphAssembler::TaggedEqual(this_00,(Node *)this_02,pNVar4);
  GraphAssembler::GotoIf<>(this_00,pNVar4,local_d8);
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,param_2,pNVar4);
  GraphAssembler::GotoBasicBlock(this_00,*(BasicBlock **)(param_2 + 8));
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_a0);
  AccessBuilder::ForHeapNumberValue(this_03);
  pNVar4 = (Node *)GraphAssembler::LoadField(this_00,aFStack_110,pNVar6);
  pNVar4 = (Node *)GraphAssembler::Float64Abs(this_00,pNVar4);
  pNVar3 = (Node *)GraphAssembler::Float64LessThan(this_00,pNVar3,pNVar4);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,param_2,pNVar3);
  GraphAssembler::GotoBasicBlock(this_00,*(BasicBlock **)(param_2 + 8));
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_d8);
  AccessBuilder::ForBigIntBitfield(this_04);
  pNVar6 = (Node *)GraphAssembler::LoadField(this_00,aFStack_110,pNVar6);
  pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,0x7ffffffe);
  pNVar6 = (Node *)GraphAssembler::Word32And(this_00,pNVar6,pNVar3);
  pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  pNVar6 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar6,pNVar3);
  pNVar6 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar6,pNVar2);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,param_2,pNVar6);
  GraphAssembler::GotoBasicBlock(this_00,*(BasicBlock **)(param_2 + 8));
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

