
/* v8::internal::BigInt::CompareToBigInt(v8::internal::Handle<v8::internal::BigInt>,
   v8::internal::Handle<v8::internal::BigInt>) */

uint v8::internal::BigInt::CompareToBigInt(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar4 = *param_1;
  lVar5 = *param_2;
  uVar1 = *(uint *)(lVar4 + 3) & 1;
  if (uVar1 == (*(uint *)(lVar5 + 3) & 1)) {
    uVar2 = *(uint *)(lVar4 + 3) >> 1 & 0x3fffffff;
    uVar3 = *(uint *)(lVar5 + 3) >> 1 & 0x3fffffff;
    iVar7 = uVar2 - uVar3;
    if (uVar2 == uVar3) {
      lVar6 = ((ulong)(*(uint *)(lVar4 + 3) >> 1) & 0x3fffffff) + 1;
      iVar7 = (*(uint *)(lVar4 + 3) >> 1) * 8 + -1;
      do {
        lVar6 = lVar6 + -1;
        if (lVar6 < 1) {
          return 1;
        }
        uVar9 = *(ulong *)(lVar4 + iVar7);
        uVar8 = *(ulong *)(lVar5 + iVar7);
        iVar7 = iVar7 + -8;
      } while (uVar9 == uVar8);
      if (uVar9 <= uVar8) goto LAB_0106e154;
    }
    else if (iVar7 < 1) {
      if (-1 < iVar7) {
        return 1;
      }
LAB_0106e154:
      return uVar1 << 1;
    }
  }
  return uVar1 << 1 ^ 2;
}

