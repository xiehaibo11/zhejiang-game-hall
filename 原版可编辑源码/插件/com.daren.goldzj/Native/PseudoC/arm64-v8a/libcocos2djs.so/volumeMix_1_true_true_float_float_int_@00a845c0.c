
/* void cocos2d::AudioMixer::volumeMix<1, true, true, float, float, int>(float*, unsigned long,
   float const*, int*, bool, cocos2d::AudioMixer::track_t*) */

void __thiscall
cocos2d::AudioMixer::volumeMix<1,true,true,float,float,int>
          (AudioMixer *this,float *param_1,ulong param_2,float *param_3,int *param_4,bool param_5,
          track_t *param_6)

{
  track_t *ptVar1;
  track_t *ptVar2;
  track_t *ptVar3;
  AudioMixer *pAVar4;
  AudioMixer *pAVar5;
  short sVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  undefined8 *puVar15;
  int iVar16;
  track_t *this_00;
  float *pfVar17;
  int iVar18;
  ulong uVar19;
  float *pfVar20;
  AudioMixer *pAVar21;
  float *pfVar22;
  float *pfVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  uint uVar33;
  float fVar34;
  undefined1 auVar35 [12];
  undefined1 auVar36 [16];
  byte bVar37;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  int iVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar54;
  byte bVar55;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  int iVar53;
  byte bVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  int iVar62;
  int iVar64;
  int iVar65;
  int iVar66;
  undefined1 auVar63 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  
  this_00 = (track_t *)(ulong)param_5;
                    /* catch() { ... } // from try @ 00a84348 with catch @ 00a845c4 */
                    /* catch() { ... } // from try @ 00a84334 with catch @ 00a845d4 */
  uVar33 = *(int *)(this_00 + 0xbc) - 1;
  if (((ulong)param_4 & 1) != 0) {
    if (uVar33 < 8) {
      iVar16 = *(int *)(this_00 + 0x18);
                    /* catch() { ... } // from try @ 00a84328 with catch @ 00a845ec */
                    /* catch() { ... } // from try @ 00a84314 with catch @ 00a845f4 */
                    /* catch() { ... } // from try @ 00a842ec with catch @ 00a845f8 */
                    /* catch() { ... } // from try @ 00a842d0 with catch @ 00a84600 */
      ptVar1 = this_00 + 0x9c;
                    /* catch() { ... } // from try @ 00a842f4 with catch @ 00a84604 */
      ptVar2 = this_00 + 0xa4;
      ptVar3 = this_00 + 0x1c;
      switch(uVar33) {
      case 0:
        fVar25 = *(float *)ptVar1;
        pfVar17 = param_3;
        if (param_3 == (float *)0x0) {
          do {
                    /* try { // try from 00a846c4 to 00b84717 has its CatchHandler @ 00a846c4
                       catch() { ... } // from try @ 00a846c4 with catch @ 00a846c4
                       catch() { ... } // from try @ 00a84890 with catch @ 00a846c4 */
            param_1 = (float *)((long)param_1 + -1);
            *(float *)this = *(float *)this + fVar25 * *(float *)param_2;
            fVar25 = *(float *)ptVar2 + *(float *)ptVar1;
            *(float *)ptVar1 = fVar25;
            this = this + 4;
            param_2 = (ulong)(param_2 + 4);
          } while (param_1 != (float *)0x0);
        }
        else {
          do {
            fVar32 = *(float *)param_2;
            if (fVar32 <= -16.0) {
              iVar18 = -0x80000000;
            }
            else if (16.0 <= fVar32) {
                    /* catch() { ... } // from try @ 00a84284 with catch @ 00a8466c
                       catch() { ... } // from try @ 00a843bc with catch @ 00a8466c */
              iVar18 = 0x7fffffff;
            }
            else {
                    /* catch() { ... } // from try @ 00a84278 with catch @ 00a84654 */
              uVar33 = 0x3fe00000;
              if (fVar32 * 1.3421773e+08 <= 0.0) {
                uVar33 = 0xbfe00000;
              }
                    /* catch() { ... } // from try @ 00a8426c with catch @ 00a84658 */
                    /* catch() { ... } // from try @ 00a8424c with catch @ 00a8465c */
              iVar18 = (int)((double)((ulong)uVar33 << 0x20) + (double)(fVar32 * 1.3421773e+08));
            }
            param_2 = param_2 + 4;
            *(float *)this = fVar25 * fVar32 + *(float *)this;
            param_1 = (float *)((long)param_1 + -1);
            fVar25 = *(float *)ptVar2 + *(float *)ptVar1;
            *(float *)ptVar1 = fVar25;
            *pfVar17 = (float)((int)*pfVar17 + (*(int *)ptVar3 >> 0x10) * (iVar18 >> 0xc));
            *(int *)ptVar3 = *(int *)ptVar3 + iVar16;
            this = this + 4;
            pfVar17 = pfVar17 + 1;
          } while (param_1 != (float *)0x0);
        }
        break;
      case 1:
        volumeRampMulti<1,2,float,float,float,int,int>
                  ((float *)this,(ulong)param_1,(float *)param_2,(int *)param_3,(float *)ptVar1,
                   (float *)ptVar2,(int *)ptVar3,iVar16);
        break;
      case 2:
        volumeRampMulti<1,3,float,float,float,int,int>
                  ((float *)this,(ulong)param_1,(float *)param_2,(int *)param_3,(float *)ptVar1,
                   (float *)ptVar2,(int *)ptVar3,iVar16);
        break;
      case 3:
        volumeRampMulti<1,4,float,float,float,int,int>
                  ((float *)this,(ulong)param_1,(float *)param_2,(int *)param_3,(float *)ptVar1,
                   (float *)ptVar2,(int *)ptVar3,iVar16);
        break;
      case 4:
        volumeRampMulti<1,5,float,float,float,int,int>
                  ((float *)this,(ulong)param_1,(float *)param_2,(int *)param_3,(float *)ptVar1,
                   (float *)ptVar2,(int *)ptVar3,iVar16);
        break;
      case 5:
        volumeRampMulti<1,6,float,float,float,int,int>
                  ((float *)this,(ulong)param_1,(float *)param_2,(int *)param_3,(float *)ptVar1,
                   (float *)ptVar2,(int *)ptVar3,iVar16);
        break;
      case 6:
        volumeRampMulti<1,7,float,float,float,int,int>
                  ((float *)this,(ulong)param_1,(float *)param_2,(int *)param_3,(float *)ptVar1,
                   (float *)ptVar2,(int *)ptVar3,iVar16);
        break;
      case 7:
        volumeRampMulti<1,8,float,float,float,int,int>
                  ((float *)this,(ulong)param_1,(float *)param_2,(int *)param_3,(float *)ptVar1,
                   (float *)ptVar2,(int *)ptVar3,iVar16);
      }
    }
                    /* try { // try from 00a84890 to 00b84973 has its CatchHandler @ 00a846c4 */
    track_t::adjustVolumeRamp(this_00,param_3 != (float *)0x0,true);
    return;
  }
  if (uVar33 < 8) {
    sVar6 = *(short *)(this_00 + 0x20);
    pAVar4 = (AudioMixer *)(this_00 + 0x94);
    iVar16 = (int)sVar6;
    switch(uVar33) {
    case 0:
                    /* try { // try from 00a84718 to 00b8472f has its CatchHandler @ 00a8490c */
      if (param_3 == (float *)0x0) {
        if (&DAT_00000007 < param_1) {
          if (((AudioMixer *)(param_2 + (long)param_1 * 4) <= this ||
               this + (long)param_1 * 4 <= param_2) &&
             ((AudioMixer *)(this_00 + 0x95) <= this || this + (long)param_1 * 4 <= pAVar4)) {
            fVar25 = *(float *)pAVar4;
            pfVar23 = (float *)((ulong)param_1 & 0xfffffffffffffff8);
            pAVar21 = this + 0x10;
            pfVar17 = (float *)(param_2 + 0x10);
            pfVar22 = pfVar23;
            do {
              fVar32 = pfVar17[-4];
              fVar26 = pfVar17[-3];
              pfVar20 = pfVar17 + -2;
              fVar27 = pfVar17[-1];
              fVar34 = *pfVar17;
              fVar57 = pfVar17[1];
              fVar12 = pfVar17[2];
              fVar13 = pfVar17[3];
              pfVar22 = pfVar22 + -2;
              pfVar17 = pfVar17 + 8;
              *(float *)(pAVar21 + -8) = *(float *)(pAVar21 + -8) + *pfVar20 * fVar25;
              *(float *)(pAVar21 + -4) = *(float *)(pAVar21 + -4) + fVar27 * fVar25;
              *(float *)(pAVar21 + -0x10) = *(float *)(pAVar21 + -0x10) + fVar32 * fVar25;
              *(float *)(pAVar21 + -0xc) = *(float *)(pAVar21 + -0xc) + fVar26 * fVar25;
              *(float *)(pAVar21 + 8) = *(float *)(pAVar21 + 8) + fVar12 * fVar25;
              *(float *)(pAVar21 + 0xc) = *(float *)(pAVar21 + 0xc) + fVar13 * fVar25;
              *(float *)pAVar21 = *(float *)pAVar21 + fVar34 * fVar25;
              *(float *)(pAVar21 + 4) = *(float *)(pAVar21 + 4) + fVar57 * fVar25;
              pAVar21 = pAVar21 + 0x20;
            } while (pfVar22 != (float *)0x0);
            bVar14 = pfVar23 == param_1;
            param_2 = (ulong)(param_2 + (long)pfVar23 * 4);
            param_1 = (float *)((long)param_1 - (long)pfVar23);
            this = this + (long)pfVar23 * 4;
            if (bVar14) {
              return;
            }
          }
        }
        do {
          param_1 = (float *)((long)param_1 + -1);
          *(float *)this = *(float *)this + *(float *)param_2 * *(float *)pAVar4;
          param_2 = (ulong)(param_2 + 4);
          this = this + 4;
        } while (param_1 != (float *)0x0);
      }
      else {
        if (&DAT_00000004 <= param_1) {
                    /* try { // try from 00a84738 to 00b84743 has its CatchHandler @ 00a84908 */
                    /* try { // try from 00a84744 to 00b8474f has its CatchHandler @ 00a84904 */
                    /* try { // try from 00a84750 to 00b8488f has its CatchHandler @ 00a8491c */
          if (((AudioMixer *)(param_2 + (long)param_1 * 4) <= this ||
               this + (long)param_1 * 4 <= param_2) &&
             ((AudioMixer *)(this_00 + 0x95) <= this || this + (long)param_1 * 4 <= pAVar4)) {
            fVar25 = *(float *)pAVar4;
            pfVar20 = (float *)((ulong)param_1 & 0xfffffffffffffffc);
            auVar28 = NEON_fmov(0xc1800000,4);
            auVar29 = NEON_fmov(0x41800000,4);
            auVar30 = NEON_fmov(0xbfe0000000000000,8);
            auVar31 = NEON_fmov(0x3fe0000000000000,8);
            pfVar22 = (float *)param_2;
            pfVar17 = pfVar20;
            pAVar21 = this;
            pfVar23 = param_3;
            do {
              fVar32 = *pfVar22;
              fVar26 = pfVar22[1];
              fVar27 = pfVar22[2];
              fVar34 = pfVar22[3];
              pfVar17 = pfVar17 + -1;
              auVar67._0_8_ = (long)(int)-(uint)(0.0 < fVar27 * 1.3421773e+08);
              auVar67._8_8_ = (long)(int)-(uint)(0.0 < fVar34 * 1.3421773e+08);
              auVar58._0_8_ = (long)(int)-(uint)(0.0 < fVar32 * 1.3421773e+08);
              auVar58._8_8_ = (long)(int)-(uint)(0.0 < fVar26 * 1.3421773e+08);
              auVar59 = auVar30 ^ (auVar30 ^ auVar31) & auVar58;
              auVar61 = auVar30 ^ (auVar30 ^ auVar31) & auVar67;
              uVar11 = *(undefined8 *)(pAVar21 + 8);
              uVar10 = *(undefined8 *)pAVar21;
              auVar38._0_4_ = -(uint)(fVar32 <= auVar28._0_4_);
              auVar38._4_4_ = -(uint)(fVar26 <= auVar28._4_4_);
              auVar38._8_4_ = -(uint)(fVar27 <= auVar28._8_4_);
              auVar38._12_4_ = -(uint)(fVar34 <= auVar28._12_4_);
              iVar62 = -(uint)(auVar29._0_4_ <= fVar32);
              iVar64 = -(uint)(auVar29._4_4_ <= fVar26);
              iVar65 = -(uint)(auVar29._8_4_ <= fVar27);
              iVar66 = -(uint)(auVar29._12_4_ <= fVar34);
              *(float *)(pAVar21 + 8) = fVar27 * fVar25 + (float)uVar11;
              *(float *)(pAVar21 + 0xc) = fVar34 * fVar25 + (float)((ulong)uVar11 >> 0x20);
              *(float *)pAVar21 = fVar32 * fVar25 + (float)uVar10;
              *(float *)(pAVar21 + 4) = fVar26 * fVar25 + (float)((ulong)uVar10 >> 0x20);
              iVar18 = (int)(long)(auVar59._0_8_ + (double)(fVar32 * 1.3421773e+08)) >> 0xc;
              iVar24 = (int)(long)(auVar59._8_8_ + (double)(fVar26 * 1.3421773e+08)) >> 0xc;
              iVar48 = (int)(long)(auVar61._0_8_ + (double)(fVar27 * 1.3421773e+08)) >> 0xc;
              iVar53 = (int)(long)(auVar61._8_8_ + (double)(fVar34 * 1.3421773e+08)) >> 0xc;
              auVar63[0] = (byte)iVar62 & ~(byte)auVar38._0_4_;
              auVar63[1] = (byte)((uint)iVar62 >> 8) & ~(byte)((uint)auVar38._0_4_ >> 8);
              auVar63[2] = (byte)((uint)iVar62 >> 0x10) & ~(byte)((uint)auVar38._0_4_ >> 0x10);
              auVar63[3] = (byte)((uint)iVar62 >> 0x18) & ~(byte)((uint)auVar38._0_4_ >> 0x18);
              auVar63[4] = (byte)iVar64 & ~(byte)auVar38._4_4_;
              auVar63[5] = (byte)((uint)iVar64 >> 8) & ~(byte)((uint)auVar38._4_4_ >> 8);
              auVar63[6] = (byte)((uint)iVar64 >> 0x10) & ~(byte)((uint)auVar38._4_4_ >> 0x10);
              auVar63[7] = (byte)((uint)iVar64 >> 0x18) & ~(byte)((uint)auVar38._4_4_ >> 0x18);
              auVar63[8] = (byte)iVar65 & ~(byte)auVar38._8_4_;
              auVar63[9] = (byte)((uint)iVar65 >> 8) & ~(byte)((uint)auVar38._8_4_ >> 8);
              auVar63[10] = (byte)((uint)iVar65 >> 0x10) & ~(byte)((uint)auVar38._8_4_ >> 0x10);
              auVar63[0xb] = (byte)((uint)iVar65 >> 0x18) & ~(byte)((uint)auVar38._8_4_ >> 0x18);
              auVar63[0xc] = (byte)iVar66 & ~(byte)auVar38._12_4_;
              auVar63[0xd] = (byte)((uint)iVar66 >> 8) & ~(byte)((uint)auVar38._12_4_ >> 8);
              auVar63[0xe] = (byte)((uint)iVar66 >> 0x10) & ~(byte)((uint)auVar38._12_4_ >> 0x10);
              auVar63[0xf] = (byte)((uint)iVar66 >> 0x18) & ~(byte)((uint)auVar38._12_4_ >> 0x18);
              auVar7._8_4_ = 0xfff80000;
              auVar7._0_8_ = 0xfff80000fff80000;
              auVar7._12_4_ = 0xfff80000;
              auVar9._4_4_ = iVar24;
              auVar9._0_4_ = iVar18;
              auVar9._8_4_ = iVar48;
              auVar9._12_4_ = iVar53;
              auVar39._4_4_ = iVar24;
              auVar39._0_4_ = iVar18;
              auVar39._8_4_ = iVar48;
              auVar39._12_4_ = iVar53;
              auVar39 = auVar39 ^ (auVar9 ^ auVar7) & auVar38;
              auVar8._8_4_ = 0x7ffff;
              auVar8._0_8_ = 0x7ffff0007ffff;
              auVar8._12_4_ = 0x7ffff;
              auVar39 = auVar39 ^ (auVar39 ^ auVar8) & auVar63;
              pfVar23[2] = (float)((int)pfVar23[2] + auVar39._8_4_ * (int)sVar6);
              pfVar23[3] = (float)((int)pfVar23[3] + auVar39._12_4_ * iVar16);
              *pfVar23 = (float)((int)*pfVar23 + auVar39._0_4_ * (int)sVar6);
              pfVar23[1] = (float)((int)pfVar23[1] + auVar39._4_4_ * iVar16);
              pfVar22 = pfVar22 + 4;
              pAVar21 = pAVar21 + 0x10;
              pfVar23 = pfVar23 + 4;
            } while (pfVar17 != (float *)0x0);
            bVar14 = pfVar20 == param_1;
            param_2 = (ulong)(param_2 + (long)pfVar20 * 4);
            param_3 = param_3 + (long)pfVar20;
            param_1 = (float *)((long)param_1 - (long)pfVar20);
            this = this + (long)pfVar20 * 4;
            if (bVar14) {
              return;
            }
          }
        }
        do {
          fVar25 = *(float *)param_2;
          if (fVar25 <= -16.0) {
            iVar18 = -0x80000000;
          }
          else if (16.0 <= fVar25) {
            iVar18 = 0x7fffffff;
          }
          else {
            uVar33 = 0x3fe00000;
            if (fVar25 * 1.3421773e+08 <= 0.0) {
              uVar33 = 0xbfe00000;
            }
            iVar18 = (int)((double)((ulong)uVar33 << 0x20) + (double)(fVar25 * 1.3421773e+08));
          }
          *(float *)this = fVar25 * *(float *)pAVar4 + *(float *)this;
          param_1 = (float *)((long)param_1 + -1);
          *param_3 = (float)((int)*param_3 + (iVar18 >> 0xc) * iVar16);
          param_2 = (ulong)(param_2 + 4);
          param_3 = param_3 + 1;
          this = this + 4;
        } while (param_1 != (float *)0x0);
      }
      break;
    case 1:
      if (param_3 == (float *)0x0) {
        pAVar21 = (AudioMixer *)(this_00 + 0x98);
        if ((float *)0x3 < param_1) {
          uVar19 = ((long)param_1 - 1U) * 8;
          if (((uVar19 < ~(ulong)(this + 4) || uVar19 - ~(ulong)(this + 4) == 0) &&
              ((long)param_1 - 1U >> 0x3d == 0)) &&
             (uVar19 < ~(ulong)this || uVar19 - ~(ulong)this == 0)) {
            if (((AudioMixer *)(param_2 + (long)param_1 * 4) <= this ||
                 this + (long)param_1 * 8 <= param_2) &&
               ((AudioMixer *)(this_00 + 0x99) <= this || this + (long)param_1 * 8 <= pAVar21)) {
              pfVar22 = (float *)((ulong)param_1 & 0xfffffffffffffffc);
              pAVar5 = this + (long)pfVar22 * 8;
              puVar15 = (undefined8 *)param_2;
              pfVar17 = pfVar22;
              do {
                fVar34 = *(float *)pAVar4;
                fVar57 = *(float *)pAVar21;
                    /* try { // try from 00a84dac to 00b84e8f has its CatchHandler @ 00a84bec */
                pfVar17 = pfVar17 + -1;
                fVar25 = (float)*puVar15;
                fVar32 = (float)((ulong)*puVar15 >> 0x20);
                fVar26 = (float)puVar15[1];
                fVar27 = (float)((ulong)puVar15[1] >> 0x20);
                *(float *)this = *(float *)this + fVar25 * fVar34;
                *(float *)(this + 4) = *(float *)(this + 4) + fVar25 * fVar57;
                *(float *)(this + 8) = *(float *)(this + 8) + fVar32 * fVar34;
                *(float *)(this + 0xc) = *(float *)(this + 0xc) + fVar32 * fVar57;
                *(float *)(this + 0x10) = *(float *)(this + 0x10) + fVar26 * fVar34;
                *(float *)(this + 0x14) = *(float *)(this + 0x14) + fVar26 * fVar57;
                *(float *)(this + 0x18) = *(float *)(this + 0x18) + fVar27 * fVar34;
                *(float *)(this + 0x1c) = *(float *)(this + 0x1c) + fVar27 * fVar57;
                this = this + 0x20;
                puVar15 = puVar15 + 2;
              } while (pfVar17 != (float *)0x0);
              bVar14 = pfVar22 == param_1;
              param_2 = (ulong)(param_2 + (long)pfVar22 * 4);
              param_1 = (float *)((long)param_1 - (long)pfVar22);
              this = pAVar5;
              if (bVar14) {
                return;
              }
            }
          }
        }
        do {
          param_1 = (float *)((long)param_1 + -1);
          *(float *)this = *(float *)this + *(float *)param_2 * *(float *)pAVar4;
                    /* try { // try from 00a84b10 to 00b84beb has its CatchHandler @ 00a84974 */
          *(float *)(this + 4) = *(float *)(this + 4) + *(float *)param_2 * *(float *)pAVar21;
          param_2 = (ulong)(param_2 + 4);
          this = this + 8;
        } while (param_1 != (float *)0x0);
      }
      else {
        pAVar21 = (AudioMixer *)(this_00 + 0x98);
        if ((float *)0x3 < param_1) {
          uVar19 = ((long)param_1 - 1U) * 8;
          if (((uVar19 < ~(ulong)(this + 4) || uVar19 - ~(ulong)(this + 4) == 0) &&
              ((long)param_1 - 1U >> 0x3d == 0)) &&
             (uVar19 < ~(ulong)this || uVar19 - ~(ulong)this == 0)) {
                    /* catch() { ... } // from try @ 00a849f4 with catch @ 00a84b7c */
                    /* catch() { ... } // from try @ 00a849e8 with catch @ 00a84b80 */
                    /* catch() { ... } // from try @ 00a849c8 with catch @ 00a84b84 */
                    /* catch() { ... } // from try @ 00a84a00 with catch @ 00a84b94 */
            if (((AudioMixer *)(param_2 + (long)param_1 * 4) <= this ||
                 this + (long)param_1 * 8 <= param_2) &&
               ((AudioMixer *)(this_00 + 0x99) <= this || this + (long)param_1 * 8 <= pAVar21)) {
              pfVar23 = (float *)((ulong)param_1 & 0xfffffffffffffffc);
              auVar28 = NEON_fmov(0xc1800000,4);
              auVar29 = NEON_fmov(0x41800000,4);
              auVar30 = NEON_fmov(0xbfe0000000000000,8);
              auVar31 = NEON_fmov(0x3fe0000000000000,8);
              pAVar5 = this + (long)pfVar23 * 8;
              auVar59._8_4_ = 0x80000000;
              auVar59._0_8_ = 0x8000000080000000;
              auVar59._12_4_ = 0x80000000;
              puVar15 = (undefined8 *)param_2;
              pfVar17 = pfVar23;
              pfVar22 = param_3;
              do {
                fVar26 = (float)puVar15[1];
                fVar27 = (float)((ulong)puVar15[1] >> 0x20);
                fVar25 = (float)*puVar15;
                fVar32 = (float)((ulong)*puVar15 >> 0x20);
                fVar34 = *(float *)pAVar4;
                pfVar17 = pfVar17 + -1;
                    /* try { // try from 00a84bec to 00b84c3f has its CatchHandler @ 00a84bec
                       catch() { ... } // from try @ 00a84bec with catch @ 00a84bec
                       catch() { ... } // from try @ 00a84dac with catch @ 00a84bec */
                auVar68._0_8_ = (long)(int)-(uint)(0.0 < fVar26 * 1.3421773e+08);
                auVar68._8_8_ = (long)(int)-(uint)(0.0 < fVar27 * 1.3421773e+08);
                auVar60._0_8_ = (long)(int)-(uint)(0.0 < fVar25 * 1.3421773e+08);
                auVar60._8_8_ = (long)(int)-(uint)(0.0 < fVar32 * 1.3421773e+08);
                auVar61 = auVar30 ^ (auVar30 ^ auVar31) & auVar60;
                auVar69 = auVar30 ^ (auVar30 ^ auVar31) & auVar68;
                auVar36._0_4_ = (undefined4)(long)(auVar61._0_8_ + (double)(fVar25 * 1.3421773e+08))
                ;
                auVar36._4_4_ = (int)(long)(auVar61._8_8_ + (double)(fVar32 * 1.3421773e+08));
                auVar36._8_4_ = (int)(long)(auVar69._0_8_ + (double)(fVar26 * 1.3421773e+08));
                auVar36._12_4_ = (int)(long)(auVar69._8_8_ + (double)(fVar27 * 1.3421773e+08));
                fVar57 = *(float *)pAVar21;
                auVar61._0_4_ = -(uint)(fVar25 <= auVar28._0_4_);
                auVar61._4_4_ = -(uint)(fVar32 <= auVar28._4_4_);
                auVar61._8_4_ = -(uint)(fVar26 <= auVar28._8_4_);
                auVar61._12_4_ = -(uint)(fVar27 <= auVar28._12_4_);
                iVar18 = -(uint)(auVar29._0_4_ <= fVar25);
                iVar24 = -(uint)(auVar29._4_4_ <= fVar32);
                iVar48 = -(uint)(auVar29._8_4_ <= fVar26);
                iVar53 = -(uint)(auVar29._12_4_ <= fVar27);
                bVar37 = (byte)iVar18 & ~(byte)auVar61._0_4_;
                bVar40 = (byte)((uint)iVar18 >> 8) & ~(byte)((uint)auVar61._0_4_ >> 8);
                bVar41 = (byte)((uint)iVar18 >> 0x10) & ~(byte)((uint)auVar61._0_4_ >> 0x10);
                bVar42 = (byte)((uint)iVar18 >> 0x18) & ~(byte)((uint)auVar61._0_4_ >> 0x18);
                bVar43 = (byte)iVar24 & ~(byte)auVar61._4_4_;
                bVar44 = (byte)((uint)iVar24 >> 8) & ~(byte)((uint)auVar61._4_4_ >> 8);
                bVar45 = (byte)((uint)iVar24 >> 0x10) & ~(byte)((uint)auVar61._4_4_ >> 0x10);
                bVar46 = (byte)((uint)iVar24 >> 0x18) & ~(byte)((uint)auVar61._4_4_ >> 0x18);
                bVar47 = (byte)iVar48 & ~(byte)auVar61._8_4_;
                bVar49 = (byte)((uint)iVar48 >> 8) & ~(byte)((uint)auVar61._8_4_ >> 8);
                bVar50 = (byte)((uint)iVar48 >> 0x10) & ~(byte)((uint)auVar61._8_4_ >> 0x10);
                bVar51 = (byte)((uint)iVar48 >> 0x18) & ~(byte)((uint)auVar61._8_4_ >> 0x18);
                bVar52 = (byte)iVar53 & ~(byte)auVar61._12_4_;
                bVar54 = (byte)((uint)iVar53 >> 8) & ~(byte)((uint)auVar61._12_4_ >> 8);
                bVar55 = (byte)((uint)iVar53 >> 0x10) & ~(byte)((uint)auVar61._12_4_ >> 0x10);
                bVar56 = (byte)((uint)iVar53 >> 0x18) & ~(byte)((uint)auVar61._12_4_ >> 0x18);
                    /* try { // try from 00a84c40 to 00b84c57 has its CatchHandler @ 00a84e28 */
                auVar36 = auVar36 ^ (auVar36 ^ auVar59) & auVar61;
                *(float *)this = fVar25 * fVar34 + *(float *)this;
                *(float *)(this + 4) = fVar25 * fVar57 + *(float *)(this + 4);
                *(float *)(this + 8) = fVar32 * fVar34 + *(float *)(this + 8);
                *(float *)(this + 0xc) = fVar32 * fVar57 + *(float *)(this + 0xc);
                *(float *)(this + 0x10) = fVar26 * fVar34 + *(float *)(this + 0x10);
                *(float *)(this + 0x14) = fVar26 * fVar57 + *(float *)(this + 0x14);
                *(float *)(this + 0x18) = fVar27 * fVar34 + *(float *)(this + 0x18);
                *(float *)(this + 0x1c) = fVar27 * fVar57 + *(float *)(this + 0x1c);
                this = this + 0x20;
                uVar33 = CONCAT13(bVar42 & 0x7f | auVar36[3] & ~bVar42,
                                  CONCAT12(bVar41 | auVar36[2] & ~bVar41,
                                           CONCAT11(bVar40 | auVar36[1] & ~bVar40,
                                                    bVar37 | auVar36[0] & ~bVar37)));
                auVar35._0_8_ =
                     CONCAT17(bVar46 & 0x7f | auVar36[7] & ~bVar46,
                              CONCAT16(bVar45 | auVar36[6] & ~bVar45,
                                       CONCAT15(bVar44 | auVar36[5] & ~bVar44,
                                                CONCAT14(bVar43 | auVar36[4] & ~bVar43,uVar33))));
                auVar35[8] = bVar47 | auVar36[8] & ~bVar47;
                auVar35[9] = bVar49 | auVar36[9] & ~bVar49;
                auVar35[10] = bVar50 | auVar36[10] & ~bVar50;
                auVar35[0xb] = bVar51 & 0x7f | auVar36[0xb] & ~bVar51;
                auVar69[0xc] = bVar52 | auVar36[0xc] & ~bVar52;
                auVar69._0_12_ = auVar35;
                auVar69[0xd] = bVar54 | auVar36[0xd] & ~bVar54;
                auVar69[0xe] = bVar55 | auVar36[0xe] & ~bVar55;
                auVar69[0xf] = bVar56 & 0x7f | auVar36[0xf] & ~bVar56;
                iVar18 = (int)((ulong)auVar35._0_8_ >> 0x20) * 2;
                iVar24 = auVar35._8_4_ * 2;
                iVar48 = auVar69._12_4_ * 2;
                    /* try { // try from 00a84c60 to 00b84c6b has its CatchHandler @ 00a84e24 */
                    /* try { // try from 00a84c6c to 00b84c77 has its CatchHandler @ 00a84e20 */
                *(ulong *)(pfVar22 + 2) =
                     CONCAT44((int)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) +
                              (iVar48 - (iVar48 >> 0x1f) >> 0xd) * iVar16,
                              (int)*(undefined8 *)(pfVar22 + 2) +
                              (iVar24 - (iVar24 >> 0x1f) >> 0xd) * (int)sVar6);
                *(ulong *)pfVar22 =
                     CONCAT44((int)((ulong)*(undefined8 *)pfVar22 >> 0x20) +
                              (iVar18 - (iVar18 >> 0x1f) >> 0xd) * iVar16,
                              (int)*(undefined8 *)pfVar22 +
                              ((int)(uVar33 * 2 + ((uVar33 & 0x7fffffff) >> 0x1e)) >> 0xd) *
                              (int)sVar6);
                puVar15 = puVar15 + 2;
                pfVar22 = pfVar22 + 4;
              } while (pfVar17 != (float *)0x0);
              bVar14 = pfVar23 == param_1;
              param_2 = (ulong)(param_2 + (long)pfVar23 * 4);
              param_3 = param_3 + (long)pfVar23;
              param_1 = (float *)((long)param_1 - (long)pfVar23);
              this = pAVar5;
                    /* try { // try from 00a84c78 to 00b84dab has its CatchHandler @ 00a84e38 */
              if (bVar14) {
                return;
              }
            }
          }
        }
        do {
          fVar25 = *(float *)param_2;
          if (fVar25 <= -16.0) {
                    /* catch() { ... } // from try @ 00a84738 with catch @ 00a84908 */
            iVar18 = -0x80000000;
                    /* catch() { ... } // from try @ 00a84718 with catch @ 00a8490c */
          }
          else if (16.0 <= fVar25) {
            iVar18 = 0x7fffffff;
          }
          else {
            uVar33 = 0x3fe00000;
            if (fVar25 * 1.3421773e+08 <= 0.0) {
              uVar33 = 0xbfe00000;
            }
            iVar18 = (int)((double)((ulong)uVar33 << 0x20) + (double)(fVar25 * 1.3421773e+08));
                    /* catch() { ... } // from try @ 00a84744 with catch @ 00a84904 */
          }
                    /* catch() { ... } // from try @ 00a84750 with catch @ 00a8491c */
          *(float *)this = fVar25 * *(float *)pAVar4 + *(float *)this;
          fVar25 = *(float *)param_2;
          if (fVar25 <= -16.0) {
            iVar24 = -0x80000000;
          }
          else if (16.0 <= fVar25) {
            iVar24 = 0x7fffffff;
          }
          else {
            uVar33 = 0x3fe00000;
            if (fVar25 * 1.3421773e+08 <= 0.0) {
              uVar33 = 0xbfe00000;
            }
            iVar24 = (int)((double)((ulong)uVar33 << 0x20) + (double)(fVar25 * 1.3421773e+08));
          }
          iVar24 = iVar24 + iVar18;
                    /* try { // try from 00a84974 to 00b849c7 has its CatchHandler @ 00a84974
                       catch() { ... } // from try @ 00a84974 with catch @ 00a84974
                       catch() { ... } // from try @ 00a84b10 with catch @ 00a84974 */
          *(float *)(this + 4) = fVar25 * *(float *)pAVar21 + *(float *)(this + 4);
          if (iVar24 < 0) {
            iVar24 = iVar24 + 1;
          }
          param_1 = (float *)((long)param_1 + -1);
          *param_3 = (float)((int)*param_3 + (iVar24 >> 0xd) * iVar16);
          param_2 = (ulong)(param_2 + 4);
          param_3 = param_3 + 1;
          this = this + 8;
        } while (param_1 != (float *)0x0);
      }
      break;
    case 2:
      volumeMulti<1,3,float,float,float,int,short>
                ((float *)this,(ulong)param_1,(float *)param_2,(int *)param_3,(float *)pAVar4,sVar6)
      ;
      return;
    case 3:
      volumeMulti<1,4,float,float,float,int,short>
                ((float *)this,(ulong)param_1,(float *)param_2,(int *)param_3,(float *)pAVar4,sVar6)
      ;
      return;
    case 4:
                    /* try { // try from 00a849c8 to 00b849df has its CatchHandler @ 00a84b84 */
      volumeMulti<1,5,float,float,float,int,short>
                ((float *)this,(ulong)param_1,(float *)param_2,(int *)param_3,(float *)pAVar4,sVar6)
      ;
      return;
    case 5:
      volumeMulti<1,6,float,float,float,int,short>
                ((float *)this,(ulong)param_1,(float *)param_2,(int *)param_3,(float *)pAVar4,sVar6)
      ;
      return;
    case 6:
                    /* try { // try from 00a849e8 to 00b849f3 has its CatchHandler @ 00a84b80 */
      volumeMulti<1,7,float,float,float,int,short>
                ((cocos2d *)this,param_1,param_2,param_3,(int *)pAVar4,(float *)(long)sVar6,
                 (short)param_6);
      return;
    case 7:
                    /* try { // try from 00a849f4 to 00b849ff has its CatchHandler @ 00a84b7c */
                    /* try { // try from 00a84a00 to 00b84b0f has its CatchHandler @ 00a84b94 */
      volumeMulti<1,8,float,float,float,int,short>
                ((float *)this,(ulong)param_1,(float *)param_2,(int *)param_3,(float *)pAVar4,sVar6)
      ;
      return;
    }
  }
  return;
}

