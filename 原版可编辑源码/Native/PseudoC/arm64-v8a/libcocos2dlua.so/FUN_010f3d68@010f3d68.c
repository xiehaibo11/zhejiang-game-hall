
void FUN_010f3d68(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined2 *puVar12;
  long lVar13;
  long lVar14;
  undefined2 *puVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  void *pvVar21;
  long lVar22;
  long lVar23;
  
  if (0 < *(int *)(param_1 + 0x5c)) {
    lVar10 = *(long *)(param_1 + 0x208);
    lVar11 = 0;
    lVar18 = *(long *)(param_1 + 0x68);
    uVar5 = *(int *)(param_1 + 0x170) - 1;
    do {
      lVar8 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                        (param_1,*(undefined8 *)(lVar10 + lVar11 * 8 + 0x70),
                         *(int *)(lVar18 + 0xc) * *(int *)(lVar10 + 0x10),*(int *)(lVar18 + 0xc),1);
      if (*(uint *)(lVar10 + 0x10) < uVar5) {
        uVar7 = *(uint *)(lVar18 + 0xc);
      }
      else {
        uVar7 = *(uint *)(lVar18 + 0xc);
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = *(uint *)(lVar18 + 0x20) / uVar7;
        }
        uVar9 = *(uint *)(lVar18 + 0x20) - uVar9 * uVar7;
        if (uVar9 != 0) {
          uVar7 = uVar9;
        }
      }
      uVar9 = *(uint *)(lVar18 + 0x1c);
      uVar2 = *(uint *)(lVar18 + 8);
      lVar23 = (long)(int)uVar2;
      uVar6 = 0;
      if (uVar2 != 0) {
        uVar6 = uVar9 / uVar2;
      }
      uVar4 = uVar9 - uVar6 * uVar2;
      uVar6 = uVar2 - uVar4;
      if ((int)uVar4 < 1) {
        uVar6 = uVar4;
      }
      if (0 < (int)uVar7) {
                    /* try { // try from 010f3e4c to 011f3ee7 has its CatchHandler @ 010f3e4c
                       catch(type#1 @ 00000000) { ... } // from try @ 010f3e4c with catch @ 010f3e4c
                        */
        pcVar17 = *(code **)(*(long *)(param_1 + 0x228) + lVar11 * 8 + 8);
        if ((int)uVar6 < 1) {
          uVar20 = 0;
          do {
            (*pcVar17)(param_1,lVar18,*(undefined8 *)(param_2 + lVar11 * 8),
                       *(undefined8 *)(lVar8 + uVar20 * 8),*(int *)(lVar18 + 0x28) * (int)uVar20,0,
                       uVar9);
            uVar20 = uVar20 + 1;
          } while (uVar7 != uVar20);
        }
        else {
          uVar20 = 0;
          lVar19 = (ulong)uVar6 - (ulong)(uVar6 & 1);
          do {
            lVar22 = *(long *)(lVar8 + uVar20 * 8);
            (*pcVar17)(param_1,lVar18,*(undefined8 *)(param_2 + lVar11 * 8),lVar22,
                       *(int *)(lVar18 + 0x28) * (int)uVar20,0,uVar9);
            pvVar21 = (void *)(lVar22 + (ulong)uVar9 * 0x80);
            memset(pvVar21,0,-(ulong)(uVar6 >> 0x1f) & 0xffffff8000000000 | (ulong)uVar6 << 7);
            uVar3 = *(undefined2 *)((long)pvVar21 + -0x80);
            lVar13 = 0;
            if ((uVar6 < 2) || (lVar19 == 0)) {
LAB_010f3f10:
              lVar22 = (ulong)uVar6 - lVar13;
              puVar12 = (undefined2 *)((long)pvVar21 + lVar13 * 0x80);
              do {
                lVar22 = lVar22 + -1;
                *puVar12 = uVar3;
                puVar12 = puVar12 + 0x40;
              } while (lVar22 != 0);
            }
            else {
                    /* try { // try from 010f3ee8 to 011f3f87 has its CatchHandler @ 010f3fec */
              puVar12 = (undefined2 *)(lVar22 + (ulong)uVar9 * 0x80 + 0x80);
              lVar13 = lVar19;
              do {
                puVar12[-0x40] = uVar3;
                *puVar12 = uVar3;
                lVar13 = lVar13 + -2;
                puVar12 = puVar12 + 0x80;
              } while (lVar13 != 0);
              lVar13 = lVar19;
              if ((uVar6 & 1) != 0) goto LAB_010f3f10;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 != uVar7);
        }
      }
      if ((*(uint *)(lVar10 + 0x10) == uVar5) && ((int)uVar7 < *(int *)(lVar18 + 0xc))) {
        uVar6 = uVar6 + uVar9;
        lVar19 = (long)(int)uVar7;
        if (uVar6 < uVar2) {
          do {
            memset(*(void **)(lVar8 + lVar19 * 8),0,(ulong)uVar6 << 7);
            lVar19 = lVar19 + 1;
          } while (lVar19 < *(int *)(lVar18 + 0xc));
        }
        else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010f3ee8 with catch @ 010f3fec
                        */
          uVar7 = 0;
          if (uVar2 != 0) {
            uVar7 = uVar6 / uVar2;
          }
          lVar13 = (ulong)uVar2 - (ulong)(uVar2 & 1);
          do {
            puVar1 = (undefined8 *)(lVar8 + lVar19 * 8);
            lVar22 = puVar1[-1];
            pvVar21 = (void *)*puVar1;
            memset(pvVar21,0,(ulong)uVar6 << 7);
            if (0 < (int)uVar2) {
              uVar9 = 0;
              puVar12 = (undefined2 *)((long)pvVar21 + 0x80);
              do {
                    /* try { // try from 010f402c to 011f410f has its CatchHandler @ 010f402c
                       catch() { ... } // from try @ 010f402c with catch @ 010f402c
                       catch() { ... } // from try @ 010f4114 with catch @ 010f402c */
                uVar3 = *(undefined2 *)(lVar22 + (lVar23 + -1) * 0x80);
                lVar16 = 0;
                if ((uVar2 < 2) || (lVar14 = lVar13, puVar15 = puVar12, lVar13 == 0)) {
LAB_010f4064:
                  lVar14 = (ulong)uVar2 - lVar16;
                  puVar15 = (undefined2 *)((long)pvVar21 + lVar16 * 0x80);
                  do {
                    lVar14 = lVar14 + -1;
                    *puVar15 = uVar3;
                    puVar15 = puVar15 + 0x40;
                  } while (lVar14 != 0);
                }
                else {
                  do {
                    puVar15[-0x40] = uVar3;
                    *puVar15 = uVar3;
                    lVar14 = lVar14 + -2;
                    puVar15 = puVar15 + 0x80;
                  } while (lVar14 != 0);
                  lVar16 = lVar13;
                  if ((uVar2 & 1) != 0) goto LAB_010f4064;
                }
                uVar9 = uVar9 + 1;
                lVar22 = lVar22 + lVar23 * 0x80;
                puVar12 = puVar12 + lVar23 * 0x40;
                pvVar21 = (void *)((long)pvVar21 + lVar23 * 0x80);
              } while (uVar9 < uVar7);
            }
            lVar19 = lVar19 + 1;
          } while (lVar19 < *(int *)(lVar18 + 0xc));
        }
      }
      lVar18 = lVar18 + 0x60;
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 0x5c));
  }
  FUN_010f40ec(param_1,param_2);
  return;
}

