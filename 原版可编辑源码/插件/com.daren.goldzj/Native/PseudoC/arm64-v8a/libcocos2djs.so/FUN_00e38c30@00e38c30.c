
undefined8 FUN_00e38c30(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long local_80 [4];
  
  lVar10 = *(long *)(param_1 + 0x350);
  if (lVar10 == 0) {
    return 6;
  }
  FUN_00e392a4(*(undefined8 *)(lVar10 + 0x108),local_80,*(undefined4 *)(lVar10 + 4));
  uVar2 = *(uint *)(lVar10 + 4);
  uVar1 = uVar2;
  if (param_2 <= uVar2) {
    uVar1 = param_2;
  }
  if (uVar1 == 0) {
    uVar2 = 0;
    if (param_2 == 0) {
      return 0;
    }
  }
  else {
    uVar11 = 0;
    if (param_2 <= uVar2) {
      uVar2 = param_2;
    }
    do {
      plVar4 = *(long **)(lVar10 + uVar11 * 0x18 + 0xb8);
      lVar3 = local_80[uVar11];
      if (*plVar4 < lVar3) {
        uVar6 = (ulong)*(byte *)(lVar10 + uVar11 * 0x18 + 0xa8);
        if (1 < uVar6) {
          lVar9 = 0;
          uVar8 = 1;
          do {
            if (lVar3 <= plVar4[uVar8]) {
              lVar7 = *(long *)(lVar10 + uVar11 * 0x18 + 0xb0);
              lVar5 = *(long *)((long)plVar4 + (lVar9 >> 0x1d));
              lVar12 = *(long *)(lVar7 + (lVar9 >> 0x1d));
              lVar9 = *(long *)(lVar7 + uVar8 * 8);
              lVar3 = FT_DivFix(lVar3 - lVar5,plVar4[uVar8] - lVar5);
              *(long *)(param_3 + uVar11 * 8) = lVar3 * (lVar9 - lVar12) + lVar12 * 0x10000;
              goto joined_r0x00e38d64;
            }
            uVar8 = uVar8 + 1;
            lVar9 = lVar9 + 0x100000000;
          } while (uVar8 < uVar6);
        }
        lVar3 = *(long *)(*(long *)(lVar10 + uVar11 * 0x18 + 0xb0) + uVar6 * 8 + -8);
      }
      else {
        lVar3 = **(long **)(lVar10 + uVar11 * 0x18 + 0xb0);
      }
      *(long *)(param_3 + uVar11 * 8) = lVar3 << 0x10;
joined_r0x00e38d64:
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar1);
    if (param_2 <= uVar2) {
      return 0;
    }
  }
  memset((void *)(param_3 + (ulong)uVar2 * 8),0,(ulong)(~uVar2 + param_2) * 8 + 8);
  return 0;
}

