
void png_build_gamma_table(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  double dVar25;
  double dVar26;
  
  if ((*(long *)(param_1 + 0x2f0) != 0) || (*(long *)(param_1 + 0x2f8) != 0)) {
    png_warning(param_1,"gamma table being rebuilt");
    png_destroy_gamma_table(param_1);
  }
  iVar15 = 100000;
  if (param_2 < 9) {
    if (0 < *(int *)(param_1 + 0x2ec)) {
      dVar25 = (1e+15 / (double)(long)*(int *)(param_1 + 0x510)) / (double)*(int *)(param_1 + 0x2ec)
               + 0.5;
      dVar26 = (double)(long)dVar25;
                    /* try { // try from 010c05e8 to 011c062f has its CatchHandler @ 010c05e8
                       catch() { ... } // from try @ 010c05e8 with catch @ 010c05e8
                       catch() { ... } // from try @ 010c0664 with catch @ 010c05e8 */
      bVar11 = false;
      bVar12 = true;
      if (-2147483648.0 <= dVar26) {
        bVar11 = false;
        bVar12 = true;
        if (!NAN(dVar26)) {
          bVar11 = dVar26 == 2147483647.0;
          bVar12 = 2147483647.0 <= dVar26;
        }
      }
      iVar15 = (int)dVar25;
      if (bVar12 && !bVar11) {
        iVar15 = 0;
      }
    }
    puVar13 = (undefined8 *)png_malloc(param_1,0x100);
    *(undefined8 **)(param_1 + 0x2f0) = puVar13;
    if (iVar15 - 95000U < 0x2711) {
      puVar13[1] = 0xf0e0d0c0b0a0908;
      *puVar13 = 0x706050403020100;
      puVar13[3] = 0x1f1e1d1c1b1a1918;
      puVar13[2] = 0x1716151413121110;
      puVar13[5] = 0x2f2e2d2c2b2a2928;
      puVar13[4] = 0x2726252423222120;
      puVar13[7] = 0x3f3e3d3c3b3a3938;
      puVar13[6] = 0x3736353433323130;
      puVar13[9] = 0x4f4e4d4c4b4a4948;
      puVar13[8] = 0x4746454443424140;
      puVar13[0xb] = 0x5f5e5d5c5b5a5958;
      puVar13[10] = 0x5756555453525150;
      puVar13[0x15] = 0xafaeadacabaaa9a8;
      puVar13[0x14] = 0xa7a6a5a4a3a2a1a0;
      puVar13[0x17] = 0xbfbebdbcbbbab9b8;
      puVar13[0x16] = 0xb7b6b5b4b3b2b1b0;
      puVar13[0xd] = 0x6f6e6d6c6b6a6968;
      puVar13[0xc] = 0x6766656463626160;
      puVar13[0xf] = 0x7f7e7d7c7b7a7978;
      puVar13[0xe] = 0x7776757473727170;
      puVar13[0x11] = 0x8f8e8d8c8b8a8988;
      puVar13[0x10] = 0x8786858483828180;
      puVar13[0x13] = 0x9f9e9d9c9b9a9998;
      puVar13[0x12] = 0x9796959493929190;
      puVar13[0x19] = 0xcfcecdcccbcac9c8;
      puVar13[0x18] = 0xc7c6c5c4c3c2c1c0;
      puVar13[0x1b] = 0xdfdedddcdbdad9d8;
      puVar13[0x1a] = 0xd7d6d5d4d3d2d1d0;
      puVar13[0x1d] = 0xefeeedecebeae9e8;
      puVar13[0x1c] = 0xe7e6e5e4e3e2e1e0;
      puVar13[0x1f] = 0xfffefdfcfbfaf9f8;
      puVar13[0x1e] = 0xf7f6f5f4f3f2f1f0;
    }
    else {
      lVar22 = 0;
                    /* try { // try from 010c0630 to 011c0643 has its CatchHandler @ 010c0790 */
      do {
        iVar16 = (int)lVar22;
        if (iVar16 - 1U < 0xfe) {
          dVar25 = pow((double)iVar16 / 255.0,(double)iVar15 * 1e-05);
                    /* try { // try from 010c0658 to 011c0663 has its CatchHandler @ 010c0760 */
          iVar16 = (int)(dVar25 * 255.0 + 0.5);
        }
        *(char *)((long)puVar13 + lVar22) = (char)iVar16;
        lVar22 = lVar22 + 1;
      } while (lVar22 != 0x100);
    }
    if ((*(uint *)(param_1 + 0x16c) & 0x600080) == 0) {
      return;
    }
                    /* catch() { ... } // from try @ 010c0658 with catch @ 010c0760 */
    dVar25 = 10000000000.0 / (double)*(int *)(param_1 + 0x510) + 0.5;
    dVar26 = (double)(long)dVar25;
    bVar11 = false;
    bVar12 = true;
    if (-2147483648.0 <= dVar26) {
      bVar11 = false;
      bVar12 = true;
      if (!NAN(dVar26)) {
        bVar11 = dVar26 == 2147483647.0;
        bVar12 = 2147483647.0 <= dVar26;
      }
    }
    iVar15 = (int)dVar25;
    if (bVar12 && !bVar11) {
      iVar15 = 0;
    }
    puVar13 = (undefined8 *)png_malloc(param_1,0x100);
                    /* catch() { ... } // from try @ 010c0630 with catch @ 010c0790 */
    *(undefined8 **)(param_1 + 0x308) = puVar13;
    if (iVar15 - 95000U < 0x2711) {
                    /* try { // try from 010c096c to 011c097b has its CatchHandler @ 010c0a08 */
      puVar13[1] = 0xf0e0d0c0b0a0908;
      *puVar13 = 0x706050403020100;
      puVar13[3] = 0x1f1e1d1c1b1a1918;
      puVar13[2] = 0x1716151413121110;
                    /* try { // try from 010c098c to 011c09ab has its CatchHandler @ 010c0a24 */
      puVar13[5] = 0x2f2e2d2c2b2a2928;
      puVar13[4] = 0x2726252423222120;
      puVar13[7] = 0x3f3e3d3c3b3a3938;
      puVar13[6] = 0x3736353433323130;
                    /* try { // try from 010c09ac to 011c0a37 has its CatchHandler @ 010c092c */
      puVar13[9] = 0x4f4e4d4c4b4a4948;
      puVar13[8] = 0x4746454443424140;
      puVar13[0xb] = 0x5f5e5d5c5b5a5958;
      puVar13[10] = 0x5756555453525150;
      puVar13[0x15] = 0xafaeadacabaaa9a8;
      puVar13[0x14] = 0xa7a6a5a4a3a2a1a0;
      puVar13[0x17] = 0xbfbebdbcbbbab9b8;
      puVar13[0x16] = 0xb7b6b5b4b3b2b1b0;
      puVar13[0xd] = 0x6f6e6d6c6b6a6968;
      puVar13[0xc] = 0x6766656463626160;
      puVar13[0xf] = 0x7f7e7d7c7b7a7978;
      puVar13[0xe] = 0x7776757473727170;
      puVar13[0x11] = 0x8f8e8d8c8b8a8988;
      puVar13[0x10] = 0x8786858483828180;
      puVar13[0x13] = 0x9f9e9d9c9b9a9998;
      puVar13[0x12] = 0x9796959493929190;
      puVar13[0x19] = 0xcfcecdcccbcac9c8;
      puVar13[0x18] = 0xc7c6c5c4c3c2c1c0;
      puVar13[0x1b] = 0xdfdedddcdbdad9d8;
      puVar13[0x1a] = 0xd7d6d5d4d3d2d1d0;
      puVar13[0x1d] = 0xefeeedecebeae9e8;
      puVar13[0x1c] = 0xe7e6e5e4e3e2e1e0;
      puVar13[0x1f] = 0xfffefdfcfbfaf9f8;
      puVar13[0x1e] = 0xf7f6f5f4f3f2f1f0;
    }
    else {
                    /* try { // try from 010c07ac to 011c07eb has its CatchHandler @ 010c07ac
                       catch() { ... } // from try @ 010c07ac with catch @ 010c07ac
                       catch() { ... } // from try @ 010c082c with catch @ 010c07ac */
      lVar22 = 0;
      do {
        iVar16 = (int)lVar22;
        if (iVar16 - 1U < 0xfe) {
          dVar25 = pow((double)iVar16 / 255.0,(double)iVar15 * 1e-05);
          iVar16 = (int)(dVar25 * 255.0 + 0.5);
        }
        *(char *)((long)puVar13 + lVar22) = (char)iVar16;
                    /* try { // try from 010c07ec to 011c07fb has its CatchHandler @ 010c08ac */
        lVar22 = lVar22 + 1;
      } while (lVar22 != 0x100);
    }
    if (*(int *)(param_1 + 0x2ec) < 1) {
      iVar15 = *(int *)(param_1 + 0x510);
    }
    else {
      dVar25 = 10000000000.0 / (double)*(int *)(param_1 + 0x2ec) + 0.5;
      dVar26 = (double)(long)dVar25;
      bVar11 = false;
      bVar12 = true;
      if (-2147483648.0 <= dVar26) {
        bVar11 = false;
        bVar12 = true;
        if (!NAN(dVar26)) {
          bVar11 = dVar26 == 2147483647.0;
          bVar12 = 2147483647.0 <= dVar26;
        }
      }
      iVar15 = (int)dVar25;
      if (bVar12 && !bVar11) {
        iVar15 = 0;
      }
    }
    puVar13 = (undefined8 *)png_malloc(param_1,0x100);
    *(undefined8 **)(param_1 + 0x300) = puVar13;
    if (10000 < iVar15 - 95000U) {
      lVar22 = 0;
      do {
        iVar16 = (int)lVar22;
        if (iVar16 - 1U < 0xfe) {
          dVar25 = pow((double)iVar16 / 255.0,(double)iVar15 * 1e-05);
          iVar16 = (int)(dVar25 * 255.0 + 0.5);
        }
        *(char *)((long)puVar13 + lVar22) = (char)iVar16;
        lVar22 = lVar22 + 1;
      } while (lVar22 != 0x100);
      return;
    }
    puVar13[1] = 0xf0e0d0c0b0a0908;
    *puVar13 = 0x706050403020100;
    puVar13[3] = 0x1f1e1d1c1b1a1918;
    puVar13[2] = 0x1716151413121110;
    puVar13[5] = 0x2f2e2d2c2b2a2928;
    puVar13[4] = 0x2726252423222120;
    puVar13[7] = 0x3f3e3d3c3b3a3938;
    puVar13[6] = 0x3736353433323130;
    puVar13[9] = 0x4f4e4d4c4b4a4948;
    puVar13[8] = 0x4746454443424140;
    puVar13[0xb] = 0x5f5e5d5c5b5a5958;
    puVar13[10] = 0x5756555453525150;
    puVar13[0x15] = 0xafaeadacabaaa9a8;
    puVar13[0x14] = 0xa7a6a5a4a3a2a1a0;
    puVar13[0x17] = 0xbfbebdbcbbbab9b8;
    puVar13[0x16] = 0xb7b6b5b4b3b2b1b0;
    puVar13[0xd] = 0x6f6e6d6c6b6a6968;
    puVar13[0xc] = 0x6766656463626160;
    puVar13[0xf] = 0x7f7e7d7c7b7a7978;
    puVar13[0xe] = 0x7776757473727170;
    puVar13[0x11] = 0x8f8e8d8c8b8a8988;
    puVar13[0x10] = 0x8786858483828180;
    puVar13[0x13] = 0x9f9e9d9c9b9a9998;
    puVar13[0x12] = 0x9796959493929190;
    puVar13[0x19] = 0xcfcecdcccbcac9c8;
    puVar13[0x18] = 0xc7c6c5c4c3c2c1c0;
    puVar13[0x1b] = 0xdfdedddcdbdad9d8;
    puVar13[0x1a] = 0xd7d6d5d4d3d2d1d0;
    puVar13[0x1d] = 0xefeeedecebeae9e8;
    puVar13[0x1c] = 0xe7e6e5e4e3e2e1e0;
    puVar13[0x1f] = 0xfffefdfcfbfaf9f8;
    puVar13[0x1e] = 0xf7f6f5f4f3f2f1f0;
    return;
  }
  if ((*(byte *)(param_1 + 0x2af) >> 1 & 1) == 0) {
    uVar17 = (uint)*(byte *)(param_1 + 0x323);
  }
  else {
                    /* try { // try from 010c080c to 011c082b has its CatchHandler @ 010c08c8 */
    bVar3 = *(byte *)(param_1 + 0x321);
    if (*(byte *)(param_1 + 0x321) <= *(byte *)(param_1 + 800)) {
      bVar3 = *(byte *)(param_1 + 800);
    }
    uVar17 = (uint)*(byte *)(param_1 + 0x322);
    if ((uint)*(byte *)(param_1 + 0x322) <= (uint)bVar3) {
      uVar17 = (uint)bVar3;
    }
  }
  uVar8 = 0x10 - uVar17;
                    /* try { // try from 010c082c to 011c08db has its CatchHandler @ 010c07ac */
  if (0xe < uVar17 - 1) {
    uVar8 = 0;
  }
  uVar17 = *(uint *)(param_1 + 0x16c) & 0x4000400;
  uVar2 = 5;
  if (4 < (uVar8 & 0xff) || uVar17 == 0) {
    uVar2 = uVar8;
  }
  iVar16 = *(int *)(param_1 + 0x2ec);
  if (7 < (uVar2 & 0xff)) {
    uVar2 = 8;
  }
  uVar8 = uVar2 & 0xff;
  *(uint *)(param_1 + 0x2e8) = uVar8;
  if (uVar17 == 0) {
    if (0 < iVar16) {
      dVar25 = (1e+15 / (double)(long)*(int *)(param_1 + 0x510)) / (double)iVar16 + 0.5;
      dVar26 = (double)(long)dVar25;
      bVar11 = false;
      bVar12 = true;
      if (-2147483648.0 <= dVar26) {
        bVar11 = false;
        bVar12 = true;
        if (!NAN(dVar26)) {
          bVar11 = dVar26 == 2147483647.0;
          bVar12 = 2147483647.0 <= dVar26;
        }
      }
      iVar15 = (int)dVar25;
      if (bVar12 && !bVar11) {
        iVar15 = 0;
      }
    }
                    /* try { // try from 010c092c to 011c096b has its CatchHandler @ 010c092c
                       catch() { ... } // from try @ 010c092c with catch @ 010c092c
                       catch() { ... } // from try @ 010c09ac with catch @ 010c092c */
    FUN_010c0e14(param_1,param_1 + 0x2f8,uVar8,iVar15);
  }
  else {
    if (iVar16 < 1) {
      dVar25 = 1.0;
    }
    else {
      dVar25 = (double)(long)*(int *)(param_1 + 0x510) * 1e-05 * (double)iVar16 + 0.5;
                    /* catch() { ... } // from try @ 010c07ec with catch @ 010c08ac */
      dVar26 = (double)(long)dVar25;
      bVar11 = false;
      bVar12 = true;
      if (-2147483648.0 <= dVar26) {
        bVar11 = false;
        bVar12 = true;
        if (!NAN(dVar26)) {
          bVar11 = dVar26 == 2147483647.0;
          bVar12 = 2147483647.0 <= dVar26;
        }
      }
      dVar25 = (double)(int)dVar25 * 1e-05;
      if (bVar12 && !bVar11) {
        dVar25 = 0.0;
      }
    }
                    /* catch() { ... } // from try @ 010c096c with catch @ 010c0a08 */
    uVar9 = 8 - uVar8;
    uVar17 = 1 << (ulong)(uVar9 & 0x1f);
                    /* catch() { ... } // from try @ 010c098c with catch @ 010c0a24 */
    lVar22 = png_calloc(param_1,(ulong)uVar17 << 3);
    uVar23 = 0;
    *(long *)(param_1 + 0x2f8) = lVar22;
    do {
      uVar14 = png_malloc(param_1,0x200);
      *(undefined8 *)(lVar22 + uVar23 * 8) = uVar14;
      uVar23 = uVar23 + 1;
    } while (uVar23 < uVar17);
    iVar15 = 0;
    uVar24 = 0;
    uVar2 = 0xff >> (ulong)(uVar2 & 0x1f);
    do {
      dVar26 = pow((double)(iVar15 * 0x101 + 0x80) / 65535.0,dVar25);
      uVar6 = ((1 << (ulong)(0x10 - uVar8 & 0x1f)) + -1) * (int)(dVar26 * 65535.0 + 0.5) + 0x8000;
      if (uVar24 <= uVar6 / 0xffff) {
        uVar6 = uVar6 / 0xffff + 1;
        uVar10 = uVar6 - uVar24;
        uVar7 = (undefined2)(iVar15 * 0x101);
        uVar18 = uVar24;
        if ((1 < uVar10) && (uVar20 = uVar10 & 0xfffffffe, uVar20 != 0)) {
          uVar18 = uVar24 + uVar20;
          uVar19 = uVar20;
          do {
            uVar1 = uVar24 + 1;
            uVar5 = uVar24 & uVar2;
            lVar21 = *(long *)(lVar22 + (ulong)(uVar1 & uVar2) * 8);
            uVar4 = uVar24 >> (ulong)(uVar9 & 0x1f);
            uVar19 = uVar19 - 2;
            uVar24 = uVar24 + 2;
            *(undefined2 *)(*(long *)(lVar22 + (ulong)uVar5 * 8) + (ulong)uVar4 * 2) = uVar7;
            *(undefined2 *)(lVar21 + (ulong)(uVar1 >> (ulong)(uVar9 & 0x1f)) * 2) = uVar7;
          } while (uVar19 != 0);
          uVar24 = uVar6;
          if (uVar10 == uVar20) goto LAB_010c0b50;
        }
        do {
          uVar10 = uVar18 + 1;
          *(undefined2 *)
           (*(long *)(lVar22 + (ulong)(uVar18 & uVar2) * 8) +
           (ulong)(uVar18 >> (ulong)(uVar9 & 0x1f)) * 2) = uVar7;
          uVar24 = uVar6;
          uVar18 = uVar10;
        } while (uVar6 != uVar10);
      }
LAB_010c0b50:
      iVar15 = iVar15 + 1;
    } while (iVar15 != 0xff);
    uVar17 = uVar17 * 0x100;
    uVar6 = uVar17 - uVar24;
    if (uVar24 <= uVar17 && uVar6 != 0) {
      if ((1 < uVar6) && (uVar18 = uVar6 & 0xfffffffe, uVar18 != 0)) {
        uVar10 = uVar24 + uVar18;
        uVar20 = uVar18;
        do {
          uVar19 = uVar24 + 1;
          uVar1 = uVar24 & uVar2;
          lVar21 = *(long *)(lVar22 + (ulong)(uVar19 & uVar2) * 8);
          uVar5 = uVar24 >> (ulong)(uVar9 & 0x1f);
          uVar20 = uVar20 - 2;
          uVar24 = uVar24 + 2;
          *(undefined2 *)(*(long *)(lVar22 + (ulong)uVar1 * 8) + (ulong)uVar5 * 2) = 0xffff;
          *(undefined2 *)(lVar21 + (ulong)(uVar19 >> (ulong)(uVar9 & 0x1f)) * 2) = 0xffff;
        } while (uVar20 != 0);
        uVar24 = uVar10;
        if (uVar6 == uVar18) goto LAB_010c0d20;
      }
      do {
        uVar6 = uVar24 + 1;
        *(undefined2 *)
         (*(long *)(lVar22 + (ulong)(uVar24 & uVar2) * 8) +
         (ulong)(uVar24 >> (ulong)(uVar9 & 0x1f)) * 2) = 0xffff;
        uVar24 = uVar6;
                    /* try { // try from 010c0d1c to 011c0d5f has its CatchHandler @ 010c0d1c
                       catch() { ... } // from try @ 010c0d1c with catch @ 010c0d1c
                       catch() { ... } // from try @ 010c0db8 with catch @ 010c0d1c */
      } while (uVar17 != uVar6);
    }
  }
LAB_010c0d20:
  if ((*(uint *)(param_1 + 0x16c) & 0x600080) == 0) {
                    /* try { // try from 010c0db8 to 011c0e1f has its CatchHandler @ 010c0d1c */
    return;
  }
  dVar25 = 10000000000.0 / (double)*(int *)(param_1 + 0x510) + 0.5;
  dVar26 = (double)(long)dVar25;
                    /* try { // try from 010c0d60 to 011c0d6f has its CatchHandler @ 010c0df0 */
  bVar11 = false;
  bVar12 = true;
  if (-2147483648.0 <= dVar26) {
    bVar11 = false;
    bVar12 = true;
    if (!NAN(dVar26)) {
      bVar11 = dVar26 == 2147483647.0;
      bVar12 = 2147483647.0 <= dVar26;
    }
  }
  iVar15 = (int)dVar25;
  if (bVar12 && !bVar11) {
    iVar15 = 0;
  }
  FUN_010c0e14(param_1,param_1 + 0x318,uVar8,iVar15);
                    /* try { // try from 010c0d80 to 011c0db7 has its CatchHandler @ 010c0e0c */
  if (*(int *)(param_1 + 0x2ec) < 1) {
    iVar15 = *(int *)(param_1 + 0x510);
  }
  else {
    dVar25 = 10000000000.0 / (double)*(int *)(param_1 + 0x2ec) + 0.5;
    dVar26 = (double)(long)dVar25;
    bVar11 = false;
    bVar12 = true;
    if (-2147483648.0 <= dVar26) {
      bVar11 = false;
      bVar12 = true;
      if (!NAN(dVar26)) {
        bVar11 = dVar26 == 2147483647.0;
        bVar12 = 2147483647.0 <= dVar26;
      }
    }
    iVar15 = (int)dVar25;
    if (bVar12 && !bVar11) {
      iVar15 = 0;
    }
  }
                    /* catch() { ... } // from try @ 010c0d60 with catch @ 010c0df0 */
                    /* catch() { ... } // from try @ 010c0d80 with catch @ 010c0e0c */
  FUN_010c0e14(param_1,param_1 + 0x310,uVar8,iVar15);
  return;
}

