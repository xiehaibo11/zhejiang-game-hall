
/* v8::internal::compiler::EffectControlLinearizer::LowerObjectIsSafeInteger(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerObjectIsSafeInteger
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
  AccessBuilder *this_01;
  AccessBuilder *this_02;
  Node *pNVar6;
  FieldAccess aFStack_d0 [56];
  GraphAssemblerLabel local_98 [4];
  undefined4 local_94;
  BasicBlock *local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pNVar6 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  pNVar6 = *(Node **)pNVar6;
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  local_90 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_88 = 0;
  local_98[0] = (GraphAssemblerLabel)0x0;
  local_94 = 1;
  local_60 = 1;
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar4 = (Node *)GraphAssembler::Word32And(this_00,pNVar6,pNVar4);
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  pNVar4 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar4,pNVar5);
  GraphAssembler::GotoIf<v8::internal::compiler::Node*>(this_00,pNVar4,local_98,pNVar3);
  AccessBuilder::ForMap(this_01);
  pNVar3 = (Node *)GraphAssembler::LoadField(this_00,aFStack_d0,pNVar6);
  pNVar4 = (Node *)GraphAssembler::HeapNumberMapConstant(this_00);
  pNVar3 = (Node *)GraphAssembler::TaggedEqual(this_00,pNVar3,pNVar4);
  GraphAssembler::GotoIfNot<v8::internal::compiler::Node*>(this_00,pNVar3,local_98,pNVar2);
  AccessBuilder::ForHeapNumberValue(this_02);
  pNVar6 = (Node *)GraphAssembler::LoadField(this_00,aFStack_d0,pNVar6);
  pNVar3 = (Node *)BuildFloat64RoundTruncate(this,pNVar6);
  pNVar6 = (Node *)GraphAssembler::Float64Sub(this_00,pNVar6,pNVar3);
  pNVar4 = (Node *)GraphAssembler::Float64Constant(this_00,0.0);
  pNVar6 = (Node *)GraphAssembler::Float64Equal(this_00,pNVar6,pNVar4);
  GraphAssembler::GotoIfNot<v8::internal::compiler::Node*>(this_00,pNVar6,local_98,pNVar2);
  pNVar6 = (Node *)GraphAssembler::Float64Abs(this_00,pNVar3);
  pNVar2 = (Node *)GraphAssembler::Float64Constant(this_00,9007199254740991.0);
  pNVar6 = (Node *)GraphAssembler::Float64LessThanOrEqual(this_00,pNVar6,pNVar2);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_98,pNVar6);
  GraphAssembler::GotoBasicBlock(this_00,local_90);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_98);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_70);
}

