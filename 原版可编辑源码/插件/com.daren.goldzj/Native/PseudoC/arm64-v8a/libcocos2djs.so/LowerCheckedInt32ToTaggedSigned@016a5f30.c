
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckedInt32ToTaggedSigned(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckedInt32ToTaggedSigned
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  Node *pNVar3;
  
  pNVar3 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
  }
  pNVar3 = *(Node **)pNVar3;
  uVar1 = CheckParametersOf(*(Operator **)param_1);
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar3 = (Node *)GraphAssembler::Int32AddWithOverflow(this_00,pNVar3,pNVar3);
  uVar2 = GraphAssembler::Projection(this_00,1,pNVar3);
  GraphAssembler::DeoptimizeIf(this_00,0x10,uVar1,uVar2,param_2,1);
  pNVar3 = (Node *)GraphAssembler::Projection(this_00,0,pNVar3);
  GraphAssembler::BitcastWord32ToWord64(this_00,pNVar3);
  return;
}

