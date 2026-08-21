
int FT_Stroker_CubicTo(long *param_1,long *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  int iVar21;
  uint uVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  uint *puVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  uint *puVar33;
  uint uVar34;
  long lVar35;
  undefined8 local_358;
  long *local_320;
  long local_310;
  long lStack_308;
  ulong local_300;
  long lStack_2f8;
  ulong local_2f0;
  ulong uStack_2e8;
  ulong local_2e0;
  ulong uStack_2d8;
  long local_2d0 [4];
  long local_2b0;
  long lStack_2a8;
  long local_2a0;
  long lStack_298;
  ulong local_80;
  ulong uStack_78;
  int local_64;
  
                    /* try { // try from 01068f58 to 01168f5f has its CatchHandler @ 01068f6c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01068e0c with catch @ 01068f60
                       try { // try from 01068f60 to 0116909f has its CatchHandler @ 01068c0c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01068d98 with catch @ 01068f64
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01068d20 with catch @ 01068f68
                        */
  iVar12 = 6;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01068ca4 with catch @ 01068f6c
                       catch(type#1 @ 00000000) { ... } // from try @ 01068f58 with catch @ 01068f6c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01068e14 with catch @ 01068f7c
                        */
  if ((((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) && (param_3 != (long *)0x0)) &&
     (param_4 != (long *)0x0)) {
    plVar23 = param_1 + 2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01068da4 with catch @ 01068fb0
                        */
    if (((((ulong)((*plVar23 + 1) - *param_2) < 3) && ((ulong)((param_1[3] + 1) - param_2[1]) < 3))
        && (((ulong)((*param_2 + 1) - *param_3) < 3 &&
            (((ulong)((param_2[1] + 1) - param_3[1]) < 3 && ((ulong)((*param_3 + 1) - *param_4) < 3)
             ))))) && ((ulong)((param_3[1] + 1) - param_4[1]) < 3)) {
      lVar31 = param_4[1];
      lVar35 = *param_4;
      iVar12 = 0;
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01068d28 with catch @ 0106901c
                        */
      local_2d0[1] = param_4[1];
      local_2d0[0] = *param_4;
      local_2d0[3] = param_3[1];
      local_2d0[2] = *param_3;
      iVar12 = 0;
      lVar35 = 0;
      plVar28 = local_2d0;
      lStack_2a8 = param_2[1];
      local_2b0 = *param_2;
      bVar1 = true;
      lStack_298 = param_1[3];
      local_2a0 = *plVar23;
      do {
        lVar25 = *param_1;
        lVar31 = lVar25;
        lVar13 = lVar25;
        if (lVar35 < 0x20) {
          plVar26 = local_2d0 + lVar35 * 2;
          lVar15 = lVar35;
          do {
            lVar31 = plVar28[2] - plVar28[4];
            lVar35 = plVar28[3] - plVar28[5];
            lVar30 = *plVar28 - plVar28[2];
            bVar8 = 2 < lVar31 + 1U;
                    /* try { // try from 01069124 to 01169137 has its CatchHandler @ 010692e4 */
            lVar29 = plVar26[1] - plVar28[3];
            bVar9 = 2 < lVar35 + 1U;
            bVar10 = 2 < lVar30 + 1U;
            bVar11 = 2 < lVar29 + 1U;
            if (((plVar28[4] - plVar28[6]) + 1U < 3) && ((plVar28[5] - plVar28[7]) + 1U < 3)) {
              if (bVar8 || bVar9) {
                lVar25 = FT_Atan2(lVar31,lVar35);
                lVar31 = lVar25;
                lVar13 = lVar25;
                if (bVar10 || bVar11) {
                  lVar13 = FT_Atan2(lVar30,lVar29);
                }
              }
              else {
                lVar31 = lVar25;
                lVar13 = lVar25;
                if (bVar10 || bVar11) {
                  lVar25 = FT_Atan2(lVar30,lVar29);
                  lVar31 = lVar25;
                  lVar13 = lVar25;
                }
              }
            }
            else {
              lVar25 = FT_Atan2();
              if (bVar8 || bVar9) {
                lVar31 = FT_Atan2(lVar31,lVar35);
                lVar13 = lVar31;
                if (bVar10 || bVar11) {
                  lVar13 = FT_Atan2(lVar30,lVar29);
                }
              }
              else {
                lVar31 = lVar25;
                lVar13 = lVar25;
                if (bVar10 || bVar11) {
                  lVar13 = FT_Atan2(lVar30,lVar29);
                  lVar35 = FT_Angle_Diff(lVar25,lVar13);
                  if (lVar35 < 0) {
                    lVar35 = lVar35 + 1;
                  }
                  lVar31 = lVar25 + (lVar35 >> 1);
                }
              }
            }
                    /* try { // try from 01069250 to 011692ff has its CatchHandler @ 010690a0 */
            lVar29 = FT_Angle_Diff(lVar25,lVar31);
            lVar35 = -lVar29;
            if (-1 < lVar29) {
              lVar35 = lVar29;
            }
            lVar30 = FT_Angle_Diff(lVar31,lVar13);
            lVar29 = -lVar30;
            if (-1 < lVar30) {
              lVar29 = lVar30;
            }
            if ((lVar35 < 0x168000) && (lVar35 = lVar15, lVar29 < 0x168000)) break;
            if ((char)param_1[5] != '\0') {
              *param_1 = lVar25;
            }
            lVar35 = *plVar28 + plVar28[2];
            plVar28[0xc] = plVar28[6];
            lVar31 = plVar28[4] + plVar28[6];
                    /* catch() { ... } // from try @ 010691e8 with catch @ 010692b4 */
            lVar13 = plVar28[4] + plVar28[2];
            if (lVar35 < 0) {
              lVar35 = lVar35 + 1;
            }
            if (lVar31 < 0) {
              lVar31 = lVar31 + 1;
            }
            if (lVar13 < 0) {
              lVar13 = lVar13 + 1;
            }
            plVar28[2] = lVar35 >> 1;
            lVar35 = (lVar35 >> 1) + (lVar13 >> 1);
                    /* catch() { ... } // from try @ 01069124 with catch @ 010692e4 */
            plVar28[10] = lVar31 >> 1;
            lVar31 = (lVar31 >> 1) + (lVar13 >> 1);
            if (lVar35 < 0) {
              lVar35 = lVar35 + 1;
            }
            if (lVar31 < 0) {
              lVar31 = lVar31 + 1;
            }
                    /* try { // try from 01069300 to 01169337 has its CatchHandler @ 01069300
                       catch() { ... } // from try @ 01069300 with catch @ 01069300
                       catch() { ... } // from try @ 0106938c with catch @ 01069300 */
            plVar28[4] = lVar35 >> 1;
            lVar35 = (lVar35 >> 1) + (lVar31 >> 1);
            if (lVar35 < 0) {
              lVar35 = lVar35 + 1;
            }
            plVar28[8] = lVar31 >> 1;
            plVar28[0xd] = plVar28[7];
            plVar28[6] = lVar35 >> 1;
            plVar2 = plVar26 + 1;
            lVar35 = plVar28[5] + plVar28[7];
            lVar31 = plVar28[5] + plVar28[3];
            plVar26 = plVar26 + 6;
            lVar13 = *plVar2 + plVar28[3];
                    /* try { // try from 01069338 to 01169347 has its CatchHandler @ 010693bc */
            if (lVar13 < 0) {
              lVar13 = lVar13 + 1;
            }
            if (lVar35 < 0) {
              lVar35 = lVar35 + 1;
            }
            if (lVar31 < 0) {
              lVar31 = lVar31 + 1;
            }
                    /* try { // try from 01069358 to 0116938b has its CatchHandler @ 010693d8 */
            plVar28[3] = lVar13 >> 1;
            lVar13 = (lVar13 >> 1) + (lVar31 >> 1);
            plVar28[0xb] = lVar35 >> 1;
            lVar35 = (lVar35 >> 1) + (lVar31 >> 1);
            if (lVar13 < 0) {
              lVar13 = lVar13 + 1;
            }
            if (lVar35 < 0) {
              lVar35 = lVar35 + 1;
            }
            plVar28[5] = lVar13 >> 1;
            lVar31 = (lVar13 >> 1) + (lVar35 >> 1);
                    /* try { // try from 0106938c to 011693eb has its CatchHandler @ 01069300 */
            if (lVar31 < 0) {
              lVar31 = lVar31 + 1;
            }
            plVar28[9] = lVar35 >> 1;
            plVar28[7] = lVar31 >> 1;
            lVar25 = *param_1;
            lVar35 = lVar15 + 3;
            bVar8 = lVar15 < 0x1d;
            plVar28 = plVar26;
            lVar31 = lVar25;
            lVar13 = lVar25;
            lVar15 = lVar35;
          } while (bVar8);
        }
                    /* try { // try from 010693f0 to 01169443 has its CatchHandler @ 010693f0
                       catch() { ... } // from try @ 010693f0 with catch @ 010693f0
                       catch() { ... } // from try @ 01069470 with catch @ 010693f0 */
        if (bVar1) {
          if ((char)param_1[5] != '\0') {
            FT_Vector_From_Polar(&local_80,param_1[0xd],lVar25 + 0x5a0000);
            lVar15 = param_1[2];
            lVar29 = param_1[3];
            uVar22 = *(uint *)((long)param_1 + 0x8c);
            uVar24 = (ulong)uVar22;
            if (-1 < (int)uVar22) {
              uVar5 = *(uint *)(param_1 + 0xe);
              if (uVar22 + 1 < uVar5) {
                *(uint *)(param_1 + 0xe) = uVar5 - 1;
                    /* try { // try from 01069444 to 01169453 has its CatchHandler @ 010694b0 */
                puVar6 = (undefined8 *)(param_1[0xf] + (ulong)(uVar5 - 1) * 0x10);
                uVar16 = *puVar6;
                puVar7 = (undefined8 *)(param_1[0xf] + uVar24 * 0x10);
                puVar7[1] = puVar6[1];
                *puVar7 = uVar16;
                *(byte *)(param_1[0x10] + uVar24) = *(byte *)(param_1[0x10] + uVar24) | 4;
                    /* try { // try from 01069464 to 0116946f has its CatchHandler @ 010694ac */
                *(byte *)(param_1[0x10] + (ulong)(uVar5 - 2)) =
                     *(byte *)(param_1[0x10] + (ulong)(uVar5 - 2)) | 8;
                    /* try { // try from 01069470 to 011694c3 has its CatchHandler @ 010693f0 */
              }
              else {
                    /* try { // try from 01069540 to 01169543 has its CatchHandler @ 01069630 */
                *(uint *)(param_1 + 0xe) = uVar22;
              }
                    /* try { // try from 01069544 to 0116964b has its CatchHandler @ 010694c4 */
              *(undefined4 *)((long)param_1 + 0x8c) = 0xffffffff;
              *(undefined1 *)(param_1 + 0x11) = 0;
            }
            uVar22 = *(uint *)(param_1 + 0xe);
            *(undefined1 *)(param_1 + 0x11) = 0;
            lVar15 = local_80 + lVar15;
            lVar29 = uStack_78 + lVar29;
            *(uint *)((long)param_1 + 0x8c) = uVar22;
            if (uVar22 == 0) {
LAB_010695ac:
              uVar5 = *(uint *)((long)param_1 + 0x74);
              local_2e0 = local_2e0 & 0xffffffff00000000;
              if (uVar5 < uVar22 + 1) {
                lVar30 = param_1[0x12];
                uVar34 = uVar5;
                do {
                  uVar34 = uVar34 + (uVar34 >> 1) + 0x10;
                } while (uVar34 < uVar22 + 1);
                lVar14 = ft_mem_realloc(lVar30,0x10,uVar5,uVar34,param_1[0xf],&local_2e0);
                param_1[0xf] = lVar14;
                if ((int)local_2e0 == 0) {
                  lVar30 = ft_mem_realloc(lVar30,1,uVar5,uVar34,param_1[0x10],&local_2e0);
                  param_1[0x10] = lVar30;
                  if ((int)local_2e0 == 0) {
                    *(uint *)((long)param_1 + 0x74) = uVar34;
                    uVar22 = *(uint *)(param_1 + 0xe);
                    goto LAB_0106963c;
                  }
                }
                *(undefined1 *)(param_1 + 0x11) = 0;
                iVar12 = (int)local_2e0;
                    /* catch() { ... } // from try @ 01069540 with catch @ 01069630 */
                goto joined_r0x01069810;
              }
              lVar30 = param_1[0x10];
LAB_0106963c:
              plVar26 = (long *)(param_1[0xf] + (ulong)uVar22 * 0x10);
              *plVar26 = lVar15;
              plVar26[1] = lVar29;
                    /* try { // try from 0106964c to 011696eb has its CatchHandler @ 0106964c
                       catch(type#1 @ 00000000) { ... } // from try @ 0106964c with catch @ 0106964c
                       catch(type#1 @ 00000000) { ... } // from try @ 010696f4 with catch @ 0106964c
                       catch(type#1 @ 00000000) { ... } // from try @ 01069838 with catch @ 0106964c
                       catch(type#1 @ 00000000) { ... } // from try @ 0106998c with catch @ 0106964c
                       catch(type#1 @ 00000000) { ... } // from try @ 01069a4c with catch @ 0106964c
                       catch(type#1 @ 00000000) { ... } // from try @ 01069c00 with catch @ 0106964c
                        */
              *(undefined1 *)(lVar30 + (ulong)uVar22) = 1;
              *(undefined1 *)(param_1 + 0x11) = 0;
              *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
            }
            else if ((2 < (ulong)((1 - lVar15) +
                                 *(long *)(param_1[0xf] + (ulong)(uVar22 - 1) * 0x10))) ||
                    (2 < (ulong)((1 - lVar29) +
                                *(long *)(param_1[0xf] + (ulong)(uVar22 - 1) * 0x10 + 8))))
            goto LAB_010695ac;
            lVar15 = param_1[2];
            lVar29 = param_1[3];
            uVar22 = *(uint *)((long)param_1 + 0xbc);
            uVar24 = (ulong)uVar22;
            if (-1 < (int)uVar22) {
              uVar5 = *(uint *)(param_1 + 0x14);
              if (uVar22 + 1 < uVar5) {
                *(uint *)(param_1 + 0x14) = uVar5 - 1;
                puVar6 = (undefined8 *)(param_1[0x15] + (ulong)(uVar5 - 1) * 0x10);
                uVar16 = *puVar6;
                puVar7 = (undefined8 *)(param_1[0x15] + uVar24 * 0x10);
                puVar7[1] = puVar6[1];
                *puVar7 = uVar16;
                *(byte *)(param_1[0x16] + uVar24) = *(byte *)(param_1[0x16] + uVar24) | 4;
                *(byte *)(param_1[0x16] + (ulong)(uVar5 - 2)) =
                     *(byte *)(param_1[0x16] + (ulong)(uVar5 - 2)) | 8;
              }
              else {
                *(uint *)(param_1 + 0x14) = uVar22;
              }
              *(undefined4 *)((long)param_1 + 0xbc) = 0xffffffff;
              *(undefined1 *)(param_1 + 0x17) = 0;
            }
            uVar22 = *(uint *)(param_1 + 0x14);
            lVar15 = lVar15 - local_80;
            lVar29 = lVar29 - uStack_78;
            *(undefined1 *)(param_1 + 0x17) = 0;
            *(uint *)((long)param_1 + 0xbc) = uVar22;
            if (uVar22 == 0) {
LAB_01069730:
              uVar5 = *(uint *)((long)param_1 + 0xa4);
              local_2e0 = local_2e0 & 0xffffffff00000000;
              if (uVar5 < uVar22 + 1) {
                lVar30 = param_1[0x18];
                uVar34 = uVar5;
                do {
                    /* try { // try from 01069750 to 01169757 has its CatchHandler @ 01069c08 */
                  uVar34 = uVar34 + (uVar34 >> 1) + 0x10;
                } while (uVar34 < uVar22 + 1);
                lVar14 = ft_mem_realloc(lVar30,0x10,uVar5,uVar34,param_1[0x15],&local_2e0);
                param_1[0x15] = lVar14;
                iVar12 = (int)local_2e0;
                if ((int)local_2e0 == 0) {
                  lVar30 = ft_mem_realloc(lVar30,1,uVar5,uVar34,param_1[0x16],&local_2e0);
                  param_1[0x16] = lVar30;
                  iVar12 = (int)local_2e0;
                  if ((int)local_2e0 == 0) {
                    *(uint *)((long)param_1 + 0xa4) = uVar34;
                    uVar22 = *(uint *)(param_1 + 0x14);
                    goto LAB_010697c0;
                  }
                }
              }
              else {
                lVar30 = param_1[0x16];
LAB_010697c0:
                plVar26 = (long *)(param_1[0x15] + (ulong)uVar22 * 0x10);
                *plVar26 = lVar15;
                plVar26[1] = lVar29;
                *(undefined1 *)(lVar30 + (ulong)uVar22) = 1;
                *(int *)(param_1 + 0x14) = (int)param_1[0x14] + 1;
                iVar12 = 0;
              }
              *(undefined1 *)(param_1 + 0x17) = 0;
            }
            else {
                    /* try { // try from 010696ec to 011696f3 has its CatchHandler @ 01069c2c */
                    /* try { // try from 010696f4 to 0116974f has its CatchHandler @ 0106964c */
              if ((2 < (ulong)((1 - lVar15) + *(long *)(param_1[0x15] + (ulong)(uVar22 - 1) * 0x10))
                  ) || (2 < (ulong)((1 - lVar29) +
                                   *(long *)(param_1[0x15] + (ulong)(uVar22 - 1) * 0x10 + 8))))
              goto LAB_01069730;
              iVar12 = 0;
            }
            param_1[6] = lVar25;
            *(undefined1 *)(param_1 + 5) = 0;
            param_1[9] = 0;
            goto joined_r0x01069810;
          }
          param_1[1] = lVar25;
          uVar24 = FT_Angle_Diff(*param_1,lVar25);
          if (uVar24 != 0) {
            iVar12 = FUN_0106a9d4(param_1,uVar24 >> 0x3f,0);
            if (iVar12 != 0) {
              return iVar12;
            }
            iVar12 = FUN_0106ac80(param_1,(uint)(uVar24 >> 0x3f) ^ 1,0);
            goto joined_r0x01069810;
          }
        }
        else {
          lVar29 = FT_Angle_Diff(*param_1,lVar25);
          lVar15 = -lVar29;
          if (-1 < lVar29) {
            lVar15 = lVar29;
          }
          if (0x5a000 < lVar15) {
            lVar15 = plVar28[6];
            param_1[3] = plVar28[7];
            *plVar23 = lVar15;
                    /* catch() { ... } // from try @ 01069464 with catch @ 010694ac */
                    /* catch() { ... } // from try @ 01069444 with catch @ 010694b0 */
            param_1[1] = lVar25;
            *(undefined4 *)(param_1 + 0xb) = 0;
            uVar24 = FT_Angle_Diff(*param_1,lVar25);
            if (uVar24 == 0) {
              iVar12 = 0;
            }
            else {
                    /* try { // try from 010694c4 to 0116953f has its CatchHandler @ 010694c4
                       catch() { ... } // from try @ 010694c4 with catch @ 010694c4
                       catch() { ... } // from try @ 01069544 with catch @ 010694c4 */
              iVar12 = FUN_0106a9d4(param_1,uVar24 >> 0x3f,0);
              if (iVar12 == 0) {
                iVar12 = FUN_0106ac80(param_1,(uint)(uVar24 >> 0x3f) ^ 1,0);
              }
            }
            *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((long)param_1 + 0x5c);
          }
joined_r0x01069810:
          if (iVar12 != 0) {
            return iVar12;
          }
        }
        lVar15 = FT_Angle_Diff(lVar25,lVar31);
        if (lVar15 < 0) {
          lVar15 = lVar15 + 1;
        }
                    /* try { // try from 01069830 to 01169837 has its CatchHandler @ 01069c24 */
                    /* try { // try from 01069838 to 01169893 has its CatchHandler @ 0106964c */
        lVar29 = FT_Angle_Diff(lVar31,lVar13);
        if (lVar29 < 0) {
          lVar29 = lVar29 + 1;
        }
        lVar30 = FT_Angle_Diff(lVar25,lVar31);
        if (lVar30 < 0) {
          lVar30 = lVar30 + 1;
        }
        lVar14 = FT_Angle_Diff(lVar31,lVar13);
        lVar32 = param_1[0xd];
        if (lVar14 < 0) {
          lVar14 = lVar14 + 1;
        }
        uVar16 = FT_Cos(lVar15 >> 1);
        uVar16 = FT_DivFix(lVar32,uVar16);
        lVar15 = param_1[0xd];
                    /* try { // try from 01069894 to 0116989b has its CatchHandler @ 01069c04 */
        uVar17 = FT_Cos(lVar29 >> 1);
        uVar17 = FT_DivFix(lVar15,uVar17);
        if ((char)param_1[10] == '\0') {
          local_358 = 0;
          local_320 = local_2d0 + lVar35 * 2;
        }
        else {
          local_320 = local_2d0 + lVar35 * 2;
          local_358 = FT_Atan2(*plVar28 - plVar28[6],local_2d0[lVar35 * 2 + 1] - plVar28[7]);
        }
                    /* try { // try from 010698fc to 01169903 has its CatchHandler @ 01069c78 */
        local_320 = (long *)((ulong)local_320 | 8);
        lVar15 = 0;
        puVar33 = (uint *)(param_1 + 0xe);
        do {
          lVar29 = lVar15 * -0xb40000 + 0x5a0000;
          FT_Vector_From_Polar(&local_80,uVar16,lVar25 + (lVar30 >> 1) + lVar29);
          local_80 = local_80 + plVar28[4];
          uStack_78 = uStack_78 + plVar28[5];
          FT_Vector_From_Polar(&local_2e0,uVar17,lVar31 + (lVar14 >> 1) + lVar29);
          local_2e0 = local_2e0 + plVar28[2];
          uStack_2d8 = uStack_2d8 + plVar28[3];
          FT_Vector_From_Polar(&local_2f0,param_1[0xd],lVar29 + lVar13);
                    /* try { // try from 01069984 to 0116998b has its CatchHandler @ 01069c0c */
                    /* try { // try from 0106998c to 011699cf has its CatchHandler @ 0106964c */
          local_2f0 = local_2f0 + *plVar28;
          uStack_2e8 = uStack_2e8 + *local_320;
          if ((char)param_1[10] == '\0') {
LAB_01069ad8:
            uVar22 = *puVar33;
            uVar5 = puVar33[1];
            local_300 = local_300 & 0xffffffff00000000;
            if (uVar5 < uVar22 + 3) {
              lVar29 = *(long *)(puVar33 + 8);
              uVar34 = uVar5;
              do {
                uVar34 = uVar34 + (uVar34 >> 1) + 0x10;
              } while (uVar34 < uVar22 + 3);
              lVar32 = ft_mem_realloc(lVar29,0x10,uVar5,uVar34,*(long *)(puVar33 + 2),&local_300);
              *(long *)(puVar33 + 2) = lVar32;
              iVar12 = (int)local_300;
              if ((int)local_300 == 0) {
                lVar29 = ft_mem_realloc(lVar29,1,uVar5,uVar34,*(long *)(puVar33 + 4),&local_300);
                *(long *)(puVar33 + 4) = lVar29;
                iVar12 = (int)local_300;
                if ((int)local_300 == 0) {
                  puVar33[1] = uVar34;
                  uVar22 = *puVar33;
                  goto LAB_01069b74;
                }
              }
LAB_01069f7c:
              iVar21 = 2;
              *(undefined1 *)(puVar33 + 6) = 0;
              goto LAB_01069f90;
            }
            lVar29 = *(long *)(puVar33 + 4);
LAB_01069b74:
            puVar3 = (ulong *)(*(long *)(puVar33 + 2) + (ulong)uVar22 * 0x10);
            puVar3[1] = uStack_78;
            *puVar3 = local_80;
            puVar3[3] = uStack_2d8;
            puVar3[2] = local_2e0;
            puVar3[5] = uStack_2e8;
            puVar3[4] = local_2f0;
            *(undefined2 *)(lVar29 + (ulong)uVar22) = 0x202;
            *(undefined1 *)((undefined2 *)(lVar29 + (ulong)uVar22) + 1) = 1;
            uVar22 = *puVar33 + 3;
LAB_01069f50:
            *puVar33 = uVar22;
            *(undefined1 *)(puVar33 + 6) = 0;
          }
          else {
            puVar3 = (ulong *)(*(long *)(puVar33 + 2) + (ulong)(*puVar33 - 1) * 0x10);
            uVar24 = *puVar3;
            uVar4 = puVar3[1];
            lVar32 = FT_Atan2(local_2f0 - uVar24,uStack_2e8 - uVar4);
                    /* try { // try from 010699d0 to 011699d3 has its CatchHandler @ 01069c00 */
            lVar18 = FT_Angle_Diff(local_358,lVar32);
            lVar29 = -lVar18;
            if (-1 < lVar18) {
              lVar29 = lVar18;
            }
            if (lVar29 < 0x5a0001) goto LAB_01069ad8;
            lVar18 = FT_Atan2(plVar28[6] - uVar24,plVar28[7] - uVar4);
            lVar19 = FT_Atan2(*plVar28 - local_2f0,*local_320 - uStack_2e8);
            local_300 = local_2f0 - uVar24;
            lStack_2f8 = uStack_2e8 - uVar4;
                    /* try { // try from 01069a30 to 01169a4b has its CatchHandler @ 01069c3c */
            uVar20 = FT_Vector_Length(&local_300);
            lVar32 = FT_Sin(lVar32 - lVar19);
            lVar29 = -lVar32;
            if (-1 < lVar32) {
              lVar29 = lVar32;
            }
                    /* try { // try from 01069a4c to 01169beb has its CatchHandler @ 0106964c */
            lVar19 = FT_Sin(lVar18 - lVar19);
            lVar32 = -lVar19;
            if (-1 < lVar19) {
              lVar32 = lVar19;
            }
            uVar20 = FT_MulDiv(uVar20,lVar29,lVar32);
            FT_Vector_From_Polar(&local_310,uVar20,lVar18);
            local_310 = local_310 + uVar24;
            lStack_308 = lStack_308 + uVar4;
            uVar22 = *puVar33;
            *(undefined1 *)(puVar33 + 6) = 0;
            if (uVar22 == 0) {
LAB_01069bb0:
              uVar5 = puVar33[1];
              local_64 = 0;
              if (uVar22 + 1 <= uVar5) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01069a30 with catch @ 01069c3c
                        */
                lVar29 = *(long *)(puVar33 + 4);
LAB_01069c40:
                plVar26 = (long *)(*(long *)(puVar33 + 2) + (ulong)uVar22 * 0x10);
                plVar26[1] = lStack_308;
                *plVar26 = local_310;
                *(undefined1 *)(lVar29 + (ulong)uVar22) = 1;
                *(undefined1 *)(puVar33 + 6) = 0;
                uVar22 = *puVar33 + 1;
                *puVar33 = uVar22;
                if (uVar22 != 0) goto LAB_01069c6c;
                goto LAB_01069cac;
              }
              lVar29 = *(long *)(puVar33 + 8);
              uVar34 = uVar5;
              do {
                uVar34 = uVar34 + (uVar34 >> 1) + 0x10;
              } while (uVar34 < uVar22 + 1);
                    /* try { // try from 01069bec to 01169bf3 has its CatchHandler @ 01069c2c */
                    /* try { // try from 01069bf4 to 01169bfb has its CatchHandler @ 01069c24 */
              lVar32 = ft_mem_realloc(lVar29,0x10,uVar5,uVar34,*(long *)(puVar33 + 2),&local_64);
                    /* try { // try from 01069bfc to 01169bff has its CatchHandler @ 01069c0c */
              *(long *)(puVar33 + 2) = lVar32;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010699d0 with catch @ 01069c00
                       try { // try from 01069c00 to 01169def has its CatchHandler @ 0106964c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01069894 with catch @ 01069c04
                        */
              iVar12 = local_64;
              if (local_64 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01069750 with catch @ 01069c08
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01069984 with catch @ 01069c0c
                       catch(type#1 @ 00000000) { ... } // from try @ 01069bfc with catch @ 01069c0c
                        */
                lVar29 = ft_mem_realloc(lVar29,1,uVar5,uVar34,*(long *)(puVar33 + 4),&local_64);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01069830 with catch @ 01069c24
                       catch(type#1 @ 00000000) { ... } // from try @ 01069bf4 with catch @ 01069c24
                        */
                *(long *)(puVar33 + 4) = lVar29;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010696ec with catch @ 01069c2c
                       catch(type#1 @ 00000000) { ... } // from try @ 01069bec with catch @ 01069c2c
                        */
                iVar12 = local_64;
                if (local_64 == 0) {
                  uVar22 = *puVar33;
                  puVar33[1] = uVar34;
                  goto LAB_01069c40;
                }
              }
              goto LAB_01069f7c;
            }
            if ((2 < (ulong)((*(long *)(*(long *)(puVar33 + 2) + (ulong)(uVar22 - 1) * 0x10) + 1) -
                            local_310)) ||
               (2 < (ulong)((*(long *)(*(long *)(puVar33 + 2) + (ulong)(uVar22 - 1) * 0x10 + 8) + 1)
                           - lStack_308))) goto LAB_01069bb0;
LAB_01069c6c:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010698fc with catch @ 01069c78
                        */
            if ((2 < (*(long *)(*(long *)(puVar33 + 2) + (ulong)(uVar22 - 1) * 0x10) + 1) -
                     local_2f0) ||
               (2 < (*(long *)(*(long *)(puVar33 + 2) + (ulong)(uVar22 - 1) * 0x10 + 8) + 1) -
                    uStack_2e8)) {
LAB_01069cac:
              uVar5 = puVar33[1];
              local_64 = 0;
              if (uVar22 + 1 <= uVar5) {
                lVar29 = *(long *)(puVar33 + 4);
LAB_01069d40:
                puVar3 = (ulong *)(*(long *)(puVar33 + 2) + (ulong)uVar22 * 0x10);
                puVar3[1] = uStack_2e8;
                *puVar3 = local_2f0;
                *(undefined1 *)(lVar29 + (ulong)uVar22) = 1;
                *(undefined1 *)(puVar33 + 6) = 0;
                uVar22 = *puVar33 + 1;
                *puVar33 = uVar22;
                goto LAB_01069d64;
              }
              lVar29 = *(long *)(puVar33 + 8);
              uVar34 = uVar5;
              do {
                uVar34 = uVar34 + (uVar34 >> 1) + 0x10;
              } while (uVar34 < uVar22 + 1);
              lVar32 = ft_mem_realloc(lVar29,0x10,uVar5,uVar34,*(long *)(puVar33 + 2),&local_64);
              *(long *)(puVar33 + 2) = lVar32;
              iVar12 = local_64;
              if (local_64 == 0) {
                lVar29 = ft_mem_realloc(lVar29,1,uVar5,uVar34,*(long *)(puVar33 + 4),&local_64);
                *(long *)(puVar33 + 4) = lVar29;
                iVar12 = local_64;
                if (local_64 == 0) {
                  uVar22 = *puVar33;
                  puVar33[1] = uVar34;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010697b4 with catch @ 01069d38
                        */
                  goto LAB_01069d40;
                }
              }
              goto LAB_01069f7c;
            }
LAB_01069d64:
            uVar5 = puVar33[1];
            local_64 = 0;
            if (uVar5 < uVar22 + 3) {
              lVar29 = *(long *)(puVar33 + 8);
              uVar34 = uVar5;
              do {
                uVar34 = uVar34 + (uVar34 >> 1) + 0x10;
              } while (uVar34 < uVar22 + 3);
              lVar32 = ft_mem_realloc(lVar29,0x10,uVar5,uVar34,*(long *)(puVar33 + 2),&local_64);
              *(long *)(puVar33 + 2) = lVar32;
              iVar12 = local_64;
              if (local_64 == 0) {
                lVar29 = ft_mem_realloc(lVar29,1,uVar5,uVar34,*(long *)(puVar33 + 4),&local_64);
                *(long *)(puVar33 + 4) = lVar29;
                iVar12 = local_64;
                if (local_64 == 0) {
                  uVar22 = *puVar33;
                  puVar33[1] = uVar34;
                    /* try { // try from 01069df0 to 01169e8f has its CatchHandler @ 01069df0
                       catch(type#1 @ 00000000) { ... } // from try @ 01069df0 with catch @ 01069df0
                       catch(type#1 @ 00000000) { ... } // from try @ 01069e98 with catch @ 01069df0
                       catch(type#1 @ 00000000) { ... } // from try @ 01069f98 with catch @ 01069df0
                       catch(type#1 @ 00000000) { ... } // from try @ 0106a0b0 with catch @ 01069df0
                       catch(type#1 @ 00000000) { ... } // from try @ 0106a138 with catch @ 01069df0
                       catch(type#1 @ 00000000) { ... } // from try @ 0106a2cc with catch @ 01069df0
                        */
                  goto LAB_01069e04;
                }
              }
              goto LAB_01069f7c;
            }
            lVar29 = *(long *)(puVar33 + 4);
LAB_01069e04:
            puVar27 = puVar33 + 4;
            puVar3 = (ulong *)(*(long *)(puVar33 + 2) + (ulong)uVar22 * 0x10);
            puVar3[1] = uStack_2d8;
            *puVar3 = local_2e0;
            puVar3[4] = uVar24;
            puVar3[3] = uStack_78;
            puVar3[2] = local_80;
            puVar3[5] = uVar4;
            *(undefined2 *)(lVar29 + (ulong)uVar22) = 0x202;
            *(undefined1 *)((undefined2 *)(lVar29 + (ulong)uVar22) + 1) = 1;
            uVar5 = *puVar33;
            *(undefined1 *)(puVar33 + 6) = 0;
            uVar22 = uVar5 + 3;
            *puVar33 = uVar22;
            if (uVar22 == 0) {
LAB_01069e94:
              uVar34 = puVar33[1];
                    /* try { // try from 01069e98 to 01169ef3 has its CatchHandler @ 01069df0 */
              local_64 = 0;
              if (uVar5 + 4 <= uVar34) {
                lVar29 = *(long *)puVar27;
LAB_01069f34:
                puVar3 = (ulong *)(*(long *)(puVar33 + 2) + (ulong)uVar22 * 0x10);
                puVar3[1] = uStack_2e8;
                *puVar3 = local_2f0;
                *(undefined1 *)(lVar29 + (ulong)uVar22) = 1;
                uVar22 = *puVar33 + 1;
                goto LAB_01069f50;
              }
              lVar29 = *(long *)(puVar33 + 8);
              uVar22 = uVar34;
              do {
                uVar22 = uVar22 + (uVar22 >> 1) + 0x10;
              } while (uVar22 < uVar5 + 4);
              lVar32 = ft_mem_realloc(lVar29,0x10,uVar34,uVar22,*(long *)(puVar33 + 2),&local_64);
              *(long *)(puVar33 + 2) = lVar32;
              if (local_64 == 0) {
                    /* try { // try from 01069ef4 to 01169efb has its CatchHandler @ 0106a2d4 */
                lVar29 = ft_mem_realloc(lVar29,1,uVar34,uVar22,*(long *)puVar27,&local_64);
                *(long *)puVar27 = lVar29;
                if (local_64 == 0) {
                    /* try { // try from 01069f14 to 01169f17 has its CatchHandler @ 0106a3f4 */
                  puVar33[1] = uVar22;
                  uVar22 = *puVar33;
                  goto LAB_01069f34;
                }
              }
                    /* try { // try from 010690a0 to 01169123 has its CatchHandler @ 010690a0
                       catch() { ... } // from try @ 010690a0 with catch @ 010690a0
                       catch() { ... } // from try @ 01069250 with catch @ 010690a0 */
              iVar21 = 7;
              *(undefined1 *)(puVar33 + 6) = 0;
              iVar12 = local_64;
              if (local_64 != 0) {
                iVar21 = 2;
              }
              goto LAB_01069f90;
            }
            if ((2 < (*(long *)(*(long *)(puVar33 + 2) + (ulong)(uVar5 + 2) * 0x10) + 1) - local_2f0
                ) || (2 < (*(long *)(*(long *)(puVar33 + 2) + (ulong)(uVar5 + 2) * 0x10 + 8) + 1) -
                          uStack_2e8)) goto LAB_01069e94;
          }
          puVar33 = puVar33 + 0xc;
          bVar1 = lVar15 < 1;
          lVar15 = lVar15 + 1;
        } while (bVar1);
        iVar21 = 0;
        iVar12 = 0;
LAB_01069f90:
                    /* try { // try from 01069f90 to 01169f97 has its CatchHandler @ 0106a2f0 */
                    /* try { // try from 01069f98 to 01169ff3 has its CatchHandler @ 01069df0 */
        if (iVar21 != 3) {
          if (iVar21 != 0) {
            return iVar12;
          }
          lVar35 = lVar35 + -3;
          *param_1 = lVar13;
        }
        bVar1 = false;
        plVar28 = local_2d0 + lVar35 * 2;
      } while (-1 < lVar35);
      lVar31 = param_4[1];
      lVar35 = *param_4;
    }
    param_1[3] = lVar31;
    *plVar23 = lVar35;
  }
  return iVar12;
}

