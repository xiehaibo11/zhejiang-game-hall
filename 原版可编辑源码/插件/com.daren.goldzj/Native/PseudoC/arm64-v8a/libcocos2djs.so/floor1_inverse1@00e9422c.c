
undefined4 * floor1_inverse1(long *param_1,long *param_2,undefined4 *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  byte *pbVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  uint local_6c;
  
  plVar20 = param_1 + 1;
  lVar21 = param_2[7];
  lVar15 = *(long *)(*(long *)(*param_1 + 0x30) + 0x50);
  lVar14 = oggpack_read(plVar20,1);
  if (lVar14 == 1) {
    iVar4 = *(int *)(&DAT_019956b4 + (long)(int)lVar21 * 4);
    iVar10 = iVar4 + -1;
    iVar13 = 0;
    if (iVar10 != 0) {
      iVar13 = 0x20 - (int)LZCOUNT(iVar10);
    }
    uVar11 = oggpack_read(plVar20,iVar13);
    *param_3 = uVar11;
    uVar11 = oggpack_read(plVar20,iVar13);
    param_3[1] = uVar11;
    if (0 < (int)param_2[6]) {
      lVar21 = 0;
      local_6c = 2;
      do {
        uVar22 = (ulong)*(byte *)(param_2[1] + lVar21);
        pbVar18 = (byte *)(*param_2 + uVar22 * 0xb);
        bVar5 = pbVar18[1];
        bVar6 = *pbVar18;
        if (bVar5 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = vorbis_book_decode(lVar15 + (ulong)*(byte *)(*param_2 + uVar22 * 0xb + 2) * 0x68,
                                      plVar20);
          if (uVar12 == 0xffffffff) goto LAB_00e944e0;
        }
        if (bVar6 != 0) {
          uVar19 = 0;
          do {
            uVar16 = (ulong)*(byte *)(*param_2 + uVar22 * 0xb +
                                      (long)(int)(uVar12 & ~(-1 << (ulong)(bVar5 & 0x1f))) + 3);
            if (uVar16 == 0xff) {
              param_3[local_6c + uVar19] = 0;
            }
            else {
              iVar13 = vorbis_book_decode(lVar15 + uVar16 * 0x68,plVar20);
              param_3[local_6c + uVar19] = iVar13;
              if (iVar13 == -1) goto LAB_00e944e0;
            }
            uVar19 = uVar19 + 1;
            uVar12 = (int)uVar12 >> (bVar5 & 0x1f);
          } while (uVar19 < bVar6);
        }
        lVar21 = lVar21 + 1;
        local_6c = local_6c + bVar6;
      } while (lVar21 < (int)param_2[6]);
    }
    if (2 < *(int *)((long)param_2 + 0x34)) {
      lVar17 = param_2[2];
      lVar14 = param_2[4];
      lVar15 = param_2[5];
      lVar21 = 0;
      do {
        uVar22 = (ulong)*(byte *)(lVar15 + lVar21);
        uVar19 = (ulong)*(byte *)(lVar14 + lVar21);
        uVar12 = (uint)*(ushort *)(lVar17 + uVar22 * 2);
        iVar10 = *(ushort *)(lVar17 + uVar19 * 2) - uVar12;
        iVar8 = (param_3[uVar19] & 0x7fff) - (param_3[uVar22] & 0x7fff);
        iVar13 = -iVar8;
        if (-1 < iVar8) {
          iVar13 = iVar8;
        }
        uVar3 = param_3[lVar21 + 2];
        iVar7 = 0;
        if (iVar10 != 0) {
          iVar7 = (int)(iVar13 * (*(ushort *)(lVar17 + 4 + lVar21 * 2) - uVar12)) / iVar10;
        }
        iVar13 = -iVar7;
        if (-1 < iVar8) {
          iVar13 = iVar7;
        }
        uVar12 = iVar13 + (param_3[uVar22] & 0x7fff);
        if (uVar3 == 0) {
          param_3[lVar21 + 2] = uVar12 | 0x8000;
        }
        else {
          uVar9 = iVar4 - uVar12;
          uVar2 = uVar9;
          if ((int)uVar12 <= (int)uVar9) {
            uVar2 = uVar12;
          }
          if ((int)uVar3 < (int)(uVar2 * 2)) {
            if ((uVar3 & 1) == 0) {
              iVar13 = (int)uVar3 >> 1;
            }
            else {
              iVar13 = -((int)(uVar3 + 1) >> 1);
            }
          }
          else if ((int)uVar12 < (int)uVar9) {
            iVar13 = uVar3 - uVar12;
          }
          else {
            iVar13 = uVar9 + ~uVar3;
          }
          param_3[lVar21 + 2] = iVar13 + uVar12;
          bVar5 = *(byte *)(lVar15 + lVar21);
          param_3[bVar5] = param_3[bVar5] & 0x7fff;
          bVar5 = *(byte *)(lVar14 + lVar21);
          param_3[bVar5] = param_3[bVar5] & 0x7fff;
        }
        lVar1 = lVar21 + 3;
        lVar21 = lVar21 + 1;
      } while (lVar1 < *(int *)((long)param_2 + 0x34));
    }
  }
  else {
LAB_00e944e0:
    param_3 = (undefined4 *)0x0;
  }
  return param_3;
}

