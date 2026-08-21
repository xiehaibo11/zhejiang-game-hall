
/* v8::internal::compiler::EffectControlLinearizer::ObjectIsSmi(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::ObjectIsSmi
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  Node *pNVar1;
  Node *pNVar2;
  
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar1 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar1 = (Node *)GraphAssembler::Word32And(this_00,param_1,pNVar1);
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  GraphAssembler::Word32Equal(this_00,pNVar1,pNVar2);
  return;
}

