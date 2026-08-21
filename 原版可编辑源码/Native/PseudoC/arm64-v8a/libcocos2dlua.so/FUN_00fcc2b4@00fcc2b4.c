
uint FUN_00fcc2b4(byte *param_1,byte *param_2,uint *param_3,uint param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  bVar4 = param_1[1];
  iVar3 = *param_5;
  bVar5 = *param_1;
  uVar14 = iVar3 + (uint)bVar4;
  uVar13 = iVar3 + (uint)bVar5;
  bVar6 = *param_2;
                    /* try { // try from 00fcc2d8 to 010cc313 has its CatchHandler @ 00fcc348 */
  bVar7 = param_2[1];
  uVar10 = uVar14;
  if (0xfe < (int)uVar14) {
    uVar10 = 0xff;
  }
  uVar11 = uVar13;
  if (0xfe < (int)uVar13) {
    uVar11 = 0xff;
  }
  iVar8 = (uVar11 & ((int)uVar13 >> 0x1f ^ 0xffffffffU) & 0xff) - (uint)bVar6;
  iVar9 = (uVar10 & ((int)uVar14 >> 0x1f ^ 0xffffffffU) & 0xff) - (uint)bVar7;
                    /* try { // try from 00fcc314 to 010cc35b has its CatchHandler @ 00fcc2a4 */
  iVar8 = iVar8 * iVar8 * 3 + iVar9 * iVar9 * 6;
  uVar14 = (uint)param_1[2];
  uVar13 = (uint)param_2[2];
  if (iVar8 == -1) {
    uVar10 = 0xffffffff;
  }
  else {
    uVar10 = iVar3 + uVar14;
    uVar11 = uVar10;
    if (0xfe < (int)uVar10) {
      uVar11 = 0xff;
    }
    iVar3 = (uVar11 & ((int)uVar10 >> 0x1f ^ 0xffffffffU) & 0xff) - uVar13;
    uVar10 = iVar8 + iVar3 * iVar3;
  }
  iVar3 = param_5[1];
                    /* catch() { ... } // from try @ 00fcc2d8 with catch @ 00fcc348 */
  uVar11 = iVar3 + (uint)bVar4;
  uVar15 = uVar11;
  if (0xfe < (int)uVar11) {
    uVar15 = 0xff;
  }
  iVar8 = (uVar15 & ((int)uVar11 >> 0x1f ^ 0xffffffffU) & 0xff) - (uint)bVar7;
  uVar11 = iVar8 * iVar8 * 6;
  if (uVar11 < uVar10) {
    uVar15 = iVar3 + (uint)bVar5;
    uVar12 = uVar15;
    if (0xfe < (int)uVar15) {
      uVar12 = 0xff;
    }
    iVar8 = (uVar12 & ((int)uVar15 >> 0x1f ^ 0xffffffffU) & 0xff) - (uint)bVar6;
    uVar11 = uVar11 + iVar8 * iVar8 * 3;
    if (uVar11 < uVar10) {
      uVar15 = iVar3 + uVar14;
      uVar12 = uVar15;
      if (0xfe < (int)uVar15) {
        uVar12 = 0xff;
      }
                    /* catch() { ... } // from try @ 00fcc40c with catch @ 00fcc3b4 */
      iVar3 = (uVar12 & ((int)uVar15 >> 0x1f ^ 0xffffffffU) & 0xff) - uVar13;
      uVar11 = uVar11 + iVar3 * iVar3;
      uVar15 = (uint)(uVar11 < uVar10);
      if (uVar11 >= uVar10) {
        uVar11 = uVar10;
      }
      goto LAB_00fcc3d4;
    }
  }
  uVar15 = 0;
  uVar11 = uVar10;
LAB_00fcc3d4:
  iVar3 = param_5[2];
  uVar10 = iVar3 + (uint)bVar4;
  uVar12 = uVar10;
  if (0xfe < (int)uVar10) {
    uVar12 = 0xff;
  }
  iVar8 = (uVar12 & ((int)uVar10 >> 0x1f ^ 0xffffffffU) & 0xff) - (uint)bVar7;
  uVar10 = iVar8 * iVar8 * 6;
  uVar16 = uVar15;
  uVar12 = uVar11;
                    /* try { // try from 00fcc404 to 010cc40b has its CatchHandler @ 00fcc484 */
  if (uVar10 < uVar11) {
    uVar1 = iVar3 + (uint)bVar5;
                    /* try { // try from 00fcc40c to 010cc49f has its CatchHandler @ 00fcc3b4 */
    uVar2 = uVar1;
    if (0xfe < (int)uVar1) {
      uVar2 = 0xff;
    }
    iVar8 = (uVar2 & ((int)uVar1 >> 0x1f ^ 0xffffffffU) & 0xff) - (uint)bVar6;
    uVar10 = uVar10 + iVar8 * iVar8 * 3;
    if (uVar10 < uVar11) {
      uVar12 = iVar3 + uVar14;
      uVar16 = uVar12;
      if (0xfe < (int)uVar12) {
        uVar16 = 0xff;
      }
      iVar3 = (uVar16 & ((int)uVar12 >> 0x1f ^ 0xffffffffU) & 0xff) - uVar13;
      uVar12 = uVar10 + iVar3 * iVar3;
      uVar16 = 2;
      if (uVar11 <= uVar12) {
        uVar16 = uVar15;
        uVar12 = uVar11;
      }
    }
  }
  iVar3 = param_5[3];
  uVar10 = iVar3 + (uint)bVar4;
  uVar11 = uVar10;
  if (0xfe < (int)uVar10) {
    uVar11 = 0xff;
  }
  iVar8 = (uVar11 & ((int)uVar10 >> 0x1f ^ 0xffffffffU) & 0xff) - (uint)bVar7;
                    /* catch() { ... } // from try @ 00fcc404 with catch @ 00fcc484 */
  uVar10 = iVar8 * iVar8 * 6;
  uVar15 = uVar16;
  uVar11 = uVar12;
  if (uVar10 < uVar12) {
    uVar1 = iVar3 + (uint)bVar5;
    uVar2 = uVar1;
    if (0xfe < (int)uVar1) {
      uVar2 = 0xff;
    }
    iVar8 = (uVar2 & ((int)uVar1 >> 0x1f ^ 0xffffffffU) & 0xff) - (uint)bVar6;
    uVar10 = uVar10 + iVar8 * iVar8 * 3;
    if (uVar10 < uVar12) {
      uVar14 = iVar3 + uVar14;
      uVar11 = uVar14;
      if (0xfe < (int)uVar14) {
        uVar11 = 0xff;
      }
      iVar3 = (uVar11 & ((int)uVar14 >> 0x1f ^ 0xffffffffU) & 0xff) - uVar13;
      uVar11 = uVar10 + iVar3 * iVar3;
      uVar15 = 3;
      if (uVar12 <= uVar11) {
        uVar15 = uVar16;
        uVar11 = uVar12;
      }
    }
  }
  *param_3 = *param_3 | ((uVar15 | uVar15 << 0xf) & 0x10001) << (ulong)(param_4 & 0x1f);
  return uVar11;
}

