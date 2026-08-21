
/* v8::internal::MutableBigInt::AbsoluteCompare(v8::internal::Handle<v8::internal::BigIntBase>,
   v8::internal::Handle<v8::internal::BigIntBase>) */

int v8::internal::MutableBigInt::AbsoluteCompare(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = *param_1;
  iVar3 = (*(uint *)(lVar1 + 3) >> 1 & 0x3fffffff) - (*(uint *)(*param_2 + 3) >> 1 & 0x3fffffff);
  if (iVar3 != 0) {
    return iVar3;
  }
  lVar2 = ((ulong)(*(uint *)(lVar1 + 3) >> 1) & 0x3fffffff) + 1;
  iVar3 = (*(uint *)(lVar1 + 3) >> 1) * 8 + -1;
  do {
    lVar2 = lVar2 + -1;
    if (lVar2 < 1) {
      return 0;
    }
    uVar5 = *(ulong *)(lVar1 + iVar3);
    uVar4 = *(ulong *)(*param_2 + (long)iVar3);
    iVar3 = iVar3 + -8;
  } while (uVar5 == uVar4);
  iVar3 = -1;
  if (uVar4 < uVar5) {
    iVar3 = 1;
  }
  return iVar3;
}

