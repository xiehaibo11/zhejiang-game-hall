
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
  undefined8 uVar15;
  int iVar16;
  undefined8 uVar17;
  
  if (*(long *)(param_1 + 0x48) < 1) {
    if (0 < param_4) {
      lVar11 = *(long *)(param_1 + 0x20);
      iVar3 = 0;
      do {
        if (0 < lVar11) {
          uVar4 = *(ulong *)(param_1 + 0x20);
          uVar10 = uVar4;
          if ((long)uVar4 < 2) {
            uVar10 = 1;
          }
          memset((void *)(param_2 + (long)iVar3 * 4),0,uVar10 << 2);
          if (uVar10 < 4) {
            uVar5 = 0;
          }
          else {
            uVar5 = uVar10 & 0x7ffffffffffffffc;
            iVar16 = 0;
            iVar12 = 0;
            iVar14 = 0;
            uVar6 = uVar5;
            do {
              iVar3 = iVar3 + 1;
              iVar16 = iVar16 + 1;
              uVar6 = uVar6 - 4;
              iVar12 = iVar12 + 1;
              iVar14 = iVar14 + 1;
            } while (uVar6 != 0);
            iVar3 = iVar12 + iVar3 + iVar14 + iVar16;
            if (uVar10 == uVar5) goto LAB_00ebf0a8;
          }
          do {
            uVar5 = uVar5 + 1;
            iVar3 = iVar3 + 1;
          } while ((long)uVar5 < (long)uVar4);
        }
LAB_00ebf0a8:
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
        iVar3 = FUN_00ebeb54(param_1,param_3,uVar10,param_5);
        if (iVar3 != 0) {
          return 0xffffffffffffffff;
        }
        uVar4 = *(ulong *)(param_1 + 0x20);
        if (0 < (long)uVar4) {
          lVar11 = (long)(int)lVar11;
          if ((uVar4 < 8) ||
             (((ulong)(param_2 + lVar11 * 4) < uVar10 + uVar4 * 4 &&
              (uVar10 < param_2 + (uVar4 + lVar11) * 4)))) {
            uVar5 = 0;
            lVar7 = lVar11;
          }
          else {
            uVar5 = uVar4 & 0xfffffffffffffff8;
            lVar7 = uVar5 + lVar11;
            puVar8 = (undefined8 *)(param_2 + 0x10 + lVar11 * 4);
            uVar6 = uVar5;
            puVar9 = (undefined8 *)(uVar10 + 0x10);
            do {
              puVar2 = puVar9 + -1;
              uVar13 = puVar9[-2];
              uVar17 = puVar9[1];
              uVar15 = *puVar9;
              puVar9 = puVar9 + 4;
              uVar6 = uVar6 - 8;
              puVar8[-1] = *puVar2;
              puVar8[-2] = uVar13;
              puVar8[1] = uVar17;
              *puVar8 = uVar15;
              puVar8 = puVar8 + 4;
            } while (uVar6 != 0);
            lVar11 = lVar7;
            if (uVar4 == uVar5) goto LAB_00ebefc8;
          }
          do {
            lVar1 = uVar5 * 4;
            lVar11 = lVar7 + 1;
            uVar5 = uVar5 + 1;
            *(undefined4 *)(param_2 + lVar7 * 4) = *(undefined4 *)(uVar10 + lVar1);
            lVar7 = lVar11;
          } while ((long)uVar5 < (long)uVar4);
        }
LAB_00ebefc8:
      } while ((int)lVar11 < param_4);
    }
  }
  return 0;
}

