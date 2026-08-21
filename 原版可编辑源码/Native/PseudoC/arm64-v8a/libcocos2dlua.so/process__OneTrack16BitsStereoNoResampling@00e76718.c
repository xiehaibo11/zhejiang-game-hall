
/* cocos2d::experimental::AudioMixer::process__OneTrack16BitsStereoNoResampling(cocos2d::experimental::AudioMixer::state_t*,
   long) */

void cocos2d::experimental::AudioMixer::process__OneTrack16BitsStereoNoResampling
               (state_t *param_1,long param_2)

{
  float *pfVar1;
  state_t *psVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  ushort uVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  float *pfVar20;
  ulong uVar21;
  float *pfVar22;
  float *pfVar23;
  float *__s;
  float *pfVar24;
  long lVar25;
  char cVar26;
  uint uVar27;
  char cVar33;
  uint uVar34;
  byte bVar35;
  uint uVar36;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint uVar37;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar38;
  uint uVar43;
  uint uVar44;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  
  lVar17 = 0x1f - LZCOUNT(*(undefined4 *)param_1);
  uVar5 = *(uint *)(param_1 + lVar17 * 0xd0 + 0x44);
  __s = *(float **)(param_1 + lVar17 * 0xd0 + 0xa8);
  lVar25 = *(long *)(param_1 + 8);
  if (lVar25 != 0) {
    psVar2 = param_1 + lVar17 * 0xd0 + 0x78;
    uVar7 = *(ushort *)(param_1 + lVar17 * 0xd0 + 0x46);
    iVar8 = (int)(short)uVar5;
    iVar3 = (int)uVar5 >> 0x10;
    pfVar20 = __s;
    do {
      lVar16 = 0x7fffffffffffffff;
      *(long *)(param_1 + lVar17 * 0xd0 + 0x80) = lVar25;
      if (param_2 != 0x7fffffffffffffff) {
        uVar18 = 0;
        if ((ulong)*(uint *)(param_1 + lVar17 * 0xd0 + 0xa0) != 0) {
          uVar18 = (ulong)((((long)__s - *(long *)(param_1 + lVar17 * 0xd0 + 0xa8)) * 0x40000000 >>
                           0x20) * sLocalTimeFreq) /
                   (ulong)*(uint *)(param_1 + lVar17 * 0xd0 + 0xa0);
        }
        lVar16 = uVar18 + param_2;
      }
      plVar15 = *(long **)(param_1 + lVar17 * 0xd0 + 0x70);
      (**(code **)(*plVar15 + 0x10))(plVar15,psVar2,lVar16);
      pfVar24 = *(float **)psVar2;
      if ((pfVar24 == (float *)0x0) || (((ulong)pfVar24 & 3) != 0)) {
        uVar27 = *(int *)(param_1 + lVar17 * 0xd0 + 0xc4) - 1;
        if (uVar27 < 6) {
          lVar16 = *(long *)(&DAT_01428658 + (long)(int)uVar27 * 8);
        }
        else {
          lVar16 = 0;
        }
        memset(__s,0,lVar25 * (ulong)*(uint *)(param_1 + lVar17 * 0xd0 + 0xfc) * lVar16);
        if (((ulong)pfVar24 & 3) == 0) {
          return;
        }
        auVar29._0_8_ = (double)*(float *)(param_1 + lVar17 * 0xd0 + 0xd4);
        auVar29._8_8_ = 0;
        auVar40._0_8_ = (double)*(float *)(param_1 + lVar17 * 0xd0 + 0xd8);
        auVar40._8_8_ = 0;
        __android_log_print(auVar29,auVar40,6,"AudioMixer",
                            "process__OneTrack16BitsStereoNoResampling: misaligned buffer %p track %d, channels %d, needs %08x, volume %08x vfl %f vfr %f"
                            ,pfVar24,lVar17,param_1[lVar17 * 0xd0 + 100],
                            *(undefined4 *)(param_1 + lVar17 * 0xd0 + 0x40),uVar5);
        return;
      }
      iVar4 = *(int *)(param_1 + lVar17 * 0xd0 + 0xc4);
      uVar18 = *(ulong *)(param_1 + lVar17 * 0xd0 + 0x80);
      if (iVar4 == 1) {
        pfVar22 = pfVar20;
        if ((uVar5 & 0xffff) < 0x1001 && uVar7 < 0x1001) {
          uVar19 = uVar18;
          pfVar20 = __s;
          if ((3 < uVar18) && ((pfVar24 + uVar18 <= __s || (__s + uVar18 <= pfVar24)))) {
            uVar21 = uVar18 & 0xfffffffffffffffc;
            pfVar20 = __s + uVar21;
            uVar19 = uVar21;
            pfVar23 = pfVar24;
            do {
              auVar41._8_8_ = 0xffff0000ffff;
              auVar41._0_8_ = 0xffff0000ffff;
              uVar19 = uVar19 - 4;
              auVar42._0_4_ = ((int)*pfVar23 >> 0x10) * iVar3 * 0x10;
              auVar42._4_4_ = ((int)pfVar23[1] >> 0x10) * iVar3 * 0x10;
              auVar42._8_4_ = ((int)pfVar23[2] >> 0x10) * iVar3 * 0x10;
              auVar42._12_4_ = ((int)pfVar23[3] >> 0x10) * iVar3 * 0x10;
              auVar48._0_4_ = (uint)(SUB42(*pfVar23,0) * iVar8) >> 0xc;
              auVar48._4_4_ = (uint)(SUB42(pfVar23[1],0) * iVar8) >> 0xc;
              auVar48._8_4_ = (uint)(SUB42(pfVar23[2],0) * iVar8) >> 0xc;
              auVar48._12_4_ = (uint)(SUB42(pfVar23[3],0) * iVar8) >> 0xc;
              auVar42 = auVar42 ^ (auVar42 ^ auVar48) & auVar41;
              *(long *)(__s + 2) = auVar42._8_8_;
              *(long *)__s = auVar42._0_8_;
              __s = __s + 4;
              pfVar23 = pfVar23 + 4;
            } while (uVar19 != 0);
            uVar19 = uVar18 - uVar21;
            pfVar24 = pfVar24 + uVar21;
            __s = pfVar20;
            if (uVar18 == uVar21) goto LAB_00e767f0;
          }
          do {
            uVar19 = uVar19 - 1;
            __s = pfVar20 + 1;
            *pfVar20 = (float)(((int)*pfVar24 >> 0x10) * iVar3 * 0x10 & 0xffff0000U |
                              (uint)(SUB42(*pfVar24,0) * iVar8) >> 0xc & 0xffff);
            pfVar24 = pfVar24 + 1;
            pfVar20 = __s;
          } while (uVar19 != 0);
        }
        else {
          uVar19 = uVar18;
          if ((3 < uVar18) && ((pfVar24 + uVar18 <= __s || (__s + uVar18 <= pfVar24)))) {
            uVar21 = uVar18 & 0xfffffffffffffffc;
            pfVar20 = __s + uVar21;
            uVar19 = uVar21;
            pfVar23 = pfVar24;
            do {
              uVar19 = uVar19 - 4;
              uVar27 = ((int)*pfVar23 >> 0x10) * iVar3;
              uVar34 = ((int)pfVar23[1] >> 0x10) * iVar3;
              uVar36 = ((int)pfVar23[2] >> 0x10) * iVar3;
              uVar37 = ((int)pfVar23[3] >> 0x10) * iVar3;
              auVar49._0_4_ = uVar27 >> 0xc;
              auVar49._4_4_ = uVar34 >> 0xc;
              auVar49._8_4_ = uVar36 >> 0xc;
              auVar49._12_4_ = uVar37 >> 0xc;
              uVar38 = SUB42(*pfVar23,0) * iVar8;
              uVar43 = SUB42(pfVar23[1],0) * iVar8;
              uVar44 = SUB42(pfVar23[2],0) * iVar8;
              uVar45 = SUB42(pfVar23[3],0) * iVar8;
              auVar52._0_4_ = -(uint)((int)uVar27 >> 0x1b == (int)uVar27 >> 0x1f);
              auVar52._4_4_ = -(uint)((int)uVar34 >> 0x1b == (int)uVar34 >> 0x1f);
              auVar52._8_4_ = -(uint)((int)uVar36 >> 0x1b == (int)uVar36 >> 0x1f);
              auVar52._12_4_ = -(uint)((int)uVar37 >> 0x1b == (int)uVar37 >> 0x1f);
              cVar26 = (char)((int)uVar27 >> 0x1f);
              cVar33 = (char)((int)uVar34 >> 0x1f);
              auVar51._0_8_ =
                   CONCAT17(cVar33,(uint7)CONCAT15(cVar33,CONCAT14(cVar33,(uint)CONCAT11(cVar26,
                                                  cVar26)))) ^ 0x7fff00007fff;
              bVar35 = (byte)((int)uVar36 >> 0x1f);
              auVar51[8] = bVar35 ^ 0xff;
              auVar51[9] = bVar35 ^ 0x7f;
              auVar51[10] = bVar35;
              auVar51[0xb] = bVar35;
              bVar35 = (byte)((int)uVar37 >> 0x1f);
              auVar51[0xc] = bVar35 ^ 0xff;
              auVar51[0xd] = bVar35 ^ 0x7f;
              auVar51[0xe] = bVar35;
              auVar51[0xf] = bVar35;
              auVar51 = auVar51 ^ (auVar51 ^ auVar49) & auVar52;
              auVar30._0_4_ = -(uint)((int)uVar38 >> 0x1b == (int)uVar38 >> 0x1f);
              auVar30._4_4_ = -(uint)((int)uVar43 >> 0x1b == (int)uVar43 >> 0x1f);
              auVar30._8_4_ = -(uint)((int)uVar44 >> 0x1b == (int)uVar44 >> 0x1f);
              auVar30._12_4_ = -(uint)((int)uVar45 >> 0x1b == (int)uVar45 >> 0x1f);
              cVar26 = (char)((int)uVar38 >> 0x1f);
              cVar33 = (char)((int)uVar43 >> 0x1f);
              auVar31._0_8_ =
                   CONCAT17(cVar33,(uint7)CONCAT15(cVar33,CONCAT14(cVar33,(uint)CONCAT11(cVar26,
                                                  cVar26)))) ^ 0x7fff00007fff;
              bVar35 = (byte)((int)uVar44 >> 0x1f);
              auVar31[8] = bVar35 ^ 0xff;
              auVar31[9] = bVar35 ^ 0x7f;
              auVar31[10] = bVar35;
              auVar31[0xb] = bVar35;
              bVar35 = (byte)((int)uVar45 >> 0x1f);
              auVar31[0xc] = bVar35 ^ 0xff;
              auVar31[0xd] = bVar35 ^ 0x7f;
              auVar31[0xe] = bVar35;
              auVar31[0xf] = bVar35;
              auVar47._4_4_ = uVar43 >> 0xc;
              auVar47._0_4_ = uVar38 >> 0xc;
              auVar47._8_4_ = uVar44 >> 0xc;
              auVar47._12_4_ = uVar45 >> 0xc;
              auVar31 = auVar31 ^ (auVar31 ^ auVar47) & auVar30;
              auVar32[8] = auVar31[8];
              auVar32[9] = auVar31[9];
              auVar32[0xc] = auVar31[0xc];
              auVar32[0xd] = auVar31[0xd];
              auVar32._0_8_ =
                   CONCAT17(auVar51[5],
                            CONCAT16(auVar51[4],
                                     CONCAT15(auVar31[5],
                                              CONCAT14(auVar31[4],
                                                       CONCAT13(auVar51[1],
                                                                CONCAT12(auVar51[0],auVar31._0_2_)))
                                             )));
              auVar32[10] = auVar51[8];
              auVar32[0xb] = auVar51[9];
              auVar32[0xe] = auVar51[0xc];
              auVar32[0xf] = auVar51[0xd];
              *(long *)(__s + 2) = auVar32._8_8_;
              *(undefined8 *)__s = auVar32._0_8_;
              __s = __s + 4;
              pfVar23 = pfVar23 + 4;
            } while (uVar19 != 0);
            uVar19 = uVar18 - uVar21;
            pfVar24 = pfVar24 + uVar21;
            __s = pfVar20;
            if (uVar18 == uVar21) goto LAB_00e767f0;
          }
          do {
            uVar34 = SUB42(*pfVar24,0) * iVar8;
            uVar36 = ((int)*pfVar24 >> 0x10) * iVar3;
            uVar27 = uVar34 >> 0xc;
            if ((int)uVar34 >> 0x1f != (int)uVar34 >> 0x1b) {
              uVar27 = (int)uVar34 >> 0x1f ^ 0x7fff;
            }
            uVar34 = uVar36 >> 0xc;
            if ((int)uVar36 >> 0x1f != (int)uVar36 >> 0x1b) {
              uVar34 = (int)uVar36 >> 0x1f ^ 0x7fff;
            }
            uVar19 = uVar19 - 1;
            pfVar20 = __s + 1;
            *__s = (float)(uVar27 & 0xffff | uVar34 << 0x10);
            pfVar24 = pfVar24 + 1;
            __s = pfVar20;
          } while (uVar19 != 0);
        }
      }
      else {
        if (iVar4 != 5) {
                    /* WARNING: Subroutine does not return */
          __android_log_assert(0,"AudioMixer","bad mixer format: %d");
        }
        uVar19 = uVar18;
        if (7 < uVar18) {
          uVar21 = uVar18 & 0xfffffffffffffff8;
          pfVar22 = pfVar20 + 8;
          pfVar20 = pfVar20 + uVar21 * 2;
          pfVar23 = pfVar24 + 4;
          uVar19 = uVar21;
          do {
            pfVar1 = pfVar23 + -4;
            pfVar9 = pfVar23 + -3;
            pfVar10 = pfVar23 + -2;
            pfVar11 = pfVar23 + -1;
            fVar6 = *pfVar23;
            pfVar12 = pfVar23 + 1;
            pfVar13 = pfVar23 + 2;
            pfVar14 = pfVar23 + 3;
            uVar19 = uVar19 - 8;
            pfVar23 = pfVar23 + 8;
            auVar46._0_4_ = SUB42(*pfVar1,0) * iVar8;
            auVar46._4_4_ = SUB42(*pfVar9,0) * iVar8;
            auVar46._8_4_ = SUB42(*pfVar10,0) * iVar8;
            auVar46._12_4_ = SUB42(*pfVar11,0) * iVar8;
            auVar50._0_4_ = SUB42(fVar6,0) * iVar8;
            auVar50._4_4_ = SUB42(*pfVar12,0) * iVar8;
            auVar50._8_4_ = SUB42(*pfVar13,0) * iVar8;
            auVar50._12_4_ = SUB42(*pfVar14,0) * iVar8;
            auVar28._0_4_ = ((int)*pfVar1 >> 0x10) * iVar3;
            auVar28._4_4_ = ((int)*pfVar9 >> 0x10) * iVar3;
            auVar28._8_4_ = ((int)*pfVar10 >> 0x10) * iVar3;
            auVar28._12_4_ = ((int)*pfVar11 >> 0x10) * iVar3;
            auVar39._0_4_ = ((int)fVar6 >> 0x10) * iVar3;
            auVar39._4_4_ = ((int)*pfVar12 >> 0x10) * iVar3;
            auVar39._8_4_ = ((int)*pfVar13 >> 0x10) * iVar3;
            auVar39._12_4_ = ((int)*pfVar14 >> 0x10) * iVar3;
            auVar47 = NEON_scvtf(auVar46,4);
            auVar51 = NEON_scvtf(auVar50,4);
            auVar29 = NEON_scvtf(auVar28,4);
            auVar40 = NEON_scvtf(auVar39,4);
            pfVar22[-8] = auVar47._0_4_ * 7.450581e-09;
            pfVar22[-7] = auVar29._0_4_ * 7.450581e-09;
            pfVar22[-6] = auVar47._4_4_ * 7.450581e-09;
            pfVar22[-5] = auVar29._4_4_ * 7.450581e-09;
            pfVar22[-4] = auVar47._8_4_ * 7.450581e-09;
            pfVar22[-3] = auVar29._8_4_ * 7.450581e-09;
            pfVar22[-2] = auVar47._12_4_ * 7.450581e-09;
            pfVar22[-1] = auVar29._12_4_ * 7.450581e-09;
            *pfVar22 = auVar51._0_4_ * 7.450581e-09;
            pfVar22[1] = auVar40._0_4_ * 7.450581e-09;
            pfVar22[2] = auVar51._4_4_ * 7.450581e-09;
            pfVar22[3] = auVar40._4_4_ * 7.450581e-09;
            pfVar22[4] = auVar51._8_4_ * 7.450581e-09;
            pfVar22[5] = auVar40._8_4_ * 7.450581e-09;
            pfVar22[6] = auVar51._12_4_ * 7.450581e-09;
            pfVar22[7] = auVar40._12_4_ * 7.450581e-09;
            pfVar22 = pfVar22 + 0x10;
          } while (uVar19 != 0);
          uVar19 = uVar18 - uVar21;
          pfVar24 = pfVar24 + uVar21;
          pfVar22 = pfVar20;
          if (uVar18 == uVar21) goto LAB_00e767f0;
        }
        do {
          fVar6 = *pfVar24;
          pfVar22 = pfVar20 + 2;
          uVar19 = uVar19 - 1;
          *pfVar20 = (float)(SUB42(fVar6,0) * iVar8) * 7.450581e-09;
          pfVar20[1] = (float)(((int)fVar6 >> 0x10) * iVar3) * 7.450581e-09;
          pfVar24 = pfVar24 + 1;
          pfVar20 = pfVar22;
        } while (uVar19 != 0);
      }
LAB_00e767f0:
      plVar15 = *(long **)(param_1 + lVar17 * 0xd0 + 0x70);
      lVar25 = lVar25 - uVar18;
      (**(code **)(*plVar15 + 0x18))(plVar15,psVar2);
      pfVar20 = pfVar22;
    } while (lVar25 != 0);
  }
  return;
}

