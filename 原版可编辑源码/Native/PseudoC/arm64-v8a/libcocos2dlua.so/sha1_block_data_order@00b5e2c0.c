
void sha1_block_data_order(undefined1 (*param_1) [16],undefined1 (*param_2) [16],long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 (*pauVar18) [16];
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  int iVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  
  if ((OPENSSL_armcap_P & 8) == 0) {
    uVar38 = *(uint *)*param_1;
    uVar41 = *(uint *)(*param_1 + 4);
    uVar39 = *(uint *)(*param_1 + 8);
    uVar40 = *(uint *)(*param_1 + 0xc);
    iVar46 = *(int *)param_1[1];
    do {
      param_3 = param_3 + -1;
      uVar22 = (*(ulong *)*param_2 & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)*param_2 & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar21 = (uint)uVar22;
      uVar1 = uVar41 >> 2 | uVar41 << 0x1e;
      uVar23 = (uint)(uVar22 >> 0x20);
      uVar41 = iVar46 + 0x5a827999 + uVar21 + (uVar38 >> 0x1b | uVar38 << 5) +
               (uVar40 & (uVar41 ^ 0xffffffff) | uVar39 & uVar41);
      uVar22 = (*(ulong *)(*param_2 + 8) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)(*param_2 + 8) & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar2 = uVar38 >> 2 | uVar38 << 0x1e;
      uVar24 = (uint)uVar22;
      uVar38 = uVar40 + 0x5a827999 + uVar23 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar39 & (uVar38 ^ 0xffffffff) | uVar1 & uVar38);
      uVar40 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar25 = (uint)(uVar22 >> 0x20);
      uVar41 = uVar39 + 0x5a827999 + uVar24 + (uVar38 >> 0x1b | uVar38 * 0x20) +
               (uVar1 & (uVar41 ^ 0xffffffff) | uVar2 & uVar41);
      uVar22 = (*(ulong *)param_2[1] & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)param_2[1] & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar38 >> 2 | uVar38 * 0x40000000;
      uVar26 = (uint)uVar22;
      uVar39 = uVar1 + 0x5a827999 + uVar25 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar2 & (uVar38 ^ 0xffffffff) | uVar40 & uVar38);
      uVar38 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar27 = (uint)(uVar22 >> 0x20);
      uVar41 = uVar2 + 0x5a827999 + uVar26 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar40 & (uVar41 ^ 0xffffffff) | uVar3 & uVar41);
      uVar22 = (*(ulong *)(param_2[1] + 8) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)(param_2[1] + 8) & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar1 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar28 = (uint)uVar22;
      uVar39 = uVar40 + 0x5a827999 + uVar27 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar3 & (uVar39 ^ 0xffffffff) | uVar38 & uVar39);
      uVar40 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar29 = (uint)(uVar22 >> 0x20);
      uVar41 = uVar3 + 0x5a827999 + uVar28 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar38 & (uVar41 ^ 0xffffffff) | uVar1 & uVar41);
      uVar22 = (*(ulong *)param_2[2] & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)param_2[2] & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar2 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar30 = (uint)uVar22;
      uVar39 = uVar38 + 0x5a827999 + uVar29 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar1 & (uVar39 ^ 0xffffffff) | uVar40 & uVar39);
      uVar38 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar31 = (uint)(uVar22 >> 0x20);
      uVar41 = uVar1 + 0x5a827999 + uVar30 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar40 & (uVar41 ^ 0xffffffff) | uVar2 & uVar41);
      uVar22 = (*(ulong *)(param_2[2] + 8) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)(param_2[2] + 8) & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar1 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar32 = (uint)uVar22;
      uVar39 = uVar40 + 0x5a827999 + uVar31 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar2 & (uVar39 ^ 0xffffffff) | uVar38 & uVar39);
      uVar40 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar33 = (uint)(uVar22 >> 0x20);
      uVar41 = uVar2 + 0x5a827999 + uVar32 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar38 & (uVar41 ^ 0xffffffff) | uVar1 & uVar41);
      uVar22 = (*(ulong *)param_2[3] & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)param_2[3] & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar2 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar34 = (uint)uVar22;
      uVar39 = uVar38 + 0x5a827999 + uVar33 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar1 & (uVar39 ^ 0xffffffff) | uVar40 & uVar39);
      uVar3 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar35 = (uint)(uVar22 >> 0x20);
      uVar41 = uVar1 + 0x5a827999 + uVar34 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar40 & (uVar41 ^ 0xffffffff) | uVar2 & uVar41);
      uVar22 = (*(ulong *)(param_2[3] + 8) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)(param_2[3] + 8) & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar1 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar36 = (uint)uVar22;
      uVar39 = uVar40 + 0x5a827999 + uVar35 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar2 & (uVar39 ^ 0xffffffff) | uVar3 & uVar39);
      uVar38 = uVar21 ^ uVar24 ^ uVar30 ^ uVar35;
      uVar40 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar37 = (uint)(uVar22 >> 0x20);
      uVar41 = uVar2 + 0x5a827999 + uVar36 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar3 & (uVar41 ^ 0xffffffff) | uVar1 & uVar41);
      uVar2 = uVar38 >> 0x1f | uVar38 << 1;
      uVar38 = uVar23 ^ uVar25 ^ uVar31 ^ uVar36;
      uVar21 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar39 = uVar3 + 0x5a827999 + uVar37 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar1 & (uVar39 ^ 0xffffffff) | uVar40 & uVar39);
      uVar3 = uVar38 >> 0x1f | uVar38 << 1;
      uVar38 = uVar24 ^ uVar26 ^ uVar32 ^ uVar37;
      uVar23 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar41 = uVar1 + 0x5a827999 + uVar2 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar40 & (uVar41 ^ 0xffffffff) | uVar21 & uVar41);
      uVar1 = uVar38 >> 0x1f | uVar38 << 1;
      uVar38 = uVar25 ^ uVar27 ^ uVar33 ^ uVar2;
      uVar24 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar39 = uVar40 + 0x5a827999 + uVar3 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar21 & (uVar39 ^ 0xffffffff) | uVar23 & uVar39);
      uVar40 = uVar38 >> 0x1f | uVar38 << 1;
      uVar38 = uVar26 ^ uVar28 ^ uVar34 ^ uVar3;
      uVar25 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar41 = uVar21 + 0x5a827999 + uVar1 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar23 & (uVar41 ^ 0xffffffff) | uVar24 & uVar41);
      uVar21 = uVar38 >> 0x1f | uVar38 << 1;
      uVar38 = uVar27 ^ uVar29 ^ uVar35 ^ uVar1;
      uVar26 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar39 = uVar23 + 0x5a827999 + uVar40 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar24 & (uVar39 ^ 0xffffffff) | uVar25 & uVar39);
      uVar23 = uVar38 >> 0x1f | uVar38 << 1;
      uVar27 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar28 ^ uVar30 ^ uVar36 ^ uVar40;
      uVar41 = uVar24 + 0x6ed9eba1 + uVar21 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar25 ^ uVar41 ^ uVar26);
      uVar24 = uVar38 >> 0x1f | uVar38 << 1;
      uVar28 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar29 ^ uVar31 ^ uVar37 ^ uVar21;
      uVar39 = uVar25 + 0x6ed9eba1 + uVar23 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar26 ^ uVar39 ^ uVar27);
      uVar25 = uVar38 >> 0x1f | uVar38 << 1;
      uVar29 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar30 ^ uVar32 ^ uVar2 ^ uVar23;
      uVar41 = uVar26 + 0x6ed9eba1 + uVar24 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar27 ^ uVar41 ^ uVar28);
      uVar26 = uVar38 >> 0x1f | uVar38 << 1;
      uVar30 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar31 ^ uVar33 ^ uVar3 ^ uVar24;
      uVar39 = uVar27 + 0x6ed9eba1 + uVar25 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar28 ^ uVar39 ^ uVar29);
      uVar27 = uVar38 >> 0x1f | uVar38 << 1;
      uVar31 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar32 ^ uVar34 ^ uVar1 ^ uVar25;
      uVar41 = uVar28 + 0x6ed9eba1 + uVar26 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar29 ^ uVar41 ^ uVar30);
      uVar28 = uVar38 >> 0x1f | uVar38 << 1;
      uVar32 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar33 ^ uVar35 ^ uVar40 ^ uVar26;
      uVar39 = uVar29 + 0x6ed9eba1 + uVar27 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar30 ^ uVar39 ^ uVar31);
      uVar29 = uVar38 >> 0x1f | uVar38 << 1;
      uVar33 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar34 ^ uVar36 ^ uVar21 ^ uVar27;
      uVar41 = uVar30 + 0x6ed9eba1 + uVar28 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar31 ^ uVar41 ^ uVar32);
      uVar30 = uVar38 >> 0x1f | uVar38 << 1;
      uVar34 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar35 ^ uVar37 ^ uVar23 ^ uVar28;
      uVar39 = uVar31 + 0x6ed9eba1 + uVar29 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar32 ^ uVar39 ^ uVar33);
      uVar31 = uVar38 >> 0x1f | uVar38 << 1;
      uVar35 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar36 ^ uVar2 ^ uVar24 ^ uVar29;
      uVar41 = uVar32 + 0x6ed9eba1 + uVar30 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar33 ^ uVar41 ^ uVar34);
      uVar32 = uVar38 >> 0x1f | uVar38 << 1;
      uVar36 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar37 ^ uVar3 ^ uVar25 ^ uVar30;
      uVar39 = uVar33 + 0x6ed9eba1 + uVar31 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar34 ^ uVar39 ^ uVar35);
      uVar33 = uVar38 >> 0x1f | uVar38 << 1;
      uVar37 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar2 ^ uVar1 ^ uVar26 ^ uVar31;
      uVar41 = uVar34 + 0x6ed9eba1 + uVar32 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar35 ^ uVar41 ^ uVar36);
      uVar2 = uVar38 >> 0x1f | uVar38 << 1;
      uVar34 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar3 ^ uVar40 ^ uVar27 ^ uVar32;
      uVar39 = uVar35 + 0x6ed9eba1 + uVar33 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar36 ^ uVar39 ^ uVar37);
      uVar3 = uVar38 >> 0x1f | uVar38 << 1;
      uVar35 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar1 ^ uVar21 ^ uVar28 ^ uVar33;
      uVar41 = uVar36 + 0x6ed9eba1 + uVar2 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar37 ^ uVar41 ^ uVar34);
      uVar1 = uVar38 >> 0x1f | uVar38 << 1;
      uVar36 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar40 ^ uVar23 ^ uVar29 ^ uVar2;
      uVar39 = uVar37 + 0x6ed9eba1 + uVar3 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar34 ^ uVar39 ^ uVar35);
      uVar40 = uVar38 >> 0x1f | uVar38 << 1;
      uVar37 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar21 ^ uVar24 ^ uVar30 ^ uVar3;
      uVar41 = uVar34 + 0x6ed9eba1 + uVar1 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar35 ^ uVar41 ^ uVar36);
      uVar21 = uVar38 >> 0x1f | uVar38 << 1;
      uVar34 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar23 ^ uVar25 ^ uVar31 ^ uVar1;
      uVar39 = uVar35 + 0x6ed9eba1 + uVar40 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar36 ^ uVar39 ^ uVar37);
      uVar23 = uVar38 >> 0x1f | uVar38 << 1;
      uVar35 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar24 ^ uVar26 ^ uVar32 ^ uVar40;
      uVar41 = uVar36 + 0x6ed9eba1 + uVar21 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar37 ^ uVar41 ^ uVar34);
      uVar24 = uVar38 >> 0x1f | uVar38 << 1;
      uVar36 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar25 ^ uVar27 ^ uVar33 ^ uVar21;
      uVar39 = uVar37 + 0x6ed9eba1 + uVar23 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar34 ^ uVar39 ^ uVar35);
      uVar25 = uVar38 >> 0x1f | uVar38 << 1;
      uVar37 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar26 ^ uVar28 ^ uVar2 ^ uVar23;
      uVar41 = uVar34 + 0x6ed9eba1 + uVar24 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar35 ^ uVar41 ^ uVar36);
      uVar26 = uVar38 >> 0x1f | uVar38 << 1;
      uVar34 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar27 ^ uVar29 ^ uVar3 ^ uVar24;
      uVar39 = uVar35 + 0x6ed9eba1 + uVar25 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar36 ^ uVar39 ^ uVar37);
      uVar27 = uVar38 >> 0x1f | uVar38 << 1;
      uVar35 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar28 ^ uVar30 ^ uVar1 ^ uVar25;
      uVar41 = uVar36 + 0x8f1bbcdc + uVar26 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               ((uVar41 | uVar34) & uVar37 | uVar41 & uVar34);
      uVar28 = uVar38 >> 0x1f | uVar38 << 1;
      uVar36 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar29 ^ uVar31 ^ uVar40 ^ uVar26;
      uVar39 = uVar37 + 0x8f1bbcdc + uVar27 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               ((uVar39 | uVar35) & uVar34 | uVar39 & uVar35);
      uVar29 = uVar38 >> 0x1f | uVar38 << 1;
      uVar37 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar30 ^ uVar32 ^ uVar21 ^ uVar27;
      uVar41 = uVar34 + 0x8f1bbcdc + uVar28 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               ((uVar41 | uVar36) & uVar35 | uVar41 & uVar36);
      uVar30 = uVar38 >> 0x1f | uVar38 << 1;
      uVar34 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar31 ^ uVar33 ^ uVar23 ^ uVar28;
      uVar39 = uVar35 + 0x8f1bbcdc + uVar29 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               ((uVar39 | uVar37) & uVar36 | uVar39 & uVar37);
      uVar31 = uVar38 >> 0x1f | uVar38 << 1;
      uVar35 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar32 ^ uVar2 ^ uVar24 ^ uVar29;
      uVar41 = uVar36 + 0x8f1bbcdc + uVar30 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               ((uVar41 | uVar34) & uVar37 | uVar41 & uVar34);
      uVar32 = uVar38 >> 0x1f | uVar38 << 1;
      uVar36 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar33 ^ uVar3 ^ uVar25 ^ uVar30;
      uVar39 = uVar37 + 0x8f1bbcdc + uVar31 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               ((uVar39 | uVar35) & uVar34 | uVar39 & uVar35);
      uVar33 = uVar38 >> 0x1f | uVar38 << 1;
      uVar37 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar2 ^ uVar1 ^ uVar26 ^ uVar31;
      uVar41 = uVar34 + 0x8f1bbcdc + uVar32 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               ((uVar41 | uVar36) & uVar35 | uVar41 & uVar36);
      uVar2 = uVar38 >> 0x1f | uVar38 << 1;
      uVar34 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar3 ^ uVar40 ^ uVar27 ^ uVar32;
      uVar39 = uVar35 + 0x8f1bbcdc + uVar33 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               ((uVar39 | uVar37) & uVar36 | uVar39 & uVar37);
      uVar3 = uVar38 >> 0x1f | uVar38 << 1;
      uVar35 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar1 ^ uVar21 ^ uVar28 ^ uVar33;
      uVar41 = uVar36 + 0x8f1bbcdc + uVar2 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               ((uVar41 | uVar34) & uVar37 | uVar41 & uVar34);
      uVar1 = uVar38 >> 0x1f | uVar38 << 1;
      uVar36 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar40 ^ uVar23 ^ uVar29 ^ uVar2;
      uVar39 = uVar37 + 0x8f1bbcdc + uVar3 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               ((uVar39 | uVar35) & uVar34 | uVar39 & uVar35);
      uVar40 = uVar38 >> 0x1f | uVar38 << 1;
      uVar37 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar21 ^ uVar24 ^ uVar30 ^ uVar3;
      uVar41 = uVar34 + 0x8f1bbcdc + uVar1 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               ((uVar41 | uVar36) & uVar35 | uVar41 & uVar36);
      uVar21 = uVar38 >> 0x1f | uVar38 << 1;
      uVar34 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar23 ^ uVar25 ^ uVar31 ^ uVar1;
      uVar39 = uVar35 + 0x8f1bbcdc + uVar40 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               ((uVar39 | uVar37) & uVar36 | uVar39 & uVar37);
      uVar23 = uVar38 >> 0x1f | uVar38 << 1;
      uVar35 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar24 ^ uVar26 ^ uVar32 ^ uVar40;
      uVar41 = uVar36 + 0x8f1bbcdc + uVar21 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               ((uVar41 | uVar34) & uVar37 | uVar41 & uVar34);
      uVar24 = uVar38 >> 0x1f | uVar38 << 1;
      uVar36 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar25 ^ uVar27 ^ uVar33 ^ uVar21;
      uVar39 = uVar37 + 0x8f1bbcdc + uVar23 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               ((uVar39 | uVar35) & uVar34 | uVar39 & uVar35);
      uVar25 = uVar38 >> 0x1f | uVar38 << 1;
      uVar37 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar26 ^ uVar28 ^ uVar2 ^ uVar23;
      uVar41 = uVar34 + 0x8f1bbcdc + uVar24 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               ((uVar41 | uVar36) & uVar35 | uVar41 & uVar36);
      uVar26 = uVar38 >> 0x1f | uVar38 << 1;
      uVar34 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar27 ^ uVar29 ^ uVar3 ^ uVar24;
      uVar39 = uVar35 + 0x8f1bbcdc + uVar25 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               ((uVar39 | uVar37) & uVar36 | uVar39 & uVar37);
      uVar27 = uVar38 >> 0x1f | uVar38 << 1;
      uVar35 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar28 ^ uVar30 ^ uVar1 ^ uVar25;
      uVar41 = uVar36 + 0x8f1bbcdc + uVar26 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               ((uVar41 | uVar34) & uVar37 | uVar41 & uVar34);
      uVar28 = uVar38 >> 0x1f | uVar38 << 1;
      uVar36 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar29 ^ uVar31 ^ uVar40 ^ uVar26;
      uVar39 = uVar37 + 0x8f1bbcdc + uVar27 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               ((uVar39 | uVar35) & uVar34 | uVar39 & uVar35);
      uVar29 = uVar38 >> 0x1f | uVar38 << 1;
      uVar37 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar30 ^ uVar32 ^ uVar21 ^ uVar27;
      uVar41 = uVar34 + 0x8f1bbcdc + uVar28 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               ((uVar41 | uVar36) & uVar35 | uVar41 & uVar36);
      uVar30 = uVar38 >> 0x1f | uVar38 << 1;
      uVar34 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar31 ^ uVar33 ^ uVar23 ^ uVar28;
      uVar39 = uVar35 + 0x8f1bbcdc + uVar29 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               ((uVar39 | uVar37) & uVar36 | uVar39 & uVar37);
      uVar31 = uVar38 >> 0x1f | uVar38 << 1;
      uVar35 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar32 ^ uVar2 ^ uVar24 ^ uVar29;
      uVar41 = uVar36 + 0xca62c1d6 + uVar30 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar37 ^ uVar41 ^ uVar34);
      uVar32 = uVar38 >> 0x1f | uVar38 << 1;
      uVar36 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar33 ^ uVar3 ^ uVar25 ^ uVar30;
      uVar39 = uVar37 + 0xca62c1d6 + uVar31 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar34 ^ uVar39 ^ uVar35);
      uVar33 = uVar38 >> 0x1f | uVar38 << 1;
      uVar37 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar2 ^ uVar1 ^ uVar26 ^ uVar31;
      uVar41 = uVar34 + 0xca62c1d6 + uVar32 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar35 ^ uVar41 ^ uVar36);
      uVar34 = uVar38 >> 0x1f | uVar38 << 1;
      uVar2 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar3 ^ uVar40 ^ uVar27 ^ uVar32;
      uVar39 = uVar35 + 0xca62c1d6 + uVar33 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar36 ^ uVar39 ^ uVar37);
      uVar35 = uVar38 >> 0x1f | uVar38 << 1;
      uVar3 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar1 ^ uVar21 ^ uVar28 ^ uVar33;
      uVar41 = uVar36 + 0xca62c1d6 + uVar34 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar37 ^ uVar41 ^ uVar2);
      uVar36 = uVar38 >> 0x1f | uVar38 << 1;
      uVar1 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar40 ^ uVar23 ^ uVar29 ^ uVar34;
      uVar39 = uVar37 + 0xca62c1d6 + uVar35 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar2 ^ uVar39 ^ uVar3);
      uVar37 = uVar38 >> 0x1f | uVar38 << 1;
      uVar40 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar21 ^ uVar24 ^ uVar30 ^ uVar35;
      uVar41 = uVar2 + 0xca62c1d6 + uVar36 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar3 ^ uVar41 ^ uVar1);
      uVar21 = uVar38 >> 0x1f | uVar38 << 1;
      uVar2 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar23 ^ uVar25 ^ uVar31 ^ uVar36;
      uVar39 = uVar3 + 0xca62c1d6 + uVar37 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar1 ^ uVar39 ^ uVar40);
      uVar23 = uVar38 >> 0x1f | uVar38 << 1;
      uVar3 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar24 ^ uVar26 ^ uVar32 ^ uVar37;
      uVar41 = uVar1 + 0xca62c1d6 + uVar21 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar40 ^ uVar41 ^ uVar2);
      uVar24 = uVar38 >> 0x1f | uVar38 << 1;
      uVar4 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar25 ^ uVar27 ^ uVar33 ^ uVar21;
      uVar39 = uVar40 + 0xca62c1d6 + uVar23 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar2 ^ uVar39 ^ uVar3);
      uVar25 = uVar38 >> 0x1f | uVar38 << 1;
      uVar5 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar26 ^ uVar28 ^ uVar34 ^ uVar23;
      uVar41 = uVar2 + 0xca62c1d6 + uVar24 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar3 ^ uVar41 ^ uVar4);
      uVar40 = uVar38 >> 0x1f | uVar38 << 1;
      uVar26 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar27 ^ uVar29 ^ uVar35 ^ uVar24;
      uVar39 = uVar3 + 0xca62c1d6 + uVar25 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar4 ^ uVar39 ^ uVar5);
      uVar1 = uVar38 >> 0x1f | uVar38 << 1;
      uVar27 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar28 ^ uVar30 ^ uVar36 ^ uVar25;
      uVar41 = uVar4 + 0xca62c1d6 + uVar40 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar5 ^ uVar41 ^ uVar26);
      uVar38 = uVar38 >> 0x1f | uVar38 << 1;
      uVar28 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar40 = uVar29 ^ uVar31 ^ uVar37 ^ uVar40;
      uVar39 = uVar5 + 0xca62c1d6 + uVar1 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar26 ^ uVar39 ^ uVar27);
      uVar2 = uVar40 >> 0x1f | uVar40 << 1;
      uVar40 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar1 = uVar30 ^ uVar32 ^ uVar21 ^ uVar1;
      uVar41 = uVar26 + 0xca62c1d6 + uVar38 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar27 ^ uVar41 ^ uVar28);
      uVar3 = uVar1 >> 0x1f | uVar1 << 1;
      uVar1 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar31 ^ uVar33 ^ uVar23 ^ uVar38;
      uVar39 = uVar27 + 0xca62c1d6 + uVar2 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar28 ^ uVar39 ^ uVar40);
      uVar21 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar2 = uVar32 ^ uVar34 ^ uVar24 ^ uVar2;
      uVar41 = uVar28 + 0xca62c1d6 + uVar3 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar40 ^ uVar41 ^ uVar1);
      uVar23 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar3 = uVar33 ^ uVar35 ^ uVar25 ^ uVar3;
      uVar38 = uVar40 + 0xca62c1d6 + (uVar38 >> 0x1f | uVar38 << 1) +
               (uVar41 >> 0x1b | uVar41 * 0x20) + (uVar1 ^ uVar39 ^ uVar21);
      uVar40 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar1 = uVar1 + 0xca62c1d6 + (uVar2 >> 0x1f | uVar2 << 1) + (uVar38 >> 0x1b | uVar38 * 0x20) +
              (uVar21 ^ uVar41 ^ uVar23);
      uVar41 = uVar1 + *(int *)(*param_1 + 4);
      uVar39 = (uVar38 >> 2 | uVar38 * 0x40000000) + *(int *)(*param_1 + 8);
      uVar38 = uVar21 + 0xca62c1d6 + (uVar3 >> 0x1f | uVar3 << 1) + (uVar1 >> 0x1b | uVar1 * 0x20) +
               (uVar23 ^ uVar38 ^ uVar40) + *(int *)*param_1;
      uVar40 = uVar40 + *(int *)(*param_1 + 0xc);
      iVar46 = uVar23 + *(int *)param_1[1];
      *(uint *)*param_1 = uVar38;
      *(uint *)(*param_1 + 4) = uVar41;
      *(uint *)(*param_1 + 8) = uVar39;
      *(uint *)(*param_1 + 0xc) = uVar40;
      *(int *)param_1[1] = iVar46;
      param_2 = param_2 + 4;
    } while (param_3 != 0);
    return;
  }
  iVar46 = *(int *)param_1[1];
  auVar42 = *param_1;
  do {
    auVar43 = *param_2;
    pauVar18 = param_2 + 1;
    pauVar19 = param_2 + 2;
    pauVar20 = param_2 + 3;
    param_2 = param_2 + 4;
    param_3 = param_3 + -1;
    auVar47 = NEON_rev32(auVar43,1);
    auVar49 = NEON_rev32(*pauVar18,1);
    auVar50 = NEON_rev32(*pauVar19,1);
    auVar51 = NEON_rev32(*pauVar20,1);
    uVar41 = auVar42._0_4_;
    auVar43._4_4_ = auVar47._4_4_ + 0x5a827999;
    auVar43._0_4_ = auVar47._0_4_ + 0x5a827999;
    auVar43._8_4_ = auVar47._8_4_ + 0x5a827999;
    auVar43._12_4_ = auVar47._12_4_ + 0x5a827999;
    auVar43 = NEON_sha1c(auVar42,iVar46,auVar43,4);
    auVar47 = NEON_sha1su0(auVar47,auVar49,auVar50,4);
    auVar8._4_4_ = auVar49._4_4_ + 0x5a827999;
    auVar8._0_4_ = auVar49._0_4_ + 0x5a827999;
    auVar8._8_4_ = auVar49._8_4_ + 0x5a827999;
    auVar8._12_4_ = auVar49._12_4_ + 0x5a827999;
    auVar44 = NEON_sha1c(auVar43,uVar41 << 0x1e | uVar41 >> 2,auVar8,4);
    auVar48 = NEON_sha1su1(auVar47,auVar51,4);
    auVar49 = NEON_sha1su0(auVar49,auVar50,auVar51,4);
    auVar47._4_4_ = auVar50._4_4_ + 0x5a827999;
    auVar47._0_4_ = auVar50._0_4_ + 0x5a827999;
    auVar47._8_4_ = auVar50._8_4_ + 0x5a827999;
    auVar47._12_4_ = auVar50._12_4_ + 0x5a827999;
    auVar43 = NEON_sha1c(auVar44,auVar43._0_4_ << 0x1e | auVar43._0_4_ >> 2,auVar47,4);
    auVar49 = NEON_sha1su1(auVar49,auVar48,4);
    auVar50 = NEON_sha1su0(auVar50,auVar51,auVar48,4);
    auVar9._4_4_ = auVar51._4_4_ + 0x5a827999;
    auVar9._0_4_ = auVar51._0_4_ + 0x5a827999;
    auVar9._8_4_ = auVar51._8_4_ + 0x5a827999;
    auVar9._12_4_ = auVar51._12_4_ + 0x5a827999;
    auVar47 = NEON_sha1c(auVar43,auVar44._0_4_ << 0x1e | auVar44._0_4_ >> 2,auVar9,4);
    auVar50 = NEON_sha1su1(auVar50,auVar49,4);
    auVar51 = NEON_sha1su0(auVar51,auVar48,auVar49,4);
    auVar44._4_4_ = auVar48._4_4_ + 0x5a827999;
    auVar44._0_4_ = auVar48._0_4_ + 0x5a827999;
    auVar44._8_4_ = auVar48._8_4_ + 0x5a827999;
    auVar44._12_4_ = auVar48._12_4_ + 0x5a827999;
    auVar43 = NEON_sha1c(auVar47,auVar43._0_4_ << 0x1e | auVar43._0_4_ >> 2,auVar44,4);
    auVar52 = NEON_sha1su1(auVar51,auVar50,4);
    auVar44 = NEON_sha1su0(auVar48,auVar49,auVar50,4);
    auVar10._4_4_ = auVar49._4_4_ + 0x6ed9eba1;
    auVar10._0_4_ = auVar49._0_4_ + 0x6ed9eba1;
    auVar10._8_4_ = auVar49._8_4_ + 0x6ed9eba1;
    auVar10._12_4_ = auVar49._12_4_ + 0x6ed9eba1;
    auVar47 = NEON_sha1p(auVar43,auVar47._0_4_ << 0x1e | auVar47._0_4_ >> 2,auVar10,4);
    auVar44 = NEON_sha1su1(auVar44,auVar52,4);
    auVar49 = NEON_sha1su0(auVar49,auVar50,auVar52,4);
    auVar48._4_4_ = auVar50._4_4_ + 0x6ed9eba1;
    auVar48._0_4_ = auVar50._0_4_ + 0x6ed9eba1;
    auVar48._8_4_ = auVar50._8_4_ + 0x6ed9eba1;
    auVar48._12_4_ = auVar50._12_4_ + 0x6ed9eba1;
    auVar43 = NEON_sha1p(auVar47,auVar43._0_4_ << 0x1e | auVar43._0_4_ >> 2,auVar48,4);
    auVar48 = NEON_sha1su1(auVar49,auVar44,4);
    auVar49 = NEON_sha1su0(auVar50,auVar52,auVar44,4);
    auVar11._4_4_ = auVar52._4_4_ + 0x6ed9eba1;
    auVar11._0_4_ = auVar52._0_4_ + 0x6ed9eba1;
    auVar11._8_4_ = auVar52._8_4_ + 0x6ed9eba1;
    auVar11._12_4_ = auVar52._12_4_ + 0x6ed9eba1;
    auVar47 = NEON_sha1p(auVar43,auVar47._0_4_ << 0x1e | auVar47._0_4_ >> 2,auVar11,4);
    auVar51 = NEON_sha1su1(auVar49,auVar48,4);
    auVar50 = NEON_sha1su0(auVar52,auVar44,auVar48,4);
    auVar49._4_4_ = auVar44._4_4_ + 0x6ed9eba1;
    auVar49._0_4_ = auVar44._0_4_ + 0x6ed9eba1;
    auVar49._8_4_ = auVar44._8_4_ + 0x6ed9eba1;
    auVar49._12_4_ = auVar44._12_4_ + 0x6ed9eba1;
    auVar43 = NEON_sha1p(auVar47,auVar43._0_4_ << 0x1e | auVar43._0_4_ >> 2,auVar49,4);
    auVar52 = NEON_sha1su1(auVar50,auVar51,4);
    auVar44 = NEON_sha1su0(auVar44,auVar48,auVar51,4);
    auVar12._4_4_ = auVar48._4_4_ + 0x6ed9eba1;
    auVar12._0_4_ = auVar48._0_4_ + 0x6ed9eba1;
    auVar12._8_4_ = auVar48._8_4_ + 0x6ed9eba1;
    auVar12._12_4_ = auVar48._12_4_ + 0x6ed9eba1;
    auVar47 = NEON_sha1p(auVar43,auVar47._0_4_ << 0x1e | auVar47._0_4_ >> 2,auVar12,4);
    auVar44 = NEON_sha1su1(auVar44,auVar52,4);
    auVar48 = NEON_sha1su0(auVar48,auVar51,auVar52,4);
    auVar50._4_4_ = auVar51._4_4_ + -0x70e44324;
    auVar50._0_4_ = auVar51._0_4_ + -0x70e44324;
    auVar50._8_4_ = auVar51._8_4_ + -0x70e44324;
    auVar50._12_4_ = auVar51._12_4_ + -0x70e44324;
    auVar43 = NEON_sha1m(auVar47,auVar43._0_4_ << 0x1e | auVar43._0_4_ >> 2,auVar50,4);
    auVar48 = NEON_sha1su1(auVar48,auVar44,4);
    auVar49 = NEON_sha1su0(auVar51,auVar52,auVar44,4);
    auVar13._4_4_ = auVar52._4_4_ + -0x70e44324;
    auVar13._0_4_ = auVar52._0_4_ + -0x70e44324;
    auVar13._8_4_ = auVar52._8_4_ + -0x70e44324;
    auVar13._12_4_ = auVar52._12_4_ + -0x70e44324;
    auVar47 = NEON_sha1m(auVar43,auVar47._0_4_ << 0x1e | auVar47._0_4_ >> 2,auVar13,4);
    auVar49 = NEON_sha1su1(auVar49,auVar48,4);
    auVar50 = NEON_sha1su0(auVar52,auVar44,auVar48,4);
    auVar51._4_4_ = auVar44._4_4_ + -0x70e44324;
    auVar51._0_4_ = auVar44._0_4_ + -0x70e44324;
    auVar51._8_4_ = auVar44._8_4_ + -0x70e44324;
    auVar51._12_4_ = auVar44._12_4_ + -0x70e44324;
    auVar43 = NEON_sha1m(auVar47,auVar43._0_4_ << 0x1e | auVar43._0_4_ >> 2,auVar51,4);
    auVar50 = NEON_sha1su1(auVar50,auVar49,4);
    auVar44 = NEON_sha1su0(auVar44,auVar48,auVar49,4);
    auVar14._4_4_ = auVar48._4_4_ + -0x70e44324;
    auVar14._0_4_ = auVar48._0_4_ + -0x70e44324;
    auVar14._8_4_ = auVar48._8_4_ + -0x70e44324;
    auVar14._12_4_ = auVar48._12_4_ + -0x70e44324;
    auVar47 = NEON_sha1m(auVar43,auVar47._0_4_ << 0x1e | auVar47._0_4_ >> 2,auVar14,4);
    auVar44 = NEON_sha1su1(auVar44,auVar50,4);
    auVar48 = NEON_sha1su0(auVar48,auVar49,auVar50,4);
    auVar52._4_4_ = auVar49._4_4_ + -0x70e44324;
    auVar52._0_4_ = auVar49._0_4_ + -0x70e44324;
    auVar52._8_4_ = auVar49._8_4_ + -0x70e44324;
    auVar52._12_4_ = auVar49._12_4_ + -0x70e44324;
    auVar43 = NEON_sha1m(auVar47,auVar43._0_4_ << 0x1e | auVar43._0_4_ >> 2,auVar52,4);
    auVar48 = NEON_sha1su1(auVar48,auVar44,4);
    auVar49 = NEON_sha1su0(auVar49,auVar50,auVar44,4);
    auVar15._4_4_ = auVar50._4_4_ + -0x359d3e2a;
    auVar15._0_4_ = auVar50._0_4_ + -0x359d3e2a;
    auVar15._8_4_ = auVar50._8_4_ + -0x359d3e2a;
    auVar15._12_4_ = auVar50._12_4_ + -0x359d3e2a;
    auVar47 = NEON_sha1p(auVar43,auVar47._0_4_ << 0x1e | auVar47._0_4_ >> 2,auVar15,4);
    auVar49 = NEON_sha1su1(auVar49,auVar48,4);
    auVar50 = NEON_sha1su0(auVar50,auVar44,auVar48,4);
    auVar6._4_4_ = auVar44._4_4_ + -0x359d3e2a;
    auVar6._0_4_ = auVar44._0_4_ + -0x359d3e2a;
    auVar6._8_4_ = auVar44._8_4_ + -0x359d3e2a;
    auVar6._12_4_ = auVar44._12_4_ + -0x359d3e2a;
    auVar43 = NEON_sha1p(auVar47,auVar43._0_4_ << 0x1e | auVar43._0_4_ >> 2,auVar6,4);
    auVar44 = NEON_sha1su1(auVar50,auVar49,4);
    auVar16._4_4_ = auVar48._4_4_ + -0x359d3e2a;
    auVar16._0_4_ = auVar48._0_4_ + -0x359d3e2a;
    auVar16._8_4_ = auVar48._8_4_ + -0x359d3e2a;
    auVar16._12_4_ = auVar48._12_4_ + -0x359d3e2a;
    auVar47 = NEON_sha1p(auVar43,auVar47._0_4_ << 0x1e | auVar47._0_4_ >> 2,auVar16,4);
    auVar7._4_4_ = auVar49._4_4_ + -0x359d3e2a;
    auVar7._0_4_ = auVar49._0_4_ + -0x359d3e2a;
    auVar7._8_4_ = auVar49._8_4_ + -0x359d3e2a;
    auVar7._12_4_ = auVar49._12_4_ + -0x359d3e2a;
    auVar43 = NEON_sha1p(auVar47,auVar43._0_4_ << 0x1e | auVar43._0_4_ >> 2,auVar7,4);
    auVar17._4_4_ = auVar44._4_4_ + -0x359d3e2a;
    auVar17._0_4_ = auVar44._0_4_ + -0x359d3e2a;
    auVar17._8_4_ = auVar44._8_4_ + -0x359d3e2a;
    auVar17._12_4_ = auVar44._12_4_ + -0x359d3e2a;
    auVar47 = NEON_sha1p(auVar43,auVar47._0_4_ << 0x1e | auVar47._0_4_ >> 2,auVar17,4);
    iVar46 = iVar46 + (auVar43._0_4_ << 0x1e | auVar43._0_4_ >> 2);
    auVar45._0_4_ = auVar47._0_4_ + uVar41;
    auVar45._4_4_ = auVar47._4_4_ + auVar42._4_4_;
    auVar45._8_4_ = auVar47._8_4_ + auVar42._8_4_;
    auVar45._12_4_ = auVar47._12_4_ + auVar42._12_4_;
    auVar42 = auVar45;
  } while (param_3 != 0);
  *(int *)*param_1 = auVar45._0_4_;
  *(int *)(*param_1 + 4) = auVar45._4_4_;
  *(int *)(*param_1 + 8) = auVar45._8_4_;
  *(int *)(*param_1 + 0xc) = auVar45._12_4_;
  *(int *)param_1[1] = iVar46;
  return;
}

