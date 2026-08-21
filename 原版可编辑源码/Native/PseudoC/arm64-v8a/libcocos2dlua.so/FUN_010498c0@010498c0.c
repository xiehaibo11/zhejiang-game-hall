
uint FUN_010498c0(long param_1,long *param_2,ulong *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  byte *__dest;
  byte *pbVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte local_34 [4];
  
  pbVar6 = (byte *)*param_2;
  uVar7 = *(ulong *)(*(long *)(param_1 + 0x248) + 0x18);
  if (uVar7 == 0) {
    uVar7 = (ulong)*(uint *)(*(long *)(param_1 + 0x220) + 0xc84);
  }
  uVar14 = (ulong)*(uint *)(param_1 + 0x68);
  uVar2 = (int)uVar7 - *(uint *)(param_1 + 0x68);
  uVar11 = (uint)*(ulong *)(param_1 + 0x60);
  if ((ulong)uVar2 <= *(ulong *)(param_1 + 0x60)) {
    uVar11 = uVar2;
  }
  uVar2 = (uint)*param_3;
  if ((ulong)uVar11 <= *param_3) {
    uVar2 = uVar11;
  }
  if (uVar2 < 2) {
    return 0;
  }
  lVar8 = *(long *)(param_1 + 0x38);
  uVar2 = uVar2 - 1;
  __dest = (byte *)(lVar8 + uVar14 + 0x10);
  if ((*(byte *)(param_1 + 0x106) >> 2 & 1) != 0) {
                    /* try { // try from 01049a7c to 01149b8b has its CatchHandler @ 01049864 */
    memcpy(__dest,pbVar6,(ulong)uVar2);
    goto LAB_01049a84;
  }
  bVar1 = *(byte *)(param_1 + 0xfe);
  lVar9 = param_1 + 0x6c;
  local_34[0] = *(byte *)(lVar9 + ((ulong)bVar1 & 3));
  local_34[1] = *(byte *)(lVar9 + (ulong)(bVar1 + 1 & 3));
  local_34[2] = *(byte *)(lVar9 + (ulong)(bVar1 + 2 & 3));
  local_34[3] = *(byte *)(lVar9 + (ulong)(bVar1 + 3 & 3));
  uVar11 = uVar2 >> 2;
  if (uVar11 != 0) {
    uVar7 = (ulong)(uVar11 - 1);
    pbVar12 = pbVar6;
    if (0xf < uVar7 + 1) {
      pbVar10 = (byte *)(lVar8 + uVar7 * 4 + uVar14 + 0x14);
      if ((pbVar6 + uVar7 * 4 + 4 <= __dest || pbVar10 <= pbVar6) &&
         (&stack0xffffffffffffffd0 <= __dest || pbVar10 <= (byte *)((ulong)local_34 | 3))) {
        uVar3 = uVar2 >> 2 & 0xf;
        lVar9 = (uVar7 + 1) - (ulong)uVar3;
        bVar1 = *(byte *)((ulong)local_34 | 2);
        bVar4 = *(byte *)((ulong)local_34 | 3);
        uVar11 = uVar11 - (int)lVar9;
        pbVar12 = __dest + lVar9 * 4;
        pbVar10 = pbVar6 + lVar9 * 4;
        pbVar5 = pbVar6;
        do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01049a74 with catch @ 01049b5c
                        */
          bVar23 = *pbVar5;
          bVar39 = pbVar5[1];
          bVar55 = pbVar5[2];
          bVar71 = pbVar5[3];
          bVar24 = pbVar5[4];
          bVar40 = pbVar5[5];
          bVar56 = pbVar5[6];
          bVar72 = pbVar5[7];
          bVar25 = pbVar5[8];
          bVar41 = pbVar5[9];
          bVar57 = pbVar5[10];
          bVar73 = pbVar5[0xb];
          bVar26 = pbVar5[0xc];
          bVar42 = pbVar5[0xd];
          bVar58 = pbVar5[0xe];
          bVar74 = pbVar5[0xf];
          bVar27 = pbVar5[0x10];
          bVar43 = pbVar5[0x11];
          bVar59 = pbVar5[0x12];
          bVar75 = pbVar5[0x13];
          bVar28 = pbVar5[0x14];
          bVar44 = pbVar5[0x15];
          bVar60 = pbVar5[0x16];
          bVar76 = pbVar5[0x17];
          bVar29 = pbVar5[0x18];
          bVar45 = pbVar5[0x19];
          bVar61 = pbVar5[0x1a];
          bVar77 = pbVar5[0x1b];
          bVar30 = pbVar5[0x1c];
          bVar46 = pbVar5[0x1d];
          bVar62 = pbVar5[0x1e];
          bVar78 = pbVar5[0x1f];
          bVar31 = pbVar5[0x20];
          bVar47 = pbVar5[0x21];
          bVar63 = pbVar5[0x22];
          bVar79 = pbVar5[0x23];
          bVar32 = pbVar5[0x24];
          bVar48 = pbVar5[0x25];
          bVar64 = pbVar5[0x26];
          bVar80 = pbVar5[0x27];
          bVar33 = pbVar5[0x28];
          bVar49 = pbVar5[0x29];
          bVar65 = pbVar5[0x2a];
          bVar81 = pbVar5[0x2b];
          bVar34 = pbVar5[0x2c];
          bVar50 = pbVar5[0x2d];
          bVar66 = pbVar5[0x2e];
          bVar82 = pbVar5[0x2f];
          bVar35 = pbVar5[0x30];
          bVar51 = pbVar5[0x31];
          bVar67 = pbVar5[0x32];
          bVar83 = pbVar5[0x33];
          bVar36 = pbVar5[0x34];
          bVar52 = pbVar5[0x35];
          bVar68 = pbVar5[0x36];
          bVar84 = pbVar5[0x37];
          bVar37 = pbVar5[0x38];
          bVar53 = pbVar5[0x39];
          bVar69 = pbVar5[0x3a];
          bVar85 = pbVar5[0x3b];
          bVar38 = pbVar5[0x3c];
          bVar54 = pbVar5[0x3d];
          bVar70 = pbVar5[0x3e];
          bVar86 = pbVar5[0x3f];
          pbVar5 = pbVar5 + 0x40;
          lVar9 = lVar9 + -0x10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01049a14 with catch @ 01049b74
                        */
          *__dest = local_34[0] ^ bVar23;
          __dest[1] = local_34[1] ^ bVar39;
          __dest[2] = bVar1 ^ bVar55;
          __dest[3] = bVar4 ^ bVar71;
          __dest[4] = local_34[0] ^ bVar24;
          __dest[5] = local_34[1] ^ bVar40;
          __dest[6] = bVar1 ^ bVar56;
          __dest[7] = bVar4 ^ bVar72;
          __dest[8] = local_34[0] ^ bVar25;
          __dest[9] = local_34[1] ^ bVar41;
          __dest[10] = bVar1 ^ bVar57;
          __dest[0xb] = bVar4 ^ bVar73;
          __dest[0xc] = local_34[0] ^ bVar26;
          __dest[0xd] = local_34[1] ^ bVar42;
          __dest[0xe] = bVar1 ^ bVar58;
          __dest[0xf] = bVar4 ^ bVar74;
          __dest[0x10] = local_34[0] ^ bVar27;
          __dest[0x11] = local_34[1] ^ bVar43;
          __dest[0x12] = bVar1 ^ bVar59;
          __dest[0x13] = bVar4 ^ bVar75;
          __dest[0x14] = local_34[0] ^ bVar28;
          __dest[0x15] = local_34[1] ^ bVar44;
          __dest[0x16] = bVar1 ^ bVar60;
          __dest[0x17] = bVar4 ^ bVar76;
          __dest[0x18] = local_34[0] ^ bVar29;
          __dest[0x19] = local_34[1] ^ bVar45;
          __dest[0x1a] = bVar1 ^ bVar61;
          __dest[0x1b] = bVar4 ^ bVar77;
          __dest[0x1c] = local_34[0] ^ bVar30;
          __dest[0x1d] = local_34[1] ^ bVar46;
          __dest[0x1e] = bVar1 ^ bVar62;
          __dest[0x1f] = bVar4 ^ bVar78;
          __dest[0x20] = local_34[0] ^ bVar31;
          __dest[0x21] = local_34[1] ^ bVar47;
          __dest[0x22] = bVar1 ^ bVar63;
          __dest[0x23] = bVar4 ^ bVar79;
          __dest[0x24] = local_34[0] ^ bVar32;
          __dest[0x25] = local_34[1] ^ bVar48;
          __dest[0x26] = bVar1 ^ bVar64;
          __dest[0x27] = bVar4 ^ bVar80;
          __dest[0x28] = local_34[0] ^ bVar33;
          __dest[0x29] = local_34[1] ^ bVar49;
          __dest[0x2a] = bVar1 ^ bVar65;
          __dest[0x2b] = bVar4 ^ bVar81;
          __dest[0x2c] = local_34[0] ^ bVar34;
          __dest[0x2d] = local_34[1] ^ bVar50;
          __dest[0x2e] = bVar1 ^ bVar66;
          __dest[0x2f] = bVar4 ^ bVar82;
          __dest[0x30] = local_34[0] ^ bVar35;
          __dest[0x31] = local_34[1] ^ bVar51;
          __dest[0x32] = bVar1 ^ bVar67;
          __dest[0x33] = bVar4 ^ bVar83;
          __dest[0x34] = local_34[0] ^ bVar36;
          __dest[0x35] = local_34[1] ^ bVar52;
          __dest[0x36] = bVar1 ^ bVar68;
          __dest[0x37] = bVar4 ^ bVar84;
          __dest[0x38] = local_34[0] ^ bVar37;
          __dest[0x39] = local_34[1] ^ bVar53;
          __dest[0x3a] = bVar1 ^ bVar69;
          __dest[0x3b] = bVar4 ^ bVar85;
          __dest[0x3c] = local_34[0] ^ bVar38;
          __dest[0x3d] = local_34[1] ^ bVar54;
          __dest[0x3e] = bVar1 ^ bVar70;
          __dest[0x3f] = bVar4 ^ bVar86;
          __dest = __dest + 0x40;
          if (lVar9 == 0) goto joined_r0x01049b7c;
        } while( true );
      }
    }
    do {
      uVar11 = uVar11 - 1;
      *__dest = local_34[0] ^ *pbVar12;
      __dest[1] = local_34[1] ^ pbVar12[1];
      __dest[2] = local_34[2] ^ pbVar12[2];
      pbVar10 = pbVar12 + 4;
      __dest[3] = local_34[3] ^ pbVar12[3];
      pbVar12 = __dest + 4;
      uVar3 = uVar11;
joined_r0x01049b7c:
      __dest = pbVar12;
      pbVar12 = pbVar10;
    } while (uVar3 != 0);
    pbVar6 = pbVar6 + uVar7 * 4 + 4;
    __dest = (byte *)(lVar8 + uVar7 * 4 + uVar14 + 0x14);
  }
  uVar11 = uVar2 & 3;
  uVar7 = (ulong)uVar11;
                    /* try { // try from 01049a14 to 01149a1b has its CatchHandler @ 01049b74 */
  if ((uVar11 != 0) && (*__dest = local_34[0] ^ *pbVar6, uVar11 != 1)) {
    if (uVar7 - 1 < 0x20) {
LAB_01049a30:
      lVar8 = 1;
      pbVar10 = pbVar6;
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010498b4 with catch @ 01049b88
                        */
      if ((__dest + 1 < local_34 + uVar7 && (byte *)((ulong)local_34 | 1) < __dest + uVar7) ||
         (__dest + 1 < pbVar6 + uVar7 && pbVar6 + 1 < __dest + uVar7)) goto LAB_01049a30;
      uVar11 = uVar11 + 0x1f & 0x1f;
      lVar9 = (uVar7 - 1) - (ulong)uVar11;
      pbVar12 = __dest + 0x11;
      puVar13 = (undefined8 *)&stack0xffffffffffffffdd;
      lVar8 = lVar9 + 1;
      pbVar10 = pbVar6 + lVar9;
      __dest = __dest + lVar9;
      pbVar6 = pbVar6 + 0x11;
      do {
        uVar16 = puVar13[-1];
        uVar15 = puVar13[-2];
        uVar18 = puVar13[1];
        uVar17 = *puVar13;
        uVar20 = *(undefined8 *)(pbVar6 + -8);
        uVar19 = *(undefined8 *)(pbVar6 + -0x10);
        uVar22 = *(undefined8 *)(pbVar6 + 8);
        uVar21 = *(undefined8 *)pbVar6;
        lVar9 = lVar9 + -0x20;
        puVar13 = puVar13 + 4;
        pbVar6 = pbVar6 + 0x20;
        *(ulong *)(pbVar12 + -8) =
             CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                      CONCAT16((byte)((ulong)uVar16 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30),
                               CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
                                        (byte)((ulong)uVar20 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                 (byte)((ulong)uVar20 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                          (byte)((ulong)uVar20 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar16 >> 0x10) ^
                                                                   (byte)((ulong)uVar20 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar16 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar20 >>
                                                                                  8),(byte)uVar16 ^
                                                                                     (byte)uVar20)))
                                                ))));
        *(ulong *)(pbVar12 + -0x10) =
             CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                      CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                               CONCAT15((byte)((ulong)uVar15 >> 0x28) ^
                                        (byte)((ulong)uVar19 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                                 (byte)((ulong)uVar19 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                          (byte)((ulong)uVar19 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar15 >> 0x10) ^
                                                                   (byte)((ulong)uVar19 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar15 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar19 >>
                                                                                  8),(byte)uVar15 ^
                                                                                     (byte)uVar19)))
                                                ))));
        *(ulong *)(pbVar12 + 8) =
             CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                      CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)((ulong)uVar22 >> 0x30),
                               CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                        (byte)((ulong)uVar22 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                 (byte)((ulong)uVar22 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                          (byte)((ulong)uVar22 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar18 >> 0x10) ^
                                                                   (byte)((ulong)uVar22 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar18 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar22 >>
                                                                                  8),(byte)uVar18 ^
                                                                                     (byte)uVar22)))
                                                ))));
        *(ulong *)pbVar12 =
             CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                      CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)((ulong)uVar21 >> 0x30),
                               CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                        (byte)((ulong)uVar21 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                 (byte)((ulong)uVar21 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                          (byte)((ulong)uVar21 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar17 >> 0x10) ^
                                                                   (byte)((ulong)uVar21 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar17 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar21 >>
                                                                                  8),(byte)uVar17 ^
                                                                                     (byte)uVar21)))
                                                ))));
        pbVar12 = pbVar12 + 0x20;
      } while (lVar9 != 0);
      if (uVar11 == 0) goto LAB_01049a60;
    }
    lVar9 = uVar7 - lVar8;
    pbVar6 = local_34 + lVar8;
    do {
      __dest = __dest + 1;
      pbVar10 = pbVar10 + 1;
      lVar9 = lVar9 + -1;
      *__dest = *pbVar6 ^ *pbVar10;
      pbVar6 = pbVar6 + 1;
    } while (lVar9 != 0);
  }
LAB_01049a60:
  *(byte *)(param_1 + 0xfe) = (char)uVar2 + *(char *)(param_1 + 0xfe) & 3;
                    /* try { // try from 01049a74 to 01149a7b has its CatchHandler @ 01049b5c */
LAB_01049a84:
  uVar7 = (ulong)uVar2;
  *param_2 = *param_2 + uVar7;
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar2;
  *(ulong *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) - uVar7;
  *param_3 = *param_3 - uVar7;
  return uVar2;
}

