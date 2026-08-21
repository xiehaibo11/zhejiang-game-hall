
/* v8::internal::compiler::EffectControlLinearizer::ChangeInt32ToSmi(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::ChangeInt32ToSmi
          (EffectControlLinearizer *this,Node *param_1)

{
  Node *pNVar1;
  GraphAssembler *this_00;
  
  this_00 = (GraphAssembler *)(this + 0x38);
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pNVar1 = (Node *)GraphAssembler::Int32Constant(this_00,1);
    pNVar1 = (Node *)GraphAssembler::Word32Shl(this_00,param_1,pNVar1);
    GraphAssembler::BitcastWord32ToWord64(this_00,pNVar1);
    return;
  }
  pNVar1 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
  GraphAssembler::WordShl(this_00,param_1,pNVar1);
  return;
}

