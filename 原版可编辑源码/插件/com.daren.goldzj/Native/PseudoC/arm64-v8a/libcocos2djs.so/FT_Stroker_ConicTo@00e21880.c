
/* WARNING: Type propagation algorithm not settling */

ulong FT_Stroker_ConicTo(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *plVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  uint *puVar29;
  undefined8 local_310;
  long *local_308;
  long *local_2d8;
  long local_2d0;
  long lStack_2c8;
  ulong local_2c0;
  long lStack_2b8;
  ulong local_2b0;
  ulong uStack_2a8;
  long local_2a0 [68];
  long local_80;
  long lStack_78;
  uint local_6c [3];
  
  uVar10 = 6;
  if (((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) && (param_3 != (long *)0x0)) {
    plVar20 = param_1 + 2;
    if ((((ulong)((*plVar20 + 1) - *param_2) < 3) && ((ulong)((param_1[3] + 1) - param_2[1]) < 3))
       && (((ulong)((*param_2 + 1) - *param_3) < 3 && ((ulong)((param_2[1] + 1) - param_3[1]) < 3)))
       ) {
      lVar24 = *param_3;
      uVar10 = 0;
      param_1[3] = param_3[1];
      *plVar20 = lVar24;
    }
    else {
      lVar24 = 0;
      local_2a0[1] = param_3[1];
      local_2a0[0] = *param_3;
      local_2d8 = local_2a0;
      local_2a0[3] = param_2[1];
      local_2a0[2] = *param_2;
      bVar6 = true;
      local_2a0[5] = param_1[3];
      local_2a0[4] = *plVar20;
      do {
        lVar27 = *param_1;
        lVar11 = lVar27;
        if (lVar24 < 0x1e) {
          lVar14 = lVar24 * 2;
          lVar25 = local_2a0[lVar24 * 2 + 1] - local_2d8[3];
          lVar28 = *local_2d8 - local_2d8[2];
          bVar7 = 2 < lVar28 + 1U;
          bVar8 = 2 < lVar25 + 1U;
          if (((local_2d8[2] - local_2d8[4]) + 1U < 3) && ((local_2d8[3] - local_2d8[5]) + 1U < 3))
          {
            if (bVar7 || bVar8) {
              lVar27 = FT_Atan2(lVar28,lVar25);
              lVar11 = lVar27;
            }
          }
          else {
            lVar11 = FT_Atan2();
            lVar27 = lVar11;
            if (bVar7 || bVar8) {
              lVar27 = FT_Atan2(lVar28,lVar25);
            }
          }
          lVar28 = FT_Angle_Diff(lVar11,lVar27);
          lVar25 = -lVar28;
          if (-1 < lVar28) {
            lVar25 = lVar28;
          }
          if (lVar25 < 0x1e0000) {
            if (!bVar6) goto LAB_00e21bec;
LAB_00e21a20:
            if ((char)param_1[5] != '\0') {
              FT_Vector_From_Polar
                        (&local_80,param_1[0xd],
                         "_ZN2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE"
                         + lVar11 + 2);
              lVar25 = lStack_78;
              lVar14 = local_80;
              lVar13 = param_1[3];
              lVar28 = param_1[2];
              uVar9 = *(uint *)((long)param_1 + 0x8c);
              uVar10 = (ulong)uVar9;
              if (-1 < (int)uVar9) {
                uVar2 = *(uint *)(param_1 + 0xe);
                if (uVar9 + 1 < uVar2) {
                  uVar9 = uVar2 - 1;
                  *(uint *)(param_1 + 0xe) = uVar9;
                  puVar3 = (undefined8 *)(param_1[0xf] + (ulong)uVar9 * 0x10);
                  uVar15 = *puVar3;
                  puVar5 = (undefined8 *)(param_1[0xf] + uVar10 * 0x10);
                  puVar5[1] = puVar3[1];
                  *puVar5 = uVar15;
                  *(undefined1 *)(param_1[0x10] + uVar10) =
                       *(undefined1 *)(param_1[0x10] + (ulong)uVar9);
                  *(byte *)(param_1[0x10] + uVar10) = *(byte *)(param_1[0x10] + uVar10) | 4;
                  *(byte *)(param_1[0x10] + (ulong)(uVar2 - 2)) =
                       *(byte *)(param_1[0x10] + (ulong)(uVar2 - 2)) | 8;
                }
                else {
                  *(uint *)(param_1 + 0xe) = uVar9;
                }
                *(undefined4 *)((long)param_1 + 0x8c) = 0xffffffff;
                *(undefined1 *)(param_1 + 0x11) = 0;
              }
              uVar9 = *(uint *)(param_1 + 0xe);
              uVar2 = *(uint *)((long)param_1 + 0x74);
              *(undefined1 *)(param_1 + 0x11) = 0;
              *(uint *)((long)param_1 + 0x8c) = uVar9;
              local_2b0 = local_2b0 & 0xffffffff00000000;
              if (uVar2 < uVar9 + 1) {
                lVar26 = param_1[0x12];
                uVar21 = uVar2;
                do {
                  uVar21 = uVar21 + (uVar21 >> 1) + 0x10;
                } while (uVar21 < uVar9 + 1);
                lVar16 = FUN_00e13bcc(lVar26,0x10,uVar2,uVar21,param_1[0xf],&local_2b0);
                param_1[0xf] = lVar16;
                if ((uint)local_2b0 == 0) {
                  lVar26 = FUN_00e13bcc(lVar26,1,uVar2,uVar21,param_1[0x10],&local_2b0);
                  param_1[0x10] = lVar26;
                  if ((uint)local_2b0 == 0) {
                    *(uint *)((long)param_1 + 0x74) = uVar21;
                    uVar9 = *(uint *)(param_1 + 0xe);
                    goto LAB_00e21d20;
                  }
                }
                uVar10 = (ulong)(uint)local_2b0;
                *(undefined1 *)(param_1 + 0x11) = 0;
                uVar9 = (uint)local_2b0;
                goto joined_r0x00e21d14;
              }
              lVar26 = param_1[0x10];
LAB_00e21d20:
              lVar17 = lStack_78;
              lVar16 = local_80;
              plVar1 = (long *)(param_1[0xf] + (ulong)uVar9 * 0x10);
              plVar1[1] = lVar25 + lVar13;
              *plVar1 = lVar14 + lVar28;
              *(undefined1 *)(lVar26 + (ulong)uVar9) = 1;
              lVar25 = param_1[3];
              lVar14 = param_1[2];
              *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
              uVar9 = *(uint *)((long)param_1 + 0xbc);
              uVar10 = (ulong)uVar9;
              *(undefined1 *)(param_1 + 0x11) = 0;
              if (-1 < (int)uVar9) {
                uVar2 = *(uint *)(param_1 + 0x14);
                if (uVar9 + 1 < uVar2) {
                  uVar9 = uVar2 - 1;
                  *(uint *)(param_1 + 0x14) = uVar9;
                  puVar3 = (undefined8 *)(param_1[0x15] + (ulong)uVar9 * 0x10);
                  uVar15 = *puVar3;
                  puVar5 = (undefined8 *)(param_1[0x15] + uVar10 * 0x10);
                  puVar5[1] = puVar3[1];
                  *puVar5 = uVar15;
                  *(undefined1 *)(param_1[0x16] + uVar10) =
                       *(undefined1 *)(param_1[0x16] + (ulong)uVar9);
                  *(byte *)(param_1[0x16] + uVar10) = *(byte *)(param_1[0x16] + uVar10) | 4;
                  *(byte *)(param_1[0x16] + (ulong)(uVar2 - 2)) =
                       *(byte *)(param_1[0x16] + (ulong)(uVar2 - 2)) | 8;
                }
                else {
                  *(uint *)(param_1 + 0x14) = uVar9;
                }
                *(undefined4 *)((long)param_1 + 0xbc) = 0xffffffff;
                *(undefined1 *)(param_1 + 0x17) = 0;
              }
              uVar9 = *(uint *)(param_1 + 0x14);
              uVar2 = *(uint *)((long)param_1 + 0xa4);
              *(undefined1 *)(param_1 + 0x17) = 0;
              *(uint *)((long)param_1 + 0xbc) = uVar9;
              local_2b0 = local_2b0 & 0xffffffff00000000;
              if (uVar2 < uVar9 + 1) {
                lVar28 = param_1[0x18];
                uVar21 = uVar2;
                do {
                  uVar21 = uVar21 + (uVar21 >> 1) + 0x10;
                } while (uVar21 < uVar9 + 1);
                lVar13 = FUN_00e13bcc(lVar28,0x10,uVar2,uVar21,param_1[0x15],&local_2b0);
                param_1[0x15] = lVar13;
                if ((uint)local_2b0 == 0) {
                  lVar28 = FUN_00e13bcc(lVar28,1,uVar2,uVar21,param_1[0x16],&local_2b0);
                  param_1[0x16] = lVar28;
                  if ((uint)local_2b0 == 0) {
                    *(uint *)((long)param_1 + 0xa4) = uVar21;
                    uVar9 = *(uint *)(param_1 + 0x14);
                    goto LAB_00e21e5c;
                  }
                }
                uVar10 = (ulong)(uint)local_2b0;
              }
              else {
                lVar28 = param_1[0x16];
LAB_00e21e5c:
                uVar10 = 0;
                plVar1 = (long *)(param_1[0x15] + (ulong)uVar9 * 0x10);
                plVar1[1] = lVar25 - lVar17;
                *plVar1 = lVar14 - lVar16;
                *(undefined1 *)(lVar28 + (ulong)uVar9) = 1;
                *(int *)(param_1 + 0x14) = (int)param_1[0x14] + 1;
              }
              *(undefined1 *)(param_1 + 0x17) = 0;
              param_1[6] = lVar11;
              *(undefined1 *)(param_1 + 5) = 0;
              param_1[9] = 0;
              uVar9 = (uint)uVar10;
              goto joined_r0x00e21d14;
            }
            param_1[1] = lVar11;
            uVar10 = FT_Angle_Diff(*param_1,lVar11);
            if (uVar10 != 0) {
              uVar12 = FUN_00e24060(param_1,uVar10 >> 0x3f,0);
              if ((int)uVar12 != 0) {
                return uVar12;
              }
              uVar10 = FUN_00e24338(param_1,(uint)(uVar10 >> 0x3f) ^ 1,0);
              uVar9 = (uint)uVar10;
              goto joined_r0x00e21d14;
            }
            goto LAB_00e21e9c;
          }
          if ((char)param_1[5] != '\0') {
            *param_1 = lVar11;
          }
          lVar24 = lVar24 + 2;
          local_2d8[8] = local_2d8[4];
          local_2d8[9] = local_2d8[5];
          lVar27 = local_2d8[2] + local_2d8[4];
          lVar11 = *local_2d8 + local_2d8[2];
          if (lVar27 < 0) {
            lVar27 = lVar27 + 1;
          }
          if (lVar11 < 0) {
            lVar11 = lVar11 + 1;
          }
          local_2d8[2] = lVar11 >> 1;
          lVar11 = (lVar11 >> 1) + (lVar27 >> 1);
          if (lVar11 < 0) {
            lVar11 = lVar11 + 1;
          }
          local_2d8[4] = lVar11 >> 1;
          lVar11 = local_2d8[3] + local_2d8[5];
          if (lVar11 < 0) {
            lVar11 = lVar11 + 1;
          }
          local_2d8[6] = lVar27 >> 1;
          local_2d8[7] = lVar11 >> 1;
          lVar27 = *(long *)((ulong)(local_2a0 + lVar14) | 8) + local_2d8[3];
          if (lVar27 < 0) {
            lVar27 = lVar27 + 1;
          }
          local_2d8[3] = lVar27 >> 1;
          lVar27 = (lVar27 >> 1) + (lVar11 >> 1);
          if (lVar27 < 0) {
            lVar27 = lVar27 + 1;
          }
          local_2d8[5] = lVar27 >> 1;
          local_2d8 = local_2a0 + lVar24 * 2;
        }
        else {
          if (bVar6) goto LAB_00e21a20;
LAB_00e21bec:
          lVar25 = FT_Angle_Diff(*param_1,lVar11);
          lVar14 = -lVar25;
          if (-1 < lVar25) {
            lVar14 = lVar25;
          }
          if (lVar14 < 0x78001) goto LAB_00e21e9c;
          lVar14 = local_2d8[4];
          param_1[3] = local_2d8[5];
          *plVar20 = lVar14;
          param_1[1] = lVar11;
          *(undefined4 *)(param_1 + 0xb) = 0;
          uVar12 = FT_Angle_Diff(*param_1,lVar11);
          uVar10 = 0;
          if ((uVar12 != 0) && (uVar10 = FUN_00e24060(param_1,uVar12 >> 0x3f,0), (int)uVar10 == 0))
          {
            uVar10 = FUN_00e24338(param_1,(uint)(uVar12 >> 0x3f) ^ 1,0);
          }
          *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((long)param_1 + 0x5c);
          uVar9 = (uint)uVar10;
joined_r0x00e21d14:
          if (uVar9 != 0) {
            return uVar10;
          }
LAB_00e21e9c:
          lVar14 = FT_Angle_Diff(lVar11,lVar27);
          lVar25 = param_1[0xd];
          if (lVar14 < 0) {
            lVar14 = lVar14 + 1;
          }
          uVar15 = FT_Cos(lVar14 >> 1);
          uVar15 = FT_DivFix(lVar25,uVar15);
          if ((char)param_1[10] == '\0') {
            local_310 = 0;
          }
          else {
            local_310 = FT_Atan2(*local_2d8 - local_2d8[4],local_2a0[lVar24 * 2 + 1] - local_2d8[5])
            ;
          }
          local_308 = (long *)((ulong)(local_2a0 + lVar24 * 2) | 8);
          uVar10 = 0;
          puVar22 = (uint *)(param_1 + 0xe);
          do {
            while( true ) {
              lVar25 = uVar10 * -0xb40000 + 2;
              FT_Vector_From_Polar
                        (&local_80,uVar15,
                         "_ZN2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE"
                         + (lVar14 >> 1) + lVar11 + lVar25);
              local_80 = local_80 + local_2d8[2];
              lStack_78 = lStack_78 + local_2d8[3];
              FT_Vector_From_Polar
                        (&local_2b0,param_1[0xd],
                         "_ZN2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE"
                         + lVar27 + lVar25);
              local_2b0 = local_2b0 + *local_2d8;
              lVar25 = *local_308;
              uStack_2a8 = uStack_2a8 + lVar25;
              if ((char)param_1[10] != '\0') break;
LAB_00e220d4:
              uVar9 = *puVar22;
              uVar2 = puVar22[1];
              local_2c0 = local_2c0 & 0xffffffff00000000;
              if (uVar2 < uVar9 + 2) {
                uVar18 = *(undefined8 *)(puVar22 + 8);
                uVar21 = uVar2;
                do {
                  uVar21 = uVar21 + (uVar21 >> 1) + 0x10;
                } while (uVar21 < uVar9 + 2);
                uVar19 = FUN_00e13bcc(uVar18,0x10,uVar2,uVar21,*(undefined8 *)(puVar22 + 2),
                                      &local_2c0);
                *(undefined8 *)(puVar22 + 2) = uVar19;
                uVar12 = local_2c0 & 0xffffffff;
                if ((int)local_2c0 != 0) {
LAB_00e225b0:
                  *(undefined1 *)(puVar22 + 6) = 0;
                  return uVar12;
                }
                lVar25 = FUN_00e13bcc(uVar18,1,uVar2,uVar21,*(undefined8 *)(puVar22 + 4),&local_2c0)
                ;
                *(long *)(puVar22 + 4) = lVar25;
                uVar12 = local_2c0 & 0xffffffff;
                if ((int)local_2c0 != 0) goto LAB_00e225b0;
                uVar9 = *puVar22;
                puVar22[1] = uVar21;
              }
              else {
                lVar25 = *(long *)(puVar22 + 4);
              }
              plVar1 = (long *)(*(long *)(puVar22 + 2) + (ulong)uVar9 * 0x10);
              plVar1[1] = lStack_78;
              *plVar1 = local_80;
              plVar1[3] = uStack_2a8;
              plVar1[2] = local_2b0;
              *(undefined2 *)(lVar25 + (ulong)uVar9) = 0x100;
              *(undefined1 *)(puVar22 + 6) = 0;
              *puVar22 = *puVar22 + 2;
              uVar10 = uVar10 + 1;
              puVar22 = puVar22 + 0xc;
              if (1 < uVar10) goto LAB_00e22578;
            }
            plVar1 = (long *)(*(long *)(puVar22 + 2) + (ulong)(*puVar22 - 1) * 0x10);
            lVar13 = *plVar1;
            lVar26 = plVar1[1];
            lVar16 = FT_Atan2(local_2b0 - lVar13,uStack_2a8 - lVar26);
            lVar17 = FT_Angle_Diff(local_310,lVar16);
            lVar28 = -lVar17;
            if (-1 < lVar17) {
              lVar28 = lVar17;
            }
            if (lVar28 < 0x5a0001) goto LAB_00e220d4;
            lVar28 = FT_Atan2(local_2d8[4] - lVar13,local_2d8[5] - lVar26);
            lVar17 = FT_Atan2(*local_2d8 - local_2b0,lVar25 - uStack_2a8);
            local_2c0 = local_2b0 - lVar13;
            lStack_2b8 = uStack_2a8 - lVar26;
            uVar18 = FT_Vector_Length(&local_2c0);
            lVar16 = FT_Sin(lVar16 - lVar17);
            lVar25 = -lVar16;
            if (-1 < lVar16) {
              lVar25 = lVar16;
            }
            lVar17 = FT_Sin(lVar28 - lVar17);
            lVar16 = -lVar17;
            if (-1 < lVar17) {
              lVar16 = lVar17;
            }
            uVar18 = FT_MulDiv(uVar18,lVar25,lVar16);
            FT_Vector_From_Polar(&local_2d0,uVar18,lVar28);
            local_2d0 = local_2d0 + lVar13;
            lStack_2c8 = lStack_2c8 + lVar26;
            uVar9 = *puVar22;
            *(undefined1 *)(puVar22 + 6) = 0;
            if (puVar22[7] < uVar9) {
              if ((2 < (ulong)((1 - local_2d0) +
                              *(long *)(*(long *)(puVar22 + 2) + (ulong)(uVar9 - 1) * 0x10))) ||
                 (2 < (ulong)((1 - lStack_2c8) +
                             *(long *)(*(long *)(puVar22 + 2) + (ulong)(uVar9 - 1) * 0x10 + 8))))
              goto LAB_00e221b8;
              if (puVar22[7] < uVar9) goto LAB_00e22284;
LAB_00e222c4:
              uVar2 = puVar22[1];
              local_6c[0] = 0;
              if (uVar2 < uVar9 + 1) {
                uVar18 = *(undefined8 *)(puVar22 + 8);
                uVar21 = uVar2;
                do {
                  uVar21 = uVar21 + (uVar21 >> 1) + 0x10;
                } while (uVar21 < uVar9 + 1);
                uVar19 = FUN_00e13bcc(uVar18,0x10,uVar2,uVar21,*(undefined8 *)(puVar22 + 2),local_6c
                                     );
                *(undefined8 *)(puVar22 + 2) = uVar19;
                uVar12 = (ulong)local_6c[0];
                if (local_6c[0] != 0) goto LAB_00e225b0;
                lVar25 = FUN_00e13bcc(uVar18,1,uVar2,uVar21,*(undefined8 *)(puVar22 + 4),local_6c);
                *(long *)(puVar22 + 4) = lVar25;
                uVar12 = (ulong)local_6c[0];
                if (local_6c[0] != 0) goto LAB_00e225b0;
                uVar9 = *puVar22;
                puVar22[1] = uVar21;
              }
              else {
                lVar25 = *(long *)(puVar22 + 4);
              }
              puVar4 = (ulong *)(*(long *)(puVar22 + 2) + (ulong)uVar9 * 0x10);
              puVar4[1] = uStack_2a8;
              *puVar4 = local_2b0;
              *(undefined1 *)(lVar25 + (ulong)uVar9) = 1;
              *(undefined1 *)(puVar22 + 6) = 0;
              uVar9 = *puVar22 + 1;
              *puVar22 = uVar9;
            }
            else {
LAB_00e221b8:
              uVar2 = puVar22[1];
              local_6c[0] = 0;
              if (uVar2 < uVar9 + 1) {
                uVar18 = *(undefined8 *)(puVar22 + 8);
                uVar21 = uVar2;
                do {
                  uVar21 = uVar21 + (uVar21 >> 1) + 0x10;
                } while (uVar21 < uVar9 + 1);
                uVar19 = FUN_00e13bcc(uVar18,0x10,uVar2,uVar21,*(undefined8 *)(puVar22 + 2),local_6c
                                     );
                *(undefined8 *)(puVar22 + 2) = uVar19;
                uVar12 = (ulong)local_6c[0];
                if (local_6c[0] != 0) goto LAB_00e225b0;
                lVar25 = FUN_00e13bcc(uVar18,1,uVar2,uVar21,*(undefined8 *)(puVar22 + 4),local_6c);
                *(long *)(puVar22 + 4) = lVar25;
                uVar12 = (ulong)local_6c[0];
                if (local_6c[0] != 0) goto LAB_00e225b0;
                uVar9 = *puVar22;
                puVar22[1] = uVar21;
              }
              else {
                lVar25 = *(long *)(puVar22 + 4);
              }
              plVar1 = (long *)(*(long *)(puVar22 + 2) + (ulong)uVar9 * 0x10);
              plVar1[1] = lStack_2c8;
              *plVar1 = local_2d0;
              *(undefined1 *)(lVar25 + (ulong)uVar9) = 1;
              *(undefined1 *)(puVar22 + 6) = 0;
              uVar9 = *puVar22 + 1;
              *puVar22 = uVar9;
              if (uVar9 <= puVar22[7]) goto LAB_00e222c4;
LAB_00e22284:
              if ((2 < (*(long *)(*(long *)(puVar22 + 2) + (ulong)(uVar9 - 1) * 0x10) + 1) -
                       local_2b0) ||
                 (2 < (*(long *)(*(long *)(puVar22 + 2) + (ulong)(uVar9 - 1) * 0x10 + 8) + 1) -
                      uStack_2a8)) goto LAB_00e222c4;
            }
            uVar2 = puVar22[1];
            local_6c[0] = 0;
            if (uVar2 < uVar9 + 2) {
              uVar18 = *(undefined8 *)(puVar22 + 8);
              uVar21 = uVar2;
              do {
                uVar21 = uVar21 + (uVar21 >> 1) + 0x10;
              } while (uVar21 < uVar9 + 2);
              uVar19 = FUN_00e13bcc(uVar18,0x10,uVar2,uVar21,*(undefined8 *)(puVar22 + 2),local_6c);
              *(undefined8 *)(puVar22 + 2) = uVar19;
              uVar12 = (ulong)local_6c[0];
              if (local_6c[0] != 0) goto LAB_00e225b0;
              lVar25 = FUN_00e13bcc(uVar18,1,uVar2,uVar21,*(undefined8 *)(puVar22 + 4),local_6c);
              *(long *)(puVar22 + 4) = lVar25;
              uVar12 = (ulong)local_6c[0];
              if (local_6c[0] != 0) goto LAB_00e225b0;
              uVar9 = *puVar22;
              puVar22[1] = uVar21;
            }
            else {
              lVar25 = *(long *)(puVar22 + 4);
            }
            puVar29 = puVar22 + 4;
            plVar1 = (long *)(*(long *)(puVar22 + 2) + (ulong)uVar9 * 0x10);
            plVar1[1] = lStack_78;
            *plVar1 = local_80;
            plVar1[2] = lVar13;
            plVar1[3] = lVar26;
            *(undefined2 *)(lVar25 + (ulong)uVar9) = 0x100;
            uVar2 = *puVar22;
            *(undefined1 *)(puVar22 + 6) = 0;
            uVar9 = uVar2 + 2;
            *puVar22 = uVar9;
            if (puVar22[7] < uVar9) {
              if ((2 < (*(long *)(*(long *)(puVar22 + 2) + (ulong)(uVar2 + 1) * 0x10) + 1) -
                       local_2b0) ||
                 (2 < (*(long *)(*(long *)(puVar22 + 2) + (ulong)(uVar2 + 1) * 0x10 + 8) + 1) -
                      uStack_2a8)) goto LAB_00e224a4;
            }
            else {
LAB_00e224a4:
              uVar21 = puVar22[1];
              local_6c[0] = 0;
              if (uVar21 < uVar2 + 3) {
                uVar18 = *(undefined8 *)(puVar22 + 8);
                uVar23 = uVar21;
                do {
                  uVar23 = uVar23 + (uVar23 >> 1) + 0x10;
                } while (uVar23 < uVar2 + 3);
                uVar19 = FUN_00e13bcc(uVar18,0x10,uVar21,uVar23,*(undefined8 *)(puVar22 + 2),
                                      local_6c);
                *(undefined8 *)(puVar22 + 2) = uVar19;
                uVar12 = (ulong)local_6c[0];
                if (local_6c[0] != 0) goto LAB_00e225b0;
                lVar25 = FUN_00e13bcc(uVar18,1,uVar21,uVar23,*(undefined8 *)puVar29,local_6c);
                *(long *)puVar29 = lVar25;
                uVar12 = (ulong)local_6c[0];
                if (local_6c[0] != 0) goto LAB_00e225b0;
                uVar9 = *puVar22;
                puVar22[1] = uVar23;
              }
              else {
                lVar25 = *(long *)puVar29;
              }
              puVar4 = (ulong *)(*(long *)(puVar22 + 2) + (ulong)uVar9 * 0x10);
              puVar4[1] = uStack_2a8;
              *puVar4 = local_2b0;
              *(undefined1 *)(lVar25 + (ulong)uVar9) = 1;
              *(undefined1 *)(puVar22 + 6) = 0;
              *puVar22 = *puVar22 + 1;
            }
            uVar10 = uVar10 + 1;
            puVar22 = puVar22 + 0xc;
          } while (uVar10 < 2);
LAB_00e22578:
          bVar6 = false;
          *param_1 = lVar27;
          lVar24 = lVar24 + -2;
          local_2d8 = local_2a0 + lVar24 * 2;
        }
      } while (-1 < lVar24);
      uVar10 = 0;
      lVar24 = *param_3;
      param_1[3] = param_3[1];
      *plVar20 = lVar24;
    }
  }
  return uVar10;
}

