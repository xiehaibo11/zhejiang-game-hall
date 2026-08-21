
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckBigInt(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckBigInt
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  long lVar1;
  undefined8 uVar2;
  Node *pNVar3;
  Node *pNVar4;
  undefined8 uVar5;
  AccessBuilder *this_01;
  Node *pNVar6;
  FieldAccess aFStack_80 [56];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pNVar6 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  pNVar6 = *(Node **)pNVar6;
  uVar2 = CheckParametersOf(*(Operator **)param_1);
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar3 = (Node *)GraphAssembler::Word32And(this_00,pNVar6,pNVar3);
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  uVar5 = GraphAssembler::Word32Equal(this_00,pNVar3,pNVar4);
  this_01 = (AccessBuilder *)GraphAssembler::DeoptimizeIf(this_00,0x20,uVar2,uVar5,param_2,1);
  AccessBuilder::ForMap(this_01);
  pNVar3 = (Node *)GraphAssembler::LoadField(this_00,aFStack_80,pNVar6);
  pNVar4 = (Node *)GraphAssembler::BigIntMapConstant(this_00);
  uVar5 = GraphAssembler::TaggedEqual(this_00,pNVar3,pNVar4);
  GraphAssembler::DeoptimizeIfNot(this_00,0x25,uVar2,uVar5,param_2,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pNVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

