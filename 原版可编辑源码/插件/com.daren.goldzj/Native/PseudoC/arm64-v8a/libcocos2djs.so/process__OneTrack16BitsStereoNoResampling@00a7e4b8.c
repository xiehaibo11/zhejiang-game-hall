
/* cocos2d::AudioMixer::process__OneTrack16BitsStereoNoResampling(cocos2d::AudioMixer::state_t*,
   long) */

void cocos2d::AudioMixer::process__OneTrack16BitsStereoNoResampling(state_t *param_1,long param_2)

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
  ulong uVar22;
  float *pfVar23;
  float *pfVar24;
  float *__s;
  float *pfVar25;
  long lVar26;
  char cVar27;
  uint uVar28;
  char cVar34;
  uint uVar35;
  byte bVar36;
  uint uVar37;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar38;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  uint uVar39;
  uint uVar44;
  uint uVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  
  lVar17 = 0x1f - LZCOUNT(*(undefined4 *)param_1);
  uVar5 = *(uint *)(param_1 + lVar17 * 0xd0 + 0x44);
  pfVar24 = *(float **)(param_1 + lVar17 * 0xd0 + 0xa8);
  lVar26 = *(long *)(param_1 + 8);
  if (lVar26 != 0) {
    psVar2 = param_1 + lVar17 * 0xd0 + 0x78;
    uVar7 = *(ushort *)(param_1 + lVar17 * 0xd0 + 0x46);
    iVar8 = (int)(short)uVar5;
    iVar3 = (int)uVar5 >> 0x10;
    __s = pfVar24;
    do {
                    /* try { // try from 00a7e590 to 00b7e65f has its CatchHandler @ 00a7e590
                       catch() { ... } // from try @ 00a7e590 with catch @ 00a7e590
                       catch() { ... } // from try @ 00a7e670 with catch @ 00a7e590 */
      lVar16 = 0x7fffffffffffffff;
      *(long *)(param_1 + lVar17 * 0xd0 + 0x80) = lVar26;
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
      pfVar25 = *(float **)psVar2;
      if ((pfVar25 == (float *)0x0) || (((ulong)pfVar25 & 3) != 0)) {
        uVar28 = *(int *)(param_1 + lVar17 * 0xd0 + 0xc4) - 1;
        if (uVar28 < 6) {
          lVar16 = *(long *)(&DAT_0189d370 + (long)(int)uVar28 * 8);
        }
        else {
          lVar16 = 0;
        }
        memset(__s,0,lVar26 * (ulong)*(uint *)(param_1 + lVar17 * 0xd0 + 0xfc) * lVar16);
        if (((ulong)pfVar25 & 3) == 0) {
          return;
        }
                    /* try { // try from 00a7e980 to 00b7e99f has its CatchHandler @ 00a7ea14 */
                    /* try { // try from 00a7e9a4 to 00b7e9ab has its CatchHandler @ 00a7ea10 */
                    /* try { // try from 00a7e9ac to 00b7ea2f has its CatchHandler @ 00a7e8d0 */
        auVar30._0_8_ = (double)*(float *)(param_1 + lVar17 * 0xd0 + 0xd4);
        auVar30._8_8_ = 0;
        auVar41._0_8_ = (double)*(float *)(param_1 + lVar17 * 0xd0 + 0xd8);
        auVar41._8_8_ = 0;
        __android_log_print(auVar30,auVar41,6,"AudioMixer",
                            "process__OneTrack16BitsStereoNoResampling: misaligned buffer %p track %d, channels %d, needs %08x, volume %08x vfl %f vfr %f"
                            ,pfVar25,lVar17,param_1[lVar17 * 0xd0 + 100],
                            *(undefined4 *)(param_1 + lVar17 * 0xd0 + 0x40),uVar5);
        return;
      }
      iVar4 = *(int *)(param_1 + lVar17 * 0xd0 + 0xc4);
      uVar18 = *(ulong *)(param_1 + lVar17 * 0xd0 + 0x80);
      if (iVar4 == 1) {
                    /* catch() { ... } // from try @ 00a7e758 with catch @ 00a7e6fc
                       catch() { ... } // from try @ 00a7e7e8 with catch @ 00a7e6fc */
        if ((uVar5 & 0xffff) < 0x1001 && uVar7 < 0x1001) {
          uVar19 = uVar18;
          pfVar20 = __s;
          if ((3 < uVar18) && ((pfVar25 + uVar18 <= __s || (__s + uVar18 <= pfVar25)))) {
            uVar22 = uVar18 & 0xfffffffffffffffc;
            uVar19 = uVar22;
            pfVar23 = pfVar25;
            do {
              auVar42._8_8_ = 0xffff0000ffff;
              auVar42._0_8_ = 0xffff0000ffff;
              uVar19 = uVar19 - 4;
              auVar43._0_4_ = ((int)*pfVar23 >> 0x10) * iVar3 * 0x10;
              auVar43._4_4_ = ((int)pfVar23[1] >> 0x10) * iVar3 * 0x10;
              auVar43._8_4_ = ((int)pfVar23[2] >> 0x10) * iVar3 * 0x10;
              auVar43._12_4_ = ((int)pfVar23[3] >> 0x10) * iVar3 * 0x10;
              auVar49._0_4_ = (uint)(SUB42(*pfVar23,0) * iVar8) >> 0xc;
              auVar49._4_4_ = (uint)(SUB42(pfVar23[1],0) * iVar8) >> 0xc;
              auVar49._8_4_ = (uint)(SUB42(pfVar23[2],0) * iVar8) >> 0xc;
              auVar49._12_4_ = (uint)(SUB42(pfVar23[3],0) * iVar8) >> 0xc;
              auVar43 = auVar43 ^ (auVar43 ^ auVar49) & auVar42;
              *(long *)(pfVar20 + 2) = auVar43._8_8_;
              *(long *)pfVar20 = auVar43._0_8_;
              pfVar20 = pfVar20 + 4;
              pfVar23 = pfVar23 + 4;
            } while (uVar19 != 0);
            uVar19 = uVar18 - uVar22;
            pfVar25 = pfVar25 + uVar22;
            pfVar20 = __s + uVar22;
            if (uVar18 == uVar22) goto LAB_00a7e75c;
          }
          do {
            uVar19 = uVar19 - 1;
                    /* try { // try from 00a7e754 to 00b7e757 has its CatchHandler @ 00a7e80c */
            *pfVar20 = (float)(((int)*pfVar25 >> 0x10) * iVar3 * 0x10 & 0xffff0000U |
                              (uint)(SUB42(*pfVar25,0) * iVar8) >> 0xc & 0xffff);
            pfVar25 = pfVar25 + 1;
            pfVar20 = pfVar20 + 1;
                    /* try { // try from 00a7e758 to 00b7e7e3 has its CatchHandler @ 00a7e6fc */
          } while (uVar19 != 0);
        }
        else {
          uVar19 = uVar18;
          pfVar20 = __s;
                    /* try { // try from 00a7e7e4 to 00b7e7e7 has its CatchHandler @ 00a7e80c */
                    /* try { // try from 00a7e7e8 to 00b7e827 has its CatchHandler @ 00a7e6fc */
          if ((3 < uVar18) && ((pfVar25 + uVar18 <= __s || (__s + uVar18 <= pfVar25)))) {
            uVar22 = uVar18 & 0xfffffffffffffffc;
            uVar19 = uVar22;
            pfVar23 = pfVar25;
            do {
              uVar19 = uVar19 - 4;
              uVar28 = ((int)*pfVar23 >> 0x10) * iVar3;
              uVar35 = ((int)pfVar23[1] >> 0x10) * iVar3;
              uVar37 = ((int)pfVar23[2] >> 0x10) * iVar3;
              uVar38 = ((int)pfVar23[3] >> 0x10) * iVar3;
              auVar50._0_4_ = uVar28 >> 0xc;
              auVar50._4_4_ = uVar35 >> 0xc;
              auVar50._8_4_ = uVar37 >> 0xc;
              auVar50._12_4_ = uVar38 >> 0xc;
              uVar39 = SUB42(*pfVar23,0) * iVar8;
              uVar44 = SUB42(pfVar23[1],0) * iVar8;
              uVar45 = SUB42(pfVar23[2],0) * iVar8;
              uVar46 = SUB42(pfVar23[3],0) * iVar8;
              auVar53._0_4_ = -(uint)((int)uVar28 >> 0x1b == (int)uVar28 >> 0x1f);
              auVar53._4_4_ = -(uint)((int)uVar35 >> 0x1b == (int)uVar35 >> 0x1f);
              auVar53._8_4_ = -(uint)((int)uVar37 >> 0x1b == (int)uVar37 >> 0x1f);
              auVar53._12_4_ = -(uint)((int)uVar38 >> 0x1b == (int)uVar38 >> 0x1f);
              cVar27 = (char)((int)uVar28 >> 0x1f);
              cVar34 = (char)((int)uVar35 >> 0x1f);
              auVar52._0_8_ =
                   CONCAT17(cVar34,(uint7)CONCAT15(cVar34,CONCAT14(cVar34,(uint)CONCAT11(cVar27,
                                                  cVar27)))) ^ 0x7fff00007fff;
              bVar36 = (byte)((int)uVar37 >> 0x1f);
              auVar52[8] = bVar36 ^ 0xff;
              auVar52[9] = bVar36 ^ 0x7f;
              auVar52[10] = bVar36;
              auVar52[0xb] = bVar36;
              bVar36 = (byte)((int)uVar38 >> 0x1f);
              auVar52[0xc] = bVar36 ^ 0xff;
              auVar52[0xd] = bVar36 ^ 0x7f;
              auVar52[0xe] = bVar36;
              auVar52[0xf] = bVar36;
              auVar52 = auVar52 ^ (auVar52 ^ auVar50) & auVar53;
              auVar31._0_4_ = -(uint)((int)uVar39 >> 0x1b == (int)uVar39 >> 0x1f);
              auVar31._4_4_ = -(uint)((int)uVar44 >> 0x1b == (int)uVar44 >> 0x1f);
              auVar31._8_4_ = -(uint)((int)uVar45 >> 0x1b == (int)uVar45 >> 0x1f);
              auVar31._12_4_ = -(uint)((int)uVar46 >> 0x1b == (int)uVar46 >> 0x1f);
              cVar27 = (char)((int)uVar39 >> 0x1f);
              cVar34 = (char)((int)uVar44 >> 0x1f);
              auVar32._0_8_ =
                   CONCAT17(cVar34,(uint7)CONCAT15(cVar34,CONCAT14(cVar34,(uint)CONCAT11(cVar27,
                                                  cVar27)))) ^ 0x7fff00007fff;
              bVar36 = (byte)((int)uVar45 >> 0x1f);
              auVar32[8] = bVar36 ^ 0xff;
              auVar32[9] = bVar36 ^ 0x7f;
              auVar32[10] = bVar36;
              auVar32[0xb] = bVar36;
              bVar36 = (byte)((int)uVar46 >> 0x1f);
              auVar32[0xc] = bVar36 ^ 0xff;
              auVar32[0xd] = bVar36 ^ 0x7f;
              auVar32[0xe] = bVar36;
              auVar32[0xf] = bVar36;
              auVar48._4_4_ = uVar44 >> 0xc;
              auVar48._0_4_ = uVar39 >> 0xc;
              auVar48._8_4_ = uVar45 >> 0xc;
              auVar48._12_4_ = uVar46 >> 0xc;
              auVar32 = auVar32 ^ (auVar32 ^ auVar48) & auVar31;
              auVar33[8] = auVar32[8];
              auVar33[9] = auVar32[9];
              auVar33[0xc] = auVar32[0xc];
              auVar33[0xd] = auVar32[0xd];
              auVar33._0_8_ =
                   CONCAT17(auVar52[5],
                            CONCAT16(auVar52[4],
                                     CONCAT15(auVar32[5],
                                              CONCAT14(auVar32[4],
                                                       CONCAT13(auVar52[1],
                                                                CONCAT12(auVar52[0],auVar32._0_2_)))
                                             )));
              auVar33[10] = auVar52[8];
              auVar33[0xb] = auVar52[9];
              auVar33[0xe] = auVar52[0xc];
              auVar33[0xf] = auVar52[0xd];
                    /* try { // try from 00a7e8d0 to 00b7e97f has its CatchHandler @ 00a7e8d0
                       catch() { ... } // from try @ 00a7e8d0 with catch @ 00a7e8d0
                       catch() { ... } // from try @ 00a7e9ac with catch @ 00a7e8d0 */
              *(long *)(pfVar20 + 2) = auVar33._8_8_;
              *(undefined8 *)pfVar20 = auVar33._0_8_;
              pfVar20 = pfVar20 + 4;
              pfVar23 = pfVar23 + 4;
            } while (uVar19 != 0);
            uVar19 = uVar18 - uVar22;
            pfVar25 = pfVar25 + uVar22;
            pfVar20 = __s + uVar22;
            if (uVar18 == uVar22) goto LAB_00a7e75c;
          }
          do {
                    /* catch() { ... } // from try @ 00a7e754 with catch @ 00a7e80c
                       catch() { ... } // from try @ 00a7e7e4 with catch @ 00a7e80c */
            uVar35 = SUB42(*pfVar25,0) * iVar8;
            uVar37 = ((int)*pfVar25 >> 0x10) * iVar3;
            uVar28 = uVar35 >> 0xc;
            if ((int)uVar35 >> 0x1f != (int)uVar35 >> 0x1b) {
              uVar28 = (int)uVar35 >> 0x1f ^ 0x7fff;
            }
            uVar35 = uVar37 >> 0xc;
            if ((int)uVar37 >> 0x1f != (int)uVar37 >> 0x1b) {
              uVar35 = (int)uVar37 >> 0x1f ^ 0x7fff;
            }
            uVar19 = uVar19 - 1;
            *pfVar20 = (float)(uVar28 & 0xffff | uVar35 << 0x10);
            pfVar25 = pfVar25 + 1;
            pfVar20 = pfVar20 + 1;
          } while (uVar19 != 0);
        }
LAB_00a7e75c:
        __s = __s + uVar18;
      }
      else {
        if (iVar4 != 5) {
                    /* WARNING: Subroutine does not return */
          __android_log_assert(0,"AudioMixer","bad mixer format: %d");
        }
        uVar19 = uVar18;
        pfVar20 = pfVar24;
        if (uVar18 < 8) {
LAB_00a7e6b8:
          do {
                    /* catch() { ... } // from try @ 00a7e660 with catch @ 00a7e6b8 */
            fVar6 = *pfVar25;
            uVar19 = uVar19 - 1;
            *pfVar20 = (float)(SUB42(fVar6,0) * iVar8) * 7.450581e-09;
            pfVar20[1] = (float)(((int)fVar6 >> 0x10) * iVar3) * 7.450581e-09;
            pfVar20 = pfVar20 + 2;
            pfVar25 = pfVar25 + 1;
          } while (uVar19 != 0);
        }
        else {
          uVar21 = uVar18 & 0xfffffffffffffff8;
          pfVar20 = pfVar24 + 8;
          uVar19 = uVar18 - uVar21;
          pfVar23 = pfVar25 + 4;
          uVar22 = uVar21;
          do {
            pfVar1 = pfVar23 + -4;
            pfVar9 = pfVar23 + -3;
            pfVar10 = pfVar23 + -2;
            pfVar11 = pfVar23 + -1;
            fVar6 = *pfVar23;
            pfVar12 = pfVar23 + 1;
            pfVar13 = pfVar23 + 2;
            pfVar14 = pfVar23 + 3;
            uVar22 = uVar22 - 8;
            pfVar23 = pfVar23 + 8;
                    /* try { // try from 00a7e660 to 00b7e66f has its CatchHandler @ 00a7e6b8 */
            auVar47._0_4_ = SUB42(*pfVar1,0) * iVar8;
            auVar47._4_4_ = SUB42(*pfVar9,0) * iVar8;
            auVar47._8_4_ = SUB42(*pfVar10,0) * iVar8;
            auVar47._12_4_ = SUB42(*pfVar11,0) * iVar8;
                    /* try { // try from 00a7e670 to 00b7e6d3 has its CatchHandler @ 00a7e590 */
            auVar51._0_4_ = SUB42(fVar6,0) * iVar8;
            auVar51._4_4_ = SUB42(*pfVar12,0) * iVar8;
            auVar51._8_4_ = SUB42(*pfVar13,0) * iVar8;
            auVar51._12_4_ = SUB42(*pfVar14,0) * iVar8;
            auVar29._0_4_ = ((int)*pfVar1 >> 0x10) * iVar3;
            auVar29._4_4_ = ((int)*pfVar9 >> 0x10) * iVar3;
            auVar29._8_4_ = ((int)*pfVar10 >> 0x10) * iVar3;
            auVar29._12_4_ = ((int)*pfVar11 >> 0x10) * iVar3;
            auVar40._0_4_ = ((int)fVar6 >> 0x10) * iVar3;
            auVar40._4_4_ = ((int)*pfVar12 >> 0x10) * iVar3;
            auVar40._8_4_ = ((int)*pfVar13 >> 0x10) * iVar3;
            auVar40._12_4_ = ((int)*pfVar14 >> 0x10) * iVar3;
            auVar48 = NEON_scvtf(auVar47,4);
            auVar52 = NEON_scvtf(auVar51,4);
            auVar30 = NEON_scvtf(auVar29,4);
            auVar41 = NEON_scvtf(auVar40,4);
            pfVar20[-8] = auVar48._0_4_ * 7.450581e-09;
            pfVar20[-7] = auVar30._0_4_ * 7.450581e-09;
            pfVar20[-6] = auVar48._4_4_ * 7.450581e-09;
            pfVar20[-5] = auVar30._4_4_ * 7.450581e-09;
            pfVar20[-4] = auVar48._8_4_ * 7.450581e-09;
            pfVar20[-3] = auVar30._8_4_ * 7.450581e-09;
            pfVar20[-2] = auVar48._12_4_ * 7.450581e-09;
            pfVar20[-1] = auVar30._12_4_ * 7.450581e-09;
            *pfVar20 = auVar52._0_4_ * 7.450581e-09;
            pfVar20[1] = auVar41._0_4_ * 7.450581e-09;
            pfVar20[2] = auVar52._4_4_ * 7.450581e-09;
            pfVar20[3] = auVar41._4_4_ * 7.450581e-09;
            pfVar20[4] = auVar52._8_4_ * 7.450581e-09;
            pfVar20[5] = auVar41._8_4_ * 7.450581e-09;
            pfVar20[6] = auVar52._12_4_ * 7.450581e-09;
            pfVar20[7] = auVar41._12_4_ * 7.450581e-09;
            pfVar20 = pfVar20 + 0x10;
          } while (uVar22 != 0);
          pfVar20 = pfVar24 + uVar21 * 2;
          pfVar25 = pfVar25 + uVar21;
          if (uVar18 != uVar21) goto LAB_00a7e6b8;
        }
        pfVar24 = pfVar24 + uVar18 * 2;
      }
      plVar15 = *(long **)(param_1 + lVar17 * 0xd0 + 0x70);
      lVar26 = lVar26 - uVar18;
      (**(code **)(*plVar15 + 0x18))(plVar15,psVar2);
    } while (lVar26 != 0);
  }
  return;
}

