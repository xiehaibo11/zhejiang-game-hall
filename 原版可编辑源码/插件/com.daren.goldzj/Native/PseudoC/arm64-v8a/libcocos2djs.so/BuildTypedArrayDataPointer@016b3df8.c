
/* v8::internal::compiler::EffectControlLinearizer::BuildTypedArrayDataPointer(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::BuildTypedArrayDataPointer
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  Node *pNVar1;
  long lVar2;
  
  lVar2 = *(long *)param_1;
  if (*(short *)(lVar2 + 0x10) == 0x18) {
    if (*(long *)(lVar2 + 0x30) == 0) {
      return param_2;
    }
  }
  else if ((*(short *)(lVar2 + 0x10) == 0x17) && (*(int *)(lVar2 + 0x2c) == 0)) {
    return param_2;
  }
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar1 = (Node *)GraphAssembler::ChangeTaggedToCompressed(this_00,param_1);
  pNVar1 = (Node *)GraphAssembler::BitcastTaggedToWord(this_00,pNVar1);
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pNVar1 = (Node *)GraphAssembler::ChangeUint32ToUint64(this_00,pNVar1);
  }
  pNVar1 = (Node *)GraphAssembler::UnsafePointerAdd(this_00,pNVar1,param_2);
  return pNVar1;
}

