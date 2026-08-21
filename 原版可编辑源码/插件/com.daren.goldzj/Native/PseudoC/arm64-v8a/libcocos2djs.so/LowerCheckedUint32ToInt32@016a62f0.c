
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckedUint32ToInt32(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckedUint32ToInt32
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  undefined8 uVar1;
  Node *pNVar2;
  undefined8 uVar3;
  Node *pNVar4;
  
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar4 = *(Node **)pNVar4;
  uVar1 = CheckParametersOf(*(Operator **)param_1);
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  uVar3 = GraphAssembler::Int32LessThan(this_00,pNVar4,pNVar2);
  GraphAssembler::DeoptimizeIf(this_00,0x10,uVar1,uVar3,param_2,1);
  return pNVar4;
}

