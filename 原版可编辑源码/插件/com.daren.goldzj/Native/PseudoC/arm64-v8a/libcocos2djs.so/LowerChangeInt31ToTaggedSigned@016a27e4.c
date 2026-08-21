
/* v8::internal::compiler::EffectControlLinearizer::LowerChangeInt31ToTaggedSigned(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerChangeInt31ToTaggedSigned
          (EffectControlLinearizer *this,Node *param_1)

{
  Node *pNVar1;
  GraphAssembler *this_00;
  Node *pNVar2;
  
  pNVar2 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  pNVar2 = *(Node **)pNVar2;
  this_00 = (GraphAssembler *)(this + 0x38);
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pNVar1 = (Node *)GraphAssembler::Int32Constant(this_00,1);
    pNVar2 = (Node *)GraphAssembler::Word32Shl(this_00,pNVar2,pNVar1);
    GraphAssembler::BitcastWord32ToWord64(this_00,pNVar2);
    return;
  }
  pNVar1 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
  GraphAssembler::WordShl(this_00,pNVar2,pNVar1);
  return;
}

