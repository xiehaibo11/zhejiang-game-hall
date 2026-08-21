
undefined8
vorbis_book_decodev_add(long param_1,long param_2,undefined8 param_3,int param_4,undefined4 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (0 < *(long *)(param_1 + 0x48)) {
    uVar10 = *(ulong *)(param_1 + 0x50);
    if (uVar10 == 0) {
      return 0xffffffffffffffff;
    }
    if (0 < param_4) {
      lVar11 = 0;
      do {
        iVar2 = FUN_00e92604(param_1,param_3,uVar10,param_5);
        if (iVar2 != 0) {
          return 0xffffffffffffffff;
        }
        uVar3 = *(ulong *)(param_1 + 0x20);
        if (0 < (long)uVar3) {
          lVar5 = (long)(int)lVar11;
          if ((uVar3 < 8) ||
             (((ulong)(param_2 + lVar5 * 4) < uVar10 + uVar3 * 4 &&
              (uVar10 < param_2 + (uVar3 + lVar5) * 4)))) {
            uVar4 = 0;
            lVar11 = lVar5;
          }
          else {
            uVar4 = uVar3 & 0xfffffffffffffff8;
            lVar11 = uVar4 + lVar5;
            puVar6 = (undefined8 *)(param_2 + 0x10 + lVar5 * 4);
            uVar7 = uVar4;
            puVar9 = (undefined8 *)(uVar10 + 0x10);
            do {
              puVar1 = puVar9 + -1;
              uVar12 = puVar9[-2];
              uVar14 = puVar9[1];
              uVar13 = *puVar9;
              puVar9 = puVar9 + 4;
              uVar7 = uVar7 - 8;
              puVar6[-1] = CONCAT44((int)((ulong)puVar6[-1] >> 0x20) + (int)((ulong)*puVar1 >> 0x20)
                                    ,(int)puVar6[-1] + (int)*puVar1);
              puVar6[-2] = CONCAT44((int)((ulong)puVar6[-2] >> 0x20) + (int)((ulong)uVar12 >> 0x20),
                                    (int)puVar6[-2] + (int)uVar12);
              puVar6[1] = CONCAT44((int)((ulong)puVar6[1] >> 0x20) + (int)((ulong)uVar14 >> 0x20),
                                   (int)puVar6[1] + (int)uVar14);
              *puVar6 = CONCAT44((int)((ulong)*puVar6 >> 0x20) + (int)((ulong)uVar13 >> 0x20),
                                 (int)*puVar6 + (int)uVar13);
              puVar6 = puVar6 + 4;
            } while (uVar7 != 0);
            if (uVar3 == uVar4) goto LAB_00e9299c;
          }
          do {
            lVar8 = lVar11 * 4;
            lVar5 = uVar4 * 4;
            lVar11 = lVar11 + 1;
            uVar4 = uVar4 + 1;
            *(int *)(param_2 + lVar8) = *(int *)(param_2 + lVar8) + *(int *)(uVar10 + lVar5);
          } while ((long)uVar4 < (long)uVar3);
        }
LAB_00e9299c:
      } while ((int)lVar11 < param_4);
    }
  }
  return 0;
}

