
int forced_pitch_quant(short *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,long param_6,undefined8 param_7,int param_8,
                      undefined8 param_9,short param_10,undefined4 param_11,uint param_12,
                      undefined8 param_13,undefined8 param_14,long param_15)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  int *piVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  uint3 uVar13;
  uint3 uVar14;
  uint3 uVar15;
  ushort uVar16;
  ushort uVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  uint *puVar21;
  long lVar22;
  int iVar23;
  int *piVar24;
  short *psVar25;
  long lVar26;
  undefined8 *puVar27;
  short *psVar28;
  long lVar29;
  short *psVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  int iVar34;
  ulong uVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  uint6 uVar39;
  undefined8 uVar40;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint6 uVar44;
  undefined1 auVar46 [16];
  short asStack_50 [4];
  long local_48;
  undefined1 auVar41 [14];
  undefined1 auVar45 [14];
  
  uVar35 = (ulong)param_12;
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar22 = -(uVar35 * 2 + 0xf & 0x3fffffff0);
  psVar28 = (short *)((long)asStack_50 + lVar22);
  iVar23 = (int)param_10;
  if (0x3e < param_10) {
    iVar23 = 0x3f;
  }
  uVar20 = 0;
  if ((0 < (int)param_12) && (0 < param_8)) {
    lVar26 = (long)param_8;
    lVar29 = (long)(int)param_12;
    uVar20 = -lVar29;
    if (uVar20 <= (ulong)-lVar26 && lVar29 != lVar26) {
      uVar20 = -lVar26;
    }
    uVar32 = -uVar20;
    iVar19 = (int)(short)(iVar23 << 7);
    if (uVar32 < 7 || uVar20 == 0xfffffffffffffff9) {
      uVar20 = 0;
      iVar18 = 0;
    }
    else {
      uVar20 = uVar32 & 0xfffffffffffffff8;
      puVar27 = (undefined8 *)(param_6 + 0x10);
      iVar18 = (int)uVar20;
      iVar34 = -param_8;
      uVar33 = uVar20;
      do {
        puVar2 = (undefined8 *)(param_15 + (long)iVar34 * 2);
        uVar9 = *puVar2;
        uVar40 = puVar2[1];
        uVar33 = uVar33 - 8;
        iVar34 = iVar34 + 8;
        sVar36 = (short)((ulong)uVar9 >> 0x10);
        sVar37 = (short)((ulong)uVar9 >> 0x20);
        sVar38 = (short)((ulong)uVar9 >> 0x30);
        iVar10 = iVar19 * CONCAT13(sVar36 >> 0xf,(int3)sVar36);
        iVar11 = iVar19 * CONCAT13(sVar38 >> 0xf,(int3)sVar38);
        auVar43._0_8_ = CONCAT44(iVar19 * (short)((ulong)uVar40 >> 0x10),iVar19 * (short)uVar40);
        auVar43._8_4_ = iVar19 * (short)((ulong)uVar40 >> 0x20);
        auVar43._12_4_ = iVar19 * (short)((ulong)uVar40 >> 0x30);
        puVar27[-1] = CONCAT17((char)((uint)iVar11 >> 0x18),
                               CONCAT16((char)((uint)iVar11 >> 0x10),
                                        CONCAT15((char)((uint)iVar11 >> 8),
                                                 CONCAT14((char)iVar11,
                                                          iVar19 * CONCAT13(sVar37 >> 0xf,
                                                                            (int3)sVar37)))));
        puVar27[-2] = CONCAT17((char)((uint)iVar10 >> 0x18),
                               CONCAT16((char)((uint)iVar10 >> 0x10),
                                        CONCAT15((char)((uint)iVar10 >> 8),
                                                 CONCAT14((char)iVar10,
                                                          iVar19 * CONCAT13((short)uVar9 >> 0xf,
                                                                            (int3)(short)uVar9)))));
        puVar27[1] = auVar43._8_8_;
        *puVar27 = auVar43._0_8_;
        puVar27 = puVar27 + 4;
      } while (uVar33 != 0);
      if (uVar20 == uVar32) goto LAB_001142b8;
    }
    psVar25 = (short *)(param_15 + (iVar18 - lVar26) * 2);
    do {
      *(int *)(param_6 + uVar20 * 4) = *psVar25 * iVar19;
      uVar20 = uVar20 + 1;
      if (lVar29 <= (long)uVar20) break;
      psVar25 = psVar25 + 1;
    } while ((long)uVar20 < lVar26);
  }
LAB_001142b8:
  iVar19 = (int)uVar20;
  if (iVar19 < (int)param_12) {
    uVar20 = uVar20 & 0xffffffff;
    uVar32 = uVar35 - uVar20;
    iVar23 = (int)(short)(iVar23 << 9);
    if (7 < uVar32) {
      uVar33 = param_6 + uVar20 * 4;
      if ((param_6 + (((long)iVar19 + uVar35) - ((long)param_8 + uVar20)) * 4 <= uVar33) ||
         (param_6 + uVar35 * 4 <= (ulong)(param_6 + ((long)iVar19 - (long)param_8) * 4))) {
        uVar31 = uVar32 & 0xfffffffffffffff8;
        puVar27 = (undefined8 *)(uVar33 + 0x10);
        iVar34 = iVar19 - param_8;
        uVar20 = uVar31 + uVar20;
        iVar19 = iVar19 + (int)uVar31;
        uVar33 = uVar31;
        do {
          pauVar3 = (undefined1 (*) [16])(param_6 + (long)iVar34 * 4);
          auVar43 = *pauVar3;
          auVar46 = pauVar3[1];
          uVar33 = uVar33 - 8;
          iVar34 = iVar34 + 8;
          uVar39 = CONCAT15(auVar43[5],CONCAT14(auVar43[4],(uint)(auVar43._0_2_ & 0x7fff))) &
                   0x7fffffffffff;
          uVar16 = auVar43._8_2_ & 0x7fff;
          auVar41._0_12_ = ZEXT212(uVar16) << 0x40;
          auVar41[0xc] = auVar43[0xc];
          auVar41[0xd] = auVar43[0xd] & 0x7f;
          uVar44 = CONCAT15(auVar46[5],CONCAT14(auVar46[4],(uint)(auVar46._0_2_ & 0x7fff))) &
                   0x7fffffffffff;
          uVar17 = auVar46._8_2_ & 0x7fff;
          auVar45._0_12_ = ZEXT212(uVar17) << 0x40;
          auVar45[0xc] = auVar46[0xc];
          auVar45[0xd] = auVar46[0xd] & 0x7f;
          puVar27[-1] = CONCAT44(((auVar43._12_4_ << 1) >> 0x10) * iVar23 +
                                 ((int)((uint)auVar41._12_2_ * iVar23) >> 0xf),
                                 ((auVar43._8_4_ << 1) >> 0x10) * iVar23 +
                                 ((int)((uint)uVar16 * iVar23) >> 0xf));
          puVar27[-2] = CONCAT44(((auVar43._4_4_ << 1) >> 0x10) * iVar23 +
                                 ((int)((uint)(ushort)(uVar39 >> 0x20) * iVar23) >> 0xf),
                                 ((auVar43._0_4_ << 1) >> 0x10) * iVar23 +
                                 ((int)uVar39 * iVar23 >> 0xf));
          puVar27[1] = CONCAT44(((auVar46._12_4_ << 1) >> 0x10) * iVar23 +
                                ((int)((uint)auVar45._12_2_ * iVar23) >> 0xf),
                                ((auVar46._8_4_ << 1) >> 0x10) * iVar23 +
                                ((int)((uint)uVar17 * iVar23) >> 0xf));
          *puVar27 = CONCAT44(((auVar46._4_4_ << 1) >> 0x10) * iVar23 +
                              ((int)((uint)(ushort)(uVar44 >> 0x20) * iVar23) >> 0xf),
                              ((auVar46._0_4_ << 1) >> 0x10) * iVar23 +
                              ((int)uVar44 * iVar23 >> 0xf));
          puVar27 = puVar27 + 4;
        } while (uVar33 != 0);
        if (uVar32 == uVar31) goto LAB_00114350;
      }
    }
    lVar26 = uVar35 - uVar20;
    puVar21 = (uint *)(param_6 + ((long)iVar19 - (long)param_8) * 4);
    piVar24 = (int *)(param_6 + uVar20 * 4);
    do {
      lVar26 = lVar26 + -1;
      *piVar24 = ((int)(*puVar21 << 1) >> 0x10) * iVar23 +
                 ((int)((*puVar21 & 0x7fff) * iVar23) >> 0xf);
      puVar21 = puVar21 + 1;
      piVar24 = piVar24 + 1;
    } while (lVar26 != 0);
  }
LAB_00114350:
  if ((int)param_12 < 1) {
    syn_percep_zero16(psVar28,param_3,param_4,param_5,psVar28,param_12,param_11,param_14);
    goto LAB_001144b8;
  }
  if (param_12 < 8) {
    uVar32 = 0;
LAB_001143c8:
    lVar22 = uVar35 - uVar32;
    psVar25 = psVar28 + uVar32;
    piVar24 = (int *)(param_6 + uVar32 * 4);
    do {
      lVar22 = lVar22 + -1;
      *psVar25 = (short)(*piVar24 + 0x1000U >> 0xd);
      psVar25 = psVar25 + 1;
      piVar24 = piVar24 + 1;
    } while (lVar22 != 0);
  }
  else {
    uVar32 = uVar35 & 0xfffffff8;
    piVar24 = (int *)(param_6 + 0x10);
    puVar27 = (undefined8 *)((long)&local_48 + lVar22);
    uVar20 = uVar32;
    do {
      piVar1 = piVar24 + -4;
      piVar5 = piVar24 + -2;
      iVar23 = *piVar24;
      iVar19 = piVar24[1];
      iVar34 = piVar24[2];
      iVar18 = piVar24[3];
      piVar24 = piVar24 + 8;
      uVar20 = uVar20 - 8;
      uVar13 = (uint3)((uint)((int)((ulong)*(undefined8 *)piVar1 >> 0x20) + 0x1000) >> 0xd);
      uVar14 = (uint3)((uint)((int)*(undefined8 *)piVar5 + 0x1000) >> 0xd);
      uVar15 = (uint3)((uint)((int)((ulong)*(undefined8 *)piVar5 >> 0x20) + 0x1000) >> 0xd);
      puVar27[-1] = CONCAT17((char)(uVar15 >> 8),
                             CONCAT16((char)uVar15,
                                      CONCAT15((char)(uVar14 >> 8),
                                               CONCAT14((char)uVar14,
                                                        CONCAT13((char)(uVar13 >> 8),
                                                                 CONCAT12((char)uVar13,
                                                                          (short)(uint3)((uint)((int
                                                  )*(undefined8 *)piVar1 + 0x1000) >> 0xd)))))));
      *puVar27 = CONCAT26((short)(iVar18 + 0x1000U >> 0xd),
                          CONCAT24((short)(iVar34 + 0x1000U >> 0xd),
                                   CONCAT22((short)(iVar19 + 0x1000U >> 0xd),
                                            (short)(iVar23 + 0x1000U >> 0xd))));
      puVar27 = puVar27 + 2;
    } while (uVar20 != 0);
    if (uVar32 != uVar35) goto LAB_001143c8;
  }
  syn_percep_zero16(psVar28,param_3,param_4,param_5,psVar28,param_12,param_11,param_14);
  if (0 < (int)param_12) {
    if (param_12 < 8) {
      uVar32 = 0;
    }
    else {
      uVar32 = uVar35 & 0xfffffff8;
      uVar20 = uVar32;
      psVar25 = psVar28;
      psVar30 = param_1;
      do {
        uVar20 = uVar20 - 8;
        auVar42._0_4_ = (int)*psVar30 - (int)*psVar25;
        auVar42._4_4_ = (int)psVar30[1] - (int)psVar25[1];
        auVar42._8_4_ = (int)psVar30[2] - (int)psVar25[2];
        auVar42._12_4_ = (int)psVar30[3] - (int)psVar25[3];
        auVar46._8_4_ = 0xffff8044;
        auVar46._0_8_ = 0xffff8044ffff8044;
        auVar46._12_4_ = 0xffff8044;
        auVar43 = NEON_smax(auVar42,auVar46,4);
        auVar6._8_4_ = 0xffff8044;
        auVar6._0_8_ = 0xffff8044ffff8044;
        auVar6._12_4_ = 0xffff8044;
        auVar12._4_4_ = (int)psVar30[5] - (int)psVar25[5];
        auVar12._0_4_ = (int)psVar30[4] - (int)psVar25[4];
        auVar12._8_4_ = (int)psVar30[6] - (int)psVar25[6];
        auVar12._12_4_ = (int)psVar30[7] - (int)psVar25[7];
        auVar46 = NEON_smax(auVar12,auVar6,4);
        auVar7[8] = 0xbc;
        auVar7._0_8_ = 0x7fbc00007fbc;
        auVar7[9] = 0x7f;
        auVar7._10_2_ = 0;
        auVar7[0xc] = 0xbc;
        auVar7[0xd] = 0x7f;
        auVar7._14_2_ = 0;
        auVar43 = NEON_smin(auVar43,auVar7,4);
        auVar8[8] = 0xbc;
        auVar8._0_8_ = 0x7fbc00007fbc;
        auVar8[9] = 0x7f;
        auVar8._10_2_ = 0;
        auVar8[0xc] = 0xbc;
        auVar8[0xd] = 0x7f;
        auVar8._14_2_ = 0;
        auVar46 = NEON_smin(auVar46,auVar8,4);
        psVar30[4] = auVar46._0_2_;
        psVar30[5] = auVar46._4_2_;
        psVar30[6] = auVar46._8_2_;
        psVar30[7] = auVar46._12_2_;
        *psVar30 = auVar43._0_2_;
        psVar30[1] = auVar43._4_2_;
        psVar30[2] = auVar43._8_2_;
        psVar30[3] = auVar43._12_2_;
        psVar25 = psVar25 + 8;
        psVar30 = psVar30 + 8;
      } while (uVar20 != 0);
      if (uVar32 == uVar35) goto LAB_001144b8;
    }
    lVar22 = uVar35 - uVar32;
    psVar28 = psVar28 + uVar32;
    psVar25 = param_1 + uVar32;
    do {
      iVar23 = (int)*psVar25 - (int)*psVar28;
      if (iVar23 < -0x7fbb) {
        iVar23 = -0x7fbc;
      }
      if (0x7fbb < iVar23) {
        iVar23 = 0x7fbc;
      }
      lVar22 = lVar22 + -1;
      *psVar25 = (short)iVar23;
      psVar28 = psVar28 + 1;
      psVar25 = psVar25 + 1;
    } while (lVar22 != 0);
  }
LAB_001144b8:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_8;
}

