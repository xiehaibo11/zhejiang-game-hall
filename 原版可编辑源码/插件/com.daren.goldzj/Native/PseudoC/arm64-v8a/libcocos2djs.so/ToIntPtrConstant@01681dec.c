
/* v8::internal::compiler::CodeAssembler::ToIntPtrConstant(v8::internal::compiler::Node*, long*) */

undefined8 __thiscall
v8::internal::compiler::CodeAssembler::ToIntPtrConstant
          (CodeAssembler *this,Node *param_1,long *param_2)

{
  ushort uVar1;
  long lVar2;
  Node *pNVar3;
  
  lVar2 = *(long *)param_1;
  uVar1 = *(ushort *)(lVar2 + 0x10);
  if ((uVar1 & 0xfffe) == 0x1b8) {
    pNVar3 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
    }
    lVar2 = **(long **)pNVar3;
    uVar1 = *(ushort *)(lVar2 + 0x10);
  }
  if (uVar1 == 0x18) {
    lVar2 = *(long *)(lVar2 + 0x30);
  }
  else {
    if (uVar1 != 0x17) {
      return 0;
    }
    lVar2 = (long)*(int *)(lVar2 + 0x2c);
  }
  *param_2 = lVar2;
  return 1;
}

