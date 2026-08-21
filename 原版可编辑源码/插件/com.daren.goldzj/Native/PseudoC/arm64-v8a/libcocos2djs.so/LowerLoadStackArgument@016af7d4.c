
/* v8::internal::compiler::EffectControlLinearizer::LowerLoadStackArgument(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerLoadStackArgument
          (EffectControlLinearizer *this,Node *param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  ElementAccess aEStack_48 [24];
  
  pNVar2 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  pNVar1 = *(Node **)pNVar2;
  pNVar2 = *(Node **)(pNVar2 + 8);
  AccessBuilder::ForStackArgument((AccessBuilder *)this);
  pNVar2 = (Node *)GraphAssembler::LoadElement
                             ((GraphAssembler *)(this + 0x38),aEStack_48,pNVar1,pNVar2);
  GraphAssembler::BitcastWordToTagged((GraphAssembler *)(this + 0x38),pNVar2);
  return;
}

