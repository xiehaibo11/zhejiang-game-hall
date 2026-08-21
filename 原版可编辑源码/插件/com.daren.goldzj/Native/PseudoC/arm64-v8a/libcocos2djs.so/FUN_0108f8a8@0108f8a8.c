
void FUN_0108f8a8(long param_1,ulong param_2,int param_3,long param_4,int param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  double dVar11;
  
  if ((int)param_6 < 0) {
    iVar5 = 1;
    if ((*(uint *)(param_2 + 0x13) & 1) == 0) {
      iVar5 = ((uint)((int)*(uint *)(param_2 + 0x13) >> 1) >> 1) + 1;
    }
    param_6 = iVar5 - param_3;
    iVar5 = param_6 + param_5;
    if (iVar5 < *(int *)(param_4 + 3) >> 1) {
      lVar6 = (long)iVar5;
      uVar8 = iVar5 * 8 | 7;
      do {
        *(undefined8 *)(param_4 + (int)uVar8) = 0xfff7fffffff7ffff;
        lVar6 = lVar6 + 1;
        uVar8 = uVar8 + 8;
      } while (lVar6 < *(int *)(param_4 + 3) >> 1);
    }
  }
  if (param_6 != 0) {
    uVar8 = *(int *)(param_4 + 3) >> 1;
    uVar1 = uVar8 - param_5;
    if (param_6 + param_5 <= uVar8) {
      uVar1 = param_6;
    }
    if (0 < (int)uVar1) {
      uVar7 = 0;
      lVar6 = param_2 + 7;
      do {
        iVar5 = (int)uVar7;
        uVar8 = iVar5 + param_3;
        uVar9 = *(ulong *)(*(long *)(param_1 + 0x490) + 7);
        uVar3 = (*(int *)(param_2 + 0xf) >> 1) - 1;
        uVar9 = (uVar9 ^ (ulong)uVar8 ^ 0xffffffffffffffff) + (uVar9 ^ uVar8) * 0x40000;
        uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
        uVar9 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
        uVar9 = (ulong)(uVar3 & ((uint)(uVar9 >> 0x16) ^ (uint)uVar9) & 0x3fffffff);
        uVar2 = *(uint *)(((long)(uVar9 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar6);
        if (uVar2 != *(uint *)(param_1 + 0xa0)) {
          iVar10 = 1;
          do {
            if (uVar2 != (uint)*(undefined8 *)(param_1 + 0xa8)) {
              if ((uVar2 & 1) == 0) {
                dVar11 = (double)((int)uVar2 >> 1);
              }
              else {
                dVar11 = *(double *)((param_2 & 0xffffffff00000000 | (ulong)uVar2) + 3);
              }
              if (uVar8 == (int)dVar11) {
                uVar2 = *(uint *)(lVar6 + ((long)(uVar9 * 0xc00000000 + 0x1400000000) >> 0x20));
                uVar8 = (iVar5 + param_5) * 8 | 7;
                if ((uVar2 & 1) == 0) {
                  dVar11 = (double)((int)uVar2 >> 1);
                  pdVar4 = (double *)(param_4 + (int)uVar8);
                }
                else {
                  dVar11 = *(double *)((param_2 & 0xffffffff00000000 | (ulong)uVar2) + 3);
                  pdVar4 = (double *)(param_4 + (int)uVar8);
                  if (NAN(dVar11)) {
                    *pdVar4 = NAN;
                    goto LAB_0108f970;
                  }
                }
                *pdVar4 = dVar11;
                goto LAB_0108f970;
              }
            }
            uVar9 = (ulong)((int)uVar9 + iVar10 & uVar3);
            uVar2 = *(uint *)(((long)(uVar9 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar6);
            iVar10 = iVar10 + 1;
          } while (uVar2 != *(uint *)(param_1 + 0xa0));
        }
        *(undefined8 *)(((long)((iVar5 + param_5) * 8) | 7U) + param_4) = 0xfff7fffffff7ffff;
LAB_0108f970:
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar1);
    }
  }
  return;
}

