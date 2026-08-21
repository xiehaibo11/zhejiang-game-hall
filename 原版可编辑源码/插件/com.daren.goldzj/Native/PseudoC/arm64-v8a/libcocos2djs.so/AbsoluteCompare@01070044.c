
/* v8::internal::MutableBigInt::AbsoluteCompare(v8::internal::BigIntBase, v8::internal::BigIntBase)
    */

int v8::internal::MutableBigInt::AbsoluteCompare(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  iVar2 = (*(uint *)(param_1 + 3) >> 1 & 0x3fffffff) - (*(uint *)(param_2 + 3) >> 1 & 0x3fffffff);
  if (iVar2 != 0) {
    return iVar2;
  }
  lVar1 = ((ulong)(*(uint *)(param_1 + 3) >> 1) & 0x3fffffff) + 1;
  iVar2 = (*(uint *)(param_1 + 3) >> 1) * 8 + -1;
  do {
    lVar1 = lVar1 + -1;
    if (lVar1 < 1) {
      return 0;
    }
    uVar4 = *(ulong *)(iVar2 + param_1);
    uVar3 = *(ulong *)(iVar2 + param_2);
    iVar2 = iVar2 + -8;
  } while (uVar4 == uVar3);
  iVar2 = -1;
  if (uVar3 < uVar4) {
    iVar2 = 1;
  }
  return iVar2;
}

