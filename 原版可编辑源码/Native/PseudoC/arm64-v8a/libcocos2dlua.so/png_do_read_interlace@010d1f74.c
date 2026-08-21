
void png_do_read_interlace(uint *param_1,long param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  void *__dest;
  void *__src;
  int iVar16;
  undefined1 auStack_58 [8];
  
  if (param_1 == (uint *)0x0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  uVar1 = *param_1;
  bVar3 = *(byte *)((long)param_1 + 0x13);
  iVar2 = *(int *)(&DAT_01475130 + (long)param_3 * 4);
  uVar4 = iVar2 * uVar1;
  if (bVar3 == 4) {
    uVar7 = uVar1 & 1;
    if ((param_4 >> 0x10 & 1) == 0) {
      uVar8 = 0;
      uVar9 = 4;
      iVar16 = 4;
      uVar10 = uVar4;
    }
    else {
      uVar9 = 0;
      uVar7 = uVar7 ^ 1;
      iVar16 = -4;
      uVar8 = 4;
      uVar10 = ~uVar4;
    }
    if (uVar1 != 0) {
      uVar11 = (uVar10 & 1) << 2;
      uVar10 = 0;
      uVar7 = uVar7 << 2;
      pbVar12 = (byte *)(param_2 + (ulong)(uVar1 - 1 >> 1));
      pbVar13 = (byte *)(param_2 + (ulong)(uVar4 - 1 >> 1));
      do {
        bVar3 = *pbVar12;
        iVar15 = 0;
        pbVar14 = pbVar13;
        do {
          uVar1 = uVar11 + iVar16;
          bVar5 = uVar11 != uVar9;
          iVar15 = iVar15 + 1;
          *pbVar14 = (byte)(0xf0f >> (ulong)(4 - uVar11 & 0x1f)) & *pbVar14 |
                     (byte)((bVar3 >> (ulong)(uVar7 & 0x1f) & 0xf) << (ulong)(uVar11 & 0x1f));
          pbVar13 = pbVar14 + -1;
          uVar11 = uVar8;
          if (bVar5) {
            pbVar13 = pbVar14;
            uVar11 = uVar1;
          }
          pbVar14 = pbVar13;
        } while (iVar15 < iVar2);
        uVar1 = uVar7 + iVar16;
        bVar5 = uVar7 != uVar9;
        uVar10 = uVar10 + 1;
        uVar7 = uVar8;
        pbVar14 = pbVar12 + -1;
        if (bVar5) {
          uVar7 = uVar1;
          pbVar14 = pbVar12;
        }
        pbVar12 = pbVar14;
      } while (uVar10 < *param_1);
    }
  }
  else if (bVar3 == 2) {
    uVar7 = uVar1 * 2 + 6 & 6;
    if ((param_4 >> 0x10 & 1) == 0) {
      uVar10 = ~(uVar4 * 2 + 6);
      uVar8 = 0;
      uVar7 = uVar7 ^ 6;
      iVar16 = 2;
      uVar9 = 6;
    }
    else {
      uVar10 = uVar4 * 2 + 6;
      uVar9 = 0;
      iVar16 = -2;
      uVar8 = 6;
    }
    if (uVar1 != 0) {
      uVar10 = uVar10 & 6;
      uVar11 = 0;
      pbVar12 = (byte *)(param_2 + (ulong)(uVar1 - 1 >> 2));
      pbVar13 = (byte *)(param_2 + (ulong)(uVar4 - 1 >> 2));
      do {
        bVar3 = *pbVar12;
        iVar15 = 0;
        pbVar14 = pbVar13;
        do {
                    /* try { // try from 010d2298 to 011d229f has its CatchHandler @ 010d2368 */
          uVar1 = uVar10 + iVar16;
          bVar5 = uVar10 != uVar9;
                    /* try { // try from 010d22a0 to 011d237b has its CatchHandler @ 010d2158 */
          iVar15 = iVar15 + 1;
          *pbVar14 = (byte)(0x3f3f >> (ulong)(6 - uVar10 & 0x1f)) & *pbVar14 |
                     (byte)((bVar3 >> (ulong)(uVar7 & 0x1f) & 3) << (ulong)(uVar10 & 0x1f));
          pbVar13 = pbVar14 + -1;
          uVar10 = uVar8;
          if (bVar5) {
            pbVar13 = pbVar14;
            uVar10 = uVar1;
          }
          pbVar14 = pbVar13;
        } while (iVar15 < iVar2);
        uVar1 = uVar7 + iVar16;
        bVar5 = uVar7 != uVar9;
        uVar11 = uVar11 + 1;
        uVar7 = uVar8;
        pbVar14 = pbVar12 + -1;
        if (bVar5) {
          uVar7 = uVar1;
          pbVar14 = pbVar12;
        }
        pbVar12 = pbVar14;
      } while (uVar11 < *param_1);
    }
  }
  else if (bVar3 == 1) {
    uVar7 = uVar1 + 7 & 7;
    if ((param_4 >> 0x10 & 1) == 0) {
      uVar10 = ~(uVar4 + 7);
      uVar8 = 0;
      uVar7 = uVar7 ^ 7;
      uVar9 = 7;
      iVar16 = 1;
    }
    else {
      uVar10 = uVar4 + 7;
      uVar9 = 0;
      uVar8 = 7;
      iVar16 = -1;
    }
    if (uVar1 != 0) {
      uVar10 = uVar10 & 7;
      uVar11 = 0;
      pbVar12 = (byte *)(param_2 + (ulong)(uVar4 - 1 >> 3));
      pbVar13 = (byte *)(param_2 + (ulong)(uVar1 - 1 >> 3));
      do {
        bVar3 = *pbVar13;
        iVar15 = 0;
        pbVar14 = pbVar12;
        do {
          uVar1 = uVar10 + iVar16;
          bVar5 = uVar10 != uVar9;
          iVar15 = iVar15 + 1;
          *pbVar14 = (byte)(0x7f7f >> (ulong)(7 - uVar10 & 0x1f)) & *pbVar14 |
                     (byte)((bVar3 >> (ulong)(uVar7 & 0x1f) & 1) << (ulong)(uVar10 & 0x1f));
          pbVar12 = pbVar14 + -1;
          uVar10 = uVar8;
          if (bVar5) {
            pbVar12 = pbVar14;
            uVar10 = uVar1;
          }
          pbVar14 = pbVar12;
        } while (iVar15 < iVar2);
        uVar1 = uVar7 + iVar16;
        bVar5 = uVar7 != uVar9;
                    /* try { // try from 010d2158 to 011d2297 has its CatchHandler @ 010d2158
                       catch() { ... } // from try @ 010d2158 with catch @ 010d2158
                       catch() { ... } // from try @ 010d22a0 with catch @ 010d2158 */
        uVar11 = uVar11 + 1;
        pbVar14 = pbVar13 + -1;
        uVar7 = uVar8;
        if (bVar5) {
          pbVar14 = pbVar13;
          uVar7 = uVar1;
        }
        pbVar13 = pbVar14;
      } while (uVar11 < *param_1);
    }
  }
  else {
    if (uVar1 == 0) goto LAB_010d22e0;
    uVar6 = (ulong)(bVar3 >> 3);
    uVar7 = 0;
    __dest = (void *)(param_2 + uVar6 * (uVar4 - 1));
    __src = (void *)(param_2 + uVar6 * (uVar1 - 1));
    do {
      memcpy(auStack_58,__src,uVar6);
      iVar16 = 0;
      do {
        memcpy(__dest,auStack_58,uVar6);
        iVar16 = iVar16 + 1;
        __dest = (void *)((long)__dest + -uVar6);
      } while (iVar16 < iVar2);
      uVar7 = uVar7 + 1;
      __src = (void *)((long)__src + -uVar6);
    } while (uVar7 < *param_1);
  }
  bVar3 = *(byte *)((long)param_1 + 0x13);
LAB_010d22e0:
  *param_1 = uVar4;
  if (bVar3 < 8) {
    uVar6 = (ulong)bVar3 * (ulong)uVar4 + 7 >> 3;
  }
  else {
    uVar6 = (ulong)(bVar3 >> 3) * (ulong)uVar4;
  }
  *(ulong *)(param_1 + 2) = uVar6;
  return;
}

