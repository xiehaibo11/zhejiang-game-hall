
/* v8::internal::compiler::EffectControlLinearizer::LowerObjectIsSmi(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerObjectIsSmi
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
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar1 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar2 = (Node *)GraphAssembler::Word32And(this_00,pNVar2,pNVar1);
  pNVar1 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  GraphAssembler::Word32Equal(this_00,pNVar2,pNVar1);
  return;
}

