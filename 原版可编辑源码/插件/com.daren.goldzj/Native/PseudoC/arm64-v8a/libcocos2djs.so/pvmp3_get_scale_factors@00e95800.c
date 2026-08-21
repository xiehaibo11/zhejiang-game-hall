
void pvmp3_get_scale_factors(uint *param_1,long param_2,int param_3,int param_4,undefined8 param_5)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  
  lVar11 = (long)param_4;
  lVar7 = (long)param_3;
  if ((*(int *)(param_2 + (long)param_4 * 0xa0 + (long)param_3 * 0x48 + 0x28) == 0) ||
     (*(int *)(param_2 + lVar11 * 0xa0 + lVar7 * 0x48 + 0x2c) != 2)) {
    uVar12 = 0;
    puVar9 = param_1;
    do {
      iVar3 = (&DAT_01995b98)[uVar12];
      if ((param_3 == 0) || (*(int *)(param_2 + lVar11 * 0xa0 + uVar12 * 4 + 8) == 0)) {
        iVar2 = *(int *)(&DAT_01995b18 +
                        (ulong)*(uint *)(param_2 + lVar11 * 0xa0 + lVar7 * 0x48 + 0x24) * 4 +
                        (uVar12 >> 1 & 0x7fffffff) * 0x40);
        if (iVar2 == 0) {
          memset(puVar9,0,(ulong)(iVar3 - 1) * 4 + 4);
          puVar9 = puVar9 + (ulong)(iVar3 - 1) + 1;
        }
        else {
          iVar10 = iVar2 * iVar3;
          iVar6 = getNbits(param_5,iVar10);
          if (0 < iVar10) {
            uVar4 = 0x20 - iVar2 * iVar3;
            puVar8 = puVar9;
            do {
              iVar10 = iVar10 - iVar2;
              puVar9 = puVar8 + 1;
              *puVar8 = (uint)(iVar6 << (ulong)(uVar4 & 0x1f)) >> (ulong)(0x20U - iVar2 & 0x1f);
              uVar4 = uVar4 + iVar2;
              puVar8 = puVar9;
            } while (0 < iVar10);
          }
        }
      }
      else {
        puVar9 = puVar9 + iVar3;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != 4);
    param_1[0x15] = 0;
    param_1 = param_1 + 0x16;
  }
  else {
    lVar7 = param_2 + lVar11 * 0xa0 + lVar7 * 0x48;
    puVar9 = (uint *)(lVar7 + 0x24);
    if (*(int *)(lVar7 + 0x30) == 0) {
      uVar12 = 0;
      do {
        uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b18 + (ulong)*puVar9 * 4));
        param_1[uVar12 + 0x17] = uVar4;
        uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b18 + (ulong)*puVar9 * 4));
        param_1[uVar12 + 0x24] = uVar4;
        uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b18 + (ulong)*puVar9 * 4));
        uVar1 = uVar12 + 1;
        param_1[uVar12 + 0x31] = uVar4;
        uVar12 = uVar1;
      } while (uVar1 < 6);
      lVar7 = 0;
      do {
        uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b58 + (ulong)*puVar9 * 4));
        param_1[lVar7 + 0x1d] = uVar4;
        uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b58 + (ulong)*puVar9 * 4));
        param_1[lVar7 + 0x2a] = uVar4;
        uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b58 + (ulong)*puVar9 * 4));
        uVar12 = lVar7 + 7;
        param_1[lVar7 + 0x37] = uVar4;
        lVar7 = lVar7 + 1;
      } while (uVar12 < 0xc);
    }
    else {
      uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b18 + (ulong)*puVar9 * 4));
      *param_1 = uVar4;
      uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b18 + (ulong)*puVar9 * 4));
      param_1[1] = uVar4;
      uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b18 + (ulong)*puVar9 * 4));
      param_1[2] = uVar4;
      uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b18 + (ulong)*puVar9 * 4));
      param_1[3] = uVar4;
      uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b18 + (ulong)*puVar9 * 4));
      param_1[4] = uVar4;
      uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b18 + (ulong)*puVar9 * 4));
      param_1[5] = uVar4;
      uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b18 + (ulong)*puVar9 * 4));
      param_1[6] = uVar4;
      uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b18 + (ulong)*puVar9 * 4));
      param_1[7] = uVar4;
      uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b18 + (ulong)*puVar9 * 4));
      param_1[0x1a] = uVar4;
      uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b18 + (ulong)*puVar9 * 4));
      param_1[0x27] = uVar4;
      uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b18 + (ulong)*puVar9 * 4));
      param_1[0x34] = uVar4;
      uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b18 + (ulong)*puVar9 * 4));
      param_1[0x1b] = uVar4;
      uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b18 + (ulong)*puVar9 * 4));
      param_1[0x28] = uVar4;
      uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b18 + (ulong)*puVar9 * 4));
      param_1[0x35] = uVar4;
      uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b18 + (ulong)*puVar9 * 4));
      param_1[0x1c] = uVar4;
      uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b18 + (ulong)*puVar9 * 4));
      param_1[0x29] = uVar4;
      uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01995b18 + (ulong)*puVar9 * 4));
      param_1[0x36] = uVar4;
      lVar7 = 0;
      do {
        uVar5 = getNbits(param_5,*(undefined4 *)(&DAT_01995b58 + (ulong)*puVar9 * 4));
        *(undefined4 *)((long)param_1 + lVar7 + 0x74) = uVar5;
        uVar5 = getNbits(param_5,*(undefined4 *)(&DAT_01995b58 + (ulong)*puVar9 * 4));
        *(undefined4 *)((long)param_1 + lVar7 + 0xa8) = uVar5;
        uVar5 = getNbits(param_5,*(undefined4 *)(&DAT_01995b58 + (ulong)*puVar9 * 4));
        lVar11 = lVar7 + 4;
        *(undefined4 *)((long)param_1 + lVar7 + 0xdc) = uVar5;
        lVar7 = lVar11;
      } while (lVar11 != 0x18);
    }
    param_1[0x23] = 0;
    param_1[0x30] = 0;
    param_1 = param_1 + 0x3d;
  }
  *param_1 = 0;
  return;
}

