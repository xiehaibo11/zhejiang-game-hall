
/* WARNING: Removing unreachable block (ram,0x00e2357c) */

int FT_Stroker_CubicTo(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  bool bVar7;
  char *pcVar8;
  ulong uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  uint uVar24;
  long *plVar25;
  ulong uVar26;
  long lVar27;
  uint uVar28;
  uint uVar29;
  uint *puVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  uint *puVar35;
  long lVar36;
  undefined8 local_368;
  long *local_330;
  long *local_318;
  long local_310;
  long lStack_308;
  ulong local_300;
  long lStack_2f8;
  ulong local_2f0;
  ulong uStack_2e8;
  ulong local_2e0;
  ulong uStack_2d8;
  long local_2d0 [74];
  ulong local_80;
  ulong uStack_78;
  int local_6c [3];
  
  if ((((param_1 == (long *)0x0) || (param_2 == (long *)0x0)) || (param_3 == (long *)0x0)) ||
     (param_4 == (long *)0x0)) {
    return 6;
  }
  plVar25 = param_1 + 2;
  if ((((2 < (ulong)((*plVar25 + 1) - *param_2)) || (2 < (ulong)((param_1[3] + 1) - param_2[1]))) ||
      ((2 < (ulong)((*param_2 + 1) - *param_3) ||
       ((2 < (ulong)((param_2[1] + 1) - param_3[1]) || (2 < (ulong)((*param_3 + 1) - *param_4)))))))
     || (2 < (ulong)((param_3[1] + 1) - param_4[1]))) {
    lVar27 = 0;
    local_2d0[1] = param_4[1];
    local_2d0[0] = *param_4;
    bVar7 = true;
    local_2d0[3] = param_3[1];
    local_2d0[2] = *param_3;
    local_2d0[5] = param_2[1];
    local_2d0[4] = *param_2;
    local_318 = local_2d0;
    local_2d0[7] = param_1[3];
    local_2d0[6] = *plVar25;
    do {
      iVar14 = 0;
      lVar36 = *param_1;
      lVar15 = lVar36;
      lVar16 = lVar36;
      if (lVar27 < 0x20) {
        lVar18 = lVar27 * 2;
        lVar34 = local_318[2] - local_318[4];
        lVar31 = local_318[3] - local_318[5];
        lVar33 = *local_318 - local_318[2];
        bVar10 = 2 < lVar34 + 1U;
        lVar32 = local_2d0[lVar27 * 2 + 1] - local_318[3];
        bVar11 = 2 < lVar31 + 1U;
        bVar12 = 2 < lVar33 + 1U;
        bVar13 = 2 < lVar32 + 1U;
        if (((local_318[4] - local_318[6]) + 1U < 3) && ((local_318[5] - local_318[7]) + 1U < 3)) {
          if (bVar10 || bVar11) {
            lVar15 = FT_Atan2(lVar34,lVar31);
            lVar36 = lVar15;
            lVar16 = lVar15;
            if (bVar12 || bVar13) {
              lVar36 = FT_Atan2(lVar33,lVar32);
            }
          }
          else if (bVar12 || bVar13) {
            lVar15 = FT_Atan2(lVar33,lVar32);
            lVar36 = lVar15;
            lVar16 = lVar15;
          }
        }
        else {
          lVar15 = FT_Atan2();
          if (bVar10 || bVar11) {
            lVar16 = FT_Atan2(lVar34,lVar31);
            lVar36 = lVar16;
            if (bVar12 || bVar13) {
              lVar36 = FT_Atan2(lVar33,lVar32);
            }
          }
          else {
            lVar36 = lVar15;
            lVar16 = lVar15;
            if (bVar12 || bVar13) {
              lVar36 = FT_Atan2(lVar33,lVar32);
              lVar16 = FT_Angle_Diff(lVar15,lVar36);
              if (lVar16 < 0) {
                lVar16 = lVar16 + 1;
              }
              lVar16 = lVar15 + (lVar16 >> 1);
            }
          }
        }
        lVar32 = FT_Angle_Diff(lVar15,lVar16);
        lVar31 = -lVar32;
        if (-1 < lVar32) {
          lVar31 = lVar32;
        }
        lVar33 = FT_Angle_Diff(lVar16,lVar36);
        lVar32 = -lVar33;
        if (-1 < lVar33) {
          lVar32 = lVar33;
        }
        if ((lVar31 < 0x168000) && (lVar32 < 0x168000)) {
          if (bVar7) goto LAB_00e22808;
LAB_00e22b20:
          lVar31 = FT_Angle_Diff(*param_1,lVar15);
          lVar18 = -lVar31;
          if (-1 < lVar31) {
            lVar18 = lVar31;
          }
          if (lVar18 < 0x5a001) {
joined_r0x00e22dd8:
            if (iVar14 != 0) {
              return iVar14;
            }
          }
          else {
            lVar18 = local_318[6];
            param_1[3] = local_318[7];
            *plVar25 = lVar18;
            param_1[1] = lVar15;
            *(undefined4 *)(param_1 + 0xb) = 0;
            uVar17 = FT_Angle_Diff(*param_1,lVar15);
            if (uVar17 == 0) {
              iVar14 = 0;
            }
            else {
              iVar14 = FUN_00e24060(param_1,uVar17 >> 0x3f,0);
              if (iVar14 == 0) {
                iVar14 = FUN_00e24338(param_1,(uint)(uVar17 >> 0x3f) ^ 1,0);
                *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((long)param_1 + 0x5c);
                goto joined_r0x00e22dd8;
              }
            }
            *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((long)param_1 + 0x5c);
joined_r0x00e228ec:
            if (iVar14 != 0) {
              return iVar14;
            }
          }
          goto LAB_00e22ddc;
        }
        if ((char)param_1[5] != '\0') {
          *param_1 = lVar15;
        }
        lVar27 = lVar27 + 3;
        lVar36 = *local_318 + local_318[2];
        local_318[0xc] = local_318[6];
        lVar15 = local_318[4] + local_318[6];
        lVar16 = local_318[4] + local_318[2];
        if (lVar36 < 0) {
          lVar36 = lVar36 + 1;
        }
        if (lVar15 < 0) {
          lVar15 = lVar15 + 1;
        }
        if (lVar16 < 0) {
          lVar16 = lVar16 + 1;
        }
        local_318[2] = lVar36 >> 1;
        lVar36 = (lVar36 >> 1) + (lVar16 >> 1);
        local_318[10] = lVar15 >> 1;
        lVar15 = (lVar15 >> 1) + (lVar16 >> 1);
        if (lVar36 < 0) {
          lVar36 = lVar36 + 1;
        }
        if (lVar15 < 0) {
          lVar15 = lVar15 + 1;
        }
        local_318[4] = lVar36 >> 1;
        lVar36 = (lVar36 >> 1) + (lVar15 >> 1);
        if (lVar36 < 0) {
          lVar36 = lVar36 + 1;
        }
        local_318[8] = lVar15 >> 1;
        local_318[0xd] = local_318[7];
        local_318[6] = lVar36 >> 1;
        lVar36 = local_318[5] + local_318[7];
        lVar15 = local_318[5] + local_318[3];
        lVar16 = *(long *)((ulong)(local_2d0 + lVar18) | 8) + local_318[3];
        if (lVar16 < 0) {
          lVar16 = lVar16 + 1;
        }
        if (lVar36 < 0) {
          lVar36 = lVar36 + 1;
        }
        if (lVar15 < 0) {
          lVar15 = lVar15 + 1;
        }
        local_318[3] = lVar16 >> 1;
        lVar16 = (lVar16 >> 1) + (lVar15 >> 1);
        local_318[0xb] = lVar36 >> 1;
        lVar36 = (lVar36 >> 1) + (lVar15 >> 1);
        if (lVar16 < 0) {
          lVar16 = lVar16 + 1;
        }
        if (lVar36 < 0) {
          lVar36 = lVar36 + 1;
        }
        local_318[5] = lVar16 >> 1;
        lVar15 = (lVar16 >> 1) + (lVar36 >> 1);
        if (lVar15 < 0) {
          lVar15 = lVar15 + 1;
        }
        local_318[9] = lVar36 >> 1;
        local_318[7] = lVar15 >> 1;
        local_318 = local_2d0 + lVar27 * 2;
      }
      else {
        if (!bVar7) goto LAB_00e22b20;
LAB_00e22808:
        if ((char)param_1[5] != '\0') {
          FT_Vector_From_Polar
                    (&local_80,param_1[0xd],
                     "_ZN2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE"
                     + lVar15 + 2);
          uVar2 = uStack_78;
          uVar17 = local_80;
          lVar31 = param_1[3];
          lVar18 = param_1[2];
          uVar24 = *(uint *)((long)param_1 + 0x8c);
          uVar26 = (ulong)uVar24;
          if (-1 < (int)uVar24) {
            uVar3 = *(uint *)(param_1 + 0xe);
            if (uVar24 + 1 < uVar3) {
              uVar24 = uVar3 - 1;
              *(uint *)(param_1 + 0xe) = uVar24;
              puVar4 = (undefined8 *)(param_1[0xf] + (ulong)uVar24 * 0x10);
              uVar19 = *puVar4;
              puVar6 = (undefined8 *)(param_1[0xf] + uVar26 * 0x10);
              puVar6[1] = puVar4[1];
              *puVar6 = uVar19;
              *(undefined1 *)(param_1[0x10] + uVar26) =
                   *(undefined1 *)(param_1[0x10] + (ulong)uVar24);
              *(byte *)(param_1[0x10] + uVar26) = *(byte *)(param_1[0x10] + uVar26) | 4;
              *(byte *)(param_1[0x10] + (ulong)(uVar3 - 2)) =
                   *(byte *)(param_1[0x10] + (ulong)(uVar3 - 2)) | 8;
            }
            else {
              *(uint *)(param_1 + 0xe) = uVar24;
            }
            *(undefined4 *)((long)param_1 + 0x8c) = 0xffffffff;
            *(undefined1 *)(param_1 + 0x11) = 0;
          }
          uVar24 = *(uint *)(param_1 + 0xe);
          uVar3 = *(uint *)((long)param_1 + 0x74);
          *(undefined1 *)(param_1 + 0x11) = 0;
          *(uint *)((long)param_1 + 0x8c) = uVar24;
          local_2e0 = local_2e0 & 0xffffffff00000000;
          if (uVar3 < uVar24 + 1) {
            lVar32 = param_1[0x12];
            uVar29 = uVar3;
            do {
              uVar29 = uVar29 + (uVar29 >> 1) + 0x10;
            } while (uVar29 < uVar24 + 1);
            lVar33 = FUN_00e13bcc(lVar32,0x10,uVar3,uVar29,param_1[0xf],&local_2e0);
            param_1[0xf] = lVar33;
            if ((int)local_2e0 == 0) {
              lVar32 = FUN_00e13bcc(lVar32,1,uVar3,uVar29,param_1[0x10],&local_2e0);
              param_1[0x10] = lVar32;
              if ((int)local_2e0 == 0) {
                *(uint *)((long)param_1 + 0x74) = uVar29;
                uVar24 = *(uint *)(param_1 + 0xe);
                goto LAB_00e229e4;
              }
            }
            *(undefined1 *)(param_1 + 0x11) = 0;
            iVar14 = (int)local_2e0;
            goto joined_r0x00e228ec;
          }
          lVar32 = param_1[0x10];
LAB_00e229e4:
          uVar9 = uStack_78;
          uVar26 = local_80;
          plVar5 = (long *)(param_1[0xf] + (ulong)uVar24 * 0x10);
          plVar5[1] = uVar2 + lVar31;
          *plVar5 = uVar17 + lVar18;
          *(undefined1 *)(lVar32 + (ulong)uVar24) = 1;
          lVar31 = param_1[3];
          lVar18 = param_1[2];
          *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
          uVar24 = *(uint *)((long)param_1 + 0xbc);
          uVar17 = (ulong)uVar24;
          *(undefined1 *)(param_1 + 0x11) = 0;
          if (-1 < (int)uVar24) {
            uVar3 = *(uint *)(param_1 + 0x14);
            if (uVar24 + 1 < uVar3) {
              uVar24 = uVar3 - 1;
              *(uint *)(param_1 + 0x14) = uVar24;
              puVar4 = (undefined8 *)(param_1[0x15] + (ulong)uVar24 * 0x10);
              uVar19 = *puVar4;
              puVar6 = (undefined8 *)(param_1[0x15] + uVar17 * 0x10);
              puVar6[1] = puVar4[1];
              *puVar6 = uVar19;
              *(undefined1 *)(param_1[0x16] + uVar17) =
                   *(undefined1 *)(param_1[0x16] + (ulong)uVar24);
              *(byte *)(param_1[0x16] + uVar17) = *(byte *)(param_1[0x16] + uVar17) | 4;
              *(byte *)(param_1[0x16] + (ulong)(uVar3 - 2)) =
                   *(byte *)(param_1[0x16] + (ulong)(uVar3 - 2)) | 8;
            }
            else {
              *(uint *)(param_1 + 0x14) = uVar24;
            }
            *(undefined4 *)((long)param_1 + 0xbc) = 0xffffffff;
            *(undefined1 *)(param_1 + 0x17) = 0;
          }
          uVar24 = *(uint *)(param_1 + 0x14);
          uVar3 = *(uint *)((long)param_1 + 0xa4);
          *(undefined1 *)(param_1 + 0x17) = 0;
          *(uint *)((long)param_1 + 0xbc) = uVar24;
          local_2e0 = local_2e0 & 0xffffffff00000000;
          if (uVar3 < uVar24 + 1) {
            lVar32 = param_1[0x18];
            uVar29 = uVar3;
            do {
              uVar29 = uVar29 + (uVar29 >> 1) + 0x10;
            } while (uVar29 < uVar24 + 1);
            lVar33 = FUN_00e13bcc(lVar32,0x10,uVar3,uVar29,param_1[0x15],&local_2e0);
            param_1[0x15] = lVar33;
            iVar14 = (int)local_2e0;
            if ((int)local_2e0 == 0) {
              lVar32 = FUN_00e13bcc(lVar32,1,uVar3,uVar29,param_1[0x16],&local_2e0);
              param_1[0x16] = lVar32;
              iVar14 = (int)local_2e0;
              if ((int)local_2e0 == 0) {
                *(uint *)((long)param_1 + 0xa4) = uVar29;
                uVar24 = *(uint *)(param_1 + 0x14);
                goto LAB_00e22da0;
              }
            }
          }
          else {
            lVar32 = param_1[0x16];
LAB_00e22da0:
            plVar5 = (long *)(param_1[0x15] + (ulong)uVar24 * 0x10);
            plVar5[1] = lVar31 - uVar9;
            *plVar5 = lVar18 - uVar26;
            *(undefined1 *)(lVar32 + (ulong)uVar24) = 1;
            *(int *)(param_1 + 0x14) = (int)param_1[0x14] + 1;
            iVar14 = 0;
          }
          *(undefined1 *)(param_1 + 0x17) = 0;
          param_1[6] = lVar15;
          *(undefined1 *)(param_1 + 5) = 0;
          param_1[9] = 0;
          goto joined_r0x00e22dd8;
        }
        param_1[1] = lVar15;
        uVar17 = FT_Angle_Diff(*param_1,lVar15);
        if (uVar17 != 0) {
          iVar14 = FUN_00e24060(param_1,uVar17 >> 0x3f,0);
          if (iVar14 != 0) {
            return iVar14;
          }
          iVar14 = FUN_00e24338(param_1,(uint)(uVar17 >> 0x3f) ^ 1,0);
          goto joined_r0x00e228ec;
        }
LAB_00e22ddc:
        lVar18 = FT_Angle_Diff(lVar15,lVar16);
        if (lVar18 < 0) {
          lVar18 = lVar18 + 1;
        }
        lVar31 = FT_Angle_Diff(lVar16,lVar36);
        if (lVar31 < 0) {
          lVar31 = lVar31 + 1;
        }
        lVar32 = FT_Angle_Diff(lVar15,lVar16);
        if (lVar32 < 0) {
          lVar32 = lVar32 + 1;
        }
        lVar33 = FT_Angle_Diff(lVar16,lVar36);
        lVar34 = param_1[0xd];
        if (lVar33 < 0) {
          lVar33 = lVar33 + 1;
        }
        uVar19 = FT_Cos(lVar18 >> 1);
        uVar19 = FT_DivFix(lVar34,uVar19);
        lVar18 = param_1[0xd];
        uVar20 = FT_Cos(lVar31 >> 1);
        uVar20 = FT_DivFix(lVar18,uVar20);
        if ((char)param_1[10] == '\0') {
          local_368 = 0;
          local_330 = local_2d0 + lVar27 * 2;
        }
        else {
          local_330 = local_2d0 + lVar27 * 2;
          local_368 = FT_Atan2(*local_318 - local_318[6],local_2d0[lVar27 * 2 + 1] - local_318[7]);
        }
        local_330 = (long *)((ulong)local_330 | 8);
        uVar17 = 0;
        puVar35 = (uint *)(param_1 + 0xe);
        do {
          while( true ) {
            pcVar8 = 
            "_ZN2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE"
            ;
            lVar18 = uVar17 * -0xb40000 + 2;
            FT_Vector_From_Polar(&local_80,uVar19,pcVar8 + lVar15 + (lVar32 >> 1) + lVar18);
            local_80 = local_80 + local_318[4];
            uStack_78 = uStack_78 + local_318[5];
            FT_Vector_From_Polar(&local_2e0,uVar20,pcVar8 + lVar16 + (lVar33 >> 1) + lVar18);
            local_2e0 = local_2e0 + local_318[2];
            uStack_2d8 = uStack_2d8 + local_318[3];
            FT_Vector_From_Polar(&local_2f0,param_1[0xd],pcVar8 + lVar36 + lVar18);
            local_2f0 = local_2f0 + *local_318;
            uStack_2e8 = uStack_2e8 + *local_330;
            if ((char)param_1[10] != '\0') break;
LAB_00e230c0:
            uVar24 = *puVar35;
            uVar3 = puVar35[1];
            local_300 = local_300 & 0xffffffff00000000;
            if (uVar3 < uVar24 + 3) {
              uVar22 = *(undefined8 *)(puVar35 + 8);
              uVar29 = uVar3;
              do {
                uVar29 = uVar29 + (uVar29 >> 1) + 0x10;
              } while (uVar29 < uVar24 + 3);
              uVar23 = FUN_00e13bcc(uVar22,0x10,uVar3,uVar29,*(undefined8 *)(puVar35 + 2),&local_300
                                   );
              *(undefined8 *)(puVar35 + 2) = uVar23;
              if ((int)local_300 != 0) {
LAB_00e23580:
                *(undefined1 *)(puVar35 + 6) = 0;
                return (int)local_300;
              }
              lVar18 = FUN_00e13bcc(uVar22,1,uVar3,uVar29,*(undefined8 *)(puVar35 + 4),&local_300);
              *(long *)(puVar35 + 4) = lVar18;
              if ((int)local_300 != 0) goto LAB_00e23580;
              uVar24 = *puVar35;
              puVar35[1] = uVar29;
            }
            else {
              lVar18 = *(long *)(puVar35 + 4);
            }
            puVar1 = (ulong *)(*(long *)(puVar35 + 2) + (ulong)uVar24 * 0x10);
            puVar1[1] = uStack_78;
            *puVar1 = local_80;
            puVar1[3] = uStack_2d8;
            puVar1[2] = local_2e0;
            puVar1[5] = uStack_2e8;
            puVar1[4] = local_2f0;
            *(undefined2 *)(lVar18 + (ulong)uVar24) = 0x202;
            *(undefined1 *)((undefined2 *)(lVar18 + (ulong)uVar24) + 1) = 1;
            *(undefined1 *)(puVar35 + 6) = 0;
            *puVar35 = *puVar35 + 3;
            uVar17 = uVar17 + 1;
            puVar35 = puVar35 + 0xc;
            if (1 < uVar17) goto LAB_00e23568;
          }
          puVar1 = (ulong *)(*(long *)(puVar35 + 2) + (ulong)(*puVar35 - 1) * 0x10);
          uVar2 = *puVar1;
          uVar26 = puVar1[1];
          lVar31 = FT_Atan2(local_2f0 - uVar2,uStack_2e8 - uVar26);
          lVar34 = FT_Angle_Diff(local_368,lVar31);
          lVar18 = -lVar34;
          if (-1 < lVar34) {
            lVar18 = lVar34;
          }
          if (lVar18 < 0x5a0001) goto LAB_00e230c0;
          lVar34 = FT_Atan2(local_318[6] - uVar2,local_318[7] - uVar26);
          lVar21 = FT_Atan2(*local_318 - local_2f0,*local_330 - uStack_2e8);
          local_300 = local_2f0 - uVar2;
          lStack_2f8 = uStack_2e8 - uVar26;
          uVar22 = FT_Vector_Length(&local_300);
          lVar31 = FT_Sin(lVar31 - lVar21);
          lVar18 = -lVar31;
          if (-1 < lVar31) {
            lVar18 = lVar31;
          }
          lVar21 = FT_Sin(lVar34 - lVar21);
          lVar31 = -lVar21;
          if (-1 < lVar21) {
            lVar31 = lVar21;
          }
          uVar22 = FT_MulDiv(uVar22,lVar18,lVar31);
          FT_Vector_From_Polar(&local_310,uVar22,lVar34);
          local_310 = local_310 + uVar2;
          lStack_308 = lStack_308 + uVar26;
          uVar24 = *puVar35;
          *(undefined1 *)(puVar35 + 6) = 0;
          if (puVar35[7] < uVar24) {
            if ((2 < (ulong)((1 - local_310) +
                            *(long *)(*(long *)(puVar35 + 2) + (ulong)(uVar24 - 1) * 0x10))) ||
               (2 < (ulong)((1 - lStack_308) +
                           *(long *)(*(long *)(puVar35 + 2) + (ulong)(uVar24 - 1) * 0x10 + 8))))
            goto LAB_00e231ac;
            if (puVar35[7] < uVar24) goto LAB_00e23274;
LAB_00e232b4:
            uVar3 = puVar35[1];
            local_6c[0] = 0;
            if (uVar3 < uVar24 + 1) {
              uVar22 = *(undefined8 *)(puVar35 + 8);
              uVar29 = uVar3;
              do {
                uVar29 = uVar29 + (uVar29 >> 1) + 0x10;
              } while (uVar29 < uVar24 + 1);
              uVar23 = FUN_00e13bcc(uVar22,0x10,uVar3,uVar29,*(undefined8 *)(puVar35 + 2),local_6c);
              *(undefined8 *)(puVar35 + 2) = uVar23;
              if (local_6c[0] != 0) goto LAB_00e235ac;
              lVar18 = FUN_00e13bcc(uVar22,1,uVar3,uVar29,*(undefined8 *)(puVar35 + 4),local_6c);
              *(long *)(puVar35 + 4) = lVar18;
              if (local_6c[0] != 0) goto LAB_00e235ac;
              uVar24 = *puVar35;
              puVar35[1] = uVar29;
            }
            else {
              lVar18 = *(long *)(puVar35 + 4);
            }
            puVar1 = (ulong *)(*(long *)(puVar35 + 2) + (ulong)uVar24 * 0x10);
            puVar1[1] = uStack_2e8;
            *puVar1 = local_2f0;
            *(undefined1 *)(lVar18 + (ulong)uVar24) = 1;
            *(undefined1 *)(puVar35 + 6) = 0;
            uVar24 = *puVar35 + 1;
            *puVar35 = uVar24;
          }
          else {
LAB_00e231ac:
            uVar3 = puVar35[1];
            local_6c[0] = 0;
            if (uVar3 < uVar24 + 1) {
              uVar22 = *(undefined8 *)(puVar35 + 8);
              uVar29 = uVar3;
              do {
                uVar29 = uVar29 + (uVar29 >> 1) + 0x10;
              } while (uVar29 < uVar24 + 1);
              uVar23 = FUN_00e13bcc(uVar22,0x10,uVar3,uVar29,*(undefined8 *)(puVar35 + 2),local_6c);
              *(undefined8 *)(puVar35 + 2) = uVar23;
              if (local_6c[0] != 0) goto LAB_00e235ac;
              lVar18 = FUN_00e13bcc(uVar22,1,uVar3,uVar29,*(undefined8 *)(puVar35 + 4),local_6c);
              *(long *)(puVar35 + 4) = lVar18;
              if (local_6c[0] != 0) goto LAB_00e235ac;
              uVar24 = *puVar35;
              puVar35[1] = uVar29;
            }
            else {
              lVar18 = *(long *)(puVar35 + 4);
            }
            plVar5 = (long *)(*(long *)(puVar35 + 2) + (ulong)uVar24 * 0x10);
            plVar5[1] = lStack_308;
            *plVar5 = local_310;
            *(undefined1 *)(lVar18 + (ulong)uVar24) = 1;
            *(undefined1 *)(puVar35 + 6) = 0;
            uVar24 = *puVar35 + 1;
            *puVar35 = uVar24;
            if (uVar24 <= puVar35[7]) goto LAB_00e232b4;
LAB_00e23274:
            if ((2 < (*(long *)(*(long *)(puVar35 + 2) + (ulong)(uVar24 - 1) * 0x10) + 1) -
                     local_2f0) ||
               (2 < (*(long *)(*(long *)(puVar35 + 2) + (ulong)(uVar24 - 1) * 0x10 + 8) + 1) -
                    uStack_2e8)) goto LAB_00e232b4;
          }
          uVar3 = puVar35[1];
          local_6c[0] = 0;
          if (uVar3 < uVar24 + 3) {
            uVar22 = *(undefined8 *)(puVar35 + 8);
            uVar29 = uVar3;
            do {
              uVar29 = uVar29 + (uVar29 >> 1) + 0x10;
            } while (uVar29 < uVar24 + 3);
            uVar23 = FUN_00e13bcc(uVar22,0x10,uVar3,uVar29,*(undefined8 *)(puVar35 + 2),local_6c);
            *(undefined8 *)(puVar35 + 2) = uVar23;
            if (local_6c[0] != 0) goto LAB_00e235ac;
            lVar18 = FUN_00e13bcc(uVar22,1,uVar3,uVar29,*(undefined8 *)(puVar35 + 4),local_6c);
            *(long *)(puVar35 + 4) = lVar18;
            if (local_6c[0] != 0) goto LAB_00e235ac;
            uVar24 = *puVar35;
            puVar35[1] = uVar29;
          }
          else {
            lVar18 = *(long *)(puVar35 + 4);
          }
          puVar30 = puVar35 + 4;
          puVar1 = (ulong *)(*(long *)(puVar35 + 2) + (ulong)uVar24 * 0x10);
          puVar1[1] = uStack_2d8;
          *puVar1 = local_2e0;
          puVar1[4] = uVar2;
          puVar1[5] = uVar26;
          puVar1[3] = uStack_78;
          puVar1[2] = local_80;
          *(undefined2 *)(lVar18 + (ulong)uVar24) = 0x202;
          *(undefined1 *)((undefined2 *)(lVar18 + (ulong)uVar24) + 1) = 1;
          uVar3 = *puVar35;
          *(undefined1 *)(puVar35 + 6) = 0;
          uVar24 = uVar3 + 3;
          *puVar35 = uVar24;
          if (puVar35[7] < uVar24) {
            if ((2 < (*(long *)(*(long *)(puVar35 + 2) + (ulong)(uVar3 + 2) * 0x10) + 1) - local_2f0
                ) || (2 < (*(long *)(*(long *)(puVar35 + 2) + (ulong)(uVar3 + 2) * 0x10 + 8) + 1) -
                          uStack_2e8)) goto LAB_00e23498;
          }
          else {
LAB_00e23498:
            uVar29 = puVar35[1];
            local_6c[0] = 0;
            if (uVar29 < uVar3 + 4) {
              uVar22 = *(undefined8 *)(puVar35 + 8);
              uVar28 = uVar29;
              do {
                uVar28 = uVar28 + (uVar28 >> 1) + 0x10;
              } while (uVar28 < uVar3 + 4);
              uVar23 = FUN_00e13bcc(uVar22,0x10,uVar29,uVar28,*(undefined8 *)(puVar35 + 2),local_6c)
              ;
              *(undefined8 *)(puVar35 + 2) = uVar23;
              if (local_6c[0] != 0) {
LAB_00e235ac:
                *(undefined1 *)(puVar35 + 6) = 0;
                return local_6c[0];
              }
              lVar18 = FUN_00e13bcc(uVar22,1,uVar29,uVar28,*(undefined8 *)puVar30,local_6c);
              *(long *)puVar30 = lVar18;
              if (local_6c[0] != 0) goto LAB_00e235ac;
              uVar24 = *puVar35;
              puVar35[1] = uVar28;
            }
            else {
              lVar18 = *(long *)puVar30;
            }
            puVar1 = (ulong *)(*(long *)(puVar35 + 2) + (ulong)uVar24 * 0x10);
            puVar1[1] = uStack_2e8;
            *puVar1 = local_2f0;
            *(undefined1 *)(lVar18 + (ulong)uVar24) = 1;
            *(undefined1 *)(puVar35 + 6) = 0;
            *puVar35 = *puVar35 + 1;
          }
          uVar17 = uVar17 + 1;
          puVar35 = puVar35 + 0xc;
        } while (uVar17 < 2);
LAB_00e23568:
        bVar7 = false;
        lVar27 = lVar27 + -3;
        *param_1 = lVar36;
        local_318 = local_2d0 + lVar27 * 2;
      }
    } while (-1 < lVar27);
  }
  lVar27 = *param_4;
  param_1[3] = param_4[1];
  *plVar25 = lVar27;
  return 0;
}

