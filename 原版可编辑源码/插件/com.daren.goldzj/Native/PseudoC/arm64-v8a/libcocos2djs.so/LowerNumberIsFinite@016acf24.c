
/* v8::internal::compiler::EffectControlLinearizer::LowerNumberIsFinite(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerNumberIsFinite
          (EffectControlLinearizer *this,Node *param_1)

{
  Node *pNVar1;
  
  pNVar1 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar1 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar1 = (Node *)GraphAssembler::Float64Sub
                             ((GraphAssembler *)(this + 0x38),*(Node **)pNVar1,*(Node **)pNVar1);
  GraphAssembler::Float64Equal((GraphAssembler *)(this + 0x38),pNVar1,pNVar1);
  return;
}

