
undefined8 FUN_010c8928(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  int local_98;
  uint local_6c;
  
                    /* try { // try from 010c8940 to 011c8943 has its CatchHandler @ 010c8cb0 */
  puVar11 = (undefined8 *)*param_1;
  lVar10 = *(long *)*puVar11;
  cVar3 = *(char *)(lVar10 + 0x2ac);
  local_98 = 1;
  if (cVar3 != '\0') {
    if (cVar3 != '\x01') {
                    /* catch() { ... } // from try @ 010c8980 with catch @ 010c8bb4
                       try { // try from 010c8bb4 to 011c8d37 has its CatchHandler @ 010c84c8 */
                    /* catch() { ... } // from try @ 010c89e8 with catch @ 010c8bb8
                       catch() { ... } // from try @ 010c8bac with catch @ 010c8bb8 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 010c886c with catch @ 010c8bc0
                       catch() { ... } // from try @ 010c8ba4 with catch @ 010c8bc0 */
      png_error(lVar10,"unknown interlace type");
    }
    local_98 = 7;
  }
  iVar1 = *(int *)((long)puVar11 + 0xc);
  uVar2 = *(uint *)(puVar11 + 2);
                    /* try { // try from 010c8980 to 011c8987 has its CatchHandler @ 010c8bb4 */
  uVar16 = 0;
  lVar15 = param_1[7];
  uVar8 = *(uint *)((long)puVar11 + 0x14) & 2 | 1;
  uVar20 = (ulong)uVar8;
  uVar7 = uVar8 * iVar1;
  do {
                    /* try { // try from 010c89e8 to 011c89ef has its CatchHandler @ 010c8bb8 */
                    /* try { // try from 010c89f0 to 011c8a17 has its CatchHandler @ 010c84c8 */
    if (cVar3 == '\x01') {
      uVar19 = (int)(7 - uVar16) >> 1;
                    /* try { // try from 010c8a18 to 011c8a1f has its CatchHandler @ 010c8c6c */
      uVar9 = uVar19;
      if (uVar16 - 1 == 0 || (int)uVar16 < 1) {
        uVar9 = 3;
      }
      local_6c = (uVar16 & 1) << (ulong)(3U - ((int)(uVar16 + 1) >> 1) & 0x1f) & 7;
      if ((iVar1 + -1 + (1 << (ulong)(uVar9 & 0x1f))) - local_6c >> (ulong)(uVar9 & 0x1f) != 0) {
        local_6c = local_6c * uVar8;
                    /* try { // try from 010c8a4c to 011c8a67 has its CatchHandler @ 010c8c30 */
        uVar9 = uVar8 << (ulong)(uVar19 & 0x1f);
        uVar19 = (uVar16 & 1 ^ 1) << (ulong)(3U - ((int)uVar16 >> 1) & 0x1f) & 7;
        if ((int)uVar16 < 3) {
          uVar17 = 8;
        }
        else {
                    /* try { // try from 010c8a68 to 011c8ba3 has its CatchHandler @ 010c84c8 */
          uVar17 = 8 >> (ulong)((int)(uVar16 - 1) >> 1 & 0x1f);
        }
        goto LAB_010c8a90;
      }
    }
    else {
      local_6c = 0;
      uVar19 = 0;
      uVar17 = 1;
      uVar9 = uVar8;
LAB_010c8a90:
      if (uVar19 < uVar2) {
        do {
          lVar18 = param_1[5];
          png_read_row(lVar10,lVar18,0);
          if (local_6c < uVar7) {
            lVar12 = param_1[6] + lVar15 * (ulong)uVar19;
            uVar13 = lVar12 + (ulong)local_6c;
            do {
              bVar4 = *(byte *)(lVar18 + uVar20);
              if (bVar4 != 0) {
                if (bVar4 == 0xff) {
                  uVar14 = 0;
                  do {
                    *(undefined1 *)(uVar13 + uVar14) = *(undefined1 *)(lVar18 + uVar14);
                    uVar14 = uVar14 + 1;
                  } while (uVar20 != uVar14);
                }
                else {
                  uVar14 = 0;
                  do {
                    uVar6 = (uint)*(byte *)(lVar18 + uVar14) * 0xffff +
                            (uint)(ushort)(&png_sRGB_table)[*(byte *)(uVar13 + uVar14)] *
                            (bVar4 ^ 0xff);
                    uVar5 = uVar6 >> 0xf;
                    *(char *)(uVar13 + uVar14) =
                         (char)((uint)*(ushort *)(png_sRGB_base + (ulong)uVar5 * 2) +
                                ((uVar6 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar5] >> 0xc) >> 8);
                    uVar14 = uVar14 + 1;
                  } while (uVar20 != uVar14);
                }
              }
              uVar13 = uVar13 + uVar9;
              lVar18 = lVar18 + (ulong)(uVar8 + 1);
            } while (uVar13 < lVar12 + (ulong)uVar7);
          }
          uVar19 = uVar19 + uVar17;
        } while (uVar19 < uVar2);
      }
    }
    uVar16 = uVar16 + 1;
    if (local_98 <= (int)uVar16) {
                    /* try { // try from 010c8ba4 to 011c8bab has its CatchHandler @ 010c8bc0 */
                    /* try { // try from 010c8bac to 011c8bb3 has its CatchHandler @ 010c8bb8 */
      return 1;
    }
    cVar3 = *(char *)(lVar10 + 0x2ac);
  } while( true );
}

