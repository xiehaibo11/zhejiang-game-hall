
undefined8 FUN_0113bdc0(long param_1,byte *param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  byte bVar7;
  bool bVar8;
  undefined8 uVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  size_t __n;
  byte *__src;
  long lVar16;
  
  if (0 < (long)param_3) {
    uVar15 = 0xfffffffffffffffe;
    if (-2 < (long)~param_3) {
      uVar15 = ~param_3;
    }
    memset(param_2,0xff,uVar15 + param_3 + 2);
  }
  __n = *(size_t *)(param_1 + 0x358);
  lVar6 = 0;
  if (__n != 0) {
    lVar6 = (long)param_3 / (long)__n;
  }
  if (param_3 == lVar6 * __n) {
    pbVar11 = *(byte **)(param_1 + 0x388);
    lVar6 = *(long *)(param_1 + 0x390);
    for (; 0 < (long)param_3; param_3 = param_3 - __n) {
      __src = pbVar11 + 1;
      bVar4 = *pbVar11;
      lVar16 = lVar6 + -1;
      if (bVar4 == 0x40) {
        uVar15 = (ulong)CONCAT11(pbVar11[3],pbVar11[4]);
        lVar1 = uVar15 + 4;
        if ((lVar6 <= lVar1) || ((long)__n < (long)(uVar15 + CONCAT11(pbVar11[1],pbVar11[2])))) {
LAB_0113bfb4:
          TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"NeXTDecode",
                       "Not enough data for scanline %ld",*(undefined4 *)(param_1 + 0x27c));
          goto LAB_0113bfd0;
        }
        _TIFFmemcpy(param_2 + CONCAT11(pbVar11[1],pbVar11[2]),pbVar11 + 5,uVar15);
        pbVar11 = __src + lVar1;
        lVar16 = lVar16 - lVar1;
      }
      else if (bVar4 == 0) {
        if (lVar6 <= (long)__n) goto LAB_0113bfb4;
        _TIFFmemcpy(param_2,__src,__n);
        pbVar11 = __src + __n;
        lVar16 = lVar16 - __n;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x58);
        uVar13 = 0;
        pbVar12 = param_2;
        pbVar11 = __src;
        while( true ) {
          bVar8 = uVar13 < uVar3;
                    /* catch() { ... } // from try @ 0113c5cc with catch @ 0113bf08 */
          if (((bVar4 & 0x3f) != 0) && (bVar8)) {
            bVar7 = bVar4 >> 6;
            uVar15 = (ulong)bVar4 & 0x3f;
            do {
              uVar14 = uVar13;
              uVar2 = uVar14 & 3;
              uVar13 = uVar14 + 1;
              if (uVar2 == 3) {
                *pbVar12 = *pbVar12 | bVar7;
                pbVar12 = pbVar12 + 1;
              }
              else {
                bVar10 = bVar7 << 2;
                if ((uVar2 == 2) || (bVar5 = bVar4 & 0xc0, bVar10 = bVar7 << 4, uVar2 == 1)) {
                  bVar5 = *pbVar12 | bVar10;
                }
                    /* try { // try from 0113bf64 to 0123bf6f has its CatchHandler @ 0113c5ec */
                *pbVar12 = bVar5;
              }
            } while ((1 < (long)uVar15) && (uVar15 = uVar15 - 1, uVar13 < uVar3));
            bVar8 = uVar13 < uVar3;
            uVar13 = uVar14 + 1;
          }
          if (!bVar8) break;
          if (lVar16 == 0) goto LAB_0113bfb4;
          bVar4 = *pbVar11;
          lVar16 = lVar16 + -1;
          pbVar11 = pbVar11 + 1;
        }
      }
      param_2 = param_2 + __n;
                    /* try { // try from 0113bfa8 to 0123bfaf has its CatchHandler @ 0113c618 */
      lVar6 = lVar16;
    }
    *(byte **)(param_1 + 0x388) = pbVar11;
    *(long *)(param_1 + 0x390) = lVar6;
    uVar9 = 1;
  }
  else {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"NeXTDecode","Fractional scanlines cannot be read"
                );
LAB_0113bfd0:
    uVar9 = 0;
  }
  return uVar9;
}

