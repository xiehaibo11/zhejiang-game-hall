
undefined8 FUN_00e38674(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  puVar9 = *(uint **)(param_1 + 0x350);
  if (puVar9 == (uint *)0x0) {
    uVar4 = 6;
  }
  else {
    if (*puVar9 != 0) {
      uVar1 = puVar9[1];
      uVar5 = (ulong)uVar1;
      uVar10 = 0;
      bVar2 = false;
      if (param_2 <= uVar1) {
        uVar1 = param_2;
      }
      uVar6 = uVar5;
      do {
        if ((int)uVar6 == 0) {
          lVar3 = 0x10000;
          lVar8 = *(long *)(puVar9 + 0x42);
          if (*(long *)(lVar8 + uVar10 * 8) != 0x10000) goto LAB_00e38778;
        }
        else {
          uVar11 = 0;
          lVar3 = 0x10000;
          do {
            while (uVar11 < uVar1) {
              lVar7 = *(long *)(param_3 + uVar11 * 8);
              lVar8 = 0x10000 - lVar7;
              if ((1 << (ulong)((uint)uVar11 & 0x1f) & (uint)uVar10) != 0) {
                lVar8 = lVar7;
              }
              if (lVar8 < 1) {
                lVar3 = 0;
                lVar8 = *(long *)(puVar9 + 0x42);
                if (*(long *)(lVar8 + uVar10 * 8) != 0) goto LAB_00e38778;
                goto LAB_00e38780;
              }
              if (lVar8 < 0x10000) {
                lVar3 = FT_MulFix();
                uVar5 = (ulong)puVar9[1];
              }
              uVar11 = uVar11 + 1;
              uVar6 = uVar5;
              if (uVar5 <= uVar11) goto LAB_00e38768;
            }
            lVar3 = lVar3 >> 1;
            uVar11 = uVar11 + 1;
            uVar6 = uVar5;
          } while (uVar11 < uVar5);
LAB_00e38768:
          lVar8 = *(long *)(puVar9 + 0x42);
          uVar6 = uVar5;
          if (*(long *)(lVar8 + uVar10 * 8) != lVar3) {
LAB_00e38778:
            bVar2 = true;
            *(long *)(lVar8 + uVar10 * 8) = lVar3;
          }
        }
LAB_00e38780:
        uVar10 = uVar10 + 1;
      } while (uVar10 < *puVar9);
      if (bVar2) {
        uVar10 = *(ulong *)(param_1 + 0x10) & 0xffffffffffff7fff;
        if (param_2 != 0) {
          uVar10 = *(ulong *)(param_1 + 0x10) | 0x8000;
        }
        *(ulong *)(param_1 + 0x10) = uVar10;
        return 0;
      }
    }
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

