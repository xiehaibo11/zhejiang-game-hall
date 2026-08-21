
undefined8 FUN_010f42d8(void)

{
  uint uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  int in_w8;
  long lVar13;
  uint in_w9;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  uint uVar19;
  long unaff_x24;
  long unaff_x25;
  
  do {
    uVar19 = 0;
    *(undefined4 *)(unaff_x21 + 0x14) = 0;
    if (in_w8 <= unaff_x22) {
      iVar5 = *(int *)(unaff_x19 + 0x174);
      *(int *)(unaff_x21 + 0x10) = *(int *)(unaff_x21 + 0x10) + 1;
      lVar13 = *(long *)(unaff_x19 + 0x208);
      if (iVar5 < 2) {
        puVar3 = (undefined4 *)(*(long *)(unaff_x19 + 0x178) + 0xc);
        if (*(int *)(unaff_x19 + 0x170) - 1U <= *(uint *)(lVar13 + 0x10)) {
          puVar3 = (undefined4 *)(*(long *)(unaff_x19 + 0x178) + 0x4c);
        }
        uVar14 = *puVar3;
      }
      else {
        uVar14 = 1;
      }
      *(undefined4 *)(lVar13 + 0x1c) = uVar14;
      *(undefined8 *)(lVar13 + 0x14) = 0;
      return 1;
    }
    if (in_w9 != 0) {
      do {
        iVar5 = *(int *)(unaff_x19 + 0x174);
        if (0 < iVar5) {
          lVar15 = 0;
          lVar13 = 0;
          do {
            lVar16 = *(long *)(unaff_x19 + lVar15 * 8 + 0x178);
            iVar6 = *(int *)(lVar16 + 0x3c);
            if (0 < iVar6) {
              uVar4 = *(uint *)(lVar16 + 0x38);
              if (0 < (int)uVar4) {
                lVar17 = *(long *)(unaff_x25 + lVar15 * 8);
                uVar2 = (ulong)(uVar4 - 1) + 1;
                lVar16 = 0;
                uVar18 = uVar2 - (uVar4 & 3);
                do {
                  lVar9 = *(long *)(lVar17 + (lVar16 + unaff_x22) * 8);
                  lVar10 = (long)(int)lVar13;
                  lVar8 = lVar9 + (ulong)(uVar4 * uVar19) * 0x80;
                  if ((uVar2 < 4) || (uVar18 == 0)) {
                    uVar12 = 0;
LAB_010f426c:
                    do {
                      lVar13 = lVar10 + 1;
                      uVar1 = (int)uVar12 + 1;
                      uVar12 = (ulong)uVar1;
                      *(long *)(unaff_x21 + lVar10 * 8 + 0x20) = lVar8;
                      lVar8 = lVar8 + 0x80;
                      lVar10 = lVar13;
                    } while ((int)uVar1 < (int)uVar4);
                  }
                  else {
                    lVar13 = uVar18 + lVar10;
                    lVar8 = lVar8 + uVar18 * 0x80;
                    plVar11 = (long *)(unaff_x24 + lVar10 * 8);
                    lVar10 = lVar9 + (ulong)(uVar19 * uVar4) * 0x80 + 0x180;
                    uVar12 = uVar18;
                    do {
                      uVar12 = uVar12 - 4;
                      plVar11[-1] = lVar10 + -0x100;
                      plVar11[-2] = lVar10 + -0x180;
                      plVar11[1] = lVar10;
                      *plVar11 = lVar10 + -0x80;
                      plVar11 = plVar11 + 4;
                      lVar10 = lVar10 + 0x200;
                    } while (uVar12 != 0);
                    uVar12 = uVar18 & 0xffffffff;
                    lVar10 = lVar13;
                    if ((uVar4 & 3) != 0) goto LAB_010f426c;
                  }
                  lVar16 = lVar16 + 1;
                } while (lVar16 < iVar6);
              }
            }
            lVar15 = lVar15 + 1;
          } while (lVar15 < iVar5);
        }
        uVar7 = (**(code **)(*(long *)(unaff_x19 + 0x230) + 8))();
        if ((int)uVar7 == 0) {
          *(uint *)(unaff_x21 + 0x14) = uVar19;
          *(int *)(unaff_x21 + 0x18) = (int)unaff_x22;
          return uVar7;
        }
        in_w9 = *(uint *)(unaff_x19 + 0x198);
        uVar19 = uVar19 + 1;
      } while (uVar19 < in_w9);
      in_w8 = *(int *)(unaff_x21 + 0x1c);
    }
    unaff_x22 = unaff_x22 + 1;
  } while( true );
}

