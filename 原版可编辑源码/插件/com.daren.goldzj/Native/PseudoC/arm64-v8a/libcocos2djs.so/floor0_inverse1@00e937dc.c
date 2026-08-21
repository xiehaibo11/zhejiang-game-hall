
long floor0_inverse1(long *param_1,int *param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  
  plVar1 = param_1 + 1;
  iVar4 = oggpack_read(plVar1,param_2[6]);
  if (0 < iVar4) {
    uVar2 = param_2[6];
    iVar3 = param_2[7];
    uVar5 = _ilog(param_2[8]);
    iVar6 = oggpack_read(plVar1,uVar5);
    if ((iVar6 != -1) && (iVar6 < param_2[8])) {
      iVar10 = *param_2;
      if (0 < iVar10) {
        uVar14 = (ulong)*(byte *)((long)param_2 + (long)iVar6 + 0x24);
        iVar6 = 0;
        lVar13 = *(long *)(*(long *)(*param_1 + 0x30) + 0x50);
        puVar12 = (undefined8 *)(lVar13 + uVar14 * 0x68 + 0x20);
        uVar8 = *puVar12;
        do {
          lVar7 = vorbis_book_decodev_set
                            (lVar13 + uVar14 * 0x68,param_3 + (long)iVar6 * 4,plVar1,uVar8,
                             0xffffffe8);
          if (lVar7 == -1) {
            return 0;
          }
          uVar8 = *puVar12;
          iVar10 = *param_2;
          iVar6 = iVar6 + (int)uVar8;
        } while (iVar6 < iVar10);
        if (0 < iVar10) {
          uVar14 = *(ulong *)(lVar13 + uVar14 * 0x68 + 0x20);
          iVar6 = 0;
          lVar13 = 0;
          uVar9 = uVar14 & 0xfffffffffffffff8;
          do {
            if (0 < (long)uVar14) {
              lVar7 = (long)(int)lVar13;
              if (uVar14 < 8) {
                lVar13 = lVar7;
                uVar11 = 0;
LAB_00e9393c:
                do {
                  lVar7 = lVar13 * 4;
                  uVar11 = uVar11 + 1;
                  lVar13 = lVar13 + 1;
                  *(int *)(param_3 + lVar7) = *(int *)(param_3 + lVar7) + iVar6;
                } while ((long)uVar11 < (long)uVar14);
              }
              else {
                lVar13 = uVar9 + lVar7;
                puVar12 = (undefined8 *)(param_3 + 0x10 + lVar7 * 4);
                uVar11 = uVar9;
                do {
                  uVar11 = uVar11 - 8;
                  puVar12[-1] = CONCAT44((int)((ulong)puVar12[-1] >> 0x20) + iVar6,
                                         (int)puVar12[-1] + iVar6);
                  puVar12[-2] = CONCAT44((int)((ulong)puVar12[-2] >> 0x20) + iVar6,
                                         (int)puVar12[-2] + iVar6);
                  puVar12[1] = CONCAT44((int)((ulong)puVar12[1] >> 0x20) + iVar6,
                                        (int)puVar12[1] + iVar6);
                  *puVar12 = CONCAT44((int)((ulong)*puVar12 >> 0x20) + iVar6,(int)*puVar12 + iVar6);
                  puVar12 = puVar12 + 4;
                } while (uVar11 != 0);
                uVar11 = uVar9;
                if (uVar14 != uVar9) goto LAB_00e9393c;
              }
              iVar10 = *param_2;
            }
            iVar6 = *(int *)(param_3 + (long)((int)lVar13 + -1) * 4);
          } while ((int)lVar13 < iVar10);
        }
      }
      uVar2 = ~(-1 << (ulong)(uVar2 & 0x1f));
      iVar6 = 0;
      if (uVar2 != 0) {
        iVar6 = (iVar4 * iVar3 * 0x10) / (int)uVar2;
      }
      *(int *)(param_3 + (long)iVar10 * 4) = iVar6;
      return param_3;
    }
  }
  return 0;
}

