
void pvmp3_get_scale_factors(uint *param_1,long param_2,int param_3,int param_4,undefined8 param_5)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  
                    /* catch() { ... } // from try @ 00ec1cac with catch @ 00ec1d84 */
  lVar12 = (long)param_4;
  lVar6 = (long)param_3;
  if ((*(int *)(param_2 + (long)param_4 * 0xa0 + (long)param_3 * 0x48 + 0x28) == 0) ||
     (*(int *)(param_2 + lVar12 * 0xa0 + lVar6 * 0x48 + 0x2c) != 2)) {
    uVar13 = 0;
    puVar9 = param_1;
    do {
      iVar14 = (&DAT_01435c28)[uVar13];
      if ((param_3 == 0) || (*(int *)(param_2 + lVar12 * 0xa0 + uVar13 * 4 + 8) == 0)) {
        iVar2 = *(int *)(&DAT_01435ba8 +
                        (ulong)*(uint *)(param_2 + lVar12 * 0xa0 + lVar6 * 0x48 + 0x24) * 4 +
                        (uVar13 >> 1 & 0x7fffffff) * 0x40);
                    /* try { // try from 00ec200c to 00fc201f has its CatchHandler @ 00ec2184 */
        if (iVar2 == 0) {
          memset(puVar9,0,(ulong)(iVar14 - 1) * 4 + 4);
          uVar1 = (ulong)(iVar14 - 1) + 1;
          if (1 < uVar1) {
                    /* try { // try from 00ec2078 to 00fc2093 has its CatchHandler @ 00ec2188 */
            uVar7 = uVar1 & 0x1fffffffe;
            iVar14 = iVar14 - (int)uVar7;
            puVar9 = puVar9 + uVar7;
            uVar8 = uVar7;
            do {
              uVar8 = uVar8 - 2;
            } while (uVar8 != 0);
                    /* try { // try from 00ec2094 to 00fc21d3 has its CatchHandler @ 00ec1eb8 */
            if (uVar1 == uVar7) goto LAB_00ec1fc4;
          }
          do {
            iVar14 = iVar14 + -1;
            puVar9 = puVar9 + 1;
          } while (iVar14 != 0);
        }
        else {
          iVar11 = iVar2 * iVar14;
          iVar5 = getNbits(param_5,iVar11);
          if (0 < iVar11) {
                    /* try { // try from 00ec2030 to 00fc2047 has its CatchHandler @ 00ec21b8 */
            uVar3 = 0x20 - iVar2 * iVar14;
            puVar10 = puVar9;
            do {
              iVar11 = iVar11 - iVar2;
              puVar9 = puVar10 + 1;
              *puVar10 = (uint)(iVar5 << (ulong)(uVar3 & 0x1f)) >> (ulong)(0x20U - iVar2 & 0x1f);
              uVar3 = uVar3 + iVar2;
              puVar10 = puVar9;
            } while (0 < iVar11);
          }
        }
      }
      else {
        puVar9 = puVar9 + iVar14;
      }
LAB_00ec1fc4:
      uVar13 = uVar13 + 1;
    } while (uVar13 != 4);
    param_1[0x15] = 0;
    param_1 = param_1 + 0x16;
  }
  else {
    lVar6 = param_2 + lVar12 * 0xa0 + lVar6 * 0x48;
    puVar9 = (uint *)(lVar6 + 0x24);
    if (*(int *)(lVar6 + 0x30) == 0) {
      uVar13 = 0;
      do {
        uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435ba8 + (ulong)*puVar9 * 4));
        param_1[uVar13 + 0x17] = uVar3;
        uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435ba8 + (ulong)*puVar9 * 4));
        param_1[uVar13 + 0x24] = uVar3;
        uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435ba8 + (ulong)*puVar9 * 4));
        uVar1 = uVar13 + 1;
        param_1[uVar13 + 0x31] = uVar3;
        uVar13 = uVar1;
      } while (uVar1 < 6);
      lVar6 = 0;
      do {
        uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435be8 + (ulong)*puVar9 * 4));
        param_1[lVar6 + 0x1d] = uVar3;
        uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435be8 + (ulong)*puVar9 * 4));
        param_1[lVar6 + 0x2a] = uVar3;
        uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435be8 + (ulong)*puVar9 * 4));
        uVar13 = lVar6 + 7;
        param_1[lVar6 + 0x37] = uVar3;
        lVar6 = lVar6 + 1;
      } while (uVar13 < 0xc);
    }
    else {
      uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435ba8 + (ulong)*puVar9 * 4));
      *param_1 = uVar3;
      uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435ba8 + (ulong)*puVar9 * 4));
      param_1[1] = uVar3;
      uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435ba8 + (ulong)*puVar9 * 4));
      param_1[2] = uVar3;
      uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435ba8 + (ulong)*puVar9 * 4));
      param_1[3] = uVar3;
      uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435ba8 + (ulong)*puVar9 * 4));
      param_1[4] = uVar3;
      uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435ba8 + (ulong)*puVar9 * 4));
      param_1[5] = uVar3;
      uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435ba8 + (ulong)*puVar9 * 4));
      param_1[6] = uVar3;
      uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435ba8 + (ulong)*puVar9 * 4));
      param_1[7] = uVar3;
      uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435ba8 + (ulong)*puVar9 * 4));
      param_1[0x1a] = uVar3;
      uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435ba8 + (ulong)*puVar9 * 4));
      param_1[0x27] = uVar3;
      uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435ba8 + (ulong)*puVar9 * 4));
                    /* try { // try from 00ec1eb8 to 00fc200b has its CatchHandler @ 00ec1eb8
                       catch() { ... } // from try @ 00ec1eb8 with catch @ 00ec1eb8
                       catch() { ... } // from try @ 00ec2094 with catch @ 00ec1eb8 */
      param_1[0x34] = uVar3;
      uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435ba8 + (ulong)*puVar9 * 4));
      param_1[0x1b] = uVar3;
      uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435ba8 + (ulong)*puVar9 * 4));
      param_1[0x28] = uVar3;
      uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435ba8 + (ulong)*puVar9 * 4));
      param_1[0x35] = uVar3;
      uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435ba8 + (ulong)*puVar9 * 4));
      param_1[0x1c] = uVar3;
      uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435ba8 + (ulong)*puVar9 * 4));
      param_1[0x29] = uVar3;
      uVar3 = getNbits(param_5,*(undefined4 *)(&DAT_01435ba8 + (ulong)*puVar9 * 4));
      param_1[0x36] = uVar3;
      lVar6 = 0;
      do {
        uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01435be8 + (ulong)*puVar9 * 4));
        *(undefined4 *)((long)param_1 + lVar6 + 0x74) = uVar4;
        uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01435be8 + (ulong)*puVar9 * 4));
        *(undefined4 *)((long)param_1 + lVar6 + 0xa8) = uVar4;
        uVar4 = getNbits(param_5,*(undefined4 *)(&DAT_01435be8 + (ulong)*puVar9 * 4));
        lVar12 = lVar6 + 4;
        *(undefined4 *)((long)param_1 + lVar6 + 0xdc) = uVar4;
        lVar6 = lVar12;
      } while (lVar12 != 0x18);
    }
    param_1[0x23] = 0;
    param_1[0x30] = 0;
    param_1 = param_1 + 0x3d;
  }
  *param_1 = 0;
                    /* catch() { ... } // from try @ 00ec200c with catch @ 00ec2184 */
                    /* catch() { ... } // from try @ 00ec2078 with catch @ 00ec2188 */
  return;
}

