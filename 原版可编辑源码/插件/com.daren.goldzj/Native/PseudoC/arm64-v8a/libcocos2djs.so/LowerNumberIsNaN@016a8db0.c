
/* v8::internal::compiler::EffectControlLinearizer::LowerNumberIsNaN(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerNumberIsNaN
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  Node *pNVar1;
  Node *pNVar2;
  
  pNVar1 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar1 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar1 = (Node *)GraphAssembler::Float64Equal(this_00,*(Node **)pNVar1,*(Node **)pNVar1);
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  GraphAssembler::Word32Equal(this_00,pNVar1,pNVar2);
  return;
}

