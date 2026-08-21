
/* v8::internal::compiler::EffectControlLinearizer::ChangeUint32ToUintPtr(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::ChangeUint32ToUintPtr
          (EffectControlLinearizer *this,Node *param_1)

{
  Node *pNVar1;
  
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pNVar1 = (Node *)GraphAssembler::ChangeUint32ToUint64((GraphAssembler *)(this + 0x38),param_1);
    return pNVar1;
  }
  return param_1;
}

