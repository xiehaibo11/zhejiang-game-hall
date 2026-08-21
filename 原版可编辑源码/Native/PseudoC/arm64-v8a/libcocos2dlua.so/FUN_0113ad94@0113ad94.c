
undefined8 FUN_0113ad94(undefined8 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *__s;
  long lVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  
  lVar16 = param_1[0x6a];
  lVar9 = *(long *)(lVar16 + 0xa8);
  if (lVar9 != 0) {
    plVar3 = *(long **)(lVar16 + 0xc0);
    uVar11 = (ulong)*(ushort *)(plVar3 + 1);
    lVar6 = uVar11 - lVar9;
    if (param_3 < lVar6) {
      *(long *)(lVar16 + 0xa8) = lVar9 + param_3;
      lVar9 = (uVar11 - 1) - lVar9;
      do {
        plVar3 = (long *)*plVar3;
        if (lVar9 <= param_3) break;
        lVar9 = lVar9 + -1;
      } while (plVar3 != (long *)0x0);
      if (plVar3 == (long *)0x0) {
        return 1;
      }
      do {
        param_3 = param_3 + -1;
        param_2[param_3] = *(undefined1 *)((long)plVar3 + 10);
                    /* try { // try from 0113ae10 to 0123ae1b has its CatchHandler @ 0113af18 */
        if (param_3 == 0) {
          return 1;
        }
        plVar3 = (long *)*plVar3;
                    /* try { // try from 0113ae1c to 0123af47 has its CatchHandler @ 0113a9f0 */
      } while (plVar3 != (long *)0x0);
      return 1;
    }
    lVar9 = (uVar11 - 1) - lVar9;
    do {
      puVar10 = (undefined1 *)((long)plVar3 + 10);
      plVar3 = (long *)*plVar3;
      param_2[lVar9] = *puVar10;
      if (lVar9 == 0) break;
      lVar9 = lVar9 + -1;
    } while (plVar3 != (long *)0x0);
    param_3 = param_3 - lVar6;
    *(undefined8 *)(lVar16 + 0xa8) = 0;
    param_2 = param_2 + lVar6;
  }
  pbVar17 = (byte *)param_1[0x71];
  uVar11 = *(ulong *)(lVar16 + 0x88);
  uVar18 = *(ulong *)(lVar16 + 0x90);
  uVar15 = *(ulong *)(lVar16 + 0xa0);
  __s = *(ulong **)(lVar16 + 0xd0);
  puVar14 = *(ulong **)(lVar16 + 0xd8);
  uVar8 = (ulong)*(ushort *)(lVar16 + 0x80);
  puVar20 = *(ulong **)(lVar16 + 200);
  do {
    while( true ) {
      lVar9 = param_3;
      if (lVar9 < 1) goto LAB_0113b0c0;
      if (*(ulong *)(lVar16 + 0xb0) < uVar8) {
        TIFFWarningExt(param_1[0x77],"LZWDecode","LZWDecode: Strip %d not terminated with EOI code",
                       *(undefined4 *)((long)param_1 + 0x284));
        goto LAB_0113b0c0;
      }
      lVar6 = uVar18 + 8;
      uVar11 = (ulong)*pbVar17 | uVar11 << 8;
      pbVar12 = pbVar17 + 1;
      if (lVar6 < (long)uVar8) {
        lVar6 = uVar18 + 0x10;
        uVar11 = (ulong)pbVar17[1] | uVar11 << 8;
        pbVar12 = pbVar17 + 2;
      }
      pbVar17 = pbVar12;
      uVar18 = lVar6 - uVar8;
      uVar4 = (long)uVar11 >> (uVar18 & 0x3f) & uVar15;
      uVar5 = (uint)uVar4 & 0xffff;
      *(ulong *)(lVar16 + 0xb0) = *(ulong *)(lVar16 + 0xb0) - uVar8;
      if (uVar5 == 0x101) goto LAB_0113b0c0;
      puVar7 = *(ulong **)(lVar16 + 0xe0);
      if (uVar5 != 0x100) break;
      __s = puVar7 + 0x204;
                    /* catch() { ... } // from try @ 0113ad90 with catch @ 0113aef8 */
      _TIFFmemset(__s,0,0x12fd0);
                    /* catch() { ... } // from try @ 0113ace8 with catch @ 0113af04 */
                    /* catch() { ... } // from try @ 0113ab88 with catch @ 0113af08 */
                    /* catch() { ... } // from try @ 0113ad30 with catch @ 0113af0c */
      puVar14 = (ulong *)(*(long *)(lVar16 + 0xe0) + 0x1fe0);
      if (*(ulong *)(lVar16 + 0xb0) < 9) {
        TIFFWarningExt(param_1[0x77],"LZWDecode","LZWDecode: Strip %d not terminated with EOI code",
                       *(undefined4 *)((long)param_1 + 0x284));
        uVar15 = 0x1ff;
        uVar8 = 9;
        goto LAB_0113b0c0;
      }
                    /* catch() { ... } // from try @ 0113ae10 with catch @ 0113af18 */
      pbVar12 = pbVar17 + 1;
      uVar11 = (ulong)*pbVar17 | uVar11 << 8;
      if ((long)uVar18 < 1) {
        pbVar12 = pbVar17 + 2;
        lVar6 = uVar18 + 0x10;
        uVar11 = (ulong)pbVar17[1] | uVar11 << 8;
      }
      else {
        lVar6 = uVar18 + 8;
                    /* catch() { ... } // from try @ 0113ab50 with catch @ 0113af34 */
      }
      uVar18 = lVar6 - 9;
      uVar15 = (long)uVar11 >> (uVar18 & 0x3f);
      uVar8 = uVar15 & 0x1ff;
      uVar5 = (uint)uVar8;
      *(ulong *)(lVar16 + 0xb0) = *(ulong *)(lVar16 + 0xb0) - 9;
      pbVar17 = pbVar12;
      if (uVar5 == 0x101) {
        uVar15 = 0x1ff;
        uVar8 = 9;
        goto LAB_0113b0c0;
      }
      if (0xff < uVar5) {
        TIFFErrorExt(param_1[0x77],*param_1,"LZWDecode: Corrupted LZW table at scanline %d",
                     *(undefined4 *)((long)param_1 + 0x27c));
        return 0;
      }
      *param_2 = (char)uVar15;
      uVar19 = 9;
      uVar15 = 0x1ff;
      puVar13 = (ulong *)(*(long *)(lVar16 + 0xe0) + uVar8 * 0x10);
LAB_0113b074:
      uVar8 = uVar19;
      puVar20 = puVar13;
      param_3 = lVar9 + -1;
      param_2 = param_2 + 1;
    }
    if ((((__s < puVar7) || (puVar7 + 0x27fe <= __s)) || (*__s = (ulong)puVar20, puVar20 < puVar7))
       || (puVar7 + 0x27fe <= puVar20)) {
      TIFFErrorExt(param_1[0x77],"LZWDecode","Corrupted LZW table at scanline %d",
                   *(undefined4 *)((long)param_1 + 0x27c));
      return 0;
    }
    puVar13 = puVar7 + (uVar4 & 0xffff) * 2;
    puVar2 = puVar13;
    if (__s <= puVar13) {
      puVar2 = __s;
    }
    *(undefined1 *)((long)__s + 0xb) = *(undefined1 *)((long)puVar20 + 0xb);
    *(short *)(__s + 1) = (short)puVar20[1] + 1;
    *(undefined1 *)((long)__s + 10) = *(undefined1 *)((long)puVar2 + 0xb);
    __s = __s + 2;
    uVar19 = uVar8;
    if (puVar14 < __s) {
      uVar19 = 0xc;
      if ((long)(uVar8 + 1) < 0xc) {
        uVar19 = uVar8 + 1;
      }
      uVar15 = (1L << (uVar19 & 0x3f)) - 1;
      puVar14 = puVar7 + uVar15 * 2 + -2;
    }
    if (((uint)uVar4 & 0xffff) < 0x100) {
      *param_2 = (char)uVar4;
      goto LAB_0113b074;
    }
    uVar4 = (ulong)(ushort)puVar7[(uVar4 & 0xffff) * 2 + 1];
    if (uVar4 == 0) {
      TIFFErrorExt(param_1[0x77],"LZWDecode",
                   "Wrong length of decoded string: data probably corrupted at scanline %d",
                   *(undefined4 *)((long)param_1 + 0x27c));
      return 0;
    }
    uVar8 = uVar19;
    puVar20 = puVar13;
    if (lVar9 < (long)uVar4) {
      *(ulong **)(lVar16 + 0xc0) = puVar13;
      goto LAB_0113b1e8;
    }
    puVar10 = param_2 + uVar4;
    do {
      puVar10 = puVar10 + -1;
      puVar1 = (undefined1 *)((long)puVar13 + 10);
      puVar13 = (ulong *)*puVar13;
      *puVar10 = *puVar1;
      if (puVar10 <= param_2) break;
    } while (puVar13 != (ulong *)0x0);
    param_3 = lVar9 - uVar4;
    param_2 = param_2 + uVar4;
  } while (puVar13 == (ulong *)0x0);
  goto LAB_0113b228;
  while (lVar9 < (long)(ulong)(ushort)puVar13[1]) {
LAB_0113b1e8:
    puVar13 = (ulong *)*puVar13;
    if (puVar13 == (ulong *)0x0) goto LAB_0113b0c0;
  }
  *(long *)(lVar16 + 0xa8) = lVar9;
  do {
    lVar9 = lVar9 + -1;
    param_2[lVar9] = *(undefined1 *)((long)puVar13 + 10);
    puVar13 = (ulong *)*puVar13;
    if (lVar9 == 0) break;
  } while (puVar13 != (ulong *)0x0);
  if (puVar13 == (ulong *)0x0) goto LAB_0113b0c0;
LAB_0113b228:
  TIFFErrorExt(param_1[0x77],"LZWDecode","Bogus encoding, loop in the code table; scanline %d",
               *(undefined4 *)((long)param_1 + 0x27c));
LAB_0113b0c0:
  param_1[0x71] = pbVar17;
  *(short *)(lVar16 + 0x80) = (short)uVar8;
  *(ulong *)(lVar16 + 0x88) = uVar11;
  *(ulong *)(lVar16 + 0x90) = uVar18;
  *(ulong *)(lVar16 + 0xa0) = uVar15;
  *(ulong **)(lVar16 + 200) = puVar20;
  *(ulong **)(lVar16 + 0xd0) = __s;
  *(ulong **)(lVar16 + 0xd8) = puVar14;
  if (lVar9 < 1) {
    return 1;
  }
  TIFFErrorExt(param_1[0x77],"LZWDecode","Not enough data at scanline %d (short %llu bytes)",
               *(undefined4 *)((long)param_1 + 0x27c),lVar9);
  return 0;
}

