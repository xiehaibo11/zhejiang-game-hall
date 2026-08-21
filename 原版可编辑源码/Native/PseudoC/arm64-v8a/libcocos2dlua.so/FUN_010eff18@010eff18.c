
void FUN_010eff18(long param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar13;
  byte bVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  long lVar21;
  undefined8 *puVar22;
  long *plVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  uint uVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  int iVar34;
  long local_9f0 [257];
  byte local_1e8 [128];
  byte local_168 [256];
  long local_68;
  uint uVar12;
  
                    /* catch() { ... } // from try @ 010efef0 with catch @ 010eff20 */
                    /* catch() { ... } // from try @ 010efee8 with catch @ 010eff34 */
  lVar16 = tpidr_el0;
  param_2 = param_2 >> 2;
  uVar4 = param_3 >> 3;
                    /* catch() { ... } // from try @ 010efedc with catch @ 010eff4c */
  uVar5 = param_4 >> 2;
  local_68 = *(long *)(lVar16 + 0x28);
  uVar13 = *(uint *)(param_1 + 0x9c);
                    /* catch() { ... } // from try @ 010efecc with catch @ 010eff64 */
  lVar21 = *(long *)(*(long *)(param_1 + 0x290) + 0x30);
  uVar6 = param_2 << 5 | 4;
  uVar7 = uVar4 << 5 | 2;
  uVar8 = uVar5 << 5 | 4;
  if ((int)uVar13 < 1) {
    uVar30 = 0;
  }
  else {
    puVar22 = *(undefined8 **)(param_1 + 0xa0);
    pbVar18 = (byte *)*puVar22;
    pbVar19 = (byte *)puVar22[1];
    pbVar20 = (byte *)puVar22[2];
    uVar30 = param_2 << 5 | 0x1c;
    uVar9 = uVar4 << 5 | 0x1e;
    uVar10 = uVar5 << 5 | 0x1c;
    lVar29 = 0x7fffffff;
    plVar23 = local_9f0;
    uVar31 = (ulong)uVar13;
    do {
      bVar14 = *pbVar18;
      uVar11 = uVar6;
      uVar12 = uVar30;
      if (((int)(uint)bVar14 < (int)uVar6) ||
         (uVar25 = (uint)bVar14, uVar11 = uVar30, uVar12 = uVar6, (int)uVar30 < (int)uVar25)) {
        iVar34 = (bVar14 - uVar11) * 2;
        iVar15 = (bVar14 - uVar12) * 2;
        lVar32 = (long)iVar34 * (long)iVar34;
        lVar33 = (long)iVar15 * (long)iVar15;
      }
      else {
        if ((int)(uVar30 + uVar6) >> 1 < (int)uVar25) {
          uVar11 = uVar6;
        }
        lVar32 = 0;
        iVar34 = (uVar25 - uVar11) * 2;
        lVar33 = (long)iVar34 * (long)iVar34;
      }
      bVar14 = *pbVar19;
      uVar26 = (ulong)bVar14;
      uVar11 = uVar7;
      uVar12 = uVar9;
      if (((int)(uint)bVar14 < (int)uVar7) ||
         (uVar11 = uVar9, uVar12 = uVar7, (int)uVar9 < (int)(uint)bVar14)) {
        lVar28 = (uVar26 - (long)(int)uVar11) * 3;
        lVar27 = (uVar26 - (long)(int)uVar12) * 3;
        lVar32 = lVar32 + lVar28 * lVar28;
        lVar27 = lVar27 * lVar27;
      }
      else {
        if ((int)(uVar9 + uVar7) >> 1 < (int)(uint)bVar14) {
          uVar11 = uVar7;
        }
        lVar27 = (uVar26 - (long)(int)uVar11) * 3;
        lVar27 = lVar27 * lVar27;
      }
      bVar14 = *pbVar20;
      uVar26 = (ulong)bVar14;
      uVar11 = uVar8;
      uVar12 = uVar10;
      if (((int)(uint)bVar14 < (int)uVar8) ||
         (uVar11 = uVar10, uVar12 = uVar8, (int)uVar10 < (int)(uint)bVar14)) {
        lVar32 = lVar32 + (uVar26 - (long)(int)uVar11) * (uVar26 - (long)(int)uVar11);
        lVar28 = (uVar26 - (long)(int)uVar12) * (uVar26 - (long)(int)uVar12);
      }
      else {
        if ((int)(uVar10 + uVar8) >> 1 < (int)(uint)bVar14) {
          uVar11 = uVar8;
        }
        lVar28 = (uVar26 - (long)(int)uVar11) * (uVar26 - (long)(int)uVar11);
      }
      lVar28 = lVar27 + lVar33 + lVar28;
      *plVar23 = lVar32;
      uVar31 = uVar31 - 1;
      pbVar20 = pbVar20 + 1;
      pbVar19 = pbVar19 + 1;
      if (lVar29 <= lVar28) {
        lVar28 = lVar29;
      }
      pbVar18 = pbVar18 + 1;
      lVar29 = lVar28;
      plVar23 = plVar23 + 1;
    } while (uVar31 != 0);
    uVar31 = 0;
    uVar30 = 0;
    do {
      if (local_9f0[uVar31] <= lVar28) {
        local_168[(int)uVar30] = (byte)uVar31;
        uVar30 = uVar30 + 1;
      }
      uVar31 = uVar31 + 1;
    } while (uVar13 != uVar31);
  }
  local_9f0[1] = 0x7fffffff;
  local_9f0[0] = 0x7fffffff;
  local_9f0[3] = 0x7fffffff;
  local_9f0[2] = 0x7fffffff;
  local_9f0[5] = 0x7fffffff;
  local_9f0[4] = 0x7fffffff;
  local_9f0[7] = 0x7fffffff;
  local_9f0[6] = 0x7fffffff;
  local_9f0[9] = 0x7fffffff;
  local_9f0[8] = 0x7fffffff;
  local_9f0[0xb] = 0x7fffffff;
  local_9f0[10] = 0x7fffffff;
  local_9f0[0xd] = 0x7fffffff;
  local_9f0[0xc] = 0x7fffffff;
  local_9f0[0xf] = 0x7fffffff;
  local_9f0[0xe] = 0x7fffffff;
  local_9f0[0x11] = 0x7fffffff;
  local_9f0[0x10] = 0x7fffffff;
  local_9f0[0x13] = 0x7fffffff;
  local_9f0[0x12] = 0x7fffffff;
  local_9f0[0x15] = 0x7fffffff;
  local_9f0[0x14] = 0x7fffffff;
  local_9f0[0x17] = 0x7fffffff;
  local_9f0[0x16] = 0x7fffffff;
  local_9f0[0x19] = 0x7fffffff;
  local_9f0[0x18] = 0x7fffffff;
  local_9f0[0x1b] = 0x7fffffff;
  local_9f0[0x1a] = 0x7fffffff;
  local_9f0[0x1d] = 0x7fffffff;
  local_9f0[0x1c] = 0x7fffffff;
  local_9f0[0x1f] = 0x7fffffff;
  local_9f0[0x1e] = 0x7fffffff;
  local_9f0[0x21] = 0x7fffffff;
  local_9f0[0x20] = 0x7fffffff;
  local_9f0[0x23] = 0x7fffffff;
  local_9f0[0x22] = 0x7fffffff;
  local_9f0[0x25] = 0x7fffffff;
  local_9f0[0x24] = 0x7fffffff;
  local_9f0[0x27] = 0x7fffffff;
  local_9f0[0x26] = 0x7fffffff;
  local_9f0[0x29] = 0x7fffffff;
  local_9f0[0x28] = 0x7fffffff;
  local_9f0[0x2b] = 0x7fffffff;
  local_9f0[0x2a] = 0x7fffffff;
  local_9f0[0x2d] = 0x7fffffff;
  local_9f0[0x2c] = 0x7fffffff;
  local_9f0[0x2f] = 0x7fffffff;
  local_9f0[0x2e] = 0x7fffffff;
  local_9f0[0x31] = 0x7fffffff;
  local_9f0[0x30] = 0x7fffffff;
  local_9f0[0x33] = 0x7fffffff;
  local_9f0[0x32] = 0x7fffffff;
  local_9f0[0x35] = 0x7fffffff;
  local_9f0[0x34] = 0x7fffffff;
  local_9f0[0x37] = 0x7fffffff;
  local_9f0[0x36] = 0x7fffffff;
  local_9f0[0x39] = 0x7fffffff;
  local_9f0[0x38] = 0x7fffffff;
  local_9f0[0x3b] = 0x7fffffff;
  local_9f0[0x3a] = 0x7fffffff;
  local_9f0[0x3d] = 0x7fffffff;
  local_9f0[0x3c] = 0x7fffffff;
  local_9f0[0x3f] = 0x7fffffff;
  local_9f0[0x3e] = 0x7fffffff;
  local_9f0[0x41] = 0x7fffffff;
  local_9f0[0x40] = 0x7fffffff;
  local_9f0[0x43] = 0x7fffffff;
  local_9f0[0x42] = 0x7fffffff;
  local_9f0[0x45] = 0x7fffffff;
  local_9f0[0x44] = 0x7fffffff;
  local_9f0[0x47] = 0x7fffffff;
  local_9f0[0x46] = 0x7fffffff;
  local_9f0[0x49] = 0x7fffffff;
  local_9f0[0x48] = 0x7fffffff;
  local_9f0[0x4b] = 0x7fffffff;
  local_9f0[0x4a] = 0x7fffffff;
  local_9f0[0x4d] = 0x7fffffff;
  local_9f0[0x4c] = 0x7fffffff;
  local_9f0[0x4f] = 0x7fffffff;
  local_9f0[0x4e] = 0x7fffffff;
  local_9f0[0x51] = 0x7fffffff;
  local_9f0[0x50] = 0x7fffffff;
  local_9f0[0x53] = 0x7fffffff;
  local_9f0[0x52] = 0x7fffffff;
  local_9f0[0x55] = 0x7fffffff;
  local_9f0[0x54] = 0x7fffffff;
  local_9f0[0x57] = 0x7fffffff;
  local_9f0[0x56] = 0x7fffffff;
  local_9f0[0x59] = 0x7fffffff;
  local_9f0[0x58] = 0x7fffffff;
  local_9f0[0x5b] = 0x7fffffff;
  local_9f0[0x5a] = 0x7fffffff;
  local_9f0[0x5d] = 0x7fffffff;
  local_9f0[0x5c] = 0x7fffffff;
  local_9f0[0x5f] = 0x7fffffff;
  local_9f0[0x5e] = 0x7fffffff;
  local_9f0[0x61] = 0x7fffffff;
  local_9f0[0x60] = 0x7fffffff;
  local_9f0[99] = 0x7fffffff;
  local_9f0[0x62] = 0x7fffffff;
  local_9f0[0x65] = 0x7fffffff;
  local_9f0[100] = 0x7fffffff;
  local_9f0[0x67] = 0x7fffffff;
  local_9f0[0x66] = 0x7fffffff;
  local_9f0[0x69] = 0x7fffffff;
  local_9f0[0x68] = 0x7fffffff;
  local_9f0[0x6b] = 0x7fffffff;
  local_9f0[0x6a] = 0x7fffffff;
  local_9f0[0x6d] = 0x7fffffff;
  local_9f0[0x6c] = 0x7fffffff;
  local_9f0[0x6f] = 0x7fffffff;
  local_9f0[0x6e] = 0x7fffffff;
  local_9f0[0x71] = 0x7fffffff;
  local_9f0[0x70] = 0x7fffffff;
  local_9f0[0x73] = 0x7fffffff;
  local_9f0[0x72] = 0x7fffffff;
  local_9f0[0x75] = 0x7fffffff;
  local_9f0[0x74] = 0x7fffffff;
  local_9f0[0x77] = 0x7fffffff;
  local_9f0[0x76] = 0x7fffffff;
  local_9f0[0x79] = 0x7fffffff;
  local_9f0[0x78] = 0x7fffffff;
  local_9f0[0x7b] = 0x7fffffff;
  local_9f0[0x7a] = 0x7fffffff;
  local_9f0[0x7d] = 0x7fffffff;
  local_9f0[0x7c] = 0x7fffffff;
  local_9f0[0x7f] = 0x7fffffff;
  local_9f0[0x7e] = 0x7fffffff;
  if (0 < (int)uVar30) {
    uVar31 = 0;
                    /* try { // try from 010f01e0 to 011f0243 has its CatchHandler @ 010f01e0
                       catch() { ... } // from try @ 010f01e0 with catch @ 010f01e0
                       catch() { ... } // from try @ 010f0260 with catch @ 010f01e0 */
    do {
      plVar23 = *(long **)(param_1 + 0xa0);
      bVar14 = local_168[uVar31];
      uVar26 = (ulong)bVar14;
      iVar34 = 4;
      lVar17 = (long)(int)uVar7 - (ulong)*(byte *)(plVar23[1] + uVar26);
      uVar9 = uVar6 - *(byte *)(*plVar23 + uVar26);
      lVar28 = lVar17 * 3;
      lVar24 = (long)(int)uVar8 - (ulong)*(byte *)(plVar23[2] + uVar26);
      uVar13 = uVar9 * 2;
      lVar33 = lVar24 * 0x10;
      lVar17 = lVar17 * 0x48;
                    /* try { // try from 010f0244 to 011f025f has its CatchHandler @ 010f0290 */
      lVar29 = lVar33 + 0x40;
      lVar32 = lVar33 + 0xc0;
      lVar33 = lVar33 + 0x140;
      lVar27 = (-(ulong)((uVar9 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000 | (ulong)uVar13 << 5) +
               0x100;
                    /* try { // try from 010f0260 to 011f02a3 has its CatchHandler @ 010f01e0 */
      lVar28 = lVar28 * lVar28 + (long)(int)uVar13 * (long)(int)uVar13 + lVar24 * lVar24;
      pbVar20 = local_1e8 + 0xf;
      plVar23 = local_9f0 + 0x10;
      do {
        if (lVar28 < plVar23[-0x10]) {
          plVar23[-0x10] = lVar28;
          pbVar20[-0xf] = bVar14;
        }
        lVar24 = lVar28 + lVar29;
                    /* catch() { ... } // from try @ 010f0244 with catch @ 010f0290 */
        if (lVar24 < plVar23[-0xf]) {
          plVar23[-0xf] = lVar24;
          pbVar20[-0xe] = bVar14;
        }
        lVar24 = lVar24 + lVar32;
        if (lVar24 < plVar23[-0xe]) {
          plVar23[-0xe] = lVar24;
          pbVar20[-0xd] = bVar14;
        }
        if (lVar24 + lVar33 < plVar23[-0xd]) {
          plVar23[-0xd] = lVar24 + lVar33;
          pbVar20[-0xc] = bVar14;
        }
        lVar24 = lVar17 + 0x90 + lVar28;
        if (lVar24 < plVar23[-0xc]) {
          plVar23[-0xc] = lVar24;
          pbVar20[-0xb] = bVar14;
        }
        lVar1 = lVar24 + lVar29;
        if (lVar1 < plVar23[-0xb]) {
          plVar23[-0xb] = lVar1;
          pbVar20[-10] = bVar14;
        }
        lVar1 = lVar1 + lVar32;
        if (lVar1 < plVar23[-10]) {
          plVar23[-10] = lVar1;
          pbVar20[-9] = bVar14;
        }
                    /* try { // try from 010f0320 to 011f0387 has its CatchHandler @ 010f0320
                       catch() { ... } // from try @ 010f0320 with catch @ 010f0320
                       catch() { ... } // from try @ 010f058c with catch @ 010f0320 */
        if (lVar1 + lVar33 < plVar23[-9]) {
          plVar23[-9] = lVar1 + lVar33;
          pbVar20[-8] = bVar14;
        }
        lVar24 = lVar17 + 0x1b0 + lVar24;
        if (lVar24 < plVar23[-8]) {
          plVar23[-8] = lVar24;
          pbVar20[-7] = bVar14;
        }
        lVar1 = lVar24 + lVar29;
        if (lVar1 < plVar23[-7]) {
          plVar23[-7] = lVar1;
          pbVar20[-6] = bVar14;
        }
        lVar1 = lVar1 + lVar32;
        if (lVar1 < plVar23[-6]) {
          plVar23[-6] = lVar1;
          pbVar20[-5] = bVar14;
        }
        if (lVar1 + lVar33 < plVar23[-5]) {
                    /* try { // try from 010f0388 to 011f0393 has its CatchHandler @ 010f0678 */
          plVar23[-5] = lVar1 + lVar33;
          pbVar20[-4] = bVar14;
        }
        lVar24 = lVar17 + 0x2d0 + lVar24;
        if (lVar24 < plVar23[-4]) {
          plVar23[-4] = lVar24;
          pbVar20[-3] = bVar14;
        }
        lVar1 = lVar24 + lVar29;
        if (lVar1 < plVar23[-3]) {
          plVar23[-3] = lVar1;
          pbVar20[-2] = bVar14;
        }
        lVar1 = lVar1 + lVar32;
        if (lVar1 < plVar23[-2]) {
          plVar23[-2] = lVar1;
          pbVar20[-1] = bVar14;
        }
                    /* try { // try from 010f03d8 to 011f03db has its CatchHandler @ 010f0648 */
                    /* try { // try from 010f03dc to 011f03e7 has its CatchHandler @ 010f0674 */
        if (lVar1 + lVar33 < plVar23[-1]) {
          plVar23[-1] = lVar1 + lVar33;
          *pbVar20 = bVar14;
        }
        lVar24 = lVar17 + 0x3f0 + lVar24;
        if (lVar24 < *plVar23) {
          *plVar23 = lVar24;
                    /* try { // try from 010f0404 to 011f0407 has its CatchHandler @ 010f0634 */
          pbVar20[1] = bVar14;
        }
                    /* try { // try from 010f040c to 011f0493 has its CatchHandler @ 010f0674 */
        lVar1 = lVar24 + lVar29;
        if (lVar1 < plVar23[1]) {
          plVar23[1] = lVar1;
          pbVar20[2] = bVar14;
        }
        lVar1 = lVar1 + lVar32;
        if (lVar1 < plVar23[2]) {
          plVar23[2] = lVar1;
          pbVar20[3] = bVar14;
        }
        if (lVar1 + lVar33 < plVar23[3]) {
          plVar23[3] = lVar1 + lVar33;
          pbVar20[4] = bVar14;
        }
        lVar24 = lVar17 + 0x510 + lVar24;
        if (lVar24 < plVar23[4]) {
          plVar23[4] = lVar24;
          pbVar20[5] = bVar14;
        }
        lVar1 = lVar24 + lVar29;
        if (lVar1 < plVar23[5]) {
          plVar23[5] = lVar1;
          pbVar20[6] = bVar14;
        }
        lVar1 = lVar1 + lVar32;
        if (lVar1 < plVar23[6]) {
          plVar23[6] = lVar1;
                    /* try { // try from 010f0494 to 011f04ab has its CatchHandler @ 010f0610 */
          pbVar20[7] = bVar14;
        }
        if (lVar1 + lVar33 < plVar23[7]) {
          plVar23[7] = lVar1 + lVar33;
          pbVar20[8] = bVar14;
        }
        lVar24 = lVar17 + 0x630 + lVar24;
        if (lVar24 < plVar23[8]) {
          plVar23[8] = lVar24;
          pbVar20[9] = bVar14;
        }
        lVar1 = lVar24 + lVar29;
                    /* try { // try from 010f04d0 to 011f04e3 has its CatchHandler @ 010f0614 */
        if (lVar1 < plVar23[9]) {
          plVar23[9] = lVar1;
          pbVar20[10] = bVar14;
        }
        lVar1 = lVar1 + lVar32;
                    /* try { // try from 010f04e8 to 011f04ef has its CatchHandler @ 010f060c */
        if (lVar1 < plVar23[10]) {
                    /* try { // try from 010f04f0 to 011f04fb has its CatchHandler @ 010f05f4 */
          plVar23[10] = lVar1;
          pbVar20[0xb] = bVar14;
        }
        if (lVar1 + lVar33 < plVar23[0xb]) {
          plVar23[0xb] = lVar1 + lVar33;
          pbVar20[0xc] = bVar14;
        }
        lVar24 = lVar17 + 0x750 + lVar24;
                    /* try { // try from 010f0518 to 011f051b has its CatchHandler @ 010f05d8 */
                    /* try { // try from 010f051c to 011f053f has its CatchHandler @ 010f05f0 */
        if (lVar24 < plVar23[0xc]) {
          plVar23[0xc] = lVar24;
          pbVar20[0xd] = bVar14;
        }
        lVar24 = lVar24 + lVar29;
        if (lVar24 < plVar23[0xd]) {
          plVar23[0xd] = lVar24;
          pbVar20[0xe] = bVar14;
        }
        lVar24 = lVar24 + lVar32;
                    /* try { // try from 010f054c to 011f0557 has its CatchHandler @ 010f0614 */
        if (lVar24 < plVar23[0xe]) {
          plVar23[0xe] = lVar24;
          pbVar20[0xf] = bVar14;
        }
        if (lVar24 + lVar33 < plVar23[0xf]) {
          plVar23[0xf] = lVar24 + lVar33;
          pbVar20[0x10] = bVar14;
        }
        iVar34 = iVar34 + -1;
        lVar28 = lVar28 + lVar27;
                    /* try { // try from 010f0578 to 011f057f has its CatchHandler @ 010f0674 */
        lVar27 = lVar27 + 0x200;
        plVar23 = plVar23 + 0x20;
                    /* try { // try from 010f0584 to 011f058b has its CatchHandler @ 010f0678 */
        pbVar20 = pbVar20 + 0x20;
      } while (0 < iVar34);
                    /* try { // try from 010f058c to 011f068b has its CatchHandler @ 010f0320 */
      uVar31 = uVar31 + 1;
    } while (uVar31 != uVar30);
  }
  lVar32 = (long)(int)uVar4;
                    /* catch() { ... } // from try @ 010f0518 with catch @ 010f05d8 */
  lVar29 = 0;
  pbVar20 = local_1e8;
                    /* catch() { ... } // from try @ 010f051c with catch @ 010f05f0 */
  lVar21 = lVar21 + (long)(param_2 << 2) * 8;
                    /* catch() { ... } // from try @ 010f04f0 with catch @ 010f05f4 */
  lVar33 = (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2) * 2;
  do {
    lVar27 = *(long *)(lVar21 + lVar29);
    psVar2 = (short *)(lVar27 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3) *
                                0x40 + lVar33);
                    /* catch() { ... } // from try @ 010f04e8 with catch @ 010f060c */
    *psVar2 = *pbVar20 + 1;
                    /* catch() { ... } // from try @ 010f0494 with catch @ 010f0610 */
                    /* catch() { ... } // from try @ 010f04d0 with catch @ 010f0614
                       catch() { ... } // from try @ 010f054c with catch @ 010f0614 */
    psVar2[1] = pbVar20[1] + 1;
    psVar2[2] = pbVar20[2] + 1;
    psVar2[3] = pbVar20[3] + 1;
                    /* catch() { ... } // from try @ 010f0404 with catch @ 010f0634 */
    psVar2 = (short *)(lVar27 + (lVar32 << 3 | 1U) * 0x40 + lVar33);
    *psVar2 = pbVar20[4] + 1;
                    /* catch() { ... } // from try @ 010f03d8 with catch @ 010f0648 */
    psVar2[1] = pbVar20[5] + 1;
    psVar2[2] = pbVar20[6] + 1;
    psVar2[3] = pbVar20[7] + 1;
                    /* catch() { ... } // from try @ 010f03dc with catch @ 010f0674
                       catch() { ... } // from try @ 010f040c with catch @ 010f0674
                       catch() { ... } // from try @ 010f0578 with catch @ 010f0674 */
    psVar2 = (short *)(lVar27 + (lVar32 << 3 | 2U) * 0x40 + lVar33);
                    /* catch() { ... } // from try @ 010f0388 with catch @ 010f0678
                       catch() { ... } // from try @ 010f0584 with catch @ 010f0678 */
    *psVar2 = pbVar20[8] + 1;
    psVar3 = (short *)(lVar27 + (lVar32 << 3 | 3U) * 0x40 + lVar33);
                    /* try { // try from 010f068c to 011f071b has its CatchHandler @ 010f068c
                       catch() { ... } // from try @ 010f068c with catch @ 010f068c
                       catch() { ... } // from try @ 010f0720 with catch @ 010f068c */
    psVar2[1] = pbVar20[9] + 1;
    psVar2[2] = pbVar20[10] + 1;
    psVar2[3] = pbVar20[0xb] + 1;
    *psVar3 = pbVar20[0xc] + 1;
    psVar3[1] = pbVar20[0xd] + 1;
    psVar3[2] = pbVar20[0xe] + 1;
    psVar3[3] = pbVar20[0xf] + 1;
    lVar27 = *(long *)(lVar21 + lVar29);
    lVar29 = lVar29 + 8;
    psVar2 = (short *)(lVar27 + (lVar32 << 3 | 4U) * 0x40 + lVar33);
    *psVar2 = pbVar20[0x10] + 1;
    psVar2[1] = pbVar20[0x11] + 1;
    psVar2[2] = pbVar20[0x12] + 1;
                    /* try { // try from 010f071c to 011f071f has its CatchHandler @ 010f0790 */
    psVar2[3] = pbVar20[0x13] + 1;
                    /* try { // try from 010f0720 to 011f07ab has its CatchHandler @ 010f068c */
    psVar2 = (short *)(lVar27 + (lVar32 << 3 | 5U) * 0x40 + lVar33);
    *psVar2 = pbVar20[0x14] + 1;
    psVar2[1] = pbVar20[0x15] + 1;
    psVar2[2] = pbVar20[0x16] + 1;
    psVar2[3] = pbVar20[0x17] + 1;
    psVar2 = (short *)(lVar27 + (lVar32 << 3 | 6U) * 0x40 + lVar33);
    *psVar2 = pbVar20[0x18] + 1;
    psVar3 = (short *)(lVar27 + (lVar32 << 3 | 7U) * 0x40 + lVar33);
    psVar2[1] = pbVar20[0x19] + 1;
    psVar2[2] = pbVar20[0x1a] + 1;
                    /* catch() { ... } // from try @ 010f071c with catch @ 010f0790 */
    psVar2[3] = pbVar20[0x1b] + 1;
    *psVar3 = pbVar20[0x1c] + 1;
    psVar3[1] = pbVar20[0x1d] + 1;
    psVar3[2] = pbVar20[0x1e] + 1;
    pbVar19 = pbVar20 + 0x1f;
    pbVar20 = pbVar20 + 0x20;
    psVar3[3] = *pbVar19 + 1;
  } while (lVar29 != 0x20);
  if (*(long *)(lVar16 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 010f07ec to 011f0847 has its CatchHandler @ 010f07ec
                       catch() { ... } // from try @ 010f07ec with catch @ 010f07ec
                       catch() { ... } // from try @ 010f08d8 with catch @ 010f07ec */
  return;
}

