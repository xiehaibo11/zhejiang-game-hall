
/* v8::internal::compiler::EffectControlLinearizer::LowerNumberIsInteger(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerNumberIsInteger
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  Node *pNVar1;
  Node *pNVar2;
  
  pNVar2 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  pNVar2 = *(Node **)pNVar2;
  pNVar1 = (Node *)BuildFloat64RoundTruncate(this,pNVar2);
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar2 = (Node *)GraphAssembler::Float64Sub(this_00,pNVar2,pNVar1);
  pNVar1 = (Node *)GraphAssembler::Float64Constant(this_00,0.0);
  GraphAssembler::Float64Equal(this_00,pNVar2,pNVar1);
  return;
}

