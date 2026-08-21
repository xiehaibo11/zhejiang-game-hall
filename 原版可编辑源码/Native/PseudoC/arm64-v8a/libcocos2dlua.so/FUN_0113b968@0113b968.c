
undefined8 FUN_0113b968(undefined8 *param_1,undefined1 *param_2,long param_3)

{
  ulong *puVar1;
  uint uVar2;
  ulong *puVar3;
  long *plVar4;
  ulong *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong *puVar12;
  byte *pbVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *__s;
  long lVar18;
  byte *pbVar19;
  ulong uVar20;
  undefined1 *puVar21;
  undefined2 uVar22;
  uint uVar23;
  ulong uVar24;
  
  lVar18 = param_1[0x6a];
  lVar8 = *(long *)(lVar18 + 0xa8);
  if (lVar8 != 0) {
    plVar4 = *(long **)(lVar18 + 0xc0);
    lVar7 = (ulong)*(ushort *)(plVar4 + 1) - lVar8;
    if (param_3 < lVar7) {
      *(long *)(lVar18 + 0xa8) = lVar8 + param_3;
      do {
        plVar4 = (long *)*plVar4;
        lVar7 = lVar7 + -1;
      } while (param_3 < lVar7);
      do {
                    /* try { // try from 0113b9c8 to 0123b9d7 has its CatchHandler @ 0113ba50 */
        lVar8 = param_3 + -1;
        param_2[param_3 + -1] = *(undefined1 *)((long)plVar4 + 10);
        plVar4 = (long *)*plVar4;
        param_3 = lVar8;
      } while (lVar8 != 0);
      return 1;
    }
    lVar8 = lVar7;
    do {
                    /* try { // try from 0113b9f8 to 0123ba0f has its CatchHandler @ 0113ba4c */
      lVar9 = lVar8 + -1;
      param_2[lVar8 + -1] = *(undefined1 *)((long)plVar4 + 10);
      plVar4 = (long *)*plVar4;
      lVar8 = lVar9;
    } while (lVar9 != 0);
    param_3 = param_3 - lVar7;
    *(undefined8 *)(lVar18 + 0xa8) = 0;
    param_2 = param_2 + lVar7;
  }
                    /* try { // try from 0113ba10 to 0123ba63 has its CatchHandler @ 0113b900 */
  pbVar19 = (byte *)param_1[0x71];
  uVar24 = (ulong)*(ushort *)(lVar18 + 0x80);
  uVar23 = (uint)*(ushort *)(lVar18 + 0x80);
  uVar16 = *(ulong *)(lVar18 + 0x88);
  uVar20 = *(ulong *)(lVar18 + 0x90);
  lVar7 = *(long *)(lVar18 + 0xa0);
  puVar5 = *(ulong **)(lVar18 + 200);
  __s = *(ulong **)(lVar18 + 0xd0);
  puVar17 = *(ulong **)(lVar18 + 0xd8);
  lVar8 = param_3;
  if (param_3 < 1) {
LAB_0113bcb0:
    uVar22 = (undefined2)uVar23;
  }
  else {
    do {
      uVar23 = (uint)uVar24;
      uVar11 = (ulong)(int)uVar23;
      lVar8 = param_3;
      if (*(ulong *)(lVar18 + 0xb0) < uVar11) {
        TIFFWarningExt(param_1[0x77],"LZWDecodeCompat",
                       "LZWDecode: Strip %d not terminated with EOI code",
                       *(undefined4 *)((long)param_1 + 0x284));
        goto LAB_0113bcb0;
      }
                    /* catch() { ... } // from try @ 0113b9f8 with catch @ 0113ba4c */
      uVar15 = uVar20 + 8;
                    /* catch() { ... } // from try @ 0113b9c8 with catch @ 0113ba50 */
      uVar16 = (ulong)*pbVar19 << (uVar20 & 0x3f) | uVar16;
      pbVar13 = pbVar19 + 1;
      if ((long)uVar15 < (long)uVar11) {
        uVar16 = (ulong)pbVar19[1] << (uVar15 & 0x3f) | uVar16;
        uVar15 = uVar20 + 0x10;
        pbVar13 = pbVar19 + 2;
      }
      pbVar19 = pbVar13;
      uVar6 = (uint)uVar16 & (uint)lVar7;
      uVar2 = uVar6 & 0xffff;
      uVar16 = (long)uVar16 >> (uVar24 & 0x3f);
      uVar20 = uVar15 - uVar11;
      *(ulong *)(lVar18 + 0xb0) = *(ulong *)(lVar18 + 0xb0) - uVar11;
      if (uVar2 == 0x101) goto LAB_0113bcb0;
      puVar12 = *(ulong **)(lVar18 + 0xe0);
      if (uVar2 == 0x100) {
        __s = puVar12 + 0x204;
        _TIFFmemset(__s,0,0x12fd0);
        puVar17 = (ulong *)(*(long *)(lVar18 + 0xe0) + 0x1ff0);
        if (*(ulong *)(lVar18 + 0xb0) < 9) {
          TIFFWarningExt(param_1[0x77],"LZWDecodeCompat",
                         "LZWDecode: Strip %d not terminated with EOI code",
                         *(undefined4 *)((long)param_1 + 0x284));
        }
        else {
          pbVar13 = pbVar19 + 1;
          uVar24 = uVar20 + 8;
          uVar11 = (ulong)*pbVar19 << (uVar20 & 0x3f) | uVar16;
          if ((long)uVar20 < 1) {
            pbVar13 = pbVar19 + 2;
            uVar11 = (ulong)pbVar19[1] << (uVar24 & 0x3f) | uVar11;
            uVar24 = uVar20 + 0x10;
          }
          uVar23 = (uint)uVar11 & 0x1ff;
          uVar16 = (long)uVar11 >> 9;
          uVar20 = uVar24 - 9;
          *(ulong *)(lVar18 + 0xb0) = *(ulong *)(lVar18 + 0xb0) - 9;
          pbVar19 = pbVar13;
          if (uVar23 != 0x101) {
            if (0xff < uVar23) {
              TIFFErrorExt(param_1[0x77],*param_1,"LZWDecode: Corrupted LZW table at scanline %d",
                           *(undefined4 *)((long)param_1 + 0x27c));
              return 0;
            }
            puVar21 = param_2 + 1;
            *param_2 = (char)uVar11;
            lVar8 = param_3 + -1;
            uVar24 = 9;
            lVar7 = 0x1ff;
            puVar5 = (ulong *)(*(long *)(lVar18 + 0xe0) + (ulong)uVar23 * 0x10);
            goto LAB_0113bc20;
          }
        }
        uVar23 = 9;
        lVar7 = 0x1ff;
        goto LAB_0113bcb0;
      }
      if ((((__s < puVar12) || (puVar12 + 0x27fe <= __s)) ||
          (*__s = (ulong)puVar5, puVar5 < puVar12)) || (puVar12 + 0x27fe <= puVar5)) {
        TIFFErrorExt(param_1[0x77],"LZWDecodeCompat","Corrupted LZW table at scanline %d",
                     *(undefined4 *)((long)param_1 + 0x27c));
        return 0;
      }
      *(undefined1 *)((long)__s + 0xb) = *(undefined1 *)((long)puVar5 + 0xb);
      puVar1 = puVar5 + 1;
      puVar5 = puVar12 + (ulong)uVar2 * 2;
      puVar3 = puVar5;
      if (__s <= puVar5) {
        puVar3 = __s;
      }
      *(short *)(__s + 1) = (short)*puVar1 + 1;
      *(undefined1 *)((long)__s + 10) = *(undefined1 *)((long)puVar3 + 0xb);
      __s = __s + 2;
      if (puVar17 < __s) {
        uVar14 = 0xc;
        if ((int)(uVar23 + 1) < 0xc) {
          uVar14 = uVar23 + 1;
        }
        uVar24 = (ulong)uVar14;
        lVar7 = (1L << (uVar24 & 0x3f)) + -1;
        puVar17 = puVar12 + lVar7 * 2;
      }
      uVar22 = (undefined2)uVar24;
      if (uVar2 < 0x100) {
        puVar21 = param_2 + 1;
        *param_2 = (char)uVar6;
        lVar8 = param_3 + -1;
      }
      else {
        uVar11 = (ulong)(ushort)puVar12[(ulong)uVar2 * 2 + 1];
        if (uVar11 == 0) {
          TIFFErrorExt(param_1[0x77],"LZWDecodeCompat",
                       "Wrong length of decoded string: data probably corrupted at scanline %d",
                       *(undefined4 *)((long)param_1 + 0x27c));
          return 0;
        }
        lVar8 = param_3 - uVar11;
        if (param_3 < (long)uVar11) {
          *(ulong **)(lVar18 + 0xc0) = puVar5;
          puVar12 = puVar5;
          do {
            puVar12 = (ulong *)*puVar12;
          } while (param_3 < (long)(ulong)(ushort)puVar12[1]);
          *(long *)(lVar18 + 0xa8) = param_3;
          do {
            lVar8 = param_3 + -1;
            param_2[param_3 + -1] = *(undefined1 *)((long)puVar12 + 10);
            puVar12 = (ulong *)*puVar12;
            param_3 = lVar8;
          } while (lVar8 != 0);
          lVar8 = 0;
          break;
        }
        puVar21 = param_2 + uVar11;
        puVar12 = puVar5;
        puVar10 = puVar21;
        do {
          puVar10 = puVar10 + -1;
          *puVar10 = *(undefined1 *)((long)puVar12 + 10);
          puVar12 = (ulong *)*puVar12;
        } while (puVar12 != (ulong *)0x0);
      }
LAB_0113bc20:
      uVar22 = (undefined2)uVar24;
      param_3 = lVar8;
      param_2 = puVar21;
    } while (0 < lVar8);
  }
  param_1[0x71] = pbVar19;
  *(undefined2 *)(lVar18 + 0x80) = uVar22;
  *(ulong *)(lVar18 + 0x88) = uVar16;
  *(ulong *)(lVar18 + 0x90) = uVar20;
  *(long *)(lVar18 + 0xa0) = lVar7;
  *(ulong **)(lVar18 + 200) = puVar5;
  *(ulong **)(lVar18 + 0xd0) = __s;
  *(ulong **)(lVar18 + 0xd8) = puVar17;
  if (lVar8 < 1) {
    return 1;
  }
  TIFFErrorExt(param_1[0x77],"LZWDecodeCompat","Not enough data at scanline %d (short %llu bytes)",
               *(undefined4 *)((long)param_1 + 0x27c),lVar8);
  return 0;
}

