
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
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  
  plVar1 = param_1 + 1;
  iVar4 = oggpack_read(plVar1,param_2[6]);
  if (0 < iVar4) {
    uVar2 = param_2[6];
    iVar3 = param_2[7];
    uVar5 = _ilog(param_2[8]);
    iVar6 = oggpack_read(plVar1,uVar5);
    if ((iVar6 != -1) && (iVar6 < param_2[8])) {
      iVar11 = *param_2;
      if (0 < iVar11) {
        uVar15 = (ulong)*(byte *)((long)param_2 + (long)iVar6 + 0x24);
        iVar6 = 0;
        lVar14 = *(long *)(*(long *)(*param_1 + 0x30) + 0x50);
        puVar13 = (undefined8 *)(lVar14 + uVar15 * 0x68 + 0x20);
        uVar8 = *puVar13;
        do {
          lVar7 = vorbis_book_decodev_set
                            (lVar14 + uVar15 * 0x68,param_3 + (long)iVar6 * 4,plVar1,uVar8,
                             0xffffffe8);
          if (lVar7 == -1) {
            return 0;
          }
          uVar8 = *puVar13;
          iVar11 = *param_2;
          iVar6 = iVar6 + (int)uVar8;
        } while (iVar6 < iVar11);
        if (0 < iVar11) {
          uVar15 = *(ulong *)(lVar14 + uVar15 * 0x68 + 0x20);
          iVar6 = 0;
          lVar14 = 0;
          iVar10 = 0;
          uVar9 = uVar15 & 0xfffffffffffffff8;
          do {
            if (0 < (long)uVar15) {
              lVar7 = (long)iVar10;
              if (uVar15 < 8) {
                lVar14 = lVar7;
                uVar12 = 0;
LAB_00ebff18:
                do {
                  lVar7 = lVar14 * 4;
                    /* try { // try from 00ebff1c to 00fbff7b has its CatchHandler @ 00ebfef0 */
                  uVar12 = uVar12 + 1;
                  lVar14 = lVar14 + 1;
                  *(int *)(param_3 + lVar7) = *(int *)(param_3 + lVar7) + iVar6;
                } while ((long)uVar12 < (long)uVar15);
              }
              else {
                lVar14 = uVar9 + lVar7;
                puVar13 = (undefined8 *)(param_3 + 0x10 + lVar7 * 4);
                uVar12 = uVar9;
                do {
                    /* catch() { ... } // from try @ 00ebff1c with catch @ 00ebfef0 */
                  uVar12 = uVar12 - 8;
                  puVar13[-1] = CONCAT44((int)((ulong)puVar13[-1] >> 0x20) + iVar6,
                                         (int)puVar13[-1] + iVar6);
                  puVar13[-2] = CONCAT44((int)((ulong)puVar13[-2] >> 0x20) + iVar6,
                                         (int)puVar13[-2] + iVar6);
                  puVar13[1] = CONCAT44((int)((ulong)puVar13[1] >> 0x20) + iVar6,
                                        (int)puVar13[1] + iVar6);
                  *puVar13 = CONCAT44((int)((ulong)*puVar13 >> 0x20) + iVar6,(int)*puVar13 + iVar6);
                  puVar13 = puVar13 + 4;
                } while (uVar12 != 0);
                uVar12 = uVar9;
                    /* try { // try from 00ebff14 to 00fbff1b has its CatchHandler @ 00ebff60 */
                if (uVar15 != uVar9) goto LAB_00ebff18;
              }
              iVar11 = *param_2;
            }
            iVar10 = (int)lVar14;
            iVar6 = *(int *)(param_3 + (long)(iVar10 + -1) * 4);
          } while (iVar10 < iVar11);
        }
      }
      uVar2 = ~(-1 << (ulong)(uVar2 & 0x1f));
      iVar6 = 0;
      if (uVar2 != 0) {
        iVar6 = (iVar4 * iVar3 * 0x10) / (int)uVar2;
      }
      *(int *)(param_3 + (long)iVar11 * 4) = iVar6;
      return param_3;
                    /* catch() { ... } // from try @ 00ebff14 with catch @ 00ebff60 */
    }
  }
  return 0;
}

