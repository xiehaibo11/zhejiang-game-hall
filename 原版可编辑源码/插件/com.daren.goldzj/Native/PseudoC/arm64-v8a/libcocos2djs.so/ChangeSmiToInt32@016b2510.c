
/* v8::internal::compiler::EffectControlLinearizer::ChangeSmiToInt32(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::ChangeSmiToInt32
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  Node *pNVar1;
  Node *pNVar2;
  
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    this_00 = (GraphAssembler *)(this + 0x38);
    pNVar1 = (Node *)GraphAssembler::TruncateInt64ToInt32(this_00,param_1);
    if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
      pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,1);
    }
    else {
      pNVar2 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
    }
    GraphAssembler::Word32Sar(this_00,pNVar1,pNVar2);
    return;
  }
  ChangeSmiToIntPtr(this,param_1);
  return;
}

