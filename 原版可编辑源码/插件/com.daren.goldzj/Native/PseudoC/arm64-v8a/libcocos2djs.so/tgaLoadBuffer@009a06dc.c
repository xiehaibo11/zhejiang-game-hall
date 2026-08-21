
/* cocos2d::tgaLoadBuffer(unsigned char*, long) */

undefined4 * cocos2d::tgaLoadBuffer(uchar *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  short sVar4;
  short sVar5;
  long lVar6;
  byte bVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  void *__dest;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulong __n;
  size_t sVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  byte bVar22;
  undefined1 local_6c [2];
  undefined1 local_6a;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if (param_1 == (uchar *)0x0) {
    puVar8 = (undefined4 *)0x0;
    goto LAB_009a0768;
  }
                    /* try { // try from 009a070c to 00aa0723 has its CatchHandler @ 009a098c */
  puVar8 = malloc(0x20);
  if ((ulong)param_2 < 3) {
LAB_009a0758:
    uVar10 = 4;
  }
  else {
    bVar1 = param_1[2];
                    /* try { // try from 009a072c to 00aa0737 has its CatchHandler @ 009a0988 */
    *(byte *)(puVar8 + 1) = bVar1;
    if ((ulong)param_2 < 0x11) goto LAB_009a0758;
                    /* try { // try from 009a0738 to 00aa0743 has its CatchHandler @ 009a0984 */
    sVar4 = *(short *)(param_1 + 0xc);
    *(short *)((long)puVar8 + 6) = sVar4;
                    /* try { // try from 009a0744 to 00aa0903 has its CatchHandler @ 009a099c */
    sVar5 = *(short *)(param_1 + 0xe);
    *(short *)(puVar8 + 2) = sVar5;
    bVar2 = param_1[0x10];
    *(byte *)((long)puVar8 + 5) = bVar2;
    if (param_2 == 0x11) goto LAB_009a0758;
    bVar7 = param_1[0x11] >> 5;
    puVar8[6] = bVar7 & 1;
    if ((bVar1 - 2 < 2) || (bVar1 == 10)) {
      bVar22 = bVar2 >> 3;
      __n = (ulong)bVar22;
      puVar9 = malloc((long)(int)((int)sVar5 * (uint)bVar22 * (int)sVar4));
      *(undefined1 **)(puVar8 + 4) = puVar9;
      if (puVar9 != (undefined1 *)0x0) {
        uVar17 = (uint)bVar22;
        if (bVar1 == 10) {
          uVar14 = (int)sVar4 * (int)sVar5;
          if (uVar14 != 0) {
            uVar19 = 0;
            bVar22 = 0;
            uVar20 = 0;
            uVar11 = 0x12;
            bVar1 = 0;
            do {
              if (bVar22 == 0) {
                uVar12 = uVar11 + 1;
                if ((ulong)param_2 < uVar12) break;
                bVar1 = param_1[uVar11] & 0x80;
                bVar22 = param_1[uVar11] & 0x7f;
LAB_009a0864:
                uVar11 = uVar12 + __n;
                if ((ulong)param_2 < uVar11) break;
                memcpy(local_6c,param_1 + uVar12,__n);
                uVar3 = local_6c[0];
                if (0x17 < bVar2) {
                  local_6c[0] = local_6a;
                  local_6a = uVar3;
                }
              }
              else {
                bVar22 = bVar22 - 1;
                if (bVar1 == 0) {
                  bVar1 = 0;
                  uVar12 = uVar11;
                  goto LAB_009a0864;
                }
              }
              memcpy(puVar9 + uVar20,local_6c,__n);
              uVar19 = uVar19 + 1;
              uVar20 = uVar20 + uVar17;
            } while (uVar19 < uVar14);
          }
        }
        else {
          iVar15 = (uint)bVar22 * (int)sVar5 * (int)sVar4;
                    /* catch() { ... } // from try @ 009a0744 with catch @ 009a099c */
          sVar18 = (size_t)iVar15;
          if ((ulong)param_2 < sVar18 + 0x12) {
            uVar10 = 2;
            goto LAB_009a075c;
          }
          memcpy(puVar9,param_1 + 0x12,sVar18);
          if ((0x17 < bVar2) && (0 < iVar15)) {
            puVar13 = *(undefined1 **)(puVar8 + 4);
            uVar3 = *puVar9;
            *puVar9 = puVar9[2];
            puVar13[2] = uVar3;
            for (uVar11 = __n; puVar9 = puVar13, (long)uVar11 < (long)sVar18; uVar11 = uVar11 + __n)
            {
              puVar9 = puVar13 + uVar11;
              uVar3 = *puVar9;
              *puVar9 = puVar9[2];
              puVar9[2] = uVar3;
            }
          }
        }
        *puVar8 = 0;
        if ((bVar7 & 1) == 0) goto LAB_009a0768;
        iVar15 = (int)sVar4;
        sVar18 = (size_t)(int)(iVar15 * uVar17);
        __dest = malloc(sVar18);
        if (__dest != (void *)0x0) {
          uVar14 = (uint)sVar5;
          if (1 < (int)uVar14) {
                    /* try { // try from 009a0904 to 00aa09f3 has its CatchHandler @ 009a06ac */
            lVar21 = 0;
            iVar16 = uVar17 * (uVar14 - 1) * iVar15;
            puVar13 = puVar9;
            do {
              memcpy(__dest,puVar13,sVar18);
              lVar21 = lVar21 + 1;
              memcpy(puVar13,puVar9 + iVar16,sVar18);
              memcpy(puVar9 + iVar16,__dest,sVar18);
              puVar13 = puVar13 + sVar18;
              iVar16 = iVar16 - uVar17 * iVar15;
            } while (lVar21 < (short)((uint)(int)(short)(sVar5 + (short)((uVar14 & 0x8000) >> 0xf))
                                     >> 1));
          }
          free(__dest);
                    /* catch() { ... } // from try @ 009a0738 with catch @ 009a0984 */
          puVar8[6] = 0;
                    /* catch() { ... } // from try @ 009a072c with catch @ 009a0988 */
          goto LAB_009a0768;
        }
        if ((bVar7 & 1) == 0) goto LAB_009a0768;
      }
      goto LAB_009a0758;
    }
    if (bVar1 == 1) {
      uVar10 = 3;
    }
    else {
                    /* catch() { ... } // from try @ 009a070c with catch @ 009a098c */
      uVar10 = 5;
    }
  }
LAB_009a075c:
  *puVar8 = uVar10;
LAB_009a0768:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

