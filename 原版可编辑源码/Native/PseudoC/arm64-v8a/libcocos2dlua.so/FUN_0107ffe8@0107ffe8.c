
undefined8 FUN_0107ffe8(undefined8 *param_1,long param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  char *pcVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  short *psVar25;
  uint uVar26;
  ulong uVar27;
  int *piVar28;
  short sVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  undefined8 *puVar34;
  undefined4 *puVar35;
  char cVar36;
  undefined8 uVar37;
  ulong local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  int local_78;
  int local_74;
  long local_70;
  long lStack_68;
  
  local_78 = 0;
  puVar34 = *(undefined8 **)(param_1[0x13] + 0x12a0);
  if (puVar34 == (undefined8 *)0x0) {
    uVar37 = *param_1;
    *(code **)(param_1[0x13] + 0x12a8) = FUN_01080dc4;
    puVar34 = (undefined8 *)ft_mem_alloc(uVar37,0x240,&local_78);
    *(undefined8 **)(param_1[0x13] + 0x12a0) = puVar34;
    if (local_78 != 0) {
      return 0x40;
    }
    puVar34[0x12] = 0;
    puVar34[0x11] = 0;
    puVar34[0x14] = 0;
    puVar34[0x13] = 0;
    puVar34[0x10] = 0;
    puVar34[0xf] = 0;
    *puVar34 = uVar37;
    puVar34[0x12] = uVar37;
    puVar34[0x13] = puVar34 + 1;
    puVar34[0xe] = FUN_01080e98;
    puVar34[0xd] = FUN_01080dc8;
    puVar34[0x10] = FUN_01081060;
  }
  puVar34[0x14] = param_1;
  puVar34[0x15] = param_1;
  lVar23 = param_1[2];
  local_88 = param_2 + param_3;
  lVar22 = *(long *)(param_1[1] + 0xb0);
  local_98 = 0;
  local_a0 = 0;
  cVar36 = *(char *)(lVar23 + 0x131);
  if (*(char *)(lVar23 + 0x130) == '\0') {
    iVar16 = 0x400;
    uVar21 = 0x400;
    local_b0 = 0x400;
  }
  else {
    uVar31 = *(long *)(lVar23 + 0x138) + 0x20;
    uVar27 = *(long *)(lVar23 + 0x138) + 0x5f;
    if (-1 < (long)uVar31) {
      uVar27 = uVar31;
    }
    iVar16 = (int)(uVar27 >> 6);
    uVar31 = *(long *)(lVar23 + 0x140) + 0x20;
    uVar24 = *(long *)(lVar23 + 0x140) + 0x5f;
    if (-1 < (long)uVar31) {
      uVar24 = uVar31;
    }
    local_b0 = uVar27 >> 6 & 0xffffffff;
    uVar21 = (uint)(uVar24 >> 6);
  }
  lStack_a8 = (ulong)uVar21 << 0x20;
  uVar26 = (uint)(*(char *)(lVar23 + 0x130) != '\0');
  *(uint *)((long)puVar34 + 0xc) = uVar26;
  if ((cVar36 != '\0') && (*(char *)(lVar22 + 0x3c) == '\0')) {
    *(uint *)((long)puVar34 + 0xc) = uVar26 | 2;
  }
  puVar35 = (undefined4 *)((long)puVar34 + 0xbc);
  *puVar35 = *(undefined4 *)(lVar22 + 0x40);
  *(undefined4 *)(puVar34 + 0x18) = *(undefined4 *)(lVar22 + 0x44);
  *(undefined4 *)((long)puVar34 + 0xc4) = *(undefined4 *)(lVar22 + 0x48);
  *(undefined4 *)(puVar34 + 0x19) = *(undefined4 *)(lVar22 + 0x4c);
  *(undefined4 *)((long)puVar34 + 0xcc) = *(undefined4 *)(lVar22 + 0x50);
  *(undefined4 *)(puVar34 + 0x1a) = *(undefined4 *)(lVar22 + 0x54);
  *(undefined4 *)((long)puVar34 + 0xd4) = *(undefined4 *)(lVar22 + 0x58);
  *(undefined4 *)(puVar34 + 0x1b) = *(undefined4 *)(lVar22 + 0x5c);
  uVar9 = *(ushort *)(param_1[1] + 0x88);
  *(uint *)((long)puVar34 + 0x5c) = (uint)uVar9;
  lStack_90 = param_2;
  lStack_80 = param_2;
  if (cVar36 != '\0') {
    if (iVar16 < 1) {
      return 0x24;
    }
    if ((int)uVar21 < 1) {
      return 0x24;
    }
    if ((short)uVar9 < 0) {
      return 0xa4;
    }
    iVar14 = FT_DivFix(0x7d00000,(long)(int)((uint)uVar9 << 0x10));
    if (iVar14 < iVar16) {
      return 0xa4;
    }
    if (iVar14 < (int)uVar21) {
      return 0xa4;
    }
    param_1 = (undefined8 *)puVar34[0x15];
  }
  local_74 = 0;
  local_70 = (long)(int)local_a0;
  lStack_68 = (long)(int)((ulong)local_a0 >> 0x20);
  *(undefined4 *)(puVar34 + 1) = 0;
  iVar16 = *(int *)(puVar34 + 0xc);
  uVar19 = *(undefined4 *)((long)puVar34 + 100);
  lVar23 = param_1[0xe3];
  lVar22 = puVar34[0x16];
  if (lVar22 != lVar23) {
    puVar34[0x16] = lVar23;
  }
  iVar3 = *(int *)(puVar34 + 0xb);
  uVar21 = (uint)*(ushort *)(*(long *)(param_1[1] + 0xa0) + 0x1a);
  iVar14 = uVar21 * 0x10000;
  if (iVar3 != iVar14) {
    *(int *)(puVar34 + 0xb) = iVar14;
  }
  uVar26 = *(uint *)((long)puVar34 + 0xc);
  *(byte *)(puVar34 + 0x17) = (byte)uVar26 & 1;
  iVar15 = memcmp(&local_b0,puVar34 + 2,0x10);
  if (iVar15 != 0) {
    puVar34[3] = lStack_a8;
    puVar34[2] = local_b0;
    puVar34[4] = 0;
    puVar34[7] = local_a0;
    puVar34[9] = 0x1000000000000;
    puVar34[8] = 0x10000;
    puVar34[6] = lStack_a8;
    puVar34[5] = local_b0;
  }
  uVar26 = uVar26 & 2;
  if (uVar26 == *(byte *)((long)puVar34 + 0xba)) {
    if (iVar15 != 0 || (iVar3 != iVar14 || lVar22 != lVar23)) goto LAB_010802a4;
  }
  else {
    *(char *)((long)puVar34 + 0xba) = (char)uVar26;
LAB_010802a4:
    iVar3 = 1000;
    if (*(int *)((long)puVar34 + 0x5c) != 0) {
      iVar3 = *(int *)((long)puVar34 + 0x5c);
    }
    if (uVar21 == 4 || iVar14 < 0x40000) {
      iVar14 = 0x40000;
    }
    iVar15 = 0;
    if (iVar3 != 0) {
      iVar15 = 0x3e80000 / iVar3;
    }
    iVar17 = *(int *)(param_1[0xe3] + 0x2e0) * 0x10000;
    *(int *)((long)puVar34 + 0xdc) = iVar17;
    if (iVar17 < 1) {
      iVar17 = FT_DivFix("ransitionSceneEFvvEJPNS3_19TransitionCrossFadeEEEENS_9allocatorIS9_EEFvvEEE"
                         ,(long)iVar15);
      *(int *)((long)puVar34 + 0xdc) = iVar17;
      if (0 < iVar16) goto LAB_010802f0;
LAB_01080360:
      FUN_010844e4(iVar15,iVar14,iVar17,(long)puVar34 + 0xe4,0,*(undefined1 *)((long)puVar34 + 0xba)
                   ,puVar35);
    }
    else {
      if (iVar16 < 1) goto LAB_01080360;
LAB_010802f0:
      lVar23 = FT_DivFix((long)(iVar3 << 0x10),iVar14);
      if (iVar16 <= lVar23) {
        iVar16 = FT_DivFix((long)(iVar3 << 0x10),iVar14);
      }
      *(undefined4 *)((long)puVar34 + 0xe4) = 0;
      if ((0x28e < iVar15) && (iVar16 != 0)) {
        if (iVar16 < 0) {
          iVar16 = iVar16 + 1;
        }
        *(int *)((long)puVar34 + 0xe4) = iVar16 >> 1;
      }
    }
    pcVar20 = "\x01\x01";
    if ((0 < *(int *)(param_1[0xe3] + 0x2d8) * 0x10000) &&
       (pcVar20 = "ransitionSceneEFvvEJPNS3_19TransitionCrossFadeEEEENS_9allocatorIS9_EEFvvEEE",
       *(int *)((long)puVar34 + 0xdc) <= *(int *)(param_1[0xe3] + 0x2d8) * 0x20000)) {
      pcVar20 = "\x01\x01";
    }
    uVar18 = FT_DivFix(pcVar20,(long)iVar15);
    piVar28 = (int *)(puVar34 + 0x1d);
    *(undefined4 *)(puVar34 + 0x1c) = uVar18;
    FUN_010844e4(iVar15,iVar14,uVar18,piVar28,uVar19,*(undefined1 *)((long)puVar34 + 0xba),puVar35);
    if (*(int *)((long)puVar34 + 0xe4) == 0) {
      bVar13 = *piVar28 != 0;
    }
    else {
      bVar13 = true;
    }
    lVar23 = puVar34[0x15];
    *(bool *)((long)puVar34 + 0xb9) = bVar13;
    *(undefined1 *)((long)puVar34 + 0xec) = 0;
    memset(puVar34 + 0x1e,0,0x150);
    *(undefined4 *)(puVar34 + 0x1e) = *(undefined4 *)((long)puVar34 + 0x34);
    uVar19 = FT_DivFix(*(undefined8 *)(*(long *)(lVar23 + 0x718) + 0x2c0),0x3e80000);
    *(undefined4 *)((long)puVar34 + 0xfc) = uVar19;
    lVar23 = *(long *)(lVar23 + 0x718);
    *(int *)(puVar34 + 0x20) = *(int *)(lVar23 + 0x2c8) << 0x10;
    *(int *)((long)puVar34 + 0x104) = *(int *)(lVar23 + 0x2d0) << 0x10;
    bVar5 = *(byte *)(lVar23 + 0x138);
    bVar6 = *(byte *)(lVar23 + 0x139);
    bVar7 = *(byte *)(lVar23 + 0x13a);
    bVar8 = *(byte *)(lVar23 + 0x13b);
    uVar31 = (ulong)bVar8;
    if (*(int *)(lVar23 + 0x3d4) == 1) {
      if ((bVar5 == 0) ||
         ((((bVar5 == 4 && (*(int *)(lVar23 + 0x140) * 0x10000 < -0x780000)) &&
           (*(int *)(lVar23 + 0x148) * 0x10000 < -0x780000)) &&
          ((0x3700000 < *(int *)(lVar23 + 0x150) * 0x10000 &&
           (0x3700000 < *(int *)(lVar23 + 0x158) * 0x10000)))))) {
        *(undefined4 *)(puVar34 + 0x28) = 0xff87ffff;
        iVar16 = FT_MulFix(0xffffffffff87ffff,(long)*(int *)(puVar34 + 0x1e));
        *(undefined4 *)(puVar34 + 0x26) = 0x31;
        *(uint *)((long)puVar34 + 0x144) = (iVar16 + 0x8000U & 0xffff0000) - 0x8000;
        *(undefined4 *)(puVar34 + 0x29) = *(undefined4 *)(puVar34 + 0x1e);
        *(int *)(puVar34 + 0x24) = *(int *)(puVar34 + 0x1d) * 2 + 0x3700001;
        iVar16 = FT_MulFix();
        *(undefined4 *)(puVar34 + 0x22) = 0x32;
        *(uint *)((long)puVar34 + 0x124) = iVar16 + 0x8000U & 0xffff0000 | 0x8000;
        *(undefined4 *)(puVar34 + 0x25) = *(undefined4 *)(puVar34 + 0x1e);
        *(undefined1 *)((long)puVar34 + 0xf9) = 1;
        iVar16 = *(int *)(puVar34 + 1);
        goto joined_r0x0108053c;
      }
LAB_01080548:
      uVar21 = *(uint *)((long)puVar34 + 0xf4);
      iVar16 = 0;
      uVar27 = 0;
      do {
        lVar22 = lVar23 + uVar27 * 8;
        iVar3 = *(int *)(lVar22 + 0x140);
        iVar15 = iVar3 * 0x10000;
        *(int *)((long)puVar34 + (ulong)uVar21 * 0x14 + 0x150) = iVar15;
        iVar14 = *(int *)(lVar22 + 0x148) * 0x10000;
        iVar3 = iVar14 + iVar3 * -0x10000;
        *(int *)((long)puVar34 + (ulong)uVar21 * 0x14 + 0x154) = iVar14;
        if (-1 < iVar3) {
          if (iVar3 <= iVar16) {
            iVar3 = iVar16;
          }
          if (uVar27 != 0) {
            iVar16 = *piVar28 * 2 + iVar14;
            iVar14 = *piVar28 * 2 + iVar15;
            *(int *)((long)puVar34 + (ulong)uVar21 * 0x14 + 0x154) = iVar16;
            *(int *)((long)puVar34 + (ulong)uVar21 * 0x14 + 0x150) = iVar14;
          }
          *(bool *)((long)puVar34 + (ulong)uVar21 * 0x14 + 0x160) = uVar27 == 0;
          *(int *)((long)puVar34 + (ulong)uVar21 * 0x14 + 0x158) = iVar14;
          *(uint *)((long)puVar34 + 0xf4) = uVar21 + 1;
          uVar21 = uVar21 + 1;
          iVar16 = iVar3;
        }
        uVar27 = uVar27 + 2;
      } while (uVar27 < bVar5);
    }
    else {
      if (bVar5 != 0) goto LAB_01080548;
      iVar16 = 0;
    }
    if (bVar6 != 0) {
      uVar21 = *(uint *)((long)puVar34 + 0xf4);
      uVar27 = 0;
      iVar14 = iVar16;
      do {
        lVar22 = lVar23 + uVar27 * 8;
        iVar16 = *(int *)(lVar22 + 0x1b0);
        *(int *)((long)puVar34 + (ulong)uVar21 * 0x14 + 0x150) = iVar16 * 0x10000;
        iVar3 = *(int *)(lVar22 + 0x1b8) * 0x10000;
        iVar15 = iVar3 + iVar16 * -0x10000;
        *(int *)((long)puVar34 + (ulong)uVar21 * 0x14 + 0x154) = iVar3;
        iVar16 = iVar14;
        if (-1 < iVar15) {
          iVar16 = iVar15;
          if (iVar15 <= iVar14) {
            iVar16 = iVar14;
          }
          *(undefined1 *)((long)puVar34 + (ulong)uVar21 * 0x14 + 0x160) = 1;
          *(int *)((long)puVar34 + (ulong)uVar21 * 0x14 + 0x158) = iVar3;
          *(uint *)((long)puVar34 + 0xf4) = uVar21 + 1;
          uVar21 = uVar21 + 1;
        }
        uVar27 = uVar27 + 2;
        iVar14 = iVar16;
      } while (uVar27 < bVar6);
    }
    iVar14 = FT_DivFix(0x10000,(long)*(int *)(puVar34 + 0x1e));
    uVar21 = *(uint *)((long)puVar34 + 0xf4);
    uVar27 = (ulong)uVar21;
    if (uVar21 != 0) {
      if (bVar7 < 2) {
        if (bVar8 != 0) {
          uVar24 = 0;
          do {
            if (*(char *)((long)puVar34 + uVar24 * 0x14 + 0x160) != '\0') {
              iVar3 = *(int *)((long)puVar34 + uVar24 * 0x14 + 0x158);
              uVar33 = 0;
              iVar15 = 0x7fffffff;
              do {
                iVar4 = *(int *)(lVar23 + 0x278 + uVar33 * 8);
                iVar11 = iVar3 + iVar4 * -0x10000;
                iVar17 = -iVar11;
                if (-1 < iVar11) {
                  iVar17 = iVar11;
                }
              } while ((((iVar15 <= iVar17) || (iVar14 <= iVar17)) ||
                       (*(int *)((long)puVar34 + uVar24 * 0x14 + 0x158) = iVar4 * 0x10000,
                       iVar15 = iVar17, iVar17 != 0)) && (uVar33 = uVar33 + 2, uVar33 < uVar31));
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 < uVar27);
        }
      }
      else if (bVar8 == 0) {
        if (bVar7 < 3) {
          uVar31 = 0;
          piVar28 = (int *)(puVar34 + 0x2b);
          do {
            if ((char)piVar28[2] != '\0') {
                    /* catch() { ... } // from try @ 010808e8 with catch @ 01080958 */
                    /* catch() { ... } // from try @ 010808fc with catch @ 0108095c */
              iVar15 = *piVar28 + *(int *)(lVar23 + 0x208) * -0x10000;
                    /* catch() { ... } // from try @ 01080864 with catch @ 01080960 */
              iVar3 = -iVar15;
              if (-1 < iVar15) {
                iVar3 = iVar15;
              }
                    /* catch() { ... } // from try @ 01080894 with catch @ 01080964 */
              if ((iVar3 != 0x7fffffff) && (iVar3 < iVar14)) {
                *piVar28 = *(int *)(lVar23 + 0x208) * 0x10000;
              }
            }
            uVar31 = uVar31 + 1;
            piVar28 = piVar28 + 5;
          } while (uVar31 < uVar27);
        }
        else {
          uVar31 = 0;
          do {
            iVar3 = *(int *)((long)puVar34 + uVar31 * 0x14 + 0x158);
                    /* catch() { ... } // from try @ 0108091c with catch @ 01080814 */
            piVar1 = (int *)((long)puVar34 + uVar31 * 0x14 + 0x158);
            if (*(char *)((long)puVar34 + uVar31 * 0x14 + 0x160) == '\0') {
              iVar15 = *piVar28;
              iVar17 = 0x7fffffff;
              lVar22 = 0x42;
              do {
                iVar4 = iVar15 * 2 + *(int *)(lVar23 + lVar22 * 8) * 0x10000;
                iVar12 = iVar3 - iVar4;
                    /* try { // try from 01080864 to 0118088f has its CatchHandler @ 01080960 */
                iVar11 = -iVar12;
                if (-1 < iVar12) {
                  iVar11 = iVar12;
                }
              } while ((((iVar17 <= iVar11) || (iVar14 <= iVar11)) ||
                       (*piVar1 = iVar4, iVar17 = iVar11, iVar11 != 0)) &&
                      (uVar24 = lVar22 - 0x3e, lVar22 = lVar22 + 2, uVar24 < bVar7));
            }
            else {
              iVar3 = iVar3 + *(int *)(lVar23 + 0x208) * -0x10000;
              iVar15 = -iVar3;
              if (-1 < iVar3) {
                iVar15 = iVar3;
              }
              if ((iVar15 != 0x7fffffff) && (iVar15 < iVar14)) {
                *piVar1 = *(int *)(lVar23 + 0x208) * 0x10000;
              }
            }
                    /* try { // try from 01080894 to 011808b3 has its CatchHandler @ 01080964 */
            uVar31 = uVar31 + 1;
          } while (uVar31 < uVar27);
        }
      }
      else if (bVar7 < 3) {
        uVar24 = 0;
        do {
          if (*(char *)((long)puVar34 + uVar24 * 0x14 + 0x160) != '\0') {
            iVar3 = *(int *)((long)puVar34 + uVar24 * 0x14 + 0x158);
            uVar33 = 0;
            piVar28 = (int *)((long)puVar34 + uVar24 * 0x14 + 0x158);
            iVar15 = 0x7fffffff;
            do {
              iVar4 = *(int *)(lVar23 + 0x278 + uVar33 * 8);
              iVar11 = iVar3 + iVar4 * -0x10000;
              iVar17 = -iVar11;
              if (-1 < iVar11) {
                iVar17 = iVar11;
              }
            } while ((((iVar15 <= iVar17) ||
                      (iVar14 <= iVar17
                    /* try { // try from 010808e8 to 011808f3 has its CatchHandler @ 01080958 */))
                     || (*piVar28 = iVar4 * 0x10000, iVar15 = iVar17, iVar17 != 0)) &&
                    (uVar33 = uVar33 + 2, uVar33 < uVar31
                    /* try { // try from 010808fc to 0118091b has its CatchHandler @ 0108095c */));
            iVar3 = iVar3 + *(int *)(lVar23 + 0x208) * -0x10000;
            iVar17 = -iVar3;
            if (-1 < iVar3) {
              iVar17 = iVar3;
            }
                    /* try { // try from 0108091c to 0118097f has its CatchHandler @ 01080814 */
            if ((iVar17 < iVar15) && (iVar17 < iVar14)) {
              *piVar28 = *(int *)(lVar23 + 0x208) * 0x10000;
            }
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 < uVar27);
      }
      else {
        uVar24 = 0;
        do {
          iVar3 = *(int *)((long)puVar34 + uVar24 * 0x14 + 0x158);
          piVar1 = (int *)((long)puVar34 + uVar24 * 0x14 + 0x158);
          if (*(char *)((long)puVar34 + uVar24 * 0x14 + 0x160) == '\0') {
            iVar15 = *piVar28;
            iVar17 = 0x7fffffff;
            lVar22 = 0x42;
            do {
              iVar4 = iVar15 * 2 + *(int *)(lVar23 + lVar22 * 8) * 0x10000;
              iVar12 = iVar3 - iVar4;
              iVar11 = -iVar12;
              if (-1 < iVar12) {
                iVar11 = iVar12;
              }
            } while ((((iVar17 <= iVar11) || (iVar14 <= iVar11)) ||
                     (*piVar1 = iVar4, iVar17 = iVar11, iVar11 != 0)) &&
                    (uVar33 = lVar22 - 0x3e, lVar22 = lVar22 + 2, uVar33 < bVar7));
          }
          else {
            uVar33 = 0;
            iVar15 = 0x7fffffff;
            do {
              iVar4 = *(int *)(lVar23 + 0x278 + uVar33 * 8);
              iVar11 = iVar3 + iVar4 * -0x10000;
              iVar17 = -iVar11;
              if (-1 < iVar11) {
                iVar17 = iVar11;
              }
            } while ((((iVar15 <= iVar17) || (iVar14 <= iVar17)) ||
                     (*piVar1 = iVar4 * 0x10000, iVar15 = iVar17, iVar17 != 0)) &&
                    (uVar33 = uVar33 + 2, uVar33 < uVar31));
            iVar3 = iVar3 + *(int *)(lVar23 + 0x208) * -0x10000;
            iVar17 = -iVar3;
            if (-1 < iVar3) {
              iVar17 = iVar3;
            }
            if ((iVar17 < iVar15) && (iVar17 < iVar14)) {
              *piVar1 = *(int *)(lVar23 + 0x208) * 0x10000;
            }
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 < uVar27);
      }
    }
    if (0 < iVar16) {
      iVar14 = *(int *)((long)puVar34 + 0xfc);
      lVar23 = FT_DivFix(0x10000,(long)iVar16);
      if (lVar23 < iVar14) {
        uVar19 = FT_DivFix(0x10000,(long)iVar16);
        *(undefined4 *)((long)puVar34 + 0xfc) = uVar19;
      }
    }
    if (*(int *)(puVar34 + 0x1e) < *(int *)((long)puVar34 + 0xfc)) {
      *(undefined1 *)(puVar34 + 0x1f) = 1;
      iVar16 = FT_MulDiv(0x999a);
      iVar16 = 0x999a - iVar16;
      if (0x7ffe < iVar16) {
        iVar16 = 0x7fff;
      }
      *(int *)(puVar34 + 0x21) = iVar16;
    }
    if (*(char *)((long)puVar34 + 0xba) != '\0') {
      *(undefined4 *)(puVar34 + 0x21) = 0;
    }
    if (*(uint *)((long)puVar34 + 0xf4) != 0) {
      uVar31 = 0;
      pcVar20 = (char *)(puVar34 + 0x2c);
      do {
        cVar36 = *pcVar20;
        iVar14 = FT_MulFix((long)*(int *)(pcVar20 + -8),(long)*(int *)(puVar34 + 0x1e));
        uVar31 = uVar31 + 1;
        iVar16 = -*(int *)(puVar34 + 0x21);
        if (cVar36 == '\0') {
          iVar16 = *(int *)(puVar34 + 0x21);
        }
        *(uint *)(pcVar20 + -4) = iVar14 + iVar16 + 0x8000U & 0xffff0000;
        pcVar20 = pcVar20 + 0x14;
      } while (uVar31 < *(uint *)((long)puVar34 + 0xf4));
    }
  }
  iVar16 = *(int *)(puVar34 + 1);
joined_r0x0108053c:
  if (iVar16 == 0) {
    cVar36 = *(char *)((long)puVar34 + 0xb9);
    *(undefined1 *)((long)puVar34 + 0xec) = 0;
    while( true ) {
                    /* try { // try from 01080a98 to 01180ad7 has its CatchHandler @ 01080a98
                       catch() { ... } // from try @ 01080a98 with catch @ 01080a98
                       catch() { ... } // from try @ 01080b04 with catch @ 01080a98 */
      *(undefined4 *)(puVar34 + 0x11) = 0;
      FT_GlyphLoader_Rewind(*(undefined8 *)(puVar34[0x14] + 0x18));
      FUN_010812a8(puVar34,&local_98,puVar34 + 0xd,&local_70,0,0,0,&local_74);
      if (*(int *)(puVar34 + 1) != 0) break;
                    /* try { // try from 01080ad8 to 01180ae7 has its CatchHandler @ 01080b44 */
      if ((cVar36 == '\0') || (-1 < *(int *)(puVar34 + 0x11))) {
        lVar23 = puVar34[0x14];
        psVar25 = *(short **)(lVar23 + 0x28);
        if (psVar25 != (short *)0x0) {
          sVar10 = *psVar25;
          lVar22 = (long)sVar10;
                    /* try { // try from 01080af8 to 01180b03 has its CatchHandler @ 01080b40 */
          if (lVar22 < 2) {
            uVar31 = 0;
          }
          else {
                    /* try { // try from 01080b04 to 01180b57 has its CatchHandler @ 01080a98 */
            uVar31 = (ulong)((int)*(short *)(*(long *)(psVar25 + 0xc) + lVar22 * 2 + -4) + 1);
          }
          sVar29 = psVar25[1];
          lVar30 = (long)sVar29;
          if (1 < lVar30) {
            lVar32 = *(long *)(psVar25 + 4);
            lVar2 = lVar32 + lVar30 * 0x10;
                    /* catch() { ... } // from try @ 01080af8 with catch @ 01080b40 */
                    /* catch() { ... } // from try @ 01080ad8 with catch @ 01080b44 */
                    /* try { // try from 01080b58 to 01180b9b has its CatchHandler @ 01080b58
                       catch() { ... } // from try @ 01080b58 with catch @ 01080b58
                       catch() { ... } // from try @ 01080c04 with catch @ 01080b58 */
            if (((*(long *)(lVar32 + (-(uVar31 >> 0x1f) & 0xfffffff000000000 | uVar31 << 4)) ==
                  *(long *)(lVar2 + -0x10)) &&
                (*(long *)(lVar32 + (long)(int)uVar31 * 0x10 + 8) == *(long *)(lVar2 + -8))) &&
               (*(char *)(*(long *)(psVar25 + 8) + lVar30 + -1) == '\x01')) {
              sVar29 = sVar29 + -1;
              psVar25[1] = sVar29;
            }
          }
          if (0 < sVar10) {
            if ((int)uVar31 == sVar29 + -1) {
              *psVar25 = sVar10 + -1;
              psVar25[1] = sVar29 + -1;
            }
            else {
                    /* try { // try from 01080b9c to 01180bd7 has its CatchHandler @ 01080c5c */
              *(short *)(*(long *)(psVar25 + 0xc) + lVar22 * 2 + -2) = (short)(sVar29 + -1);
            }
          }
        }
        FT_GlyphLoader_Add(*(undefined8 *)(lVar23 + 0x18));
        if (*(int *)(puVar34 + 1) != 0) {
          return 3;
        }
        *(undefined4 *)(puVar34 + 1) = 0;
        *(long *)(puVar34[0x14] + 0x5c8) = (long)(short)((uint)(local_74 + 0x8000) >> 0x10);
        return 0;
                    /* try { // try from 01080bd8 to 01180be7 has its CatchHandler @ 01080c4c */
      }
      cVar36 = '\0';
      *(undefined1 *)((long)puVar34 + 0xec) = 1;
    }
  }
  return 3;
}

