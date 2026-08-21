
undefined8 FUN_010c8570(undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  byte bVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  byte *pbVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  int local_88;
  
                    /* try { // try from 010c8580 to 011c8587 has its CatchHandler @ 010c8d74 */
                    /* try { // try from 010c858c to 011c8597 has its CatchHandler @ 010c8d54 */
  puVar11 = (undefined8 *)*param_1;
  lVar10 = *(long *)*puVar11;
  cVar8 = *(char *)(lVar10 + 0x2ac);
  local_88 = 1;
  if (cVar8 != '\0') {
                    /* try { // try from 010c85b4 to 011c85df has its CatchHandler @ 010c8d84 */
    if (cVar8 != '\x01') {
                    /* WARNING: Subroutine does not return */
      png_error(lVar10,"unknown interlace type");
    }
    local_88 = 7;
  }
  uVar5 = *(uint *)((long)puVar11 + 0xc);
  uVar6 = *(uint *)(puVar11 + 2);
  uVar16 = 0;
  lVar17 = param_1[6];
  iVar7 = *(int *)(param_1 + 9);
                    /* try { // try from 010c85e0 to 011c85eb has its CatchHandler @ 010c8d4c */
  lVar14 = param_1[7];
                    /* try { // try from 010c85f0 to 011c85fb has its CatchHandler @ 010c8d2c */
  do {
    if (cVar8 == '\x01') {
      uVar22 = (uVar16 & 1) << (ulong)(3U - ((int)(uVar16 + 1) >> 1) & 0x1f) & 7;
      uVar21 = (ulong)uVar22;
      uVar9 = (int)(7 - uVar16) >> 1;
      uVar18 = uVar9;
      if (uVar16 - 1 == 0 || (int)uVar16 < 1) {
        uVar18 = 3;
      }
      if (((uVar5 - 1) + (1 << (ulong)(uVar18 & 0x1f))) - uVar22 >> (ulong)(uVar18 & 0x1f) != 0) {
                    /* try { // try from 010c8670 to 011c8673 has its CatchHandler @ 010c8d14 */
        uVar9 = 1 << (ulong)(uVar9 & 0x1f);
                    /* try { // try from 010c8680 to 011c870f has its CatchHandler @ 010c8d8c */
        uVar22 = (uVar16 & 1 ^ 1) << (ulong)(3U - ((int)uVar16 >> 1) & 0x1f) & 7;
        if ((int)uVar16 < 3) {
          uVar18 = 8;
        }
        else {
          uVar18 = 8 >> (ulong)((int)(uVar16 - 1) >> 1 & 0x1f);
        }
        if (uVar22 < uVar6) goto LAB_010c86d4;
      }
    }
    else {
      uVar22 = 0;
      uVar21 = 0;
      uVar18 = 1;
      uVar9 = 1;
      if (uVar6 != 0) {
LAB_010c86d4:
        do {
          pbVar19 = (byte *)param_1[5];
          png_read_row(lVar10,pbVar19,0);
          if (iVar7 - 1U < 4) {
            lVar15 = lVar17 + lVar14 * (ulong)uVar22;
            pbVar3 = (byte *)(lVar15 + (ulong)uVar5);
                    /* try { // try from 010c8718 to 011c872b has its CatchHandler @ 010c8d0c */
            pbVar12 = (byte *)(lVar15 + uVar21);
            uVar20 = (uint)uVar21;
            switch(iVar7) {
            case 1:
              if (uVar20 < uVar5) {
                do {
                  bVar13 = pbVar19[1];
                  if (bVar13 < 0xe6) {
                    if (bVar13 < 0x1a) {
                      bVar13 = 0xe7;
                    }
                    else {
                      bVar13 = ((char)((uint)bVar13 * 5 + 0x82 >> 8) * '\x06' +
                               (char)((uint)*pbVar19 * 5 + 0x82 >> 8)) - 0x1e;
                    }
                  }
                  else {
                    /* try { // try from 010c8744 to 011c874b has its CatchHandler @ 010c8bf8 */
                    bVar13 = (byte)((uint)*pbVar19 * 0xe7 + 0x80 >> 8);
                  }
                  *pbVar12 = bVar13;
                  pbVar12 = pbVar12 + uVar9;
                  pbVar19 = pbVar19 + 2;
                } while (pbVar12 < pbVar3);
              }
              break;
            case 2:
              if (uVar20 < uVar5) {
                do {
                  bVar13 = *pbVar19;
                  pbVar1 = pbVar19 + 1;
                  pbVar19 = pbVar19 + 2;
                  if (bVar13 == 0xfe) {
                    bVar13 = 0xff;
                  }
                  bVar4 = 0xfe;
                  if (*pbVar1 != 0) {
                    bVar4 = bVar13;
                  }
                    /* try { // try from 010c88d4 to 011c88f7 has its CatchHandler @ 010c8c10 */
                  *pbVar12 = bVar4;
                  pbVar12 = pbVar12 + uVar9;
                } while (pbVar12 < pbVar3);
              }
              break;
            case 3:
              if (uVar20 < uVar5) {
                do {
                  bVar13 = *pbVar19;
                  pbVar1 = pbVar19 + 1;
                  pbVar2 = pbVar19 + 2;
                  pbVar19 = pbVar19 + 3;
                  *pbVar12 = ((char)((uint)bVar13 * 5 + 0x82 >> 8) * '\x06' +
                             (char)((uint)*pbVar1 * 5 + 0x82 >> 8)) * '\x06' +
                             (char)((uint)*pbVar2 * 5 + 0x82 >> 8);
                  pbVar12 = pbVar12 + uVar9;
                    /* try { // try from 010c87e0 to 011c880b has its CatchHandler @ 010c8c28 */
                } while (pbVar12 < pbVar3);
              }
              break;
            case 4:
              if (uVar20 < uVar5) {
                pbVar19 = pbVar19 + 1;
                do {
                  if (pbVar19[2] < 0xc4) {
                    if (pbVar19[2] < 0x40) {
                      bVar13 = 0xd8;
                    }
                    else {
                      bVar13 = pbVar19[-1];
                      cVar8 = -0x27;
                    /* try { // try from 010c886c to 011c8873 has its CatchHandler @ 010c8bc0 */
                      if ((bVar13 & 0x40) != 0) {
                        cVar8 = -0x1e;
                      }
                    /* try { // try from 010c8874 to 011c889b has its CatchHandler @ 010c84c8 */
                      if ((bVar13 & 0x40) != 0) {
                        cVar8 = cVar8 + '\x03';
                      }
                      bVar13 = ((bVar13 >> 6 & 1) - ((char)bVar13 >> 7)) + cVar8;
                    }
                  }
                  else {
                    bVar13 = ((char)((uint)pbVar19[-1] * 5 + 0x82 >> 8) * '\x06' +
                             (char)((uint)*pbVar19 * 5 + 0x82 >> 8)) * '\x06' +
                             (char)((uint)pbVar19[1] * 5 + 0x82 >> 8);
                  }
                  *pbVar12 = bVar13;
                    /* try { // try from 010c889c to 011c88a3 has its CatchHandler @ 010c8cd8 */
                  pbVar12 = pbVar12 + uVar9;
                  pbVar19 = pbVar19 + 4;
                } while (pbVar12 < pbVar3);
              }
            }
          }
          uVar22 = uVar18 + uVar22;
        } while (uVar22 < uVar6);
      }
    }
                    /* try { // try from 010c85fc to 011c866f has its CatchHandler @ 010c84c8 */
    uVar16 = uVar16 + 1;
    if (local_88 <= (int)uVar16) {
                    /* try { // try from 010c88f8 to 011c893f has its CatchHandler @ 010c84c8 */
      return 1;
    }
    cVar8 = *(char *)(lVar10 + 0x2ac);
  } while( true );
}

