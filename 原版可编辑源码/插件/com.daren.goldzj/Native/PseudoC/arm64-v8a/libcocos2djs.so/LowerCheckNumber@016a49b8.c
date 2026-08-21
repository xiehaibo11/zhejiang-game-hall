
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckNumber(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckNumber
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  long lVar1;
  undefined8 uVar2;
  Node *pNVar3;
  Node *pNVar4;
  AccessBuilder *this_01;
  undefined8 uVar5;
  Node *pNVar6;
  FieldAccess aFStack_100 [56];
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
  pNVar6 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  pNVar6 = *(Node **)pNVar6;
  uVar2 = CheckParametersOf(*(Operator **)param_1);
  this_00 = (GraphAssembler *)(this + 0x38);
  local_88 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_80 = 0;
  local_90[0] = (GraphAssemblerLabel)0x0;
  local_8c = 0;
  local_c0 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_b8 = 0;
  local_c8[0] = (GraphAssemblerLabel)0x0;
  local_c4 = 1;
  pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar3 = (Node *)GraphAssembler::Word32And(this_00,pNVar6,pNVar3);
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  pNVar3 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar3,pNVar4);
  GraphAssembler::GotoIfNot<>(this_00,pNVar3,local_90);
  GraphAssembler::MergeState<>(this_00,local_c8);
  GraphAssembler::GotoBasicBlock(this_00,local_c0);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_90);
  AccessBuilder::ForMap(this_01);
  pNVar3 = (Node *)GraphAssembler::LoadField(this_00,aFStack_100,pNVar6);
  pNVar4 = (Node *)GraphAssembler::HeapNumberMapConstant(this_00);
  uVar5 = GraphAssembler::TaggedEqual(this_00,pNVar3,pNVar4);
  GraphAssembler::DeoptimizeIfNot(this_00,0x15,uVar2,uVar5,param_2,1);
  GraphAssembler::MergeState<>(this_00,local_c8);
  GraphAssembler::GotoBasicBlock(this_00,local_c0);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_c8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return pNVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

