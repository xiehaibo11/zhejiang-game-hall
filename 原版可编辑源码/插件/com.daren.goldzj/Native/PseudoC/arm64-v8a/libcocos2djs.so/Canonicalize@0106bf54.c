
/* v8::internal::MutableBigInt::Canonicalize(v8::internal::MutableBigInt) */

void v8::internal::MutableBigInt::Canonicalize(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = (ulong)(*(uint *)(param_1 + 3) >> 1) & 0x3fffffff;
  iVar5 = (*(uint *)(param_1 + 3) >> 1) * 8 + -1;
  uVar3 = uVar4;
  do {
    uVar2 = uVar3 - 1;
    iVar6 = (int)uVar4;
    if ((long)uVar3 < 1) {
      iVar5 = 0;
      if (iVar6 == 0) {
        return;
      }
      goto LAB_0106bfb0;
    }
    lVar1 = (long)iVar5;
    iVar5 = iVar5 + -8;
    uVar3 = uVar2;
  } while (*(long *)(param_1 + lVar1) == 0);
  iVar5 = (int)uVar2 + 1;
  iVar6 = iVar6 - iVar5;
  if (iVar6 != 0) {
LAB_0106bfb0:
    uVar3 = Heap::IsLargeObject(param_1);
    if ((uVar3 & 1) == 0) {
      Heap::CreateFillerObjectAt
                ((Heap *)(param_1 & 0xffffffff00000000 | 0x8850),
                 param_1 + (long)(iVar5 * 8 + 8) + -1,iVar6 << 3,1,1);
    }
    *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0x80000001 | iVar5 << 1;
    if (iVar5 == 0) {
      *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xfffffffe;
    }
  }
  return;
}

