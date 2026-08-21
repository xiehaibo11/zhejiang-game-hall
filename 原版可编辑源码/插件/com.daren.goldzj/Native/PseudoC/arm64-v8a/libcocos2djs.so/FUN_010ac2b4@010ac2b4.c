
bool FUN_010ac2b4(undefined8 param_1,ulong param_2,uint param_3,ulong param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  double dVar9;
  
  uVar6 = param_2 & 0xffffffff00000000;
  uVar5 = (ulong)param_3;
  uVar2 = *(uint *)((uVar6 | *(uint *)(param_2 + 0xb)) + 7);
  if (uVar2 <= param_3) {
    uVar7 = *(ulong *)(*(long *)(uVar6 + 0x490) + 7);
    uVar4 = (*(int *)(param_4 + 0xf) >> 1) - 1;
    uVar5 = (uVar7 ^ uVar5 ^ 0xffffffffffffffff) + (uVar7 ^ uVar5) * 0x40000;
    uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
    uVar5 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
    uVar5 = (ulong)(uVar4 & ((uint)(uVar5 >> 0x16) ^ (uint)uVar5) & 0x3fffffff);
    lVar1 = param_4 + 7;
    uVar3 = *(uint *)(((long)(uVar5 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
    if (uVar3 != *(uint *)(uVar6 + 0xa0)) {
      iVar8 = 1;
      do {
        if (uVar3 != (uint)*(undefined8 *)(uVar6 + 0xa8)) {
          if ((uVar3 & 1) == 0) {
            dVar9 = (double)((int)uVar3 >> 1);
          }
          else {
            dVar9 = *(double *)((param_4 & 0xffffffff00000000 | (ulong)uVar3) + 3);
          }
          if ((int)dVar9 == param_3) {
            if ((param_5 == 0) ||
               ((param_5 & *(uint *)(lVar1 + ((long)(uVar5 * 0xc00000000 + 0x1800000000) >> 0x20))
                           >> 4 & 7) == 0)) {
              uVar5 = uVar5 + uVar2;
              goto LAB_010ac3c8;
            }
            break;
          }
        }
        uVar5 = (ulong)((int)uVar5 + iVar8 & uVar4);
        uVar3 = *(uint *)(((long)(uVar5 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
        iVar8 = iVar8 + 1;
      } while (uVar3 != *(uint *)(uVar6 + 0xa0));
    }
    uVar5 = 0xffffffffffffffff;
  }
LAB_010ac3c8:
  return uVar5 != 0xffffffffffffffff;
}

