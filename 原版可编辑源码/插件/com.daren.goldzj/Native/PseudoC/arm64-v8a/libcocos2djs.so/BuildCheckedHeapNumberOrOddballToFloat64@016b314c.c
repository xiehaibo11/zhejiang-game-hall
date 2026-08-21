
/* v8::internal::compiler::EffectControlLinearizer::BuildCheckedHeapNumberOrOddballToFloat64(v8::internal::compiler::CheckTaggedInputMode,
   v8::internal::compiler::FeedbackSource const&, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::BuildCheckedHeapNumberOrOddballToFloat64
          (EffectControlLinearizer *this,char param_2,undefined8 param_3,Node *param_4,
          undefined8 param_5)

{
  GraphAssembler *this_00;
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  AccessBuilder *this_01;
  AccessBuilder *this_02;
  undefined8 uVar4;
  AccessBuilder *extraout_x0;
  FieldAccess aFStack_c8 [56];
  FieldAccess local_90 [4];
  undefined4 local_8c;
  BasicBlock *local_88;
  undefined8 uStack_80;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this_00 = (GraphAssembler *)(this + 0x38);
  AccessBuilder::ForMap((AccessBuilder *)this);
  pNVar2 = (Node *)GraphAssembler::LoadField(this_00,local_90,param_4);
  pNVar3 = (Node *)GraphAssembler::HeapNumberMapConstant(this_00);
  this_01 = (AccessBuilder *)GraphAssembler::TaggedEqual(this_00,pNVar2,pNVar3);
  if (param_2 == '\x01') {
    local_88 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
    uStack_80 = 0;
    local_90[0] = (FieldAccess)0x0;
    local_8c = 1;
    GraphAssembler::GotoIf<>(this_00,(Node *)this_01,(GraphAssemblerLabel *)local_90);
    AccessBuilder::ForMapInstanceType(this_02);
    pNVar2 = (Node *)GraphAssembler::LoadField(this_00,aFStack_c8,pNVar2);
    pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,0x43);
    uVar4 = GraphAssembler::Word32Equal(this_00,pNVar2,pNVar3);
    GraphAssembler::DeoptimizeIfNot(this_00,0x18,param_3,uVar4,param_5,1);
    GraphAssembler::MergeState<>(this_00,(GraphAssemblerLabel *)local_90);
    GraphAssembler::GotoBasicBlock(this_00,local_88);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    GraphAssembler::Bind<0ul>(this_00,(GraphAssemblerLabel *)local_90);
    this_01 = extraout_x0;
  }
  else if (param_2 == '\0') {
    this_01 = (AccessBuilder *)
              GraphAssembler::DeoptimizeIfNot(this_00,0x15,param_3,this_01,param_5,1);
  }
  AccessBuilder::ForHeapNumberValue(this_01);
  GraphAssembler::LoadField(this_00,local_90,param_4);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

