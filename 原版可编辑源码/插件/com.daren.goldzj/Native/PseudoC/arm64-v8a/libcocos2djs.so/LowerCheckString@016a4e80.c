
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckString(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckString
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  long lVar1;
  AccessBuilder *this_01;
  AccessBuilder *this_02;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Node *pNVar5;
  FieldAccess aFStack_80 [56];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar5 = *(Node **)pNVar5;
  this_01 = (AccessBuilder *)CheckParametersOf(*(Operator **)param_1);
  this_00 = (GraphAssembler *)(this + 0x38);
  AccessBuilder::ForMap(this_01);
  this_02 = (AccessBuilder *)GraphAssembler::LoadField(this_00,aFStack_80,pNVar5);
  AccessBuilder::ForMapInstanceType(this_02);
  pNVar2 = (Node *)GraphAssembler::LoadField(this_00,aFStack_80,(Node *)this_02);
  pNVar3 = (Node *)GraphAssembler::Uint32Constant(this_00,0x40);
  uVar4 = GraphAssembler::Uint32LessThan(this_00,pNVar2,pNVar3);
  GraphAssembler::DeoptimizeIfNot(this_00,0x1b,this_01,uVar4,param_2,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pNVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

