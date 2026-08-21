
/* v8::internal::compiler::EffectControlLinearizer::LowerPlainPrimitiveToNumber(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerPlainPrimitiveToNumber
          (EffectControlLinearizer *this,Node *param_1)

{
  Node *pNVar1;
  
  pNVar1 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar1 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  GraphAssembler::ToNumber((GraphAssembler *)(this + 0x38),*(undefined8 *)pNVar1);
  return;
}

