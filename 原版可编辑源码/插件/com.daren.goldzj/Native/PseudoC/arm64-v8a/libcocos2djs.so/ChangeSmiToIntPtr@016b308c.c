
/* v8::internal::compiler::EffectControlLinearizer::ChangeSmiToIntPtr(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::ChangeSmiToIntPtr
          (EffectControlLinearizer *this,Node *param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  GraphAssembler *this_00;
  
  this_00 = (GraphAssembler *)(this + 0x38);
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pNVar1 = (Node *)GraphAssembler::TruncateInt64ToInt32(this_00,param_1);
    if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
      pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,1);
    }
    else {
      pNVar2 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
    }
    pNVar1 = (Node *)GraphAssembler::Word32Sar(this_00,pNVar1,pNVar2);
    GraphAssembler::ChangeInt32ToInt64(this_00,pNVar1);
    return;
  }
  pNVar1 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
  GraphAssembler::WordSar(this_00,param_1,pNVar1);
  return;
}

