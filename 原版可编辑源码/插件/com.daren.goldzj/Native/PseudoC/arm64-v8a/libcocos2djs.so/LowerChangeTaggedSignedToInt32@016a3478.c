
/* v8::internal::compiler::EffectControlLinearizer::LowerChangeTaggedSignedToInt32(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerChangeTaggedSignedToInt32
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  Node *pNVar1;
  Node *pNVar2;
  
  pNVar1 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar1 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    this_00 = (GraphAssembler *)(this + 0x38);
    pNVar1 = (Node *)GraphAssembler::TruncateInt64ToInt32(this_00,*(Node **)pNVar1);
    if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
      pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,1);
    }
    else {
      pNVar2 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
    }
    GraphAssembler::Word32Sar(this_00,pNVar1,pNVar2);
    return;
  }
  ChangeSmiToIntPtr(this,*(Node **)pNVar1);
  return;
}

