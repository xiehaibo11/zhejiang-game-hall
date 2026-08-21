
/* v8::internal::BigInt::CompareToDouble(v8::internal::Handle<v8::internal::BigInt>, double) */

uint v8::internal::BigInt::CompareToDouble(double param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (NAN(param_1)) {
    return 3;
  }
  if (param_1 == INFINITY) {
    return 0;
  }
  if (param_1 == -INFINITY) {
    return 2;
  }
  lVar3 = *param_2;
  uVar2 = *(uint *)(lVar3 + 3) & 1;
  if (param_1 < 0.0 == uVar2) {
    uVar5 = *(uint *)(lVar3 + 3) & 0x7ffffffe;
    if (param_1 == 0.0) {
      uVar2 = 1;
      if (uVar5 != 0) {
        uVar2 = 2;
      }
      return uVar2;
    }
    if (uVar5 == 0) {
      return 0;
    }
    uVar5 = (uint)((ulong)param_1 >> 0x34) & 0x7ff;
    iVar8 = uVar5 - 0x3fe;
    if (0x3fe < uVar5) {
      uVar5 = *(uint *)(lVar3 + 3);
      uVar9 = *(ulong *)(lVar3 + ((long)(int)((uVar5 >> 1) * 8 + -8) | 7U));
      uVar10 = (uint)LZCOUNT(uVar9);
      iVar1 = (uVar5 >> 1) * 0x40 - uVar10;
      if (iVar1 < iVar8) {
LAB_0106ef6c:
        return uVar2 << 1;
      }
      if (iVar1 <= iVar8) {
        uVar12 = (ulong)param_1 & 0xfffffffffffff | 0x10000000000000;
        if (uVar10 < 0xc) {
          uVar6 = 0;
          uVar4 = 0;
          uVar11 = uVar12 << ((ulong)(0xb - uVar10) & 0x3f);
        }
        else {
          uVar4 = (ulong)(uVar10 - 0xb);
          uVar11 = uVar12 >> (uVar4 & 0x3f);
          uVar6 = uVar12 << (0x4bU - LZCOUNT(uVar9) & 0x3f);
        }
        if (uVar9 <= uVar11) {
          if (uVar11 <= uVar9) {
            if (1 < (uVar5 >> 1 & 0x3fffffff)) {
              lVar7 = ((ulong)(uVar5 >> 1) & 0x3fffffff) - 1;
              iVar8 = (uVar5 >> 1) * 8 + -9;
              uVar9 = uVar6;
              do {
                uVar5 = (uint)uVar4;
                uVar12 = uVar9;
                if ((int)uVar5 < 1) {
                  uVar12 = 0;
                }
                if (uVar12 < *(ulong *)(lVar3 + iVar8)) goto LAB_0106eef8;
                uVar6 = 0;
                if ((int)uVar5 < 1) {
                  uVar6 = uVar9;
                }
                if (*(ulong *)(lVar3 + iVar8) < uVar12) goto LAB_0106ef6c;
                lVar7 = lVar7 + -1;
                uVar10 = uVar5 - 0x40;
                if ((int)uVar5 < 1) {
                  uVar10 = uVar5;
                }
                uVar4 = (ulong)uVar10;
                iVar8 = iVar8 + -8;
                uVar9 = uVar6;
              } while (0 < lVar7);
            }
            uVar2 = uVar2 << 1;
            if (uVar6 == 0) {
              uVar2 = 1;
            }
            return uVar2;
          }
          goto LAB_0106ef6c;
        }
      }
    }
  }
LAB_0106eef8:
  return uVar2 << 1 ^ 2;
}

