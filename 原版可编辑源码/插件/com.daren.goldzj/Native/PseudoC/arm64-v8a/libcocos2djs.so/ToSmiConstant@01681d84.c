
/* v8::internal::compiler::CodeAssembler::ToSmiConstant(v8::internal::compiler::Node*,
   v8::internal::Smi*) */

undefined8 __thiscall
v8::internal::compiler::CodeAssembler::ToSmiConstant(CodeAssembler *this,Node *param_1,Smi *param_2)

{
  short sVar1;
  long lVar2;
  Node *pNVar3;
  
  lVar2 = *(long *)param_1;
  sVar1 = *(short *)(lVar2 + 0x10);
  if (sVar1 == 0x1b9) {
    pNVar3 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
    }
    lVar2 = **(long **)pNVar3;
    sVar1 = *(short *)(lVar2 + 0x10);
  }
  if (sVar1 == 0x18) {
    lVar2 = *(long *)(lVar2 + 0x30);
  }
  else {
    if (sVar1 != 0x17) {
      return 0;
    }
    lVar2 = (long)*(int *)(lVar2 + 0x2c);
  }
  *(long *)param_2 = lVar2;
  return 1;
}

