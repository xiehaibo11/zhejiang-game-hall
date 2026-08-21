
/* PVRTDecompressPVRTC(void const*, int, int, void*, bool) */

int PVRTDecompressPVRTC(void *param_1,int param_2,int param_3,void *param_4,bool param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  bool bVar19;
  int iVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  int iVar28;
  ulong uVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  long lVar36;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  ulong uVar41;
  uint *puVar42;
  uint *puVar43;
  ulong uVar44;
  uint uVar45;
  ulong uVar46;
  long lVar47;
  undefined8 uVar48;
  undefined1 auVar49 [13];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  undefined1 auVar55 [13];
  undefined1 auVar56 [16];
  uint local_5cc;
  int local_5a0;
  int local_59c;
  int local_598;
  int local_594;
  int local_590;
  int local_58c;
  int local_588;
  int local_584;
  ulong local_580;
  undefined8 local_578;
  ulong local_570;
  uint local_568 [2];
  undefined1 local_560 [16];
  undefined1 auStack_550 [16];
  undefined1 auStack_540 [16];
  undefined1 auStack_530 [16];
  undefined1 auStack_520 [16];
  undefined1 auStack_510 [16];
  void *local_500;
  void *pvStack_4f8;
  void *pvStack_4f0;
  void *pvStack_4e8;
  void *local_4d8 [4];
  uint local_4b8 [127];
  int iStack_2bc;
  ulong local_2b8 [2];
  uint local_2a8 [124];
  long local_b8;
  
                    /* catch() { ... } // from try @ 00fcc578 with catch @ 00fcc528 */
  lVar16 = tpidr_el0;
  local_b8 = *(long *)(lVar16 + 0x28);
  uVar27 = 8;
  uVar6 = uVar27;
  if (!param_5) {
    uVar6 = 4;
  }
  uVar44 = (ulong)uVar6;
  uVar12 = 0;
  if (uVar6 != 0) {
    uVar12 = param_2 / (int)uVar6;
  }
                    /* try { // try from 00fcc570 to 010cc577 has its CatchHandler @ 00fcc5f4 */
  if ((int)uVar12 < 3) {
    uVar12 = 2;
  }
  iVar20 = param_3 + 3;
                    /* try { // try from 00fcc578 to 010cc60f has its CatchHandler @ 00fcc528 */
  if (-1 < param_3) {
    iVar20 = param_3;
  }
  uVar7 = 2;
  if (7 < param_3) {
    uVar7 = iVar20 >> 2;
  }
  pvStack_4f8 = (void *)0x0;
  local_500 = (void *)0x0;
  pvStack_4e8 = (void *)0x0;
  pvStack_4f0 = (void *)0x0;
  if (0 < param_3) {
                    /* catch() { ... } // from try @ 00fcc570 with catch @ 00fcc5f4 */
    uVar8 = uVar7;
    if (uVar12 <= uVar7) {
      uVar8 = uVar12;
    }
    uVar30 = 7;
    if (!param_5) {
      uVar30 = 3;
      uVar27 = 4;
    }
    auVar50._8_4_ = 0xffffffec;
    auVar50._0_8_ = 0xffffffeefffffff0;
    auVar50._12_4_ = 0xffffffea;
    local_5cc = 0;
    do {
      if (0 < param_2) {
        uVar46 = 0;
        uVar4 = local_5cc - 2 & param_3 - 1U;
        uVar9 = (local_5cc & 3 | (local_5cc >> 1 & 1) << 2) ^ 4;
        uVar31 = (ulong)uVar9;
        uVar5 = uVar4 + 3;
        if (-1 < (int)(local_5cc - 2 & param_3 - 1U)) {
          uVar5 = uVar4;
        }
        uVar5 = (int)uVar5 >> 2;
        uVar4 = uVar5 + 1 & uVar7 - 1;
        do {
          uVar45 = (uint)uVar46;
          uVar13 = 0;
          if (uVar6 != 0) {
            uVar13 = (int)(uVar45 - (uVar6 >> 1) & param_2 - 1U) / (int)uVar6;
          }
          uVar35 = uVar13;
          if (uVar12 <= uVar7) {
            uVar35 = uVar5;
          }
          uVar24 = uVar13 + 1 & uVar12 - 1;
          if (uVar8 < 2) {
            uVar33 = 0;
            uVar34 = 0;
          }
          else {
            uVar34 = 0;
            uVar33 = 0;
            uVar37 = 1;
            uVar39 = 1;
            do {
              uVar11 = 0;
              if ((uVar39 & uVar5) != 0) {
                uVar11 = uVar37;
              }
              uVar14 = uVar39 & uVar13;
              uVar39 = uVar39 << 1;
              uVar15 = 0;
              if (uVar14 != 0) {
                uVar15 = uVar37 << 1;
              }
              uVar37 = uVar37 << 2;
              uVar33 = uVar11 | uVar33 | uVar15;
              uVar34 = uVar34 + 1;
            } while (uVar39 < uVar8);
          }
          uVar39 = uVar24;
          if (uVar12 <= uVar7) {
            uVar39 = uVar5;
          }
          local_4d8[0] = (void *)((long)param_1 +
                                 (ulong)((uVar35 >> (ulong)(uVar34 & 0x1f)) <<
                                         (ulong)((uVar34 & 0xf) << 1) | uVar33) * 8);
          if (uVar8 < 2) {
            uVar34 = 0;
            uVar35 = 0;
          }
          else {
            uVar35 = 0;
            uVar34 = 0;
            uVar37 = 1;
            uVar33 = 1;
            do {
              uVar11 = 0;
              if ((uVar33 & uVar5) != 0) {
                uVar11 = uVar37;
              }
              uVar14 = uVar33 & uVar24;
              uVar33 = uVar33 << 1;
              uVar15 = 0;
              if (uVar14 != 0) {
                uVar15 = uVar37 << 1;
              }
              uVar37 = uVar37 << 2;
              uVar34 = uVar11 | uVar34 | uVar15;
              uVar35 = uVar35 + 1;
            } while (uVar33 < uVar8);
          }
          uVar33 = uVar13;
          if (uVar12 <= uVar7) {
            uVar33 = uVar4;
          }
          local_4d8[1] = (void *)((long)param_1 +
                                 (ulong)((uVar39 >> (ulong)(uVar35 & 0x1f)) <<
                                         (ulong)((uVar35 & 0xf) << 1) | uVar34) * 8);
                    /* catch() { ... } // from try @ 00fcc968 with catch @ 00fcc938 */
          if (uVar8 < 2) {
            uVar34 = 0;
            uVar35 = 0;
          }
          else {
            uVar35 = 0;
            uVar34 = 0;
            uVar37 = 1;
            uVar39 = 1;
            do {
              uVar11 = 0;
              if ((uVar39 & uVar4) != 0) {
                uVar11 = uVar37;
              }
                    /* try { // try from 00fcc960 to 010cc967 has its CatchHandler @ 00fcc9ac */
              uVar14 = uVar39 & uVar13;
              uVar39 = uVar39 << 1;
                    /* try { // try from 00fcc968 to 010cc9c7 has its CatchHandler @ 00fcc938 */
              uVar15 = 0;
              if (uVar14 != 0) {
                uVar15 = uVar37 << 1;
              }
              uVar37 = uVar37 << 2;
              uVar34 = uVar11 | uVar34 | uVar15;
              uVar35 = uVar35 + 1;
            } while (uVar39 < uVar8);
          }
          uVar13 = uVar24;
          if (uVar12 <= uVar7) {
            uVar13 = uVar4;
          }
          local_4d8[2] = (void *)((long)param_1 +
                                 (ulong)((uVar33 >> (ulong)(uVar35 & 0x1f)) <<
                                         (ulong)((uVar35 & 0xf) << 1) | uVar34) * 8);
                    /* catch() { ... } // from try @ 00fcc960 with catch @ 00fcc9ac */
          if (uVar8 < 2) {
            uVar34 = 0;
            uVar35 = 0;
          }
          else {
            uVar35 = 0;
            uVar34 = 0;
            uVar39 = 1;
            uVar33 = 1;
            do {
              uVar37 = 0;
              if ((uVar33 & uVar4) != 0) {
                uVar37 = uVar39;
              }
              uVar15 = uVar33 & uVar24;
              uVar33 = uVar33 << 1;
              uVar11 = 0;
              if (uVar15 != 0) {
                uVar11 = uVar39 << 1;
              }
              uVar39 = uVar39 << 2;
              uVar34 = uVar37 | uVar34 | uVar11;
              uVar35 = uVar35 + 1;
            } while (uVar33 < uVar8);
          }
          local_4d8[3] = (void *)((long)param_1 +
                                 (ulong)((uVar13 >> (ulong)(uVar35 & 0x1f)) <<
                                         (ulong)((uVar35 & 0xf) << 1) | uVar34) * 8);
          iVar20 = memcmp(&local_500,local_4d8,0x20);
          if (iVar20 != 0) {
            auVar17._8_8_ = auVar50._8_8_;
            auVar17._0_8_ = 0xffffffeefffffff0;
            auVar18._8_4_ = 0xfffffff4;
            auVar18._0_8_ = 0xfffffff6fffffff8;
            auVar18._12_4_ = 0xfffffff2;
            lVar26 = 0;
            uVar29 = 0;
            puVar21 = local_4b8 + 4;
            puVar42 = local_2a8;
            do {
              lVar36 = 0;
              uVar38 = 0;
              uVar40 = uVar29 | 1;
              uVar41 = uVar29 | 2;
              uVar32 = uVar29 | 3;
              puVar22 = puVar21;
              puVar43 = puVar42;
              do {
                puVar23 = local_4d8[lVar26 * 2 + lVar36];
                puVar2 = &local_580 + lVar26 * 8 + lVar36 * 4;
                puVar1 = puVar2 + 1;
                uVar13 = puVar23[1];
                uVar48 = CONCAT44(uVar13,uVar13);
                if ((uVar13 >> 0xf & 1) == 0) {
                  uVar52 = NEON_ushl(uVar48,0xfffffffdfffffff9,4);
                  uVar52 = uVar52 & 0x1e0000001e;
                    /* catch() { ... } // from try @ 00fccae0 with catch @ 00fccbf4 */
                  uVar24 = (uVar13 & 0xe) << 1 | (uVar13 & 0x7fffffff) >> 2 & 3;
                  *puVar2 = (ulong)CONCAT14((byte)(uint)(uVar52 >> 0x24) | (byte)(uVar52 >> 0x20),
                                            (uint)(byte)((byte)((uint)uVar52 >> 4) | (byte)uVar52));
                  uVar35 = uVar13 >> 0xb & 0xe;
                  *(uint *)puVar1 = uVar24;
                    /* catch() { ... } // from try @ 00fccb24 with catch @ 00fccc14 */
                }
                else {
                  uVar52 = NEON_ushl(uVar48,0xfffffffbfffffff6,4);
                  uVar24 = uVar13 & 0x1e | uVar13 >> 4 & 1;
                  *puVar2 = uVar52 & 0x1f0000001f;
                  *(uint *)puVar1 = uVar24;
                    /* catch() { ... } // from try @ 00fccc6c with catch @ 00fccc30
                       catch() { ... } // from try @ 00fcccb8 with catch @ 00fccc30 */
                  uVar35 = 0xf;
                }
                *(uint *)((long)&local_578 + lVar36 * 0x20 + lVar26 * 0x40 + 4) = uVar35;
                if ((int)uVar13 < 0) {
                  uVar52 = NEON_ushl(uVar48,0xffffffebffffffe6,4);
                  uVar34 = uVar13 >> 0x10 & 0x1f;
                  uVar52 = uVar52 & 0x1f0000001f;
                  uVar35 = 0xf;
                }
                else {
                  uVar52 = NEON_ushl(uVar48,0xffffffedffffffe9,4);
                  uVar52 = uVar52 & 0x1e0000001e;
                  uVar34 = (uVar13 >> 0x10 & 0xf) << 1;
                  uVar52 = (ulong)CONCAT14((byte)(uint)(uVar52 >> 0x24) | (byte)(uVar52 >> 0x20),
                                           (uint)(byte)((byte)(uVar52 >> 4) | (byte)uVar52));
                  uVar35 = uVar13 >> 0x1b & 0xe;
                    /* try { // try from 00fccc68 to 010ccc6b has its CatchHandler @ 00fcccb8 */
                  *(uint *)puVar1 = uVar24 | uVar24 >> 4;
                    /* try { // try from 00fccc6c to 010cccaf has its CatchHandler @ 00fccc30 */
                }
                (&local_570)[lVar26 * 8 + lVar36 * 4] = uVar52;
                local_568[lVar26 * 0x10 + lVar36 * 8] = uVar34;
                *(uint *)(local_560 + lVar36 * 0x20 + lVar26 * 0x40 + -4) = uVar35;
                uVar24 = *puVar23;
                uVar35 = uVar13 & 1;
                lVar47 = uVar29 * 0x40;
                lVar25 = uVar32 * 0x40;
                uVar52 = uVar38 * 4;
                    /* try { // try from 00fcccb0 to 010cccb7 has its CatchHandler @ 00fcccb8 */
                uVar39 = uVar13 & 1;
                uVar37 = uVar13 & 1;
                uVar34 = uVar24 >> 6 & 3;
                    /* catch() { ... } // from try @ 00fccc68 with catch @ 00fcccb8
                       catch() { ... } // from try @ 00fcccb0 with catch @ 00fcccb8
                       try { // try from 00fcccb8 to 010cccd7 has its CatchHandler @ 00fccc30 */
                uVar33 = uVar24 >> 0x1c & 3;
                if (((uVar13 & 1) == 0) || (!param_5)) {
                  if (!param_5) {
                    lVar47 = lVar47 + -0x2b8;
                    *(uint *)((long)local_2b8 + uVar52 + lVar47 + 0x2b8) = uVar24 & 3;
                    puVar23 = local_4b8 + uVar29 * 0x10 + uVar38;
                    puVar23[2] = uVar35;
                    puVar23[3] = uVar35;
                    *puVar23 = uVar39;
                    puVar23[1] = uVar37;
                    uVar54 = NEON_ushl(CONCAT44(uVar24,uVar24),0xfffffffcfffffffe,4);
                    puVar23 = local_4b8 + uVar40 * 0x10 + uVar38;
                    puVar23[2] = uVar35;
                    puVar23[3] = uVar35;
                    *puVar23 = uVar39;
                    puVar23[1] = uVar37;
                    puVar23 = local_4b8 + uVar41 * 0x10 + uVar38;
                    puVar23[2] = uVar35;
                    puVar23[3] = uVar35;
                    *puVar23 = uVar39;
                    puVar23[1] = uVar37;
                    auVar51._4_4_ = uVar24;
                    auVar51._0_4_ = uVar24;
                    auVar51._8_4_ = uVar24;
                    auVar51._12_4_ = uVar24;
                    *(ulong *)((long)local_2b8 + (uVar52 | 4) + lVar47 + 0x2b8) =
                         uVar54 & 0x300000003;
                    auVar56 = NEON_ushl(auVar51,auVar18,4);
                    auVar51 = NEON_ushl(auVar51,auVar17,4);
                    uVar53 = NEON_ushl(CONCAT44(uVar24,uVar24),0xffffffe6ffffffe8,4);
                    local_4b8[uVar32 * 0x10 + uVar38] = uVar35;
                    *(uint *)((long)local_4b8 + (uVar52 | 4) + lVar25 + -0x4b8 + 0x4b8) = uVar35;
                    *(uint *)((long)local_4b8 + (uVar52 | 8) + lVar25 + -0x4b8 + 0x4b8) = uVar35;
                    uVar54 = uVar38 | 3;
                    auVar55._0_8_ =
                         CONCAT35(0,CONCAT14(auVar56[4],(uint)(auVar56[0] & 3)) & 0x3ffffffff);
                    auVar55[8] = auVar56[8] & 3;
                    auVar55._9_3_ = 0;
                    auVar55[0xc] = auVar56[0xc] & 3;
                    auVar49._0_8_ =
                         CONCAT35(0,CONCAT14(auVar51[4],(uint)(auVar51[0] & 3)) & 0x3ffffffff);
                    auVar49[8] = auVar51[8] & 3;
                    auVar49._9_3_ = 0;
                    auVar49[0xc] = auVar51[0xc] & 3;
                    *(uint *)((long)local_2b8 + uVar54 * 4 + lVar47 + 0x2b8) = uVar34;
                    puVar1 = (ulong *)((long)local_2b8 + uVar52 + uVar40 * 0x40);
                    puVar1[1] = (ulong)auVar55._8_5_;
                    *puVar1 = auVar55._0_8_;
                    puVar1 = (ulong *)((long)local_2b8 + uVar52 + uVar41 * 0x40);
                    puVar1[1] = (ulong)auVar49._8_5_;
                    *puVar1 = auVar49._0_8_;
                    *(ulong *)((long)local_2b8 + uVar52 + lVar25 + -0x2b8 + 0x2b8) =
                         uVar53 & 0x300000003;
                    puVar23 = (uint *)((long)local_2b8 + (uVar52 | 8) + lVar25 + -0x2b8 + 0x2b8);
                    goto LAB_00fccb94;
                  }
                  lVar47 = 0;
                  do {
                    puVar23 = (uint *)((long)puVar43 + lVar47);
                    puVar3 = (uint *)((long)puVar22 + lVar47);
                    puVar23[-4] = -(uVar24 & 1) & 3;
                    puVar23[-3] = -(uVar24 >> 1 & 1) & 3;
                    uVar13 = uVar24 >> 4;
                    puVar3[-2] = uVar35;
                    puVar3[-1] = uVar35;
                    puVar3[-4] = uVar39;
                    puVar3[-3] = uVar37;
                    puVar3[2] = uVar35;
                    puVar3[3] = uVar35;
                    *puVar3 = uVar39;
                    puVar3[1] = uVar37;
                    uVar34 = uVar24 >> 5;
                    uVar33 = uVar24 >> 6;
                    puVar23[-2] = -(uVar24 >> 2 & 1) & 3;
                    puVar23[-1] = -(uVar24 >> 3 & 1) & 3;
                    uVar11 = uVar24 >> 7;
                    lVar47 = lVar47 + 0x40;
                    uVar24 = uVar24 >> 8;
                    *puVar23 = -(uVar13 & 1) & 3;
                    puVar23[1] = -(uVar34 & 1) & 3;
                    puVar23[2] = -(uVar33 & 1) & 3;
                    puVar23[3] = -(uVar11 & 1) & 3;
                  } while (lVar47 != 0x100);
                }
                else {
                    /* try { // try from 00fcca94 to 010ccadf has its CatchHandler @ 00fcca94
                       catch() { ... } // from try @ 00fcca94 with catch @ 00fcca94
                       catch() { ... } // from try @ 00fccbb0 with catch @ 00fcca94 */
                  *(uint *)((long)local_2b8 + uVar52 + lVar47) = uVar24 & 3;
                  *(uint *)((long)local_2b8 + (uVar52 | 8) + lVar47) = uVar24 >> 2 & 3;
                  lVar47 = uVar40 * 0x40 + -0x2b8;
                  local_2a8[uVar29 * 0x10 + uVar38] = uVar24 >> 4 & 3;
                  local_2a8[uVar29 * 0x10 + uVar38 + 2] = uVar34;
                  *(uint *)((long)local_2b8 + (uVar52 | 4) + lVar47 + 0x2b8) = uVar24 >> 8 & 3;
                    /* try { // try from 00fccae0 to 010ccae7 has its CatchHandler @ 00fccbf4 */
                  *(uint *)((long)local_2b8 + (uVar52 | 0xc) + lVar47 + 0x2b8) = uVar24 >> 10 & 3;
                  uVar54 = uVar38 + 7;
                  local_2a8[uVar40 * 0x10 + uVar38 + 1] = uVar24 >> 0xc & 3;
                  *(uint *)((long)local_2b8 + uVar54 * 4 + lVar47 + 0x2b8) = uVar24 >> 0xe & 3;
                  lVar47 = uVar41 * 0x40 + -0x2b8;
                  *(uint *)((long)local_2b8 + uVar52 + lVar47 + 0x2b8) = uVar24 >> 0x10 & 3;
                  *(uint *)((long)local_2b8 + (uVar52 | 8) + lVar47 + 0x2b8) = uVar24 >> 0x12 & 3;
                  local_2a8[uVar41 * 0x10 + uVar38] = uVar24 >> 0x14 & 3;
                    /* try { // try from 00fccb24 to 010ccbaf has its CatchHandler @ 00fccc14 */
                  local_2a8[uVar41 * 0x10 + uVar38 + 2] = uVar24 >> 0x16 & 3;
                  puVar23 = local_4b8 + uVar29 * 0x10 + uVar38;
                  puVar23[2] = uVar35;
                  puVar23[3] = uVar35;
                  *puVar23 = uVar39;
                  puVar23[1] = uVar37;
                  puVar23 = local_4b8 + uVar29 * 0x10 + uVar38 + 4;
                  puVar23[2] = uVar35;
                  puVar23[3] = uVar35;
                  *puVar23 = uVar39;
                  puVar23[1] = uVar37;
                  puVar23 = local_4b8 + uVar40 * 0x10 + uVar38;
                  puVar23[2] = uVar35;
                  puVar23[3] = uVar35;
                  *puVar23 = uVar39;
                  puVar23[1] = uVar37;
                  puVar23 = local_4b8 + uVar40 * 0x10 + uVar38 + 4;
                  puVar23[2] = uVar35;
                  puVar23[3] = uVar35;
                  *puVar23 = uVar39;
                  puVar23[1] = uVar37;
                  puVar23 = local_4b8 + uVar41 * 0x10 + uVar38;
                  puVar23[2] = uVar35;
                  puVar23[3] = uVar35;
                  *puVar23 = uVar39;
                  puVar23[1] = uVar37;
                  puVar23 = local_4b8 + uVar41 * 0x10 + uVar38 + 4;
                  puVar23[2] = uVar35;
                  puVar23[3] = uVar35;
                  *puVar23 = uVar39;
                  puVar23[1] = uVar37;
                  puVar23 = local_4b8 + uVar32 * 0x10 + uVar38;
                  puVar23[2] = uVar35;
                  puVar23[3] = uVar35;
                  *puVar23 = uVar39;
                  puVar23[1] = uVar37;
                  local_4b8[uVar32 * 0x10 + uVar38 + 4] = uVar35;
                  *(uint *)((long)local_2b8 + (uVar52 | 4) + lVar25 + -0x2b8 + 0x2b8) =
                       uVar24 >> 0x18 & 3;
                  *(uint *)((long)local_2b8 + (uVar52 | 0xc) + lVar25 + -0x2b8 + 0x2b8) =
                       uVar24 >> 0x1a & 3;
                  local_2a8[uVar32 * 0x10 + uVar38 + 1] = uVar33;
                  puVar23 = local_4b8 + uVar32 * 0x10 + uVar38 + 6;
                  local_4b8[uVar32 * 0x10 + uVar38 + 5] = uVar35;
                  uVar33 = uVar35;
LAB_00fccb94:
                  *puVar23 = uVar33;
                  local_4b8[uVar32 * 0x10 + uVar54] = uVar35;
                  *(uint *)((long)local_2b8 + uVar54 * 4 + lVar25) = uVar24 >> 0x1e;
                }
                    /* try { // try from 00fccbb0 to 010ccc2f has its CatchHandler @ 00fcca94 */
                lVar36 = lVar36 + 1;
                uVar38 = uVar38 + uVar44;
                puVar22 = puVar22 + uVar44;
                puVar43 = puVar43 + uVar44;
              } while (lVar36 != 2);
              lVar26 = lVar26 + 1;
              uVar29 = uVar29 + 4;
              puVar21 = puVar21 + 0x40;
              puVar42 = puVar42 + 0x40;
            } while (lVar26 != 2);
            pvStack_4f8 = local_4d8[1];
            local_500 = local_4d8[0];
            pvStack_4e8 = local_4d8[3];
            pvStack_4f0 = local_4d8[2];
          }
          FUN_00fcd020(&local_580,local_560,auStack_540,auStack_520,param_5,uVar46 & 0xffffffff,
                       local_5cc,&local_590);
          FUN_00fcd020(&local_570,auStack_550,auStack_530,auStack_510,param_5,uVar46 & 0xffffffff,
                       local_5cc,&local_5a0);
          uVar13 = (uVar27 & uVar45 << 1 | uVar30 & uVar45) ^ uVar27;
          uVar29 = (ulong)uVar13;
          uVar35 = local_4b8[uVar31 * 0x10 + uVar29];
          if (uVar35 == 0) {
            iVar20 = *(int *)(&DAT_0144c4f0 +
                             (long)*(int *)((long)local_2b8 + uVar29 * 4 + uVar31 * 0x40) * 4);
LAB_00fcceac:
            bVar19 = false;
          }
          else if (param_5) {
            if (((local_5cc ^ uVar45) & 1) == 0) {
              iVar20 = *(int *)(&DAT_0144c4f0 +
                               (long)*(int *)((long)local_2b8 + uVar29 * 4 + uVar31 * 0x40) * 4);
              goto LAB_00fcceac;
            }
            if (uVar35 == 2) {
              iVar20 = *(int *)(&DAT_0144c4f0 +
                               (long)*(int *)((long)local_2b8 +
                                             (ulong)(uVar13 + 1) * 4 + uVar31 * 0x40) * 4);
              iVar28 = *(int *)(&DAT_0144c4f0 + (long)(&iStack_2bc)[uVar31 * 0x10 + uVar29] * 4);
            }
            else {
              lVar26 = uVar29 * 4;
              bVar19 = false;
              if (uVar35 == 1) {
                    /* try { // try from 00fccf0c to 010cd07b has its CatchHandler @ 00fccf0c
                       catch() { ... } // from try @ 00fccf0c with catch @ 00fccf0c
                       catch() { ... } // from try @ 00fcd080 with catch @ 00fccf0c
                       catch() { ... } // from try @ 00fcd134 with catch @ 00fccf0c */
                iVar20 = *(int *)(&DAT_0144c4f0 +
                                 (long)*(int *)((long)local_2b8 +
                                               lVar26 + (long)(int)(uVar9 - 1) * 0x40) * 4) +
                         *(int *)(&DAT_0144c4f0 +
                                 (long)*(int *)((long)local_2b8 + lVar26 + (ulong)(uVar9 + 1) * 0x40
                                               ) * 4) +
                         *(int *)(&DAT_0144c4f0 + (long)(&iStack_2bc)[uVar31 * 0x10 + uVar29] * 4) +
                         *(int *)(&DAT_0144c4f0 +
                                 (long)*(int *)((long)local_2b8 +
                                               (ulong)(uVar13 + 1) * 4 + uVar31 * 0x40) * 4);
                iVar28 = iVar20 + 2;
                iVar20 = iVar20 + 5;
                if (-1 < iVar28) {
                  iVar20 = iVar28;
                }
                iVar20 = iVar20 >> 2;
                goto LAB_00fcc78c;
              }
              iVar28 = *(int *)(&DAT_0144c4f0 +
                               (long)*(int *)((long)local_2b8 +
                                             lVar26 + (long)(int)(uVar9 - 1) * 0x40) * 4);
              iVar20 = *(int *)(&DAT_0144c4f0 +
                               (long)*(int *)((long)local_2b8 + lVar26 + (ulong)(uVar9 + 1) * 0x40)
                               * 4);
            }
            bVar19 = false;
            iVar28 = iVar28 + iVar20;
            iVar20 = iVar28 + 2;
            if (-1 < iVar28 + 1) {
              iVar20 = iVar28 + 1;
            }
            iVar20 = iVar20 >> 1;
          }
          else {
            lVar26 = (long)*(int *)((long)local_2b8 + uVar29 * 4 + uVar31 * 0x40);
            iVar20 = *(int *)(&DAT_0144c500 + lVar26 * 4);
            bVar19 = lVar26 == 2;
          }
LAB_00fcc78c:
          uVar29 = (ulong)((local_5cc * param_2 + uVar45) * 4);
          *(char *)((long)param_4 + uVar29) =
               (char)((uint)((local_5a0 - local_590) * iVar20 + local_590 * 8) >> 3);
          *(char *)((long)param_4 + (uVar29 | 1)) =
               (char)((uint)((local_59c - local_58c) * iVar20 + local_58c * 8) >> 3);
          *(char *)((long)param_4 + (uVar29 | 2)) =
               (char)((uint)((local_598 - local_588) * iVar20 + local_588 * 8) >> 3);
          uVar46 = uVar46 + 1;
          uVar10 = (undefined1)((uint)((local_594 - local_584) * iVar20 + local_584 * 8) >> 3);
          if (bVar19) {
            uVar10 = 0;
          }
          *(undefined1 *)((long)param_4 + (uVar29 | 3)) = uVar10;
        } while (uVar46 != (uint)param_2);
      }
      local_5cc = local_5cc + 1;
    } while (local_5cc != param_3);
  }
  iVar20 = param_3 * param_2;
  if (iVar20 < 0) {
    iVar20 = iVar20 + 1;
  }
  if (*(long *)(lVar16 + 0x28) == local_b8) {
    return iVar20 >> 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

