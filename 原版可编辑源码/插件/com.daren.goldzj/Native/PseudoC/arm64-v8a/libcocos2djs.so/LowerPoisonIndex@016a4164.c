
/* v8::internal::compiler::EffectControlLinearizer::LowerPoisonIndex(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerPoisonIndex
          (EffectControlLinearizer *this,Node *param_1)

{
  Node *pNVar1;
  
  pNVar1 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar1 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  if (*(int *)(this + 0x18) == 1) {
    pNVar1 = (Node *)GraphAssembler::Word32PoisonOnSpeculation
                               ((GraphAssembler *)(this + 0x38),*(Node **)pNVar1);
    return pNVar1;
  }
  return *(Node **)pNVar1;
}

