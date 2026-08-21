
/* v8::internal::compiler::EffectControlLinearizer::ChangeIntPtrToInt32(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::ChangeIntPtrToInt32
          (EffectControlLinearizer *this,Node *param_1)

{
  Node *pNVar1;
  
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pNVar1 = (Node *)GraphAssembler::TruncateInt64ToInt32((GraphAssembler *)(this + 0x38),param_1);
    return pNVar1;
  }
  return param_1;
}

