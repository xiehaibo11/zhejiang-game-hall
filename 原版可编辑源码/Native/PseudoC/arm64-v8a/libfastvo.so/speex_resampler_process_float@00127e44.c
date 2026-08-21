
undefined8
speex_resampler_process_float
          (long param_1,uint param_2,float *param_3,uint *param_4,long param_5,uint *param_6)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  float *pfVar15;
  undefined2 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  uint *puVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  float fVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  byte bVar29;
  byte bVar30;
  byte bVar36;
  float fVar31;
  int iVar32;
  byte bVar38;
  byte bVar41;
  undefined8 uVar33;
  byte bVar37;
  byte bVar39;
  int iVar40;
  byte bVar42;
  ulong uVar34;
  byte bVar43;
  byte bVar44;
  int iVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar51;
  byte bVar52;
  undefined1 auVar35 [16];
  int iVar50;
  byte bVar53;
  byte bVar56;
  int iVar54;
  byte bVar57;
  byte bVar59;
  int iVar58;
  ulong uVar55;
  byte bVar60;
  byte bVar62;
  int iVar61;
  byte bVar63;
  byte bVar65;
  int iVar64;
  long local_160;
  uint *local_158 [3];
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  ulong local_120;
  uint local_114;
  ulong local_110;
  uint local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long local_e0;
  ulong local_d8;
  uint local_cc;
  long local_c8;
  float *local_c0;
  uint local_b4;
  undefined8 local_b0;
  uint local_a8;
  uint local_a4;
  long local_a0;
  
  local_160 = tpidr_el0;
  local_a0 = *(long *)(local_160 + 0x28);
  uVar12 = *(uint *)(param_1 + 0x7c);
  uVar24 = (ulong)uVar12;
  uVar19 = *param_6;
  uVar22 = *param_4;
  local_c8 = (long)*(int *)(param_1 + 0x78);
  uVar5 = uVar19;
  if (0x1fff < uVar19) {
    uVar5 = 0x2000;
  }
  local_110 = (ulong)uVar5;
  lVar9 = -(local_110 * 2 + 0xf & 0x3fffffff0);
  lVar25 = (long)&local_160 + lVar9;
  *(undefined4 *)(param_1 + 0x7c) = 1;
  local_158[0] = param_4;
  local_158[1] = param_6;
  local_cc = param_2;
  if ((uVar19 != 0) && (uVar22 != 0)) {
    lVar20 = (long)(int)uVar12;
    local_d8 = (ulong)param_2;
    local_138 = *(long *)(param_1 + 0x58) + (ulong)(*(int *)(param_1 + 0x1c) * param_2) * 2;
    local_128 = local_c8 << 4;
    local_130 = local_c8 << 2;
    local_158[2] = (uint *)((long)local_158 + lVar9);
    local_114 = (*(int *)(param_1 + 0x1c) + 1) - *(int *)(param_1 + 0x18);
    local_e0 = lVar20 << 5;
    uStack_f8 = 0x46fffc0046fffc00;
    local_100 = 0x46fffc0046fffc00;
    uStack_e8 = 0xc6fffe00c6fffe00;
    uStack_f0 = 0xc6fffe00c6fffe00;
    local_140 = lVar20;
    local_120 = uVar24;
    do {
      local_b0._4_4_ = local_114;
      if (uVar22 <= local_114) {
        local_b0._4_4_ = uVar22;
      }
      local_b0._0_4_ = (uint)local_110;
      if (uVar19 <= (uint)local_110) {
        local_b0._0_4_ = uVar19;
      }
      local_c0 = param_3;
      if (*(int *)(*(long *)(param_1 + 0x50) + local_d8 * 4) == 0) {
        uVar5 = 0;
        lVar9 = lVar25;
LAB_00128150:
        uVar8 = (ulong)local_b0._4_4_;
        if (local_c0 == (float *)0x0) {
          if (local_b0._4_4_ != 0) {
            iVar2 = *(int *)(param_1 + 0x18);
            if (local_b0._4_4_ < 0x10) {
              uVar11 = 0;
            }
            else {
              uVar12 = iVar2 - 1;
              uVar11 = 0;
              if ((!CARRY4(uVar12,(uint)(uVar8 - 1))) && (uVar8 - 1 >> 0x20 == 0)) {
                uVar11 = uVar8 & 0xfffffff0;
                uVar10 = uVar11;
                do {
                  puVar17 = (undefined8 *)(local_138 + (ulong)uVar12 * 2);
                  uVar10 = uVar10 - 0x10;
                  uVar12 = uVar12 + 0x10;
                  puVar17[1] = 0;
                  *puVar17 = 0;
                  puVar17[3] = 0;
                  puVar17[2] = 0;
                } while (uVar10 != 0);
                if (uVar11 == uVar8) goto LAB_00128200;
              }
            }
            do {
              iVar32 = (int)uVar11;
              uVar11 = uVar11 + 1;
              *(undefined2 *)(local_138 + (ulong)(uint)(iVar2 + -1 + iVar32) * 2) = 0;
            } while (uVar11 < uVar8);
          }
        }
        else if (local_b0._4_4_ != 0) {
          iVar2 = *(int *)(param_1 + 0x18);
          if (local_b0._4_4_ < 4) {
            uVar11 = 0;
          }
          else {
            uVar12 = iVar2 - 1;
            uVar11 = 0;
            if ((((int)local_c8 == 1) && (!CARRY4(uVar12,(uint)(uVar8 - 1)))) &&
               (uVar8 - 1 >> 0x20 == 0)) {
              uVar11 = uVar8 & 0xfffffffc;
              uVar10 = uVar11;
              pfVar15 = local_c0;
              do {
                fVar31 = *pfVar15;
                fVar26 = pfVar15[1];
                fVar3 = pfVar15[2];
                fVar4 = pfVar15[3];
                uVar18 = (ulong)uVar12;
                pfVar15 = (float *)((long)pfVar15 + local_128);
                uVar10 = uVar10 - 4;
                iVar32 = -(uint)(fVar31 < (float)uStack_f0);
                iVar40 = -(uint)(fVar26 < (float)((ulong)uStack_f0 >> 0x20));
                iVar45 = -(uint)(fVar3 < (float)uStack_e8);
                iVar50 = -(uint)(fVar4 < (float)((ulong)uStack_e8 >> 0x20));
                iVar54 = -(uint)((float)local_100 < fVar31);
                iVar58 = -(uint)((float)((ulong)local_100 >> 0x20) < fVar26);
                iVar61 = -(uint)((float)uStack_f8 < fVar3);
                iVar64 = -(uint)((float)((ulong)uStack_f8 >> 0x20) < fVar4);
                bVar29 = (byte)iVar32;
                bVar36 = (byte)((uint)iVar32 >> 8);
                bVar38 = (byte)iVar40;
                bVar41 = (byte)((uint)iVar40 >> 8);
                bVar43 = (byte)iVar45;
                bVar46 = (byte)((uint)iVar45 >> 8);
                bVar48 = (byte)iVar50;
                bVar51 = (byte)((uint)iVar50 >> 8);
                bVar53 = (byte)iVar54;
                bVar30 = bVar53 & ~bVar29;
                bVar56 = (byte)((uint)iVar54 >> 8);
                bVar37 = bVar56 & ~bVar36;
                bVar57 = (byte)iVar58;
                bVar39 = bVar57 & ~bVar38;
                bVar59 = (byte)((uint)iVar58 >> 8);
                bVar42 = bVar59 & ~bVar41;
                bVar60 = (byte)iVar61;
                bVar44 = bVar60 & ~bVar43;
                bVar62 = (byte)((uint)iVar61 >> 8);
                bVar47 = bVar62 & ~bVar46;
                bVar63 = (byte)iVar64;
                bVar49 = bVar63 & ~bVar48;
                bVar65 = (byte)((uint)iVar64 >> 8);
                bVar52 = bVar65 & ~bVar51;
                uVar14 = (CONCAT26((short)(int)fVar4,
                                   CONCAT24((short)(int)fVar3,
                                            CONCAT22((short)(int)fVar26,(short)(int)fVar31))) ^
                         0x8000800080008000) &
                         CONCAT26(CONCAT11(~bVar51 & ~bVar65,~bVar48 & ~bVar63),
                                  CONCAT24(CONCAT11(~bVar46 & ~bVar62,~bVar43 & ~bVar60),
                                           CONCAT22(CONCAT11(~bVar41 & ~bVar59,~bVar38 & ~bVar57),
                                                    CONCAT11(~bVar36 & ~bVar56,~bVar29 & ~bVar53))))
                ;
                uVar55 = uVar14 ^ 0x8000800080008000;
                uVar34 = CONCAT26(CONCAT11(bVar52,bVar49),
                                  CONCAT24(CONCAT11(bVar47,bVar44),
                                           CONCAT22(CONCAT11(bVar42,bVar39),CONCAT11(bVar37,bVar30))
                                          )) & 0x7fff7fff7fff7fff;
                uVar12 = uVar12 + 4;
                *(ulong *)(local_138 + uVar18 * 2) =
                     CONCAT17((byte)(uVar34 >> 0x38) | (byte)(uVar55 >> 0x38) & ~bVar52,
                              CONCAT16((byte)(uVar34 >> 0x30) | (byte)(uVar14 >> 0x30) & ~bVar49,
                                       CONCAT15((byte)(uVar34 >> 0x28) |
                                                (byte)(uVar55 >> 0x28) & ~bVar47,
                                                CONCAT14((byte)(uVar34 >> 0x20) |
                                                         (byte)(uVar14 >> 0x20) & ~bVar44,
                                                         CONCAT13((byte)(uVar34 >> 0x18) |
                                                                  (byte)(uVar55 >> 0x18) & ~bVar42,
                                                                  CONCAT12((byte)(uVar34 >> 0x10) |
                                                                           (byte)(uVar14 >> 0x10) &
                                                                           ~bVar39,CONCAT11((byte)(
                                                  uVar34 >> 8) | (byte)(uVar55 >> 8) & ~bVar37,
                                                  (byte)uVar34 | (byte)uVar14 & ~bVar30)))))));
              } while (uVar10 != 0);
              if (uVar11 == uVar8) goto LAB_00128200;
            }
          }
          pfVar15 = local_c0 + local_c8 * uVar11;
          do {
            fVar26 = *pfVar15;
            fVar31 = -32768.0;
            if ((-32767.0 <= fVar26) && (fVar31 = 32767.0, fVar26 <= 32766.0)) {
              fVar31 = fVar26;
            }
            iVar32 = (int)uVar11;
            uVar11 = uVar11 + 1;
            pfVar15 = (float *)((long)pfVar15 + local_130);
            *(short *)(local_138 + (ulong)(uint)(iVar2 + -1 + iVar32) * 2) = (short)(int)fVar31;
          } while (uVar11 < uVar8);
        }
LAB_00128200:
        iVar2 = *(int *)(param_1 + 0x18);
        lVar13 = *(long *)(param_1 + 0x58);
        uVar11 = (ulong)(*(int *)(param_1 + 0x1c) * local_cc);
        uVar8 = lVar13 + uVar11 * 2;
        *(undefined4 *)(param_1 + 0x38) = 1;
        local_104 = uVar5;
        local_b4 = uVar19;
        uVar6 = (**(code **)(param_1 + 0x70))
                          (param_1,local_cc,uVar8,(long)&local_b0 + 4,lVar9,&local_b0);
        lVar9 = *(long *)(param_1 + 0x40);
        uVar5 = *(uint *)(lVar9 + local_d8 * 4);
        if ((int)uVar5 < (int)local_b0._4_4_) {
          local_b0._4_4_ = uVar5;
        }
        local_b0 = CONCAT44(local_b0._4_4_,uVar6);
        *(uint *)(lVar9 + local_d8 * 4) = *(int *)(lVar9 + local_d8 * 4) - local_b0._4_4_;
        uVar12 = iVar2 - 1;
        uVar10 = (ulong)uVar12;
        uVar19 = local_b4;
        uVar7 = local_b0._4_4_;
        uVar5 = local_104;
        if (uVar12 != 0 && 0 < iVar2) {
          if (uVar12 < 0x10) {
LAB_00128294:
            uVar14 = 0;
          }
          else {
            uVar14 = 0;
            if (CARRY4(local_b0._4_4_,(uint)(uVar10 - 1))) goto LAB_00128294;
            if (uVar10 - 1 >> 0x20 == 0) {
              if ((uVar8 < lVar13 + (local_b0._4_4_ + uVar11 + uVar10) * 2) &&
                 (lVar13 + (local_b0._4_4_ + uVar11) * 2 < lVar13 + (uVar11 + uVar10) * 2)) {
                uVar14 = 0;
              }
              else {
                uVar18 = 0;
                uVar14 = uVar10 & 0xfffffff0;
                puVar17 = (undefined8 *)(lVar13 + uVar11 * 2 + 0x10);
                do {
                  pauVar1 = (undefined1 (*) [16])(uVar8 + (ulong)(local_b0._4_4_ + (int)uVar18) * 2)
                  ;
                  auVar28 = *pauVar1;
                  auVar35 = pauVar1[1];
                  uVar18 = uVar18 + 0x10;
                  puVar17[-1] = auVar28._8_8_;
                  puVar17[-2] = auVar28._0_8_;
                  puVar17[1] = auVar35._8_8_;
                  *puVar17 = auVar35._0_8_;
                  puVar17 = puVar17 + 4;
                } while (uVar14 != uVar18);
                if (uVar14 == uVar10) goto LAB_001282f4;
              }
            }
          }
          lVar9 = uVar10 - uVar14;
          uVar12 = local_b0._4_4_ + (int)uVar14;
          puVar16 = (undefined2 *)(lVar13 + (uVar14 + uVar11) * 2);
          do {
            uVar11 = (ulong)uVar12;
            lVar9 = lVar9 + -1;
            uVar12 = uVar12 + 1;
            *puVar16 = *(undefined2 *)(uVar8 + uVar11 * 2);
            puVar16 = puVar16 + 1;
          } while (lVar9 != 0);
        }
      }
      else {
        lVar23 = local_d8 * 4;
        local_a8 = *(uint *)(*(long *)(param_1 + 0x50) + lVar23);
        iVar2 = *(int *)(param_1 + 0x18);
        lVar13 = *(long *)(param_1 + 0x58);
        uVar8 = (ulong)(*(int *)(param_1 + 0x1c) * local_cc);
        uVar24 = lVar13 + uVar8 * 2;
        *(undefined4 *)(param_1 + 0x38) = 1;
        local_b4 = uVar19;
        local_a4 = (uint)local_b0;
        uVar5 = (**(code **)(param_1 + 0x70))(param_1,local_cc,uVar24,&local_a8,lVar25,&local_a4);
        lVar9 = *(long *)(param_1 + 0x40);
        if ((int)*(uint *)(lVar9 + lVar23) < (int)local_a8) {
          local_a8 = *(uint *)(lVar9 + lVar23);
        }
        local_a4 = uVar5;
        *(uint *)(lVar9 + lVar23) = *(int *)(lVar9 + lVar23) - local_a8;
        uVar11 = (ulong)local_a8;
        if (1 < iVar2) {
          uVar10 = (ulong)(iVar2 - 1U);
          if (iVar2 - 1U < 0x10) {
LAB_00128090:
            uVar14 = 0;
          }
          else {
            uVar14 = 0;
            if ((!CARRY4(local_a8,(uint)(uVar10 - 1))) && (uVar10 - 1 >> 0x20 == 0)) {
              if ((uVar24 < lVar13 + (uVar11 + uVar8 + uVar10) * 2) &&
                 (lVar13 + (uVar11 + uVar8) * 2 < lVar13 + (uVar8 + uVar10) * 2)) goto LAB_00128090;
              uVar14 = uVar10 & 0xfffffff0;
              puVar17 = (undefined8 *)(lVar13 + uVar8 * 2 + 0x10);
              uVar18 = uVar14;
              do {
                pauVar1 = (undefined1 (*) [16])(uVar24 + uVar11 * 2);
                auVar28 = *pauVar1;
                auVar35 = pauVar1[1];
                uVar18 = uVar18 - 0x10;
                uVar11 = (ulong)((int)uVar11 + 0x10);
                puVar17[-1] = auVar28._8_8_;
                puVar17[-2] = auVar28._0_8_;
                puVar17[1] = auVar35._8_8_;
                *puVar17 = auVar35._0_8_;
                puVar17 = puVar17 + 4;
              } while (uVar18 != 0);
              if (uVar14 == uVar10) goto LAB_001280b8;
            }
          }
          lVar9 = uVar10 - uVar14;
          uVar12 = local_a8 + (int)uVar14;
          puVar16 = (undefined2 *)(lVar13 + (uVar14 + uVar8) * 2);
          do {
            uVar11 = (ulong)uVar12;
            lVar9 = lVar9 + -1;
            uVar12 = uVar12 + 1;
            *puVar16 = *(undefined2 *)(uVar24 + uVar11 * 2);
            puVar16 = puVar16 + 1;
          } while (lVar9 != 0);
        }
LAB_001280b8:
        lVar9 = *(long *)(param_1 + 0x50);
        uVar12 = *(int *)(lVar9 + lVar23) - local_a8;
        *(uint *)(lVar9 + lVar23) = uVar12;
        if (uVar12 != 0) {
          uVar11 = (ulong)uVar12;
          uVar10 = 0;
          if (0xf < uVar12) {
            uVar12 = iVar2 - 1;
            uVar14 = (ulong)uVar12;
            uVar19 = (uint)(uVar11 - 1);
            if (((!CARRY4(uVar12,uVar19)) && (uVar11 - 1 >> 0x20 == 0)) &&
               (!CARRY4(uVar12 + local_a8,uVar19))) {
              lVar23 = uVar8 + (uVar12 + local_a8);
              if ((lVar13 + (uVar8 + uVar14) * 2 < lVar13 + (lVar23 + uVar11) * 2) &&
                 ((ulong)(lVar13 + lVar23 * 2) < lVar13 + (uVar8 + uVar11 + uVar14) * 2)) {
                uVar10 = 0;
              }
              else {
                uVar10 = uVar11 & 0xfffffff0;
                uVar8 = uVar10;
                do {
                  pauVar1 = (undefined1 (*) [16])(uVar24 + (ulong)(local_a8 + (int)uVar14) * 2);
                  auVar28 = *pauVar1;
                  auVar35 = pauVar1[1];
                  puVar17 = (undefined8 *)(uVar24 + uVar14 * 2);
                  uVar8 = uVar8 - 0x10;
                  uVar14 = (ulong)((int)uVar14 + 0x10);
                  puVar17[1] = auVar28._8_8_;
                  *puVar17 = auVar28._0_8_;
                  puVar17[3] = auVar35._8_8_;
                  puVar17[2] = auVar35._0_8_;
                } while (uVar8 != 0);
                if (uVar10 == uVar11) goto LAB_00128110;
              }
            }
          }
          lVar13 = uVar11 - uVar10;
          uVar12 = (iVar2 + (int)uVar10) - 1;
          do {
            lVar13 = lVar13 + -1;
            *(undefined2 *)(uVar24 + (ulong)uVar12 * 2) =
                 *(undefined2 *)(uVar24 + (ulong)(local_a8 + uVar12) * 2);
            uVar12 = uVar12 + 1;
          } while (lVar13 != 0);
        }
LAB_00128110:
        uVar19 = local_b4 - uVar5;
        local_b0._0_4_ = (uint)local_b0 - uVar5;
        uVar24 = local_120;
        if (*(int *)(lVar9 + local_d8 * 4) == 0) {
          lVar9 = lVar25 + (ulong)(*(int *)(param_1 + 0x7c) * uVar5) * 2;
          goto LAB_00128150;
        }
        local_b0 = 0;
        uVar7 = 0;
      }
LAB_001282f4:
      uVar5 = (uint)local_b0 + uVar5;
      uVar12 = (uint)uVar24;
      if (uVar5 != 0) {
        uVar8 = 0;
        uVar11 = (ulong)uVar5;
        if ((7 < uVar5) && (uVar12 == 1)) {
          uVar8 = uVar11 & 0xfffffff8;
          puVar17 = (undefined8 *)(param_5 + 0x10);
          uVar10 = uVar8;
          puVar21 = local_158[2];
          do {
            uVar27 = *(undefined8 *)((long)puVar21 + -8);
            uVar33 = *(undefined8 *)puVar21;
            puVar21 = (uint *)((long)puVar21 + 0x10);
            uVar10 = uVar10 - 8;
            auVar28._0_4_ = (int)(short)uVar27;
            auVar28._4_4_ = (int)(short)((ulong)uVar27 >> 0x10);
            auVar28._8_4_ = (int)(short)((ulong)uVar27 >> 0x20);
            auVar28._12_4_ = (int)(short)((ulong)uVar27 >> 0x30);
            auVar35._0_4_ = (int)(short)uVar33;
            auVar35._4_4_ = (int)(short)((ulong)uVar33 >> 0x10);
            auVar35._8_4_ = (int)(short)((ulong)uVar33 >> 0x20);
            auVar35._12_4_ = (int)(short)((ulong)uVar33 >> 0x30);
            auVar28 = NEON_scvtf(auVar28,4);
            auVar35 = NEON_scvtf(auVar35,4);
            puVar17[-1] = auVar28._8_8_;
            puVar17[-2] = auVar28._0_8_;
            puVar17[1] = auVar35._8_8_;
            *puVar17 = auVar35._0_8_;
            puVar17 = (undefined8 *)((long)puVar17 + local_e0);
          } while (uVar10 != 0);
          if (uVar8 == uVar11) goto LAB_0012838c;
        }
        pfVar15 = (float *)(param_5 + local_140 * uVar8 * 4);
        do {
          lVar9 = uVar8 * 2;
          uVar8 = uVar8 + 1;
          *pfVar15 = (float)(int)*(short *)(lVar25 + lVar9);
          pfVar15 = pfVar15 + lVar20;
        } while (uVar8 < uVar11);
      }
LAB_0012838c:
      uVar19 = uVar19 - (uint)local_b0;
      uVar22 = uVar22 - uVar7;
      param_3 = (float *)0x0;
      if (local_c0 != (float *)0x0) {
        param_3 = local_c0 + uVar7 * (int)local_c8;
      }
    } while ((uVar19 != 0) && (param_5 = param_5 + (ulong)(uVar5 * uVar12) * 4, uVar22 != 0));
  }
  *(uint *)(param_1 + 0x7c) = uVar12;
  *local_158[0] = *local_158[0] - uVar22;
  *local_158[1] = *local_158[1] - uVar19;
  if (*(long *)(local_160 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

