
/* void cocos2d::experimental::AudioMixer::volumeMix<1, true, true, float, float, int>(float*,
   unsigned long, float const*, int*, bool, cocos2d::experimental::AudioMixer::track_t*) */

void __thiscall
cocos2d::experimental::AudioMixer::volumeMix<1,true,true,float,float,int>
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
  AudioMixer *pAVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  uint uVar33;
  undefined1 auVar35 [16];
  byte bVar36;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  int iVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar53;
  byte bVar54;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int iVar52;
  byte bVar55;
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int iVar61;
  int iVar63;
  int iVar64;
  int iVar65;
  undefined1 auVar62 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar34 [12];
  
  this_00 = (track_t *)(ulong)param_5;
  uVar33 = *(int *)(this_00 + 0xbc) - 1;
  if (((ulong)param_4 & 1) != 0) {
    if (uVar33 < 8) {
      iVar16 = *(int *)(this_00 + 0x18);
      ptVar1 = this_00 + 0x9c;
      ptVar2 = this_00 + 0xa4;
      ptVar3 = this_00 + 0x1c;
      switch(uVar33) {
      case 0:
        fVar24 = *(float *)ptVar1;
        pfVar17 = param_3;
        if (param_3 == (float *)0x0) {
          do {
            param_1 = (float *)((long)param_1 + -1);
            *(float *)this = *(float *)this + fVar24 * *(float *)param_2;
            fVar24 = *(float *)ptVar2 + *(float *)ptVar1;
            *(float *)ptVar1 = fVar24;
            this = this + 4;
            param_2 = (ulong)(param_2 + 4);
          } while (param_1 != (float *)0x0);
        }
        else {
          do {
            fVar30 = *(float *)param_2;
            if (fVar30 <= -16.0) {
              iVar18 = -0x80000000;
            }
            else if (16.0 <= fVar30) {
              iVar18 = 0x7fffffff;
            }
            else {
              fVar25 = 0.5;
              if (fVar30 * 1.3421773e+08 <= 0.0) {
                fVar25 = -0.5;
              }
              iVar18 = (int)(fVar25 + fVar30 * 1.3421773e+08);
            }
            param_2 = param_2 + 4;
            *(float *)this = fVar24 * fVar30 + *(float *)this;
            param_1 = (float *)((long)param_1 + -1);
            fVar24 = *(float *)ptVar2 + *(float *)ptVar1;
            *(float *)ptVar1 = fVar24;
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
    track_t::adjustVolumeRamp(this_00,param_3 != (float *)0x0,true);
    return;
  }
  if (uVar33 < 8) {
    sVar6 = *(short *)(this_00 + 0x20);
    pAVar4 = (AudioMixer *)(this_00 + 0x94);
    iVar16 = (int)sVar6;
    switch(uVar33) {
    case 0:
      if (param_3 == (float *)0x0) {
        if ((float *)0x7 < param_1) {
          if (((AudioMixer *)(param_2 + (long)param_1 * 4) <= this ||
               this + (long)param_1 * 4 <= param_2) &&
             ((AudioMixer *)(this_00 + 0x95) <= this || this + (long)param_1 * 4 <= pAVar4)) {
            fVar24 = *(float *)pAVar4;
            pfVar22 = (float *)((ulong)param_1 & 0xfffffffffffffff8);
            pAVar19 = this + 0x10;
            pfVar17 = (float *)(param_2 + 0x10);
            pfVar20 = pfVar22;
            do {
              fVar30 = pfVar17[-4];
              fVar25 = pfVar17[-3];
              pfVar21 = pfVar17 + -2;
              fVar26 = pfVar17[-1];
              fVar32 = *pfVar17;
              fVar56 = pfVar17[1];
              fVar12 = pfVar17[2];
              fVar13 = pfVar17[3];
              pfVar20 = pfVar20 + -2;
              pfVar17 = pfVar17 + 8;
              *(float *)(pAVar19 + -8) = *(float *)(pAVar19 + -8) + *pfVar21 * fVar24;
              *(float *)(pAVar19 + -4) = *(float *)(pAVar19 + -4) + fVar26 * fVar24;
              *(float *)(pAVar19 + -0x10) = *(float *)(pAVar19 + -0x10) + fVar30 * fVar24;
              *(float *)(pAVar19 + -0xc) = *(float *)(pAVar19 + -0xc) + fVar25 * fVar24;
              *(float *)(pAVar19 + 8) = *(float *)(pAVar19 + 8) + fVar12 * fVar24;
              *(float *)(pAVar19 + 0xc) = *(float *)(pAVar19 + 0xc) + fVar13 * fVar24;
              *(float *)pAVar19 = *(float *)pAVar19 + fVar32 * fVar24;
              *(float *)(pAVar19 + 4) = *(float *)(pAVar19 + 4) + fVar56 * fVar24;
              pAVar19 = pAVar19 + 0x20;
            } while (pfVar20 != (float *)0x0);
            bVar14 = pfVar22 == param_1;
            param_2 = (ulong)(param_2 + (long)pfVar22 * 4);
            param_1 = (float *)((long)param_1 - (long)pfVar22);
            this = this + (long)pfVar22 * 4;
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
        if ((float *)0x3 < param_1) {
          if (((AudioMixer *)(param_2 + (long)param_1 * 4) <= this ||
               this + (long)param_1 * 4 <= param_2) &&
             ((AudioMixer *)(this_00 + 0x95) <= this || this + (long)param_1 * 4 <= pAVar4)) {
            fVar24 = *(float *)pAVar4;
            pfVar21 = (float *)((ulong)param_1 & 0xfffffffffffffffc);
            auVar27 = NEON_fmov(0xc1800000,4);
            auVar28 = NEON_fmov(0x41800000,4);
            auVar29 = NEON_fmov(0xbfe0000000000000,8);
            auVar31 = NEON_fmov(0x3fe0000000000000,8);
            pfVar20 = (float *)param_2;
            pfVar17 = pfVar21;
            pAVar19 = this;
            pfVar22 = param_3;
            do {
              fVar30 = *pfVar20;
              fVar25 = pfVar20[1];
              fVar26 = pfVar20[2];
              fVar32 = pfVar20[3];
              pfVar17 = pfVar17 + -1;
              auVar66._0_8_ = (long)(int)-(uint)(0.0 < fVar26 * 1.3421773e+08);
              auVar66._8_8_ = (long)(int)-(uint)(0.0 < fVar32 * 1.3421773e+08);
              auVar57._0_8_ = (long)(int)-(uint)(0.0 < fVar30 * 1.3421773e+08);
              auVar57._8_8_ = (long)(int)-(uint)(0.0 < fVar25 * 1.3421773e+08);
              auVar58 = auVar29 ^ (auVar29 ^ auVar31) & auVar57;
              auVar60 = auVar29 ^ (auVar29 ^ auVar31) & auVar66;
              uVar11 = *(undefined8 *)(pAVar19 + 8);
              uVar10 = *(undefined8 *)pAVar19;
              auVar37._0_4_ = -(uint)(fVar30 <= auVar27._0_4_);
              auVar37._4_4_ = -(uint)(fVar25 <= auVar27._4_4_);
              auVar37._8_4_ = -(uint)(fVar26 <= auVar27._8_4_);
              auVar37._12_4_ = -(uint)(fVar32 <= auVar27._12_4_);
              iVar61 = -(uint)(auVar28._0_4_ <= fVar30);
              iVar63 = -(uint)(auVar28._4_4_ <= fVar25);
              iVar64 = -(uint)(auVar28._8_4_ <= fVar26);
              iVar65 = -(uint)(auVar28._12_4_ <= fVar32);
              *(float *)(pAVar19 + 8) = fVar26 * fVar24 + (float)uVar11;
              *(float *)(pAVar19 + 0xc) = fVar32 * fVar24 + (float)((ulong)uVar11 >> 0x20);
              *(float *)pAVar19 = fVar30 * fVar24 + (float)uVar10;
              *(float *)(pAVar19 + 4) = fVar25 * fVar24 + (float)((ulong)uVar10 >> 0x20);
              iVar18 = (int)(long)(auVar58._0_8_ + (double)(fVar30 * 1.3421773e+08)) >> 0xc;
              iVar23 = (int)(long)(auVar58._8_8_ + (double)(fVar25 * 1.3421773e+08)) >> 0xc;
              iVar47 = (int)(long)(auVar60._0_8_ + (double)(fVar26 * 1.3421773e+08)) >> 0xc;
              iVar52 = (int)(long)(auVar60._8_8_ + (double)(fVar32 * 1.3421773e+08)) >> 0xc;
              auVar62[0] = (byte)iVar61 & ~(byte)auVar37._0_4_;
              auVar62[1] = (byte)((uint)iVar61 >> 8) & ~(byte)((uint)auVar37._0_4_ >> 8);
              auVar62[2] = (byte)((uint)iVar61 >> 0x10) & ~(byte)((uint)auVar37._0_4_ >> 0x10);
              auVar62[3] = (byte)((uint)iVar61 >> 0x18) & ~(byte)((uint)auVar37._0_4_ >> 0x18);
              auVar62[4] = (byte)iVar63 & ~(byte)auVar37._4_4_;
              auVar62[5] = (byte)((uint)iVar63 >> 8) & ~(byte)((uint)auVar37._4_4_ >> 8);
              auVar62[6] = (byte)((uint)iVar63 >> 0x10) & ~(byte)((uint)auVar37._4_4_ >> 0x10);
              auVar62[7] = (byte)((uint)iVar63 >> 0x18) & ~(byte)((uint)auVar37._4_4_ >> 0x18);
              auVar62[8] = (byte)iVar64 & ~(byte)auVar37._8_4_;
              auVar62[9] = (byte)((uint)iVar64 >> 8) & ~(byte)((uint)auVar37._8_4_ >> 8);
              auVar62[10] = (byte)((uint)iVar64 >> 0x10) & ~(byte)((uint)auVar37._8_4_ >> 0x10);
              auVar62[0xb] = (byte)((uint)iVar64 >> 0x18) & ~(byte)((uint)auVar37._8_4_ >> 0x18);
              auVar62[0xc] = (byte)iVar65 & ~(byte)auVar37._12_4_;
              auVar62[0xd] = (byte)((uint)iVar65 >> 8) & ~(byte)((uint)auVar37._12_4_ >> 8);
              auVar62[0xe] = (byte)((uint)iVar65 >> 0x10) & ~(byte)((uint)auVar37._12_4_ >> 0x10);
              auVar62[0xf] = (byte)((uint)iVar65 >> 0x18) & ~(byte)((uint)auVar37._12_4_ >> 0x18);
              auVar7._8_4_ = 0xfff80000;
              auVar7._0_8_ = 0xfff80000fff80000;
              auVar7._12_4_ = 0xfff80000;
              auVar9._4_4_ = iVar23;
              auVar9._0_4_ = iVar18;
              auVar9._8_4_ = iVar47;
              auVar9._12_4_ = iVar52;
              auVar38._4_4_ = iVar23;
              auVar38._0_4_ = iVar18;
              auVar38._8_4_ = iVar47;
              auVar38._12_4_ = iVar52;
              auVar38 = auVar38 ^ (auVar9 ^ auVar7) & auVar37;
              auVar8._8_4_ = 0x7ffff;
              auVar8._0_8_ = 0x7ffff0007ffff;
              auVar8._12_4_ = 0x7ffff;
              auVar38 = auVar38 ^ (auVar38 ^ auVar8) & auVar62;
              pfVar22[2] = (float)((int)pfVar22[2] + auVar38._8_4_ * (int)sVar6);
              pfVar22[3] = (float)((int)pfVar22[3] + auVar38._12_4_ * iVar16);
              *pfVar22 = (float)((int)*pfVar22 + auVar38._0_4_ * (int)sVar6);
              pfVar22[1] = (float)((int)pfVar22[1] + auVar38._4_4_ * iVar16);
              pfVar20 = pfVar20 + 4;
              pAVar19 = pAVar19 + 0x10;
              pfVar22 = pfVar22 + 4;
            } while (pfVar17 != (float *)0x0);
            bVar14 = pfVar21 == param_1;
            param_2 = (ulong)(param_2 + (long)pfVar21 * 4);
            param_3 = param_3 + (long)pfVar21;
            param_1 = (float *)((long)param_1 - (long)pfVar21);
            this = this + (long)pfVar21 * 4;
            if (bVar14) {
              return;
            }
          }
        }
        do {
          fVar24 = *(float *)param_2;
          if (fVar24 <= -16.0) {
            iVar18 = -0x80000000;
          }
          else if (16.0 <= fVar24) {
            iVar18 = 0x7fffffff;
          }
          else {
            fVar30 = 0.5;
            if (fVar24 * 1.3421773e+08 <= 0.0) {
              fVar30 = -0.5;
            }
            iVar18 = (int)(fVar30 + fVar24 * 1.3421773e+08);
          }
          *(float *)this = fVar24 * *(float *)pAVar4 + *(float *)this;
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
        pAVar19 = (AudioMixer *)(this_00 + 0x98);
        if ((float *)0x3 < param_1) {
          if (((AudioMixer *)(param_2 + (long)param_1 * 4) <= this ||
               this + (long)param_1 * 8 <= param_2) &&
             ((AudioMixer *)(this_00 + 0x99) <= this || this + (long)param_1 * 8 <= pAVar19)) {
            pfVar20 = (float *)((ulong)param_1 & 0xfffffffffffffffc);
            pAVar5 = this + (long)pfVar20 * 8;
            puVar15 = (undefined8 *)param_2;
            pfVar17 = pfVar20;
            do {
              fVar32 = *(float *)pAVar4;
              fVar56 = *(float *)pAVar19;
              pfVar17 = pfVar17 + -1;
              fVar24 = (float)*puVar15;
              fVar30 = (float)((ulong)*puVar15 >> 0x20);
              fVar25 = (float)puVar15[1];
              fVar26 = (float)((ulong)puVar15[1] >> 0x20);
              *(float *)this = *(float *)this + fVar24 * fVar32;
              *(float *)(this + 4) = *(float *)(this + 4) + fVar24 * fVar56;
              *(float *)(this + 8) = *(float *)(this + 8) + fVar30 * fVar32;
              *(float *)(this + 0xc) = *(float *)(this + 0xc) + fVar30 * fVar56;
              *(float *)(this + 0x10) = *(float *)(this + 0x10) + fVar25 * fVar32;
              *(float *)(this + 0x14) = *(float *)(this + 0x14) + fVar25 * fVar56;
              *(float *)(this + 0x18) = *(float *)(this + 0x18) + fVar26 * fVar32;
              *(float *)(this + 0x1c) = *(float *)(this + 0x1c) + fVar26 * fVar56;
              this = this + 0x20;
              puVar15 = puVar15 + 2;
            } while (pfVar17 != (float *)0x0);
            bVar14 = pfVar20 == param_1;
            param_2 = (ulong)(param_2 + (long)pfVar20 * 4);
            param_1 = (float *)((long)param_1 - (long)pfVar20);
            this = pAVar5;
            if (bVar14) {
              return;
            }
          }
        }
        do {
          param_1 = (float *)((long)param_1 + -1);
          *(float *)this = *(float *)this + *(float *)param_2 * *(float *)pAVar4;
          *(float *)(this + 4) = *(float *)(this + 4) + *(float *)param_2 * *(float *)pAVar19;
          this = this + 8;
          param_2 = (ulong)(param_2 + 4);
        } while (param_1 != (float *)0x0);
      }
      else {
        pAVar19 = (AudioMixer *)(this_00 + 0x98);
        if ((float *)0x3 < param_1) {
          if (((AudioMixer *)(param_2 + (long)param_1 * 4) <= this ||
               this + (long)param_1 * 8 <= param_2) &&
             ((AudioMixer *)(this_00 + 0x99) <= this || this + (long)param_1 * 8 <= pAVar19)) {
            pfVar22 = (float *)((ulong)param_1 & 0xfffffffffffffffc);
            auVar27 = NEON_fmov(0xc1800000,4);
            auVar28 = NEON_fmov(0x41800000,4);
            auVar29 = NEON_fmov(0xbfe0000000000000,8);
            auVar31 = NEON_fmov(0x3fe0000000000000,8);
            pAVar5 = this + (long)pfVar22 * 8;
            auVar58._8_4_ = 0x80000000;
            auVar58._0_8_ = 0x8000000080000000;
            auVar58._12_4_ = 0x80000000;
            puVar15 = (undefined8 *)param_2;
            pfVar17 = pfVar22;
            pfVar20 = param_3;
            do {
              fVar25 = (float)puVar15[1];
              fVar26 = (float)((ulong)puVar15[1] >> 0x20);
              fVar24 = (float)*puVar15;
              fVar30 = (float)((ulong)*puVar15 >> 0x20);
              fVar32 = *(float *)pAVar4;
              pfVar17 = pfVar17 + -1;
              auVar67._0_8_ = (long)(int)-(uint)(0.0 < fVar25 * 1.3421773e+08);
              auVar67._8_8_ = (long)(int)-(uint)(0.0 < fVar26 * 1.3421773e+08);
              auVar59._0_8_ = (long)(int)-(uint)(0.0 < fVar24 * 1.3421773e+08);
              auVar59._8_8_ = (long)(int)-(uint)(0.0 < fVar30 * 1.3421773e+08);
              auVar60 = auVar29 ^ (auVar29 ^ auVar31) & auVar59;
              auVar68 = auVar29 ^ (auVar29 ^ auVar31) & auVar67;
              auVar35._0_4_ = (undefined4)(long)(auVar60._0_8_ + (double)(fVar24 * 1.3421773e+08));
              auVar35._4_4_ = (int)(long)(auVar60._8_8_ + (double)(fVar30 * 1.3421773e+08));
              auVar35._8_4_ = (int)(long)(auVar68._0_8_ + (double)(fVar25 * 1.3421773e+08));
              auVar35._12_4_ = (int)(long)(auVar68._8_8_ + (double)(fVar26 * 1.3421773e+08));
              fVar56 = *(float *)pAVar19;
              auVar60._0_4_ = -(uint)(fVar24 <= auVar27._0_4_);
              auVar60._4_4_ = -(uint)(fVar30 <= auVar27._4_4_);
              auVar60._8_4_ = -(uint)(fVar25 <= auVar27._8_4_);
              auVar60._12_4_ = -(uint)(fVar26 <= auVar27._12_4_);
              iVar18 = -(uint)(auVar28._0_4_ <= fVar24);
              iVar23 = -(uint)(auVar28._4_4_ <= fVar30);
              iVar47 = -(uint)(auVar28._8_4_ <= fVar25);
              iVar52 = -(uint)(auVar28._12_4_ <= fVar26);
              bVar36 = (byte)iVar18 & ~(byte)auVar60._0_4_;
              bVar39 = (byte)((uint)iVar18 >> 8) & ~(byte)((uint)auVar60._0_4_ >> 8);
              bVar40 = (byte)((uint)iVar18 >> 0x10) & ~(byte)((uint)auVar60._0_4_ >> 0x10);
              bVar41 = (byte)((uint)iVar18 >> 0x18) & ~(byte)((uint)auVar60._0_4_ >> 0x18);
              bVar42 = (byte)iVar23 & ~(byte)auVar60._4_4_;
              bVar43 = (byte)((uint)iVar23 >> 8) & ~(byte)((uint)auVar60._4_4_ >> 8);
              bVar44 = (byte)((uint)iVar23 >> 0x10) & ~(byte)((uint)auVar60._4_4_ >> 0x10);
              bVar45 = (byte)((uint)iVar23 >> 0x18) & ~(byte)((uint)auVar60._4_4_ >> 0x18);
              bVar46 = (byte)iVar47 & ~(byte)auVar60._8_4_;
              bVar48 = (byte)((uint)iVar47 >> 8) & ~(byte)((uint)auVar60._8_4_ >> 8);
              bVar49 = (byte)((uint)iVar47 >> 0x10) & ~(byte)((uint)auVar60._8_4_ >> 0x10);
              bVar50 = (byte)((uint)iVar47 >> 0x18) & ~(byte)((uint)auVar60._8_4_ >> 0x18);
              bVar51 = (byte)iVar52 & ~(byte)auVar60._12_4_;
              bVar53 = (byte)((uint)iVar52 >> 8) & ~(byte)((uint)auVar60._12_4_ >> 8);
              bVar54 = (byte)((uint)iVar52 >> 0x10) & ~(byte)((uint)auVar60._12_4_ >> 0x10);
              bVar55 = (byte)((uint)iVar52 >> 0x18) & ~(byte)((uint)auVar60._12_4_ >> 0x18);
              auVar35 = auVar35 ^ (auVar35 ^ auVar58) & auVar60;
              *(float *)this = fVar24 * fVar32 + *(float *)this;
              *(float *)(this + 4) = fVar24 * fVar56 + *(float *)(this + 4);
              *(float *)(this + 8) = fVar30 * fVar32 + *(float *)(this + 8);
              *(float *)(this + 0xc) = fVar30 * fVar56 + *(float *)(this + 0xc);
              *(float *)(this + 0x10) = fVar25 * fVar32 + *(float *)(this + 0x10);
              *(float *)(this + 0x14) = fVar25 * fVar56 + *(float *)(this + 0x14);
              *(float *)(this + 0x18) = fVar26 * fVar32 + *(float *)(this + 0x18);
              *(float *)(this + 0x1c) = fVar26 * fVar56 + *(float *)(this + 0x1c);
              this = this + 0x20;
              uVar33 = CONCAT13(bVar41 & 0x7f | auVar35[3] & ~bVar41,
                                CONCAT12(bVar40 | auVar35[2] & ~bVar40,
                                         CONCAT11(bVar39 | auVar35[1] & ~bVar39,
                                                  bVar36 | auVar35[0] & ~bVar36)));
              auVar34._0_8_ =
                   CONCAT17(bVar45 & 0x7f | auVar35[7] & ~bVar45,
                            CONCAT16(bVar44 | auVar35[6] & ~bVar44,
                                     CONCAT15(bVar43 | auVar35[5] & ~bVar43,
                                              CONCAT14(bVar42 | auVar35[4] & ~bVar42,uVar33))));
              auVar34[8] = bVar46 | auVar35[8] & ~bVar46;
              auVar34[9] = bVar48 | auVar35[9] & ~bVar48;
              auVar34[10] = bVar49 | auVar35[10] & ~bVar49;
              auVar34[0xb] = bVar50 & 0x7f | auVar35[0xb] & ~bVar50;
              auVar68[0xc] = bVar51 | auVar35[0xc] & ~bVar51;
              auVar68._0_12_ = auVar34;
              auVar68[0xd] = bVar53 | auVar35[0xd] & ~bVar53;
              auVar68[0xe] = bVar54 | auVar35[0xe] & ~bVar54;
              auVar68[0xf] = bVar55 & 0x7f | auVar35[0xf] & ~bVar55;
              iVar18 = (int)((ulong)auVar34._0_8_ >> 0x20) * 2;
              iVar23 = auVar34._8_4_ * 2;
              iVar47 = auVar68._12_4_ * 2;
              *(ulong *)(pfVar20 + 2) =
                   CONCAT44((int)((ulong)*(undefined8 *)(pfVar20 + 2) >> 0x20) +
                            (iVar47 - (iVar47 >> 0x1f) >> 0xd) * iVar16,
                            (int)*(undefined8 *)(pfVar20 + 2) +
                            (iVar23 - (iVar23 >> 0x1f) >> 0xd) * (int)sVar6);
              *(ulong *)pfVar20 =
                   CONCAT44((int)((ulong)*(undefined8 *)pfVar20 >> 0x20) +
                            (iVar18 - (iVar18 >> 0x1f) >> 0xd) * iVar16,
                            (int)*(undefined8 *)pfVar20 +
                            ((int)(uVar33 * 2 + ((uVar33 & 0x7fffffff) >> 0x1e)) >> 0xd) *
                            (int)sVar6);
              puVar15 = puVar15 + 2;
              pfVar20 = pfVar20 + 4;
            } while (pfVar17 != (float *)0x0);
            bVar14 = pfVar22 == param_1;
            param_2 = (ulong)(param_2 + (long)pfVar22 * 4);
            param_3 = param_3 + (long)pfVar22;
            param_1 = (float *)((long)param_1 - (long)pfVar22);
            this = pAVar5;
            if (bVar14) {
              return;
            }
          }
        }
        do {
          fVar24 = *(float *)param_2;
          if (fVar24 <= -16.0) {
            iVar18 = -0x80000000;
          }
          else if (16.0 <= fVar24) {
            iVar18 = 0x7fffffff;
          }
          else {
            fVar30 = 0.5;
            if (fVar24 * 1.3421773e+08 <= 0.0) {
              fVar30 = -0.5;
            }
            iVar18 = (int)(fVar30 + fVar24 * 1.3421773e+08);
          }
          *(float *)this = fVar24 * *(float *)pAVar4 + *(float *)this;
          fVar24 = *(float *)param_2;
          if (fVar24 <= -16.0) {
            iVar23 = -0x80000000;
          }
          else if (16.0 <= fVar24) {
            iVar23 = 0x7fffffff;
          }
          else {
            fVar30 = 0.5;
            if (fVar24 * 1.3421773e+08 <= 0.0) {
              fVar30 = -0.5;
            }
            iVar23 = (int)(fVar30 + fVar24 * 1.3421773e+08);
          }
          iVar23 = iVar23 + iVar18;
          *(float *)(this + 4) = fVar24 * *(float *)pAVar19 + *(float *)(this + 4);
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          param_1 = (float *)((long)param_1 + -1);
          *param_3 = (float)((int)*param_3 + (iVar23 >> 0xd) * iVar16);
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
      volumeMulti<1,7,float,float,float,int,short>
                ((experimental *)this,param_1,param_2,param_3,(int *)pAVar4,(float *)(long)sVar6,
                 (short)param_6);
      return;
    case 7:
      volumeMulti<1,8,float,float,float,int,short>
                ((float *)this,(ulong)param_1,(float *)param_2,(int *)param_3,(float *)pAVar4,sVar6)
      ;
      return;
    }
  }
  return;
}

