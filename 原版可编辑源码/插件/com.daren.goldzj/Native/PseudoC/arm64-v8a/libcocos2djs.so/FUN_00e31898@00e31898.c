
int FUN_00e31898(long param_1,long param_2,ulong param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  
  lVar8 = *(long *)(param_2 + 8);
  lVar12 = lVar8 + (param_3 & 0xffffffff) * 0x18;
  puVar13 = (uint *)(lVar12 + 4);
  uVar2 = *puVar13;
  if (uVar2 == 0) {
    iVar4 = 0;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x10);
    uVar14 = 0;
    iVar4 = 0;
    do {
      if (*(short *)(param_2 + 0x10) == 0) {
        uVar9 = 0x10000;
      }
      else {
        uVar15 = 0;
        uVar5 = 0x10000;
        plVar16 = (long *)(*(long *)(*(long *)(param_2 + 0x18) +
                                    (ulong)*(uint *)(*(long *)(lVar8 + (param_3 & 0xffffffff) * 0x18
                                                              + 8) + uVar14 * 4) * 8) + 0x10);
        do {
          lVar7 = plVar16[-2];
          lVar1 = plVar16[-1];
          if (lVar7 <= lVar1) {
            lVar10 = *plVar16;
            if (lVar1 <= lVar10) {
              if (((lVar1 != 0) && (-1 < lVar7 || lVar10 < 1)) &&
                 (lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x4c0) + 0x10) + uVar15 * 8),
                 lVar11 != lVar1)) {
                uVar9 = 0;
                if ((lVar11 - lVar7 == 0 || lVar11 < lVar7) ||
                   (lVar10 - lVar11 == 0 || lVar10 < lVar11)) break;
                lVar6 = lVar11 - lVar7;
                lVar7 = lVar1 - lVar7;
                if (lVar1 <= lVar11) {
                  lVar6 = lVar10 - lVar11;
                  lVar7 = lVar10 - lVar1;
                }
                uVar5 = FT_MulDiv(uVar5,lVar6,lVar7);
              }
            }
          }
          uVar15 = uVar15 + 1;
          plVar16 = plVar16 + 3;
          uVar9 = uVar5;
        } while (uVar15 < *(ushort *)(param_2 + 0x10));
      }
      iVar3 = FT_MulFix(uVar9,(long)*(short *)(lVar12 + (ulong)(uVar2 * param_4) * 2 + uVar14 * 2)
                              << 0x10);
      uVar14 = uVar14 + 1;
      iVar4 = iVar3 + iVar4;
    } while (uVar14 < *puVar13);
    iVar4 = iVar4 + 0x8000 >> 0x10;
  }
  return iVar4;
}

