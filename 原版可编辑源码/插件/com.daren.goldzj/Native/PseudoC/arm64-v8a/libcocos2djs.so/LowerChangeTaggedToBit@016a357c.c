
/* v8::internal::compiler::EffectControlLinearizer::LowerChangeTaggedToBit(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerChangeTaggedToBit
          (EffectControlLinearizer *this,Node *param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  
  pNVar2 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  pNVar2 = *(Node **)pNVar2;
  pNVar1 = (Node *)GraphAssembler::TrueConstant((GraphAssembler *)(this + 0x38));
  GraphAssembler::TaggedEqual((GraphAssembler *)(this + 0x38),pNVar2,pNVar1);
  return;
}

