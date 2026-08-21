
ulong FT_Stroker_ConicTo(long *param_1,long *param_2,ulong *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  uint uVar20;
  ulong *puVar21;
  ulong *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  uint *puVar27;
  long lVar28;
  uint uVar29;
  uint *puVar30;
  ulong *puVar31;
  ulong *local_318;
  ulong *local_310;
  undefined8 local_300;
  ulong local_2d8;
  long local_2d0;
  long lStack_2c8;
  ulong local_2c0 [2];
  ulong local_2b0;
  ulong uStack_2a8;
  ulong local_2a0 [4];
  ulong local_280;
  long lStack_278;
  long local_80;
  long lStack_78;
  uint local_64;
  
  uVar11 = 6;
  if (((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) && (param_3 != (ulong *)0x0)) {
    puVar21 = (ulong *)(param_1 + 2);
    if ((((*puVar21 + 1) - *param_2 < 3) && ((ulong)((param_1[3] + 1) - param_2[1]) < 3)) &&
       (((*param_2 + 1) - *param_3 < 3 && ((param_2[1] + 1) - param_3[1] < 3)))) {
      uVar13 = *param_3;
      uVar11 = 0;
      param_1[3] = param_3[1];
      *puVar21 = uVar13;
    }
    else {
                    /* try { // try from 010681e4 to 011681e7 has its CatchHandler @ 01068214 */
                    /* try { // try from 010681e8 to 011681eb has its CatchHandler @ 01068208 */
                    /* try { // try from 010681ec to 011681f3 has its CatchHandler @ 01068200 */
                    /* catch() { ... } // from try @ 01068098 with catch @ 010681f4
                       try { // try from 010681f4 to 0116840f has its CatchHandler @ 01067d84 */
      local_2a0[1] = param_3[1];
      local_2a0[0] = *param_3;
                    /* catch() { ... } // from try @ 01067f8c with catch @ 010681f8 */
                    /* catch() { ... } // from try @ 01067e88 with catch @ 010681fc */
                    /* catch() { ... } // from try @ 01068030 with catch @ 01068200
                       catch() { ... } // from try @ 010681ec with catch @ 01068200 */
      lVar23 = 0;
                    /* catch() { ... } // from try @ 01067f28 with catch @ 01068208
                       catch() { ... } // from try @ 010681e8 with catch @ 01068208 */
      local_2a0[3] = param_2[1];
      local_2a0[2] = *param_2;
                    /* catch() { ... } // from try @ 01067e24 with catch @ 01068214
                       catch() { ... } // from try @ 010681e4 with catch @ 01068214 */
      bVar1 = true;
      lStack_278 = param_1[3];
      local_280 = *puVar21;
      puVar31 = local_2a0;
      do {
                    /* catch() { ... } // from try @ 010680b0 with catch @ 01068224 */
        puVar22 = local_2c0 + lVar23 * 2;
        lVar24 = lVar23;
        while (lVar28 = *param_1, lVar12 = lVar28, lVar24 < 0x1e) {
          lVar26 = *puVar31 - puVar31[2];
          lVar25 = puVar22[5] - puVar31[3];
                    /* catch() { ... } // from try @ 010680a4 with catch @ 0106825c */
          bVar8 = 2 < lVar26 + 1U;
          bVar9 = 2 < lVar25 + 1U;
          if (((puVar31[2] - puVar31[4]) + 1 < 3) && ((puVar31[3] - puVar31[5]) + 1 < 3)) {
            if (bVar8 || bVar9) {
              lVar28 = FT_Atan2(lVar26,lVar25);
              lVar12 = lVar28;
                    /* catch() { ... } // from try @ 01067fac with catch @ 010682ac */
            }
          }
          else {
            lVar28 = FT_Atan2();
            lVar12 = lVar28;
            if (bVar8 || bVar9) {
              lVar12 = FT_Atan2(lVar26,lVar25);
            }
          }
          lVar26 = FT_Angle_Diff(lVar28);
          lVar25 = -lVar26;
          if (-1 < lVar26) {
            lVar25 = lVar26;
          }
          if (lVar25 < 0x1e0000) break;
                    /* catch() { ... } // from try @ 01067f9c with catch @ 010682f0 */
          if ((char)param_1[5] != '\0') {
            *param_1 = lVar28;
          }
          lVar24 = lVar24 + 2;
          puVar31[8] = puVar31[4];
          puVar31[9] = puVar31[5];
          lVar12 = puVar31[2] + puVar31[4];
          lVar28 = *puVar31 + puVar31[2];
          if (lVar12 < 0) {
            lVar12 = lVar12 + 1;
          }
          if (lVar28 < 0) {
            lVar28 = lVar28 + 1;
          }
          puVar31[2] = lVar28 >> 1;
          lVar28 = (lVar28 >> 1) + (lVar12 >> 1);
          if (lVar28 < 0) {
            lVar28 = lVar28 + 1;
          }
          puVar31[4] = lVar28 >> 1;
          lVar28 = puVar31[3] + puVar31[5];
          if (lVar28 < 0) {
            lVar28 = lVar28 + 1;
          }
          puVar31[6] = lVar12 >> 1;
          puVar31[7] = lVar28 >> 1;
          puVar6 = puVar22 + 5;
          puVar22 = puVar22 + 4;
                    /* catch() { ... } // from try @ 01067ea4 with catch @ 01068364 */
          lVar12 = *puVar6 + puVar31[3];
          if (lVar12 < 0) {
            lVar12 = lVar12 + 1;
          }
          lVar28 = (lVar12 >> 1) + (lVar28 >> 1);
          if (lVar28 < 0) {
            lVar28 = lVar28 + 1;
          }
          puVar31[5] = lVar28 >> 1;
          puVar31[3] = lVar12 >> 1;
          puVar31 = local_2a0 + lVar24 * 2;
          if (lVar23 < -2) goto LAB_01068f10;
        }
        if (bVar1) {
          if ((char)param_1[5] != '\0') {
            FT_Vector_From_Polar(&local_80,param_1[0xd],lVar28 + 0x5a0000);
                    /* catch() { ... } // from try @ 01067e98 with catch @ 010683c8 */
            lVar23 = param_1[2];
            lVar25 = param_1[3];
            uVar20 = *(uint *)((long)param_1 + 0x8c);
            uVar11 = (ulong)uVar20;
            if (-1 < (int)uVar20) {
              uVar4 = *(uint *)(param_1 + 0xe);
              if (uVar20 + 1 < uVar4) {
                *(uint *)(param_1 + 0xe) = uVar4 - 1;
                puVar5 = (undefined8 *)(param_1[0xf] + (ulong)(uVar4 - 1) * 0x10);
                uVar14 = *puVar5;
                puVar7 = (undefined8 *)(param_1[0xf] + uVar11 * 0x10);
                puVar7[1] = puVar5[1];
                *puVar7 = uVar14;
                *(byte *)(param_1[0x10] + uVar11) = *(byte *)(param_1[0x10] + uVar11) | 4;
                    /* try { // try from 01068410 to 0116844f has its CatchHandler @ 01068410
                       catch() { ... } // from try @ 01068410 with catch @ 01068410
                       catch() { ... } // from try @ 010684b8 with catch @ 01068410 */
                *(byte *)(param_1[0x10] + (ulong)(uVar4 - 2)) =
                     *(byte *)(param_1[0x10] + (ulong)(uVar4 - 2)) | 8;
              }
              else {
                    /* catch() { ... } // from try @ 01068468 with catch @ 010684fc */
                *(uint *)(param_1 + 0xe) = uVar20;
              }
                    /* catch() { ... } // from try @ 010684b0 with catch @ 01068500 */
              *(undefined4 *)((long)param_1 + 0x8c) = 0xffffffff;
              *(undefined1 *)(param_1 + 0x11) = 0;
            }
            uVar20 = *(uint *)(param_1 + 0xe);
            lVar23 = local_80 + lVar23;
            lVar25 = lStack_78 + lVar25;
                    /* catch() { ... } // from try @ 01068450 with catch @ 01068518 */
            *(undefined1 *)(param_1 + 0x11) = 0;
            *(uint *)((long)param_1 + 0x8c) = uVar20;
            if (uVar20 == 0) {
LAB_01068564:
              uVar4 = *(uint *)((long)param_1 + 0x74);
              local_2b0 = local_2b0 & 0xffffffff00000000;
              if (uVar4 < uVar20 + 1) {
                lVar26 = param_1[0x12];
                uVar29 = uVar4;
                do {
                  uVar29 = uVar29 + (uVar29 >> 1) + 0x10;
                } while (uVar29 < uVar20 + 1);
                lVar19 = ft_mem_realloc(lVar26,0x10,uVar4,uVar29,param_1[0xf],&local_2b0);
                param_1[0xf] = lVar19;
                if ((uint)local_2b0 == 0) {
                  lVar26 = ft_mem_realloc(lVar26,1,uVar4,uVar29,param_1[0x10],&local_2b0);
                  param_1[0x10] = lVar26;
                  if ((uint)local_2b0 == 0) {
                    *(uint *)((long)param_1 + 0x74) = uVar29;
                    uVar20 = *(uint *)(param_1 + 0xe);
                    goto LAB_01068608;
                  }
                }
                *(undefined1 *)(param_1 + 0x11) = 0;
                if ((uint)local_2b0 != 0) {
                  return (ulong)(uint)local_2b0;
                }
                goto LAB_010687d8;
              }
              lVar26 = param_1[0x10];
LAB_01068608:
              plVar2 = (long *)(param_1[0xf] + (ulong)uVar20 * 0x10);
              *plVar2 = lVar23;
              plVar2[1] = lVar25;
              *(undefined1 *)(lVar26 + (ulong)uVar20) = 1;
              *(undefined1 *)(param_1 + 0x11) = 0;
              *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
            }
            else {
                    /* catch() { ... } // from try @ 0106846c with catch @ 01068528 */
              if ((2 < (ulong)((1 - lVar23) + *(long *)(param_1[0xf] + (ulong)(uVar20 - 1) * 0x10)))
                 || (2 < (ulong)((1 - lVar25) +
                                *(long *)(param_1[0xf] + (ulong)(uVar20 - 1) * 0x10 + 8))))
              goto LAB_01068564;
            }
            lVar23 = param_1[2];
            lVar25 = param_1[3];
            uVar20 = *(uint *)((long)param_1 + 0xbc);
            uVar11 = (ulong)uVar20;
            if (-1 < (int)uVar20) {
              uVar4 = *(uint *)(param_1 + 0x14);
              if (uVar20 + 1 < uVar4) {
                    /* catch() { ... } // from try @ 010686a0 with catch @ 01068658 */
                *(uint *)(param_1 + 0x14) = uVar4 - 1;
                puVar5 = (undefined8 *)(param_1[0x15] + (ulong)(uVar4 - 1) * 0x10);
                uVar14 = *puVar5;
                puVar7 = (undefined8 *)(param_1[0x15] + uVar11 * 0x10);
                puVar7[1] = puVar5[1];
                *puVar7 = uVar14;
                *(byte *)(param_1[0x16] + uVar11) = *(byte *)(param_1[0x16] + uVar11) | 4;
                *(byte *)(param_1[0x16] + (ulong)(uVar4 - 2)) =
                     *(byte *)(param_1[0x16] + (ulong)(uVar4 - 2)) | 8;
              }
              else {
                *(uint *)(param_1 + 0x14) = uVar20;
              }
              *(undefined4 *)((long)param_1 + 0xbc) = 0xffffffff;
                    /* try { // try from 01068698 to 0116869f has its CatchHandler @ 010686c4 */
              *(undefined1 *)(param_1 + 0x17) = 0;
            }
            uVar20 = *(uint *)(param_1 + 0x14);
                    /* try { // try from 010686a0 to 011686df has its CatchHandler @ 01068658 */
            lVar23 = lVar23 - local_80;
            lVar25 = lVar25 - lStack_78;
            *(undefined1 *)(param_1 + 0x17) = 0;
            *(uint *)((long)param_1 + 0xbc) = uVar20;
            if (uVar20 == 0) {
LAB_01068700:
              uVar4 = *(uint *)((long)param_1 + 0xa4);
              local_2b0 = local_2b0 & 0xffffffff00000000;
              if (uVar4 < uVar20 + 1) {
                lVar26 = param_1[0x18];
                uVar29 = uVar4;
                do {
                  uVar29 = uVar29 + (uVar29 >> 1) + 0x10;
                } while (uVar29 < uVar20 + 1);
                lVar19 = ft_mem_realloc(lVar26,0x10,uVar4,uVar29,param_1[0x15],&local_2b0);
                param_1[0x15] = lVar19;
                if ((uint)local_2b0 == 0) {
                    /* try { // try from 01068778 to 0116877f has its CatchHandler @ 01068a40 */
                  lVar26 = ft_mem_realloc(lVar26,1,uVar4,uVar29,param_1[0x16],&local_2b0);
                    /* try { // try from 01068780 to 011687f3 has its CatchHandler @ 010686e0 */
                  param_1[0x16] = lVar26;
                  if ((uint)local_2b0 == 0) {
                    *(uint *)((long)param_1 + 0xa4) = uVar29;
                    uVar20 = *(uint *)(param_1 + 0x14);
                    goto LAB_01068798;
                  }
                }
                uVar11 = (ulong)(uint)local_2b0;
              }
              else {
                lVar26 = param_1[0x16];
LAB_01068798:
                uVar11 = 0;
                plVar2 = (long *)(param_1[0x15] + (ulong)uVar20 * 0x10);
                *plVar2 = lVar23;
                plVar2[1] = lVar25;
                *(undefined1 *)(lVar26 + (ulong)uVar20) = 1;
                *(int *)(param_1 + 0x14) = (int)param_1[0x14] + 1;
              }
              *(undefined1 *)(param_1 + 0x17) = 0;
            }
            else {
                    /* catch() { ... } // from try @ 01068698 with catch @ 010686c4 */
                    /* try { // try from 010686e0 to 01168777 has its CatchHandler @ 010686e0
                       catch(type#1 @ 00000000) { ... } // from try @ 010686e0 with catch @ 010686e0
                       catch(type#1 @ 00000000) { ... } // from try @ 01068780 with catch @ 010686e0
                       catch(type#1 @ 00000000) { ... } // from try @ 01068904 with catch @ 010686e0
                       catch(type#1 @ 00000000) { ... } // from try @ 01068a34 with catch @ 010686e0
                        */
              if ((2 < (ulong)((1 - lVar23) + *(long *)(param_1[0x15] + (ulong)(uVar20 - 1) * 0x10))
                  ) || (2 < (ulong)((1 - lVar25) +
                                   *(long *)(param_1[0x15] + (ulong)(uVar20 - 1) * 0x10 + 8))))
              goto LAB_01068700;
              uVar11 = 0;
            }
            param_1[6] = lVar28;
            *(undefined1 *)(param_1 + 5) = 0;
            param_1[9] = 0;
            iVar10 = (int)uVar11;
            goto joined_r0x010684f4;
          }
                    /* try { // try from 010684b0 to 011684b7 has its CatchHandler @ 01068500 */
                    /* try { // try from 010684b8 to 0116853b has its CatchHandler @ 01068410 */
          param_1[1] = lVar28;
          uVar11 = FT_Angle_Diff(*param_1,lVar28);
          if (uVar11 != 0) {
            uVar13 = FUN_0106a9d4(param_1,uVar11 >> 0x3f,0);
            if ((int)uVar13 != 0) {
              return uVar13;
            }
            uVar11 = FUN_0106ac80(param_1,(uint)(uVar11 >> 0x3f) ^ 1,0);
            iVar10 = (int)uVar11;
            goto joined_r0x010684f4;
          }
        }
        else {
          lVar25 = FT_Angle_Diff(*param_1,lVar28);
          lVar23 = -lVar25;
          if (-1 < lVar25) {
            lVar23 = lVar25;
          }
          if (lVar23 < 0x78001) goto LAB_010687d8;
                    /* try { // try from 01068450 to 01168457 has its CatchHandler @ 01068518 */
          uVar11 = puVar31[4];
          param_1[3] = puVar31[5];
          *puVar21 = uVar11;
          param_1[1] = lVar28;
                    /* try { // try from 01068468 to 0116846b has its CatchHandler @ 010684fc */
          *(undefined4 *)(param_1 + 0xb) = 0;
                    /* try { // try from 0106846c to 0116847b has its CatchHandler @ 01068528 */
          uVar13 = FT_Angle_Diff(*param_1,lVar28);
          uVar11 = 0;
          if ((uVar13 != 0) && (uVar11 = FUN_0106a9d4(param_1,uVar13 >> 0x3f,0), (int)uVar11 == 0))
          {
            uVar11 = FUN_0106ac80(param_1,(uint)(uVar13 >> 0x3f) ^ 1,0);
          }
          *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((long)param_1 + 0x5c);
          iVar10 = (int)uVar11;
joined_r0x010684f4:
          if (iVar10 != 0) {
            return uVar11;
          }
        }
LAB_010687d8:
        lVar23 = FT_Angle_Diff(lVar28,lVar12);
        lVar25 = param_1[0xd];
        if (lVar23 < 0) {
          lVar23 = lVar23 + 1;
        }
                    /* try { // try from 010687f4 to 011687fb has its CatchHandler @ 01068a3c */
        uVar14 = FT_Cos(lVar23 >> 1);
                    /* try { // try from 010687fc to 011687ff has its CatchHandler @ 01068af0 */
        uVar14 = FT_DivFix(lVar25,uVar14);
        if ((char)param_1[10] == '\0') {
          local_2d8 = puVar22[5];
          local_300 = 0;
        }
        else {
          local_2d8 = puVar22[5];
          local_300 = FT_Atan2(*puVar31 - puVar31[4],local_2d8 - puVar31[5]);
        }
        local_310 = puVar31 + 4;
        local_318 = puVar31 + 5;
                    /* try { // try from 0106886c to 01168873 has its CatchHandler @ 01068a38 */
        lVar25 = 0;
        puVar27 = (uint *)(param_1 + 0xe);
        do {
                    /* try { // try from 01068878 to 0116887f has its CatchHandler @ 01068a84 */
          lVar26 = lVar25 * -0xb40000 + 0x5a0000;
          FT_Vector_From_Polar(&local_80,uVar14,(lVar23 >> 1) + lVar28 + lVar26);
          local_80 = local_80 + puVar31[2];
          lStack_78 = lStack_78 + puVar31[3];
          FT_Vector_From_Polar(&local_2b0,param_1[0xd],lVar26 + lVar12);
          local_2b0 = local_2b0 + *puVar31;
          uStack_2a8 = uStack_2a8 + local_2d8;
          if ((char)param_1[10] == '\0') {
LAB_01068a18:
            uVar20 = *puVar27;
            uVar4 = puVar27[1];
            local_2c0[0] = local_2c0[0] & 0xffffffff00000000;
            if (uVar4 < uVar20 + 2) {
                    /* try { // try from 01068a2c to 01168a33 has its CatchHandler @ 01068a40 */
              lVar26 = *(long *)(puVar27 + 8);
              uVar29 = uVar4;
              do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010688e0 with catch @ 01068a34
                       try { // try from 01068a34 to 01168b73 has its CatchHandler @ 010686e0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0106886c with catch @ 01068a38
                        */
                uVar29 = uVar29 + (uVar29 >> 1) + 0x10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010687f4 with catch @ 01068a3c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01068778 with catch @ 01068a40
                       catch(type#1 @ 00000000) { ... } // from try @ 01068a2c with catch @ 01068a40
                        */
              } while (uVar29 < uVar20 + 2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010688e8 with catch @ 01068a50
                        */
              lVar19 = ft_mem_realloc(lVar26,0x10,uVar4,uVar29,*(long *)(puVar27 + 2),local_2c0);
              *(long *)(puVar27 + 2) = lVar19;
              uVar11 = local_2c0[0] & 0xffffffff;
              if ((int)local_2c0[0] != 0) {
LAB_01068f08:
                *(undefined1 *)(puVar27 + 6) = 0;
                return uVar11;
              }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01068878 with catch @ 01068a84
                        */
              lVar26 = ft_mem_realloc(lVar26,1,uVar4,uVar29,*(long *)(puVar27 + 4),local_2c0);
              *(long *)(puVar27 + 4) = lVar26;
              uVar11 = local_2c0[0] & 0xffffffff;
              if ((int)local_2c0[0] != 0) goto LAB_01068f08;
              uVar20 = *puVar27;
              puVar27[1] = uVar29;
            }
            else {
              lVar26 = *(long *)(puVar27 + 4);
            }
            plVar2 = (long *)(*(long *)(puVar27 + 2) + (ulong)uVar20 * 0x10);
            plVar2[1] = lStack_78;
            *plVar2 = local_80;
            plVar2[3] = uStack_2a8;
            plVar2[2] = local_2b0;
            *(undefined2 *)(lVar26 + (ulong)uVar20) = 0x100;
            uVar20 = *puVar27 + 2;
LAB_01068ea8:
            *puVar27 = uVar20;
            *(undefined1 *)(puVar27 + 6) = 0;
          }
          else {
                    /* try { // try from 010688e0 to 011688e3 has its CatchHandler @ 01068a34 */
                    /* try { // try from 010688e8 to 01168903 has its CatchHandler @ 01068a50 */
            plVar2 = (long *)(*(long *)(puVar27 + 2) + (ulong)(*puVar27 - 1) * 0x10);
            lVar19 = *plVar2;
            lVar3 = plVar2[1];
            lVar15 = FT_Atan2(local_2b0 - lVar19,uStack_2a8 - lVar3);
                    /* try { // try from 01068904 to 01168a2b has its CatchHandler @ 010686e0 */
            lVar16 = FT_Angle_Diff(local_300,lVar15);
            lVar26 = -lVar16;
            if (-1 < lVar16) {
              lVar26 = lVar16;
            }
            if (lVar26 < 0x5a0001) goto LAB_01068a18;
            lVar16 = FT_Atan2(*local_310 - lVar19,*local_318 - lVar3);
            lVar17 = FT_Atan2(*puVar31 - local_2b0,local_2d8 - uStack_2a8);
            local_2c0[0] = local_2b0 - lVar19;
            local_2c0[1] = uStack_2a8 - lVar3;
            uVar18 = FT_Vector_Length(local_2c0);
            lVar15 = FT_Sin(lVar15 - lVar17);
            lVar26 = -lVar15;
            if (-1 < lVar15) {
              lVar26 = lVar15;
            }
            lVar17 = FT_Sin(lVar16 - lVar17);
            lVar15 = -lVar17;
            if (-1 < lVar17) {
              lVar15 = lVar17;
            }
            uVar18 = FT_MulDiv(uVar18,lVar26,lVar15);
            FT_Vector_From_Polar(&local_2d0,uVar18,lVar16);
            local_2d0 = local_2d0 + lVar19;
            lStack_2c8 = lStack_2c8 + lVar3;
            uVar20 = *puVar27;
            *(undefined1 *)(puVar27 + 6) = 0;
            if (uVar20 == 0) {
LAB_01068ae0:
              uVar4 = puVar27[1];
              local_64 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010687fc with catch @ 01068af0
                        */
              if (uVar4 < uVar20 + 1) {
                lVar26 = *(long *)(puVar27 + 8);
                uVar29 = uVar4;
                do {
                  uVar29 = uVar29 + (uVar29 >> 1) + 0x10;
                } while (uVar29 < uVar20 + 1);
                lVar15 = ft_mem_realloc(lVar26,0x10,uVar4,uVar29,*(long *)(puVar27 + 2),&local_64);
                *(long *)(puVar27 + 2) = lVar15;
                uVar11 = (ulong)local_64;
                if (local_64 != 0) goto LAB_01068f08;
                lVar26 = ft_mem_realloc(lVar26,1,uVar4,uVar29,*(long *)(puVar27 + 4),&local_64);
                *(long *)(puVar27 + 4) = lVar26;
                uVar11 = (ulong)local_64;
                if (local_64 != 0) goto LAB_01068f08;
                puVar27[1] = uVar29;
                uVar20 = *puVar27;
                    /* try { // try from 01068b74 to 01168bbf has its CatchHandler @ 01068b74
                       catch() { ... } // from try @ 01068b74 with catch @ 01068b74
                       catch() { ... } // from try @ 01068bd0 with catch @ 01068b74 */
              }
              else {
                lVar26 = *(long *)(puVar27 + 4);
              }
              plVar2 = (long *)(*(long *)(puVar27 + 2) + (ulong)uVar20 * 0x10);
              plVar2[1] = lStack_2c8;
              *plVar2 = local_2d0;
              *(undefined1 *)(lVar26 + (ulong)uVar20) = 1;
              *(undefined1 *)(puVar27 + 6) = 0;
              uVar20 = *puVar27 + 1;
              *puVar27 = uVar20;
              if (uVar20 != 0) goto LAB_01068bb4;
LAB_01068bf4:
              uVar4 = puVar27[1];
                    /* catch() { ... } // from try @ 01068bc0 with catch @ 01068bf8 */
              local_64 = 0;
              if (uVar4 < uVar20 + 1) {
                lVar26 = *(long *)(puVar27 + 8);
                    /* try { // try from 01068c0c to 01168ca3 has its CatchHandler @ 01068c0c
                       catch(type#1 @ 00000000) { ... } // from try @ 01068c0c with catch @ 01068c0c
                       catch(type#1 @ 00000000) { ... } // from try @ 01068cac with catch @ 01068c0c
                       catch(type#1 @ 00000000) { ... } // from try @ 01068e30 with catch @ 01068c0c
                       catch(type#1 @ 00000000) { ... } // from try @ 01068f60 with catch @ 01068c0c
                        */
                uVar29 = uVar4;
                do {
                  uVar29 = uVar29 + (uVar29 >> 1) + 0x10;
                } while (uVar29 < uVar20 + 1);
                lVar15 = ft_mem_realloc(lVar26,0x10,uVar4,uVar29,*(long *)(puVar27 + 2),&local_64);
                *(long *)(puVar27 + 2) = lVar15;
                uVar11 = (ulong)local_64;
                if (local_64 != 0) goto LAB_01068f08;
                lVar26 = ft_mem_realloc(lVar26,1,uVar4,uVar29,*(long *)(puVar27 + 4),&local_64);
                *(long *)(puVar27 + 4) = lVar26;
                uVar11 = (ulong)local_64;
                if (local_64 != 0) goto LAB_01068f08;
                puVar27[1] = uVar29;
                uVar20 = *puVar27;
              }
              else {
                lVar26 = *(long *)(puVar27 + 4);
              }
                    /* try { // try from 01068ca4 to 01168cab has its CatchHandler @ 01068f6c */
              puVar6 = (ulong *)(*(long *)(puVar27 + 2) + (ulong)uVar20 * 0x10);
              puVar6[1] = uStack_2a8;
              *puVar6 = local_2b0;
                    /* try { // try from 01068cac to 01168d1f has its CatchHandler @ 01068c0c */
              *(undefined1 *)(lVar26 + (ulong)uVar20) = 1;
              *(undefined1 *)(puVar27 + 6) = 0;
              uVar20 = *puVar27 + 1;
              *puVar27 = uVar20;
            }
            else {
              if ((2 < (ulong)((*(long *)(*(long *)(puVar27 + 2) + (ulong)(uVar20 - 1) * 0x10) + 1)
                              - local_2d0)) ||
                 (2 < (ulong)((*(long *)(*(long *)(puVar27 + 2) + (ulong)(uVar20 - 1) * 0x10 + 8) +
                              1) - lStack_2c8))) goto LAB_01068ae0;
LAB_01068bb4:
                    /* try { // try from 01068bc0 to 01168bcf has its CatchHandler @ 01068bf8 */
                    /* try { // try from 01068bd0 to 01168c0b has its CatchHandler @ 01068b74 */
              if ((2 < (*(long *)(*(long *)(puVar27 + 2) + (ulong)(uVar20 - 1) * 0x10) + 1) -
                       local_2b0) ||
                 (2 < (*(long *)(*(long *)(puVar27 + 2) + (ulong)(uVar20 - 1) * 0x10 + 8) + 1) -
                      uStack_2a8)) goto LAB_01068bf4;
            }
            uVar4 = puVar27[1];
            local_64 = 0;
            if (uVar4 < uVar20 + 2) {
              lVar26 = *(long *)(puVar27 + 8);
              uVar29 = uVar4;
              do {
                uVar29 = uVar29 + (uVar29 >> 1) + 0x10;
              } while (uVar29 < uVar20 + 2);
              lVar15 = ft_mem_realloc(lVar26,0x10,uVar4,uVar29,*(long *)(puVar27 + 2),&local_64);
              *(long *)(puVar27 + 2) = lVar15;
              uVar11 = (ulong)local_64;
              if (local_64 != 0) goto LAB_01068f08;
                    /* try { // try from 01068d20 to 01168d27 has its CatchHandler @ 01068f68 */
                    /* try { // try from 01068d28 to 01168d2b has its CatchHandler @ 0106901c */
              lVar26 = ft_mem_realloc(lVar26,1,uVar4,uVar29,*(long *)(puVar27 + 4),&local_64);
              *(long *)(puVar27 + 4) = lVar26;
              uVar11 = (ulong)local_64;
              if (local_64 != 0) goto LAB_01068f08;
              puVar27[1] = uVar29;
              uVar20 = *puVar27;
            }
            else {
              lVar26 = *(long *)(puVar27 + 4);
            }
            puVar30 = puVar27 + 4;
            plVar2 = (long *)(*(long *)(puVar27 + 2) + (ulong)uVar20 * 0x10);
            plVar2[1] = lStack_78;
            *plVar2 = local_80;
            plVar2[2] = lVar19;
            plVar2[3] = lVar3;
            *(undefined2 *)(lVar26 + (ulong)uVar20) = 0x100;
            uVar4 = *puVar27;
            *(undefined1 *)(puVar27 + 6) = 0;
            uVar20 = uVar4 + 2;
                    /* try { // try from 01068d98 to 01168d9f has its CatchHandler @ 01068f64 */
            *puVar27 = uVar20;
            if (uVar20 == 0) {
LAB_01068de8:
              uVar29 = puVar27[1];
              local_64 = 0;
              if (uVar29 < uVar4 + 3) {
                lVar26 = *(long *)(puVar27 + 8);
                uVar20 = uVar29;
                do {
                  uVar20 = uVar20 + (uVar20 >> 1) + 0x10;
                    /* try { // try from 01068e0c to 01168e0f has its CatchHandler @ 01068f60 */
                } while (uVar20 < uVar4 + 3);
                    /* try { // try from 01068e14 to 01168e2f has its CatchHandler @ 01068f7c */
                    /* try { // try from 01068e30 to 01168f57 has its CatchHandler @ 01068c0c */
                lVar19 = ft_mem_realloc(lVar26,0x10,uVar29,uVar20,*(long *)(puVar27 + 2),&local_64);
                *(long *)(puVar27 + 2) = lVar19;
                uVar11 = (ulong)local_64;
                if (local_64 != 0) goto LAB_01068f08;
                lVar26 = ft_mem_realloc(lVar26,1,uVar29,uVar20,*(long *)puVar30,&local_64);
                *(long *)puVar30 = lVar26;
                uVar11 = (ulong)local_64;
                if (local_64 != 0) goto LAB_01068f08;
                puVar27[1] = uVar20;
                uVar20 = *puVar27;
              }
              else {
                lVar26 = *(long *)puVar30;
              }
              puVar6 = (ulong *)(*(long *)(puVar27 + 2) + (ulong)uVar20 * 0x10);
              puVar6[1] = uStack_2a8;
              *puVar6 = local_2b0;
              *(undefined1 *)(lVar26 + (ulong)uVar20) = 1;
              uVar20 = *puVar27 + 1;
              goto LAB_01068ea8;
            }
                    /* try { // try from 01068da4 to 01168dab has its CatchHandler @ 01068fb0 */
            if ((2 < (*(long *)(*(long *)(puVar27 + 2) + (ulong)(uVar4 + 1) * 0x10) + 1) - local_2b0
                ) || (2 < (*(long *)(*(long *)(puVar27 + 2) + (ulong)(uVar4 + 1) * 0x10 + 8) + 1) -
                          uStack_2a8)) goto LAB_01068de8;
          }
          puVar27 = puVar27 + 0xc;
          bVar1 = lVar25 < 1;
          lVar25 = lVar25 + 1;
        } while (bVar1);
        bVar1 = false;
        lVar23 = lVar24 + -2;
        *param_1 = lVar12;
        puVar31 = puVar22;
      } while (1 < lVar24);
LAB_01068f10:
      uVar11 = 0;
      uVar13 = *param_3;
      param_1[3] = param_3[1];
      *puVar21 = uVar13;
    }
  }
  return uVar11;
}

