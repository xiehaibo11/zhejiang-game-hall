
undefined8
vorbis_book_decodev_set(long param_1,long param_2,undefined8 param_3,int param_4,undefined4 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar16;
  undefined8 uVar18;
  int iVar19;
  undefined8 uVar21;
  int iVar15;
  int iVar17;
  int iVar20;
  
  if (*(long *)(param_1 + 0x48) < 1) {
    if (0 < param_4) {
      lVar11 = *(long *)(param_1 + 0x20);
      iVar16 = 0;
      iVar3 = 0;
      do {
        if (0 < lVar11) {
          uVar4 = *(ulong *)(param_1 + 0x20);
          uVar10 = uVar4;
          if ((long)uVar4 < 2) {
            uVar10 = 1;
          }
          memset((void *)(param_2 + (long)iVar16 * 4),0,uVar10 << 2);
          if (uVar10 < 4) {
            uVar5 = 0;
            iVar3 = iVar16;
          }
          else {
            uVar5 = uVar10 & 0x7ffffffffffffffc;
            iVar20 = 0;
            iVar19 = 0;
            iVar12 = 0;
            iVar3 = 0;
            iVar15 = 0;
            iVar14 = 0;
            uVar6 = uVar5;
            iVar17 = iVar16;
            do {
              iVar17 = iVar17 + 1;
              iVar16 = iVar16 + 1;
              iVar20 = iVar20 + 1;
              iVar19 = iVar19 + 1;
              uVar6 = uVar6 - 4;
              iVar12 = iVar12 + 1;
              iVar3 = iVar3 + 1;
              iVar15 = iVar15 + 1;
              iVar14 = iVar14 + 1;
            } while (uVar6 != 0);
            iVar3 = iVar3 + iVar16;
            iVar16 = iVar12 + iVar17 + iVar15 + iVar20;
            iVar3 = iVar3 + iVar14 + iVar19;
            if (uVar10 == uVar5) goto LAB_00e92bd0;
          }
          do {
            uVar5 = uVar5 + 1;
            iVar16 = iVar16 + 1;
            iVar3 = iVar3 + 1;
          } while ((long)uVar5 < (long)uVar4);
        }
LAB_00e92bd0:
      } while (iVar3 < param_4);
    }
  }
  else {
    uVar10 = *(ulong *)(param_1 + 0x50);
    if (uVar10 == 0) {
      return 0xffffffffffffffff;
    }
    if (0 < param_4) {
      lVar11 = 0;
      do {
        iVar3 = FUN_00e92604(param_1,param_3,uVar10,param_5);
        if (iVar3 != 0) {
          return 0xffffffffffffffff;
        }
        uVar4 = *(ulong *)(param_1 + 0x20);
        if (0 < (long)uVar4) {
          lVar7 = (long)(int)lVar11;
          if ((uVar4 < 8) ||
             (((ulong)(param_2 + lVar7 * 4) < uVar10 + uVar4 * 4 &&
              (uVar10 < param_2 + (uVar4 + lVar7) * 4)))) {
            uVar5 = 0;
            lVar11 = lVar7;
          }
          else {
            uVar5 = uVar4 & 0xfffffffffffffff8;
            lVar11 = uVar5 + lVar7;
            puVar8 = (undefined8 *)(param_2 + 0x10 + lVar7 * 4);
            uVar6 = uVar5;
            puVar9 = (undefined8 *)(uVar10 + 0x10);
            do {
              puVar2 = puVar9 + -1;
              uVar13 = puVar9[-2];
              uVar21 = puVar9[1];
              uVar18 = *puVar9;
              puVar9 = puVar9 + 4;
              uVar6 = uVar6 - 8;
              puVar8[-1] = *puVar2;
              puVar8[-2] = uVar13;
              puVar8[1] = uVar21;
              *puVar8 = uVar18;
              puVar8 = puVar8 + 4;
            } while (uVar6 != 0);
            if (uVar4 == uVar5) goto LAB_00e92ae8;
          }
          do {
            lVar7 = uVar5 * 4;
            lVar1 = lVar11 + 1;
            uVar5 = uVar5 + 1;
            *(undefined4 *)(param_2 + lVar11 * 4) = *(undefined4 *)(uVar10 + lVar7);
            lVar11 = lVar1;
          } while ((long)uVar5 < (long)uVar4);
        }
LAB_00e92ae8:
      } while ((int)lVar11 < param_4);
    }
  }
  return 0;
}

