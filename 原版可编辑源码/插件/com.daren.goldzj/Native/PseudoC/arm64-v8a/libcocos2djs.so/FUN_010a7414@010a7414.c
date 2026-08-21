
bool FUN_010a7414(undefined8 param_1,ulong param_2,uint param_3,ulong param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  double dVar10;
  
  param_2 = param_2 & 0xffffffff00000000;
  uVar7 = (ulong)param_3;
  uVar3 = (*(int *)(param_4 + 3) >> 1) - 2;
  if (param_3 < uVar3) {
    uVar2 = *(uint *)(param_4 + (long)(int)(param_3 * 4 + 8) + 7);
    if (((uVar2 & 1) == 0) || (uVar6 = (uint)*(undefined8 *)(param_2 + 0xa8), uVar2 != uVar6))
    goto LAB_010a7554;
  }
  else {
    uVar6 = (uint)*(undefined8 *)(param_2 + 0xa8);
  }
  uVar8 = *(ulong *)(*(long *)(param_2 + 0x490) + 7);
  uVar5 = param_4 & 0xffffffff00000000 | (ulong)*(uint *)(param_4 + 0xb);
  uVar7 = (uVar8 ^ uVar7 ^ 0xffffffffffffffff) + (uVar8 ^ uVar7) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uVar7 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uVar4 = (*(int *)(uVar5 + 0xf) >> 1) - 1;
  uVar7 = (ulong)(uVar4 & ((uint)(uVar7 >> 0x16) ^ (uint)uVar7) & 0x3fffffff);
  lVar1 = uVar5 + 7;
  uVar2 = *(uint *)(((long)(uVar7 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
  if (uVar2 != *(uint *)(param_2 + 0xa0)) {
    iVar9 = 1;
    do {
      if (uVar2 != uVar6) {
        if ((uVar2 & 1) == 0) {
          dVar10 = (double)((int)uVar2 >> 1);
        }
        else {
          dVar10 = *(double *)((param_4 & 0xffffffff00000000 | (ulong)uVar2) + 3);
        }
        if ((int)dVar10 == param_3) {
          if ((param_5 == 0) ||
             ((param_5 & *(uint *)(((long)(uVar7 * 0xc00000000 + 0x1800000000) >> 0x20) + lVar1) >>
                         4 & 7) == 0)) {
            uVar7 = uVar7 + uVar3;
            goto LAB_010a7554;
          }
          break;
        }
      }
      uVar7 = (ulong)((int)uVar7 + iVar9 & uVar4);
      uVar2 = *(uint *)(((long)(uVar7 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
      iVar9 = iVar9 + 1;
    } while (uVar2 != *(uint *)(param_2 + 0xa0));
  }
  uVar7 = 0xffffffffffffffff;
LAB_010a7554:
  return uVar7 != 0xffffffffffffffff;
}

