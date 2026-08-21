
/* v8::internal::CompareOperation::IsLiteralCompareNull(v8::internal::Expression**) */

undefined8 __thiscall
v8::internal::CompareOperation::IsLiteralCompareNull(CompareOperation *this,Expression **param_1)

{
  uint uVar1;
  Expression *pEVar2;
  
  pEVar2 = *(Expression **)(this + 8);
  uVar1 = (*(uint *)(this + 4) >> 7 & 0x7f) - 0x35;
  if (((*(uint *)(pEVar2 + 4) & 0x7bf) == 0x3a9) && ((uVar1 & 0xff) < 2)) {
    pEVar2 = *(Expression **)(this + 0x10);
  }
  else {
    if ((*(uint *)(*(long *)(this + 0x10) + 4) & 0x7bf) != 0x3a9) {
      return 0;
    }
    if (1 < (uVar1 & 0xff)) {
      return 0;
    }
  }
  *param_1 = pEVar2;
  return 1;
}

