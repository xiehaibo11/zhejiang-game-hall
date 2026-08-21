
bool asn1_generalizedtime_to_tm(int *param_1,uint *param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  
  if (param_2[1] != 0x18) {
    return false;
  }
  uVar3 = *param_2;
  if ((int)uVar3 < 0xd) {
    return false;
  }
  pbVar9 = *(byte **)(param_2 + 2);
  bVar2 = *pbVar9;
  uVar12 = bVar2 - 0x30 & 0xff;
  if (param_1 == (int *)0x0) {
    if (9 < uVar12) {
      return false;
    }
    if (9 < pbVar9[1] - 0x30) {
      return false;
    }
    if (99 < ((uint)pbVar9[1] + (uint)bVar2 * 10) - 0x210) {
      return false;
    }
    if (9 < pbVar9[2] - 0x30) {
      return false;
    }
    if (9 < pbVar9[3] - 0x30) {
      return false;
    }
    if (99 < ((uint)pbVar9[3] + (uint)pbVar9[2] * 10) - 0x210) {
      return false;
    }
    if (9 < pbVar9[4] - 0x30) {
      return false;
    }
    if (9 < pbVar9[5] - 0x30) {
      return false;
    }
    if (0xb < ((uint)pbVar9[5] + (uint)pbVar9[4] * 10) - 0x211) {
      return false;
    }
    if (9 < pbVar9[6] - 0x30) {
      return false;
    }
    if (9 < pbVar9[7] - 0x30) {
      return false;
    }
    if (0x1e < ((uint)pbVar9[7] + (uint)pbVar9[6] * 10) - 0x211) {
      return false;
    }
    if (9 < pbVar9[8] - 0x30) {
      return false;
    }
    if (9 < pbVar9[9] - 0x30) {
      return false;
    }
    if (0x17 < ((uint)pbVar9[9] + (uint)pbVar9[8] * 10) - 0x210) {
      return false;
    }
    if (9 < pbVar9[10] - 0x30) {
      return false;
    }
    if (9 < pbVar9[0xb] - 0x30) {
      return false;
    }
    if (0x3b < ((uint)pbVar9[0xb] + (uint)pbVar9[10] * 10) - 0x210) {
      return false;
    }
    bVar2 = pbVar9[0xc];
    uVar12 = bVar2 - 0x2b;
    if ((uVar12 < 0x30) && ((1L << ((ulong)uVar12 & 0x3f) & 0x800000000005U) != 0))
    goto LAB_00b89f50;
    if (9 < bVar2 - 0x30) {
      return false;
    }
    if (9 < pbVar9[0xd] - 0x30) {
      return false;
    }
    if (0x3b < ((uint)pbVar9[0xd] + (uint)bVar2 * 10) - 0x210) {
      return false;
    }
    if ((int)uVar3 < 0xe) {
      return false;
    }
    lVar13 = 0xe;
  }
  else {
    if (9 < uVar12) {
      return false;
    }
    if (9 < pbVar9[1] - 0x30) {
      return false;
    }
    iVar8 = (uint)pbVar9[1] + (uint)bVar2 * 10;
    if (99 < iVar8 - 0x210U) {
      return false;
    }
    param_1[5] = (iVar8 + -0x1e0) * 100 + -0x1a2c;
    if (9 < pbVar9[2] - 0x30) {
      return false;
    }
    if (9 < pbVar9[3] - 0x30) {
      return false;
    }
    iVar8 = (uint)pbVar9[3] + (uint)pbVar9[2] * 10;
    if (99 < iVar8 - 0x210U) {
      return false;
    }
    param_1[5] = param_1[5] + iVar8 + -0x210;
    if (9 < pbVar9[4] - 0x30) {
      return false;
    }
    if (9 < pbVar9[5] - 0x30) {
      return false;
    }
    iVar8 = (uint)pbVar9[5] + (uint)pbVar9[4] * 10;
    if (0xb < iVar8 - 0x211U) {
      return false;
    }
    param_1[4] = iVar8 + -0x211;
    if (9 < pbVar9[6] - 0x30) {
      return false;
    }
    if (9 < pbVar9[7] - 0x30) {
      return false;
    }
    iVar8 = (uint)pbVar9[7] + (uint)pbVar9[6] * 10;
    if (0x1e < iVar8 - 0x211U) {
      return false;
    }
    param_1[3] = iVar8 + -0x210;
    if (9 < pbVar9[8] - 0x30) {
      return false;
    }
    if (9 < pbVar9[9] - 0x30) {
      return false;
    }
    iVar8 = (uint)pbVar9[9] + (uint)pbVar9[8] * 10;
    if (0x17 < iVar8 - 0x210U) {
      return false;
    }
    param_1[2] = iVar8 + -0x210;
    if (9 < pbVar9[10] - 0x30) {
      return false;
    }
    if (9 < pbVar9[0xb] - 0x30) {
      return false;
    }
    iVar8 = (uint)pbVar9[0xb] + (uint)pbVar9[10] * 10;
    if (0x3b < iVar8 - 0x210U) {
      return false;
    }
    param_1[1] = iVar8 + -0x210;
    bVar2 = pbVar9[0xc];
    uVar12 = bVar2 - 0x2b;
    if ((uVar12 < 0x30) && ((1L << ((ulong)uVar12 & 0x3f) & 0x800000000005U) != 0)) {
      *param_1 = 0;
LAB_00b89f50:
      lVar13 = 0xc;
    }
    else {
      if (9 < bVar2 - 0x30) {
        return false;
      }
      if (9 < pbVar9[0xd] - 0x30) {
        return false;
      }
      iVar8 = (uint)pbVar9[0xd] + (uint)bVar2 * 10;
      if (0x3b < iVar8 - 0x210U) {
        return false;
      }
      if ((int)uVar3 < 0xe) {
        return false;
      }
      *param_1 = iVar8 + -0x210;
      lVar13 = 0xe;
    }
  }
  uVar12 = (uint)lVar13;
  bVar2 = pbVar9[lVar13];
  if (bVar2 == 0x2e) {
    if ((int)uVar3 <= (int)uVar12) {
      return false;
    }
    uVar12 = uVar12 | 1;
    lVar10 = (ulong)uVar12 - 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b89fe4 with catch @ 00b89f74
                       catch(type#1 @ 00000000) { ... } // from try @ 00b8a014 with catch @ 00b89f74
                       catch(type#1 @ 00000000) { ... } // from try @ 00b8a044 with catch @ 00b89f74
                       catch(type#1 @ 00000000) { ... } // from try @ 00b8a06c with catch @ 00b89f74
                       catch(type#1 @ 00000000) { ... } // from try @ 00b8a098 with catch @ 00b89f74
                        */
    lVar13 = lVar10 << 0x20;
    lVar11 = 0;
    do {
      lVar13 = lVar13 + 0x100000000;
      lVar1 = lVar11 + 1;
      if ((long)(int)uVar3 < lVar10 + lVar11 + 1) break;
      lVar7 = lVar11 + (ulong)uVar12;
      lVar11 = lVar1;
    } while ((byte)(pbVar9[lVar7] - 0x30) < 10);
    iVar8 = (int)lVar1;
    if (iVar8 == 1) {
      return false;
    }
    bVar2 = pbVar9[lVar13 >> 0x20];
    uVar12 = (uVar12 + iVar8) - 1;
  }
                    /* try { // try from 00b89fdc to 00c89fe3 has its CatchHandler @ 00b8a0d8 */
  if (bVar2 < 0x2d) {
    if (bVar2 == 0) goto LAB_00b8a004;
                    /* try { // try from 00b89fe4 to 00c8a007 has its CatchHandler @ 00b89f74 */
    if (bVar2 != 0x2b) {
      return false;
    }
  }
  else if (bVar2 != 0x2d) {
    if (bVar2 != 0x5a) {
      return false;
    }
    uVar12 = uVar12 + 1;
    goto LAB_00b8a004;
  }
                    /* try { // try from 00b8a014 to 00c8a03b has its CatchHandler @ 00b89f74 */
  iVar8 = 1;
  if (bVar2 == 0x2d) {
    iVar8 = -1;
  }
  if ((int)(uVar12 + 5) <= (int)uVar3) {
    bVar2 = pbVar9[(long)(int)uVar12 + 1];
                    /* try { // try from 00b8a03c to 00c8a043 has its CatchHandler @ 00b8a0d4 */
    uVar5 = bVar2 - 0x30;
    if (param_1 == (int *)0x0) {
      if (((((uVar5 & 0xff) < 10) && (pbVar9[(long)(int)uVar12 + 2] - 0x30 < 10)) &&
          (((uint)pbVar9[(long)(int)uVar12 + 2] + (uint)bVar2 * 10) - 0x210 < 0xd)) &&
         (((pbVar9[(long)(int)uVar12 + 3] - 0x30 < 10 && (pbVar9[(long)(int)uVar12 + 4] - 0x30 < 10)
           ) && (((uint)pbVar9[(long)(int)uVar12 + 4] + (uint)pbVar9[(long)(int)uVar12 + 3] * 10) -
                 0x210 < 0x3c)))) {
        uVar12 = uVar12 + 5;
LAB_00b8a004:
                    /* try { // try from 00b8a008 to 00c8a013 has its CatchHandler @ 00b8a0d8 */
        return uVar12 == uVar3;
      }
    }
    else {
                    /* try { // try from 00b8a044 to 00c8a063 has its CatchHandler @ 00b89f74 */
                    /* try { // try from 00b8a064 to 00c8a06b has its CatchHandler @ 00b8a0d4 */
                    /* try { // try from 00b8a06c to 00c8a08b has its CatchHandler @ 00b89f74 */
                    /* try { // try from 00b8a08c to 00c8a097 has its CatchHandler @ 00b8a0d4 */
                    /* try { // try from 00b8a098 to 00c8a0db has its CatchHandler @ 00b89f74 */
      if ((((uVar5 & 0xff) < 10) && (pbVar9[(long)(int)uVar12 + 2] - 0x30 < 10)) &&
         ((uVar5 = ((uint)pbVar9[(long)(int)uVar12 + 2] + (uint)bVar2 * 10) - 0x210, uVar5 < 0xd &&
          (((pbVar9[(long)(int)uVar12 + 3] - 0x30 < 10 &&
            (pbVar9[(long)(int)uVar12 + 4] - 0x30 < 10)) &&
           (uVar6 = ((uint)pbVar9[(long)(int)uVar12 + 4] + (uint)pbVar9[(long)(int)uVar12 + 3] * 10)
                    - 0x210, uVar6 < 0x3c)))))) {
        iVar4 = uVar5 * 0xe10 + uVar6 * 0x3c;
        uVar12 = uVar12 + 5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b8a03c with catch @ 00b8a0d4
                       catch(type#1 @ 00000000) { ... } // from try @ 00b8a064 with catch @ 00b8a0d4
                       catch(type#1 @ 00000000) { ... } // from try @ 00b8a08c with catch @ 00b8a0d4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b89fdc with catch @ 00b8a0d8
                       catch(type#1 @ 00000000) { ... } // from try @ 00b8a008 with catch @ 00b8a0d8
                        */
        if ((iVar4 == 0) ||
           (iVar8 = OPENSSL_gmtime_adj(param_1,0,(long)(iVar4 * iVar8)), iVar8 != 0))
        goto LAB_00b8a004;
      }
    }
  }
  return false;
}

