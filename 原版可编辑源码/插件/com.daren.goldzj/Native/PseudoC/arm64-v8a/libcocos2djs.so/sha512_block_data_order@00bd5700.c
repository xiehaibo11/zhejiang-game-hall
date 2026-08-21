
void sha512_block_data_order(ulong *param_1,ulong *param_2,long param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long *plVar29;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  
  uVar21 = *param_1;
  uVar22 = param_1[1];
  uVar23 = param_1[2];
  uVar24 = param_1[3];
  uVar25 = param_1[4];
  uVar26 = param_1[5];
  puVar1 = param_2 + param_3 * 0x10;
  uVar27 = param_1[6];
  uVar28 = param_1[7];
  plVar29 = &DAT_00bd6540;
  do {
    uVar7 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar5 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar7 = uVar25 ^ (uVar25 >> 0x17 | uVar25 << 0x29);
    uVar8 = uVar21 ^ (uVar21 >> 5 | uVar21 << 0x3b);
    lVar2 = uVar28 + *plVar29 + uVar5 + (uVar26 & uVar25 | uVar27 & (uVar25 ^ 0xffffffffffffffff)) +
            ((uVar25 >> 0xe | uVar25 << 0x32) ^ (uVar7 >> 0x12 | uVar7 << 0x2e));
    uVar24 = uVar24 + lVar2;
    uVar28 = (param_2[1] & 0xff00ff00ff00ff00) >> 8 | (param_2[1] & 0xff00ff00ff00ff) << 8;
    uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
    uVar3 = uVar28 >> 0x20;
    uVar6 = uVar3 | uVar28 << 0x20;
    uVar28 = lVar2 + ((uVar22 ^ uVar23) & (uVar21 ^ uVar22) ^ uVar22) +
             ((uVar21 >> 0x1c | uVar21 << 0x24) ^ (uVar8 >> 0x22 | uVar8 << 0x1e));
    uVar7 = uVar24 ^ (uVar24 >> 0x17 | uVar24 << 0x29);
    uVar9 = uVar28 ^ (uVar28 >> 5 | uVar28 << 0x3b);
    lVar2 = uVar27 + plVar29[1] + uVar6 + (uVar25 & uVar24 | uVar26 & (uVar24 ^ 0xffffffffffffffff))
            + ((uVar24 >> 0xe | uVar24 << 0x32) ^ (uVar7 >> 0x12 | uVar7 << 0x2e));
    uVar23 = uVar23 + lVar2;
    uVar27 = (param_2[2] & 0xff00ff00ff00ff00) >> 8 | (param_2[2] & 0xff00ff00ff00ff) << 8;
    uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar27 >> 0x20 | uVar27 << 0x20;
    uVar27 = lVar2 + ((uVar21 ^ uVar22) & (uVar28 ^ uVar21) ^ uVar21) +
             ((uVar28 >> 0x1c | uVar28 << 0x24) ^ (uVar9 >> 0x22 | uVar9 << 0x1e));
    uVar7 = uVar23 ^ (uVar23 >> 0x17 | uVar23 << 0x29);
    uVar10 = uVar27 ^ (uVar27 >> 5 | uVar27 << 0x3b);
    lVar2 = uVar26 + plVar29[2] + uVar8 + (uVar24 & uVar23 | uVar25 & (uVar23 ^ 0xffffffffffffffff))
            + ((uVar23 >> 0xe | uVar23 << 0x32) ^ (uVar7 >> 0x12 | uVar7 << 0x2e));
    uVar22 = uVar22 + lVar2;
    uVar26 = (param_2[3] & 0xff00ff00ff00ff00) >> 8 | (param_2[3] & 0xff00ff00ff00ff) << 8;
    uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar26 >> 0x20 | uVar26 << 0x20;
    uVar26 = lVar2 + ((uVar28 ^ uVar21) & (uVar27 ^ uVar28) ^ uVar28) +
             ((uVar27 >> 0x1c | uVar27 << 0x24) ^ (uVar10 >> 0x22 | uVar10 << 0x1e));
    uVar7 = uVar22 ^ (uVar22 >> 0x17 | uVar22 << 0x29);
    uVar11 = uVar26 ^ (uVar26 >> 5 | uVar26 << 0x3b);
    lVar2 = uVar25 + plVar29[3] + uVar9 + (uVar23 & uVar22 | uVar24 & (uVar22 ^ 0xffffffffffffffff))
            + ((uVar22 >> 0xe | uVar22 << 0x32) ^ (uVar7 >> 0x12 | uVar7 << 0x2e));
    uVar21 = uVar21 + lVar2;
    uVar25 = (param_2[4] & 0xff00ff00ff00ff00) >> 8 | (param_2[4] & 0xff00ff00ff00ff) << 8;
    uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar25 >> 0x20 | uVar25 << 0x20;
    uVar25 = lVar2 + ((uVar27 ^ uVar28) & (uVar26 ^ uVar27) ^ uVar27) +
             ((uVar26 >> 0x1c | uVar26 << 0x24) ^ (uVar11 >> 0x22 | uVar11 << 0x1e));
    uVar7 = uVar21 ^ (uVar21 >> 0x17 | uVar21 << 0x29);
    uVar11 = uVar25 ^ (uVar25 >> 5 | uVar25 << 0x3b);
    lVar2 = uVar24 + plVar29[4] + uVar10 +
            (uVar22 & uVar21 | uVar23 & (uVar21 ^ 0xffffffffffffffff)) +
            ((uVar21 >> 0xe | uVar21 << 0x32) ^ (uVar7 >> 0x12 | uVar7 << 0x2e));
    uVar28 = uVar28 + lVar2;
    uVar24 = (param_2[5] & 0xff00ff00ff00ff00) >> 8 | (param_2[5] & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    local_98 = uVar24 >> 0x20 | uVar24 << 0x20;
    uVar24 = lVar2 + ((uVar26 ^ uVar27) & (uVar25 ^ uVar26) ^ uVar26) +
             ((uVar25 >> 0x1c | uVar25 << 0x24) ^ (uVar11 >> 0x22 | uVar11 << 0x1e));
    uVar7 = uVar28 ^ (uVar28 >> 0x17 | uVar28 << 0x29);
    uVar11 = uVar24 ^ (uVar24 >> 5 | uVar24 << 0x3b);
    lVar2 = uVar23 + plVar29[5] + local_98 +
            (uVar21 & uVar28 | uVar22 & (uVar28 ^ 0xffffffffffffffff)) +
            ((uVar28 >> 0xe | uVar28 << 0x32) ^ (uVar7 >> 0x12 | uVar7 << 0x2e));
    uVar27 = uVar27 + lVar2;
    uVar23 = (param_2[6] & 0xff00ff00ff00ff00) >> 8 | (param_2[6] & 0xff00ff00ff00ff) << 8;
    uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
    local_90 = uVar23 >> 0x20 | uVar23 << 0x20;
    uVar23 = lVar2 + ((uVar25 ^ uVar26) & (uVar24 ^ uVar25) ^ uVar25) +
             ((uVar24 >> 0x1c | uVar24 << 0x24) ^ (uVar11 >> 0x22 | uVar11 << 0x1e));
    uVar7 = uVar27 ^ (uVar27 >> 0x17 | uVar27 << 0x29);
    uVar11 = uVar23 ^ (uVar23 >> 5 | uVar23 << 0x3b);
    lVar2 = uVar22 + plVar29[6] + local_90 +
            (uVar28 & uVar27 | uVar21 & (uVar27 ^ 0xffffffffffffffff)) +
            ((uVar27 >> 0xe | uVar27 << 0x32) ^ (uVar7 >> 0x12 | uVar7 << 0x2e));
    uVar26 = uVar26 + lVar2;
    uVar22 = (param_2[7] & 0xff00ff00ff00ff00) >> 8 | (param_2[7] & 0xff00ff00ff00ff) << 8;
    uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
    local_88 = uVar22 >> 0x20 | uVar22 << 0x20;
    uVar22 = lVar2 + ((uVar24 ^ uVar25) & (uVar23 ^ uVar24) ^ uVar24) +
             ((uVar23 >> 0x1c | uVar23 << 0x24) ^ (uVar11 >> 0x22 | uVar11 << 0x1e));
    uVar7 = uVar26 ^ (uVar26 >> 0x17 | uVar26 << 0x29);
    uVar12 = uVar22 ^ (uVar22 >> 5 | uVar22 << 0x3b);
    lVar2 = uVar21 + plVar29[7] + local_88 +
            (uVar27 & uVar26 | uVar28 & (uVar26 ^ 0xffffffffffffffff)) +
            ((uVar26 >> 0xe | uVar26 << 0x32) ^ (uVar7 >> 0x12 | uVar7 << 0x2e));
    uVar25 = uVar25 + lVar2;
    uVar21 = (param_2[8] & 0xff00ff00ff00ff00) >> 8 | (param_2[8] & 0xff00ff00ff00ff) << 8;
    uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
    uVar11 = uVar21 >> 0x20 | uVar21 << 0x20;
    uVar21 = lVar2 + ((uVar23 ^ uVar24) & (uVar22 ^ uVar23) ^ uVar23) +
             ((uVar22 >> 0x1c | uVar22 << 0x24) ^ (uVar12 >> 0x22 | uVar12 << 0x1e));
    uVar7 = uVar25 ^ (uVar25 >> 0x17 | uVar25 << 0x29);
    uVar13 = uVar21 ^ (uVar21 >> 5 | uVar21 << 0x3b);
    lVar2 = uVar28 + plVar29[8] + uVar11 +
            (uVar26 & uVar25 | uVar27 & (uVar25 ^ 0xffffffffffffffff)) +
            ((uVar25 >> 0xe | uVar25 << 0x32) ^ (uVar7 >> 0x12 | uVar7 << 0x2e));
    uVar24 = uVar24 + lVar2;
    uVar28 = (param_2[9] & 0xff00ff00ff00ff00) >> 8 | (param_2[9] & 0xff00ff00ff00ff) << 8;
    uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
    uVar12 = uVar28 >> 0x20 | uVar28 << 0x20;
    uVar28 = lVar2 + ((uVar22 ^ uVar23) & (uVar21 ^ uVar22) ^ uVar22) +
             ((uVar21 >> 0x1c | uVar21 << 0x24) ^ (uVar13 >> 0x22 | uVar13 << 0x1e));
    uVar7 = uVar24 ^ (uVar24 >> 0x17 | uVar24 << 0x29);
    uVar14 = uVar28 ^ (uVar28 >> 5 | uVar28 << 0x3b);
    lVar2 = uVar27 + plVar29[9] + uVar12 +
            (uVar25 & uVar24 | uVar26 & (uVar24 ^ 0xffffffffffffffff)) +
            ((uVar24 >> 0xe | uVar24 << 0x32) ^ (uVar7 >> 0x12 | uVar7 << 0x2e));
    uVar23 = uVar23 + lVar2;
    uVar27 = (param_2[10] & 0xff00ff00ff00ff00) >> 8 | (param_2[10] & 0xff00ff00ff00ff) << 8;
    uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
    uVar13 = uVar27 >> 0x20 | uVar27 << 0x20;
    uVar27 = lVar2 + ((uVar21 ^ uVar22) & (uVar28 ^ uVar21) ^ uVar21) +
             ((uVar28 >> 0x1c | uVar28 << 0x24) ^ (uVar14 >> 0x22 | uVar14 << 0x1e));
    uVar7 = uVar23 ^ (uVar23 >> 0x17 | uVar23 << 0x29);
    uVar15 = uVar27 ^ (uVar27 >> 5 | uVar27 << 0x3b);
    lVar2 = uVar26 + plVar29[10] + uVar13 +
            (uVar24 & uVar23 | uVar25 & (uVar23 ^ 0xffffffffffffffff)) +
            ((uVar23 >> 0xe | uVar23 << 0x32) ^ (uVar7 >> 0x12 | uVar7 << 0x2e));
    uVar22 = uVar22 + lVar2;
    uVar26 = (param_2[0xb] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xb] & 0xff00ff00ff00ff) << 8;
    uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
    uVar14 = uVar26 >> 0x20 | uVar26 << 0x20;
    uVar26 = lVar2 + ((uVar28 ^ uVar21) & (uVar27 ^ uVar28) ^ uVar28) +
             ((uVar27 >> 0x1c | uVar27 << 0x24) ^ (uVar15 >> 0x22 | uVar15 << 0x1e));
    uVar7 = uVar22 ^ (uVar22 >> 0x17 | uVar22 << 0x29);
    uVar16 = uVar26 ^ (uVar26 >> 5 | uVar26 << 0x3b);
    lVar2 = uVar25 + plVar29[0xb] + uVar14 +
            (uVar23 & uVar22 | uVar24 & (uVar22 ^ 0xffffffffffffffff)) +
            ((uVar22 >> 0xe | uVar22 << 0x32) ^ (uVar7 >> 0x12 | uVar7 << 0x2e));
    uVar21 = uVar21 + lVar2;
    uVar25 = (param_2[0xc] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xc] & 0xff00ff00ff00ff) << 8;
    uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
    uVar15 = uVar25 >> 0x20 | uVar25 << 0x20;
    uVar25 = lVar2 + ((uVar27 ^ uVar28) & (uVar26 ^ uVar27) ^ uVar27) +
             ((uVar26 >> 0x1c | uVar26 << 0x24) ^ (uVar16 >> 0x22 | uVar16 << 0x1e));
    uVar7 = uVar21 ^ (uVar21 >> 0x17 | uVar21 << 0x29);
    uVar17 = uVar25 ^ (uVar25 >> 5 | uVar25 << 0x3b);
    lVar2 = uVar24 + plVar29[0xc] + uVar15 +
            (uVar22 & uVar21 | uVar23 & (uVar21 ^ 0xffffffffffffffff)) +
            ((uVar21 >> 0xe | uVar21 << 0x32) ^ (uVar7 >> 0x12 | uVar7 << 0x2e));
    uVar28 = uVar28 + lVar2;
    uVar24 = (param_2[0xd] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xd] & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    uVar16 = uVar24 >> 0x20 | uVar24 << 0x20;
    uVar24 = lVar2 + ((uVar26 ^ uVar27) & (uVar25 ^ uVar26) ^ uVar26) +
             ((uVar25 >> 0x1c | uVar25 << 0x24) ^ (uVar17 >> 0x22 | uVar17 << 0x1e));
    uVar7 = uVar28 ^ (uVar28 >> 0x17 | uVar28 << 0x29);
    uVar18 = uVar24 ^ (uVar24 >> 5 | uVar24 << 0x3b);
    lVar2 = uVar23 + plVar29[0xd] + uVar16 +
            (uVar21 & uVar28 | uVar22 & (uVar28 ^ 0xffffffffffffffff)) +
            ((uVar28 >> 0xe | uVar28 << 0x32) ^ (uVar7 >> 0x12 | uVar7 << 0x2e));
    uVar27 = uVar27 + lVar2;
    uVar23 = (param_2[0xe] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xe] & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
    uVar17 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar23 = lVar2 + ((uVar25 ^ uVar26) & (uVar24 ^ uVar25) ^ uVar25) +
             ((uVar24 >> 0x1c | uVar24 << 0x24) ^ (uVar18 >> 0x22 | uVar18 << 0x1e));
    uVar18 = uVar27 ^ (uVar27 >> 0x17 | uVar27 << 0x29);
    uVar19 = uVar23 ^ (uVar23 >> 5 | uVar23 << 0x3b);
    lVar2 = uVar22 + plVar29[0xe] + uVar17 +
            (uVar28 & uVar27 | uVar21 & (uVar27 ^ 0xffffffffffffffff)) +
            ((uVar27 >> 0xe | uVar27 << 0x32) ^ (uVar18 >> 0x12 | uVar18 << 0x2e));
    uVar26 = uVar26 + lVar2;
    uVar22 = (param_2[0xf] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xf] & 0xff00ff00ff00ff) << 8;
    uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
    uVar18 = uVar22 >> 0x20 | uVar22 << 0x20;
    uVar22 = lVar2 + ((uVar24 ^ uVar25) & (uVar23 ^ uVar24) ^ uVar24) +
             ((uVar23 >> 0x1c | uVar23 << 0x24) ^ (uVar19 >> 0x22 | uVar19 << 0x1e));
    uVar19 = uVar22 ^ uVar23;
    lVar2 = uVar21 + plVar29[0xf] + uVar18 +
            (uVar27 & uVar26 | uVar28 & (uVar26 ^ 0xffffffffffffffff)) +
            ((uVar26 >> 0xe | uVar26 << 0x32) ^ (uVar26 >> 0x12 | uVar26 << 0x2e) ^
            (uVar26 >> 0x29 | uVar26 * 0x800000));
    uVar25 = uVar25 + lVar2;
    lVar20 = plVar29[0x10];
    uVar21 = lVar2 + ((uVar23 ^ uVar24) & uVar19 ^ uVar23) +
             ((uVar22 >> 0x1c | uVar22 << 0x24) ^ (uVar22 >> 0x22 | uVar22 * 0x40000000) ^
             (uVar22 >> 0x27 | uVar22 * 0x2000000));
    uVar7 = uVar5 + uVar12 +
            ((uVar6 >> 1 | uVar3 << 0x3f) ^ (uVar6 >> 8 | uVar3 << 0x38) ^ uVar6 >> 7) +
            ((uVar17 >> 0x13 | (uVar7 >> 0x20) << 0x2d) ^
             ((uVar7 & 0xffffffff) >> 0x1d | uVar17 << 3) ^ uVar17 >> 6);
    plVar4 = plVar29 + 0x11;
    do {
      plVar29 = plVar4;
      lVar2 = uVar28 + lVar20 + uVar7 + (uVar26 & uVar25 | uVar27 & (uVar25 ^ 0xffffffffffffffff)) +
              ((uVar25 >> 0xe | uVar25 << 0x32) ^ (uVar25 >> 0x12 | uVar25 << 0x2e) ^
              (uVar25 >> 0x29 | uVar25 << 0x17));
      uVar24 = uVar24 + lVar2;
      uVar28 = lVar2 + (uVar19 & (uVar21 ^ uVar22) ^ uVar22) +
               ((uVar21 >> 0x1c | uVar21 << 0x24) ^ (uVar21 >> 0x22 | uVar21 << 0x1e) ^
               (uVar21 >> 0x27 | uVar21 << 0x19));
      uVar6 = uVar6 + uVar13 +
              ((uVar8 >> 1 | uVar8 << 0x3f) ^ (uVar8 >> 8 | uVar8 << 0x38) ^ uVar8 >> 7) +
              ((uVar18 >> 0x13 | uVar18 << 0x2d) ^ (uVar18 >> 0x3d | uVar18 << 3) ^ uVar18 >> 6);
      lVar2 = uVar27 + *plVar29 + uVar6 + (uVar25 & uVar24 | uVar26 & (uVar24 ^ 0xffffffffffffffff))
              + ((uVar24 >> 0xe | uVar24 << 0x32) ^ (uVar24 >> 0x12 | uVar24 << 0x2e) ^
                (uVar24 >> 0x29 | uVar24 * 0x800000));
      uVar23 = uVar23 + lVar2;
      uVar27 = lVar2 + ((uVar21 ^ uVar22) & (uVar28 ^ uVar21) ^ uVar21) +
               ((uVar28 >> 0x1c | uVar28 << 0x24) ^ (uVar28 >> 0x22 | uVar28 * 0x40000000) ^
               (uVar28 >> 0x27 | uVar28 * 0x2000000));
      uVar8 = uVar8 + uVar14 +
              ((uVar9 >> 1 | uVar9 << 0x3f) ^ (uVar9 >> 8 | uVar9 << 0x38) ^ uVar9 >> 7) +
              ((uVar7 >> 0x13 | uVar7 << 0x2d) ^ (uVar7 >> 0x3d | uVar7 << 3) ^ uVar7 >> 6);
      lVar2 = uVar26 + plVar29[1] + uVar8 +
              (uVar24 & uVar23 | uVar25 & (uVar23 ^ 0xffffffffffffffff)) +
              ((uVar23 >> 0xe | uVar23 << 0x32) ^ (uVar23 >> 0x12 | uVar23 << 0x2e) ^
              (uVar23 >> 0x29 | uVar23 * 0x800000));
      uVar22 = uVar22 + lVar2;
      uVar26 = lVar2 + ((uVar28 ^ uVar21) & (uVar27 ^ uVar28) ^ uVar28) +
               ((uVar27 >> 0x1c | uVar27 << 0x24) ^ (uVar27 >> 0x22 | uVar27 * 0x40000000) ^
               (uVar27 >> 0x27 | uVar27 * 0x2000000));
      uVar9 = uVar9 + uVar15 +
              ((uVar10 >> 1 | uVar10 << 0x3f) ^ (uVar10 >> 8 | uVar10 << 0x38) ^ uVar10 >> 7) +
              ((uVar6 >> 0x13 | uVar6 << 0x2d) ^ (uVar6 >> 0x3d | uVar6 * 8) ^ uVar6 >> 6);
      lVar2 = uVar25 + plVar29[2] + uVar9 +
              (uVar23 & uVar22 | uVar24 & (uVar22 ^ 0xffffffffffffffff)) +
              ((uVar22 >> 0xe | uVar22 << 0x32) ^ (uVar22 >> 0x12 | uVar22 << 0x2e) ^
              (uVar22 >> 0x29 | uVar22 * 0x800000));
      uVar21 = uVar21 + lVar2;
      uVar25 = lVar2 + ((uVar27 ^ uVar28) & (uVar26 ^ uVar27) ^ uVar27) +
               ((uVar26 >> 0x1c | uVar26 << 0x24) ^ (uVar26 >> 0x22 | uVar26 * 0x40000000) ^
               (uVar26 >> 0x27 | uVar26 * 0x2000000));
      uVar10 = uVar10 + uVar16 +
               ((local_98 >> 1 | local_98 << 0x3f) ^ (local_98 >> 8 | local_98 << 0x38) ^
               local_98 >> 7) +
               ((uVar8 >> 0x13 | uVar8 << 0x2d) ^ (uVar8 >> 0x3d | uVar8 * 8) ^ uVar8 >> 6);
      lVar2 = uVar24 + plVar29[3] + uVar10 +
              (uVar22 & uVar21 | uVar23 & (uVar21 ^ 0xffffffffffffffff)) +
              ((uVar21 >> 0xe | uVar21 << 0x32) ^ (uVar21 >> 0x12 | uVar21 << 0x2e) ^
              (uVar21 >> 0x29 | uVar21 * 0x800000));
      uVar28 = uVar28 + lVar2;
      uVar24 = lVar2 + ((uVar26 ^ uVar27) & (uVar25 ^ uVar26) ^ uVar26) +
               ((uVar25 >> 0x1c | uVar25 << 0x24) ^ (uVar25 >> 0x22 | uVar25 * 0x40000000) ^
               (uVar25 >> 0x27 | uVar25 * 0x2000000));
      local_98 = local_98 + uVar17 +
                 ((local_90 >> 1 | local_90 << 0x3f) ^ (local_90 >> 8 | local_90 << 0x38) ^
                 local_90 >> 7) +
                 ((uVar9 >> 0x13 | uVar9 << 0x2d) ^ (uVar9 >> 0x3d | uVar9 * 8) ^ uVar9 >> 6);
      lVar2 = uVar23 + plVar29[4] + local_98 +
              (uVar21 & uVar28 | uVar22 & (uVar28 ^ 0xffffffffffffffff)) +
              ((uVar28 >> 0xe | uVar28 << 0x32) ^ (uVar28 >> 0x12 | uVar28 << 0x2e) ^
              (uVar28 >> 0x29 | uVar28 * 0x800000));
      uVar27 = uVar27 + lVar2;
      uVar23 = lVar2 + ((uVar25 ^ uVar26) & (uVar24 ^ uVar25) ^ uVar25) +
               ((uVar24 >> 0x1c | uVar24 << 0x24) ^ (uVar24 >> 0x22 | uVar24 * 0x40000000) ^
               (uVar24 >> 0x27 | uVar24 * 0x2000000));
      local_90 = local_90 + uVar18 +
                 ((local_88 >> 1 | local_88 << 0x3f) ^ (local_88 >> 8 | local_88 << 0x38) ^
                 local_88 >> 7) +
                 ((uVar10 >> 0x13 | uVar10 << 0x2d) ^ (uVar10 >> 0x3d | uVar10 * 8) ^ uVar10 >> 6);
      lVar2 = uVar22 + plVar29[5] + local_90 +
              (uVar28 & uVar27 | uVar21 & (uVar27 ^ 0xffffffffffffffff)) +
              ((uVar27 >> 0xe | uVar27 << 0x32) ^ (uVar27 >> 0x12 | uVar27 << 0x2e) ^
              (uVar27 >> 0x29 | uVar27 * 0x800000));
      uVar26 = uVar26 + lVar2;
      uVar22 = lVar2 + ((uVar24 ^ uVar25) & (uVar23 ^ uVar24) ^ uVar24) +
               ((uVar23 >> 0x1c | uVar23 << 0x24) ^ (uVar23 >> 0x22 | uVar23 * 0x40000000) ^
               (uVar23 >> 0x27 | uVar23 * 0x2000000));
      local_88 = local_88 + uVar7 +
                 ((uVar11 >> 1 | uVar11 << 0x3f) ^ (uVar11 >> 8 | uVar11 << 0x38) ^ uVar11 >> 7) +
                 ((local_98 >> 0x13 | local_98 << 0x2d) ^ (local_98 >> 0x3d | local_98 * 8) ^
                 local_98 >> 6);
      lVar2 = uVar21 + plVar29[6] + local_88 +
              (uVar27 & uVar26 | uVar28 & (uVar26 ^ 0xffffffffffffffff)) +
              ((uVar26 >> 0xe | uVar26 << 0x32) ^ (uVar26 >> 0x12 | uVar26 << 0x2e) ^
              (uVar26 >> 0x29 | uVar26 * 0x800000));
      uVar25 = uVar25 + lVar2;
      uVar21 = lVar2 + ((uVar23 ^ uVar24) & (uVar22 ^ uVar23) ^ uVar23) +
               ((uVar22 >> 0x1c | uVar22 << 0x24) ^ (uVar22 >> 0x22 | uVar22 * 0x40000000) ^
               (uVar22 >> 0x27 | uVar22 * 0x2000000));
      uVar11 = uVar11 + uVar6 +
               ((uVar12 >> 1 | uVar12 << 0x3f) ^ (uVar12 >> 8 | uVar12 << 0x38) ^ uVar12 >> 7) +
               ((local_90 >> 0x13 | local_90 << 0x2d) ^ (local_90 >> 0x3d | local_90 * 8) ^
               local_90 >> 6);
      lVar2 = uVar28 + plVar29[7] + uVar11 +
              (uVar26 & uVar25 | uVar27 & (uVar25 ^ 0xffffffffffffffff)) +
              ((uVar25 >> 0xe | uVar25 << 0x32) ^ (uVar25 >> 0x12 | uVar25 << 0x2e) ^
              (uVar25 >> 0x29 | uVar25 * 0x800000));
      uVar24 = uVar24 + lVar2;
      uVar28 = lVar2 + ((uVar22 ^ uVar23) & (uVar21 ^ uVar22) ^ uVar22) +
               ((uVar21 >> 0x1c | uVar21 << 0x24) ^ (uVar21 >> 0x22 | uVar21 * 0x40000000) ^
               (uVar21 >> 0x27 | uVar21 * 0x2000000));
      uVar12 = uVar12 + uVar8 +
               ((uVar13 >> 1 | uVar13 << 0x3f) ^ (uVar13 >> 8 | uVar13 << 0x38) ^ uVar13 >> 7) +
               ((local_88 >> 0x13 | local_88 << 0x2d) ^ (local_88 >> 0x3d | local_88 * 8) ^
               local_88 >> 6);
      lVar2 = uVar27 + plVar29[8] + uVar12 +
              (uVar25 & uVar24 | uVar26 & (uVar24 ^ 0xffffffffffffffff)) +
              ((uVar24 >> 0xe | uVar24 << 0x32) ^ (uVar24 >> 0x12 | uVar24 << 0x2e) ^
              (uVar24 >> 0x29 | uVar24 * 0x800000));
      uVar23 = uVar23 + lVar2;
      uVar27 = lVar2 + ((uVar21 ^ uVar22) & (uVar28 ^ uVar21) ^ uVar21) +
               ((uVar28 >> 0x1c | uVar28 << 0x24) ^ (uVar28 >> 0x22 | uVar28 * 0x40000000) ^
               (uVar28 >> 0x27 | uVar28 * 0x2000000));
      uVar13 = uVar13 + uVar9 +
               ((uVar14 >> 1 | uVar14 << 0x3f) ^ (uVar14 >> 8 | uVar14 << 0x38) ^ uVar14 >> 7) +
               ((uVar11 >> 0x13 | uVar11 << 0x2d) ^ (uVar11 >> 0x3d | uVar11 * 8) ^ uVar11 >> 6);
      lVar2 = uVar26 + plVar29[9] + uVar13 +
              (uVar24 & uVar23 | uVar25 & (uVar23 ^ 0xffffffffffffffff)) +
              ((uVar23 >> 0xe | uVar23 << 0x32) ^ (uVar23 >> 0x12 | uVar23 << 0x2e) ^
              (uVar23 >> 0x29 | uVar23 * 0x800000));
      uVar22 = uVar22 + lVar2;
      uVar26 = lVar2 + ((uVar28 ^ uVar21) & (uVar27 ^ uVar28) ^ uVar28) +
               ((uVar27 >> 0x1c | uVar27 << 0x24) ^ (uVar27 >> 0x22 | uVar27 * 0x40000000) ^
               (uVar27 >> 0x27 | uVar27 * 0x2000000));
      uVar14 = uVar14 + uVar10 +
               ((uVar15 >> 1 | uVar15 << 0x3f) ^ (uVar15 >> 8 | uVar15 << 0x38) ^ uVar15 >> 7) +
               ((uVar12 >> 0x13 | uVar12 << 0x2d) ^ (uVar12 >> 0x3d | uVar12 * 8) ^ uVar12 >> 6);
      lVar2 = uVar25 + plVar29[10] + uVar14 +
              (uVar23 & uVar22 | uVar24 & (uVar22 ^ 0xffffffffffffffff)) +
              ((uVar22 >> 0xe | uVar22 << 0x32) ^ (uVar22 >> 0x12 | uVar22 << 0x2e) ^
              (uVar22 >> 0x29 | uVar22 * 0x800000));
      uVar21 = uVar21 + lVar2;
      uVar25 = lVar2 + ((uVar27 ^ uVar28) & (uVar26 ^ uVar27) ^ uVar27) +
               ((uVar26 >> 0x1c | uVar26 << 0x24) ^ (uVar26 >> 0x22 | uVar26 * 0x40000000) ^
               (uVar26 >> 0x27 | uVar26 * 0x2000000));
      uVar15 = uVar15 + local_98 +
               ((uVar16 >> 1 | uVar16 << 0x3f) ^ (uVar16 >> 8 | uVar16 << 0x38) ^ uVar16 >> 7) +
               ((uVar13 >> 0x13 | uVar13 << 0x2d) ^ (uVar13 >> 0x3d | uVar13 * 8) ^ uVar13 >> 6);
      lVar2 = uVar24 + plVar29[0xb] + uVar15 +
              (uVar22 & uVar21 | uVar23 & (uVar21 ^ 0xffffffffffffffff)) +
              ((uVar21 >> 0xe | uVar21 << 0x32) ^ (uVar21 >> 0x12 | uVar21 << 0x2e) ^
              (uVar21 >> 0x29 | uVar21 * 0x800000));
      uVar28 = uVar28 + lVar2;
      uVar24 = lVar2 + ((uVar26 ^ uVar27) & (uVar25 ^ uVar26) ^ uVar26) +
               ((uVar25 >> 0x1c | uVar25 << 0x24) ^ (uVar25 >> 0x22 | uVar25 * 0x40000000) ^
               (uVar25 >> 0x27 | uVar25 * 0x2000000));
      uVar16 = uVar16 + local_90 +
               ((uVar17 >> 1 | uVar17 << 0x3f) ^ (uVar17 >> 8 | uVar17 << 0x38) ^ uVar17 >> 7) +
               ((uVar14 >> 0x13 | uVar14 << 0x2d) ^ (uVar14 >> 0x3d | uVar14 * 8) ^ uVar14 >> 6);
      lVar2 = uVar23 + plVar29[0xc] + uVar16 +
              (uVar21 & uVar28 | uVar22 & (uVar28 ^ 0xffffffffffffffff)) +
              ((uVar28 >> 0xe | uVar28 << 0x32) ^ (uVar28 >> 0x12 | uVar28 << 0x2e) ^
              (uVar28 >> 0x29 | uVar28 * 0x800000));
      uVar27 = uVar27 + lVar2;
      uVar23 = lVar2 + ((uVar25 ^ uVar26) & (uVar24 ^ uVar25) ^ uVar25) +
               ((uVar24 >> 0x1c | uVar24 << 0x24) ^ (uVar24 >> 0x22 | uVar24 * 0x40000000) ^
               (uVar24 >> 0x27 | uVar24 * 0x2000000));
      uVar17 = uVar17 + local_88 +
               ((uVar18 >> 1 | uVar18 << 0x3f) ^ (uVar18 >> 8 | uVar18 << 0x38) ^ uVar18 >> 7) +
               ((uVar15 >> 0x13 | uVar15 << 0x2d) ^ (uVar15 >> 0x3d | uVar15 * 8) ^ uVar15 >> 6);
      lVar2 = uVar22 + plVar29[0xd] + uVar17 +
              (uVar28 & uVar27 | uVar21 & (uVar27 ^ 0xffffffffffffffff)) +
              ((uVar27 >> 0xe | uVar27 << 0x32) ^ (uVar27 >> 0x12 | uVar27 << 0x2e) ^
              (uVar27 >> 0x29 | uVar27 * 0x800000));
      uVar26 = uVar26 + lVar2;
      uVar22 = lVar2 + ((uVar24 ^ uVar25) & (uVar23 ^ uVar24) ^ uVar24) +
               ((uVar23 >> 0x1c | uVar23 << 0x24) ^ (uVar23 >> 0x22 | uVar23 * 0x40000000) ^
               (uVar23 >> 0x27 | uVar23 * 0x2000000));
      uVar18 = uVar18 + uVar11 +
               ((uVar7 >> 1 | uVar7 << 0x3f) ^ (uVar7 >> 8 | uVar7 << 0x38) ^ uVar7 >> 7) +
               ((uVar16 >> 0x13 | uVar16 << 0x2d) ^ (uVar16 >> 0x3d | uVar16 * 8) ^ uVar16 >> 6);
      uVar19 = uVar22 ^ uVar23;
      lVar2 = uVar21 + plVar29[0xe] + uVar18 +
              (uVar27 & uVar26 | uVar28 & (uVar26 ^ 0xffffffffffffffff)) +
              ((uVar26 >> 0xe | uVar26 << 0x32) ^ (uVar26 >> 0x12 | uVar26 << 0x2e) ^
              (uVar26 >> 0x29 | uVar26 * 0x800000));
      uVar25 = uVar25 + lVar2;
      lVar20 = plVar29[0xf];
      uVar21 = lVar2 + ((uVar23 ^ uVar24) & uVar19 ^ uVar23) +
               ((uVar22 >> 0x1c | uVar22 << 0x24) ^ (uVar22 >> 0x22 | uVar22 * 0x40000000) ^
               (uVar22 >> 0x27 | uVar22 * 0x2000000));
      uVar7 = uVar7 + uVar12 +
              ((uVar6 >> 1 | uVar6 << 0x3f) ^ (uVar6 >> 8 | uVar6 << 0x38) ^ uVar6 >> 7) +
              ((uVar17 >> 0x13 | uVar17 << 0x2d) ^ (uVar17 >> 0x3d | uVar17 * 8) ^ uVar17 >> 6);
      plVar4 = plVar29 + 0x10;
    } while (lVar20 != 0);
    plVar29 = plVar29 + -0x41;
    param_2 = param_2 + 0x10;
    uVar21 = uVar21 + *param_1;
    uVar22 = uVar22 + param_1[1];
    uVar23 = uVar23 + param_1[2];
    uVar24 = uVar24 + param_1[3];
    *param_1 = uVar21;
    param_1[1] = uVar22;
    uVar25 = uVar25 + param_1[4];
    uVar26 = uVar26 + param_1[5];
    param_1[2] = uVar23;
    param_1[3] = uVar24;
    uVar27 = uVar27 + param_1[6];
    uVar28 = uVar28 + param_1[7];
    param_1[4] = uVar25;
    param_1[5] = uVar26;
    param_1[6] = uVar27;
    param_1[7] = uVar28;
  } while (param_2 != puVar1);
  return;
}

