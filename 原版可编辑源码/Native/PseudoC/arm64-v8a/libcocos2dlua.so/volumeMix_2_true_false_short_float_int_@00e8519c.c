
/* void cocos2d::experimental::AudioMixer::volumeMix<2, true, false, short, float, int>(short*,
   unsigned long, float const*, int*, bool, cocos2d::experimental::AudioMixer::track_t*) */

void cocos2d::experimental::AudioMixer::volumeMix<2,true,false,short,float,int>
               (short *param_1,ulong param_2,float *param_3,int *param_4,bool param_5,
               track_t *param_6)

{
  track_t *ptVar1;
  track_t *ptVar2;
  track_t *ptVar3;
  short sVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  bool bVar14;
  float *pfVar15;
  short *psVar22;
  float *pfVar23;
  int *piVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  int iVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar42;
  float fVar43;
  undefined1 auVar41 [16];
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar48;
  int iVar49;
  undefined1 auVar47 [16];
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  
  uVar5 = *(int *)(param_6 + 0xbc) - 1;
  if (param_5) {
    if (uVar5 < 8) {
      iVar25 = *(int *)(param_6 + 0x18);
      ptVar1 = param_6 + 0x9c;
      ptVar2 = param_6 + 0xa4;
      ptVar3 = param_6 + 0x1c;
      switch(uVar5) {
      case 1:
        volumeRampMulti<2,2,short,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar25);
        return;
      case 2:
        volumeRampMulti<4,3,short,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar25);
        return;
      case 3:
        volumeRampMulti<4,4,short,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar25);
        return;
      case 4:
        volumeRampMulti<4,5,short,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar25);
        return;
      case 5:
        volumeRampMulti<4,6,short,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar25);
        return;
      case 6:
        volumeRampMulti<4,7,short,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar25);
        return;
      case 7:
        volumeRampMulti<4,8,short,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar25);
        return;
      }
      fVar30 = *(float *)ptVar1;
      if (param_4 == (int *)0x0) {
        fVar35 = *(float *)ptVar2;
        do {
          fVar31 = fVar30 * *param_3 + 384.0;
          fVar34 = 4.59163e-41;
          if ((int)fVar31 < 0x43c08000) {
            fVar34 = fVar31;
          }
          sVar4 = -0x8000;
          if (0x43bf7fff < (int)fVar31) {
            sVar4 = SUB42(fVar34,0);
          }
          fVar30 = fVar30 + fVar35;
          param_2 = param_2 - 1;
          *param_1 = sVar4;
          *(float *)ptVar1 = fVar30;
          param_1 = param_1 + 1;
          param_3 = param_3 + 1;
        } while (param_2 != 0);
      }
      else {
        do {
          fVar35 = *param_3;
          if (fVar35 <= -16.0) {
            iVar28 = -0x80000000;
          }
          else if (16.0 <= fVar35) {
            iVar28 = 0x7fffffff;
          }
          else {
            fVar34 = 0.5;
            if (fVar35 * 1.3421773e+08 <= 0.0) {
              fVar34 = -0.5;
            }
            iVar28 = (int)(fVar34 + fVar35 * 1.3421773e+08);
          }
          fVar34 = fVar30 * fVar35 + 384.0;
          fVar35 = 4.59163e-41;
          if ((int)fVar34 < 0x43c08000) {
            fVar35 = fVar34;
          }
          sVar4 = -0x8000;
          if (0x43bf7fff < (int)fVar34) {
            sVar4 = SUB42(fVar35,0);
          }
          *param_1 = sVar4;
          param_2 = param_2 - 1;
          fVar30 = fVar30 + *(float *)ptVar2;
          *(float *)ptVar1 = fVar30;
          *param_4 = *param_4 + (*(int *)ptVar3 >> 0x10) * (iVar28 >> 0xc);
          *(int *)ptVar3 = *(int *)ptVar3 + iVar25;
          param_1 = param_1 + 1;
          param_3 = param_3 + 1;
          param_4 = param_4 + 1;
        } while (param_2 != 0);
      }
    }
  }
  else if (uVar5 < 8) {
    sVar4 = *(short *)(param_6 + 0x20);
    ptVar1 = param_6 + 0x94;
    iVar25 = (int)sVar4;
    switch(uVar5) {
    case 0:
      if (param_4 == (int *)0x0) {
        fVar30 = *(float *)ptVar1;
        if (3 < param_2) {
          uVar26 = param_2 & 0xfffffffffffffffc;
          psVar22 = param_1;
          pfVar23 = param_3;
          uVar27 = uVar26;
          do {
            uVar27 = uVar27 - 4;
            fVar35 = fVar30 * *pfVar23 + 384.0;
            fVar34 = fVar30 * pfVar23[1] + 384.0;
            fVar31 = fVar30 * pfVar23[2] + 384.0;
            fVar38 = fVar30 * pfVar23[3] + 384.0;
            uVar6 = SUB42(fVar35,0) ^
                    (SUB42(fVar35,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar35);
            uVar7 = SUB42(fVar34,0) ^
                    (SUB42(fVar34,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar34);
            uVar8 = SUB42(fVar31,0) ^
                    (SUB42(fVar31,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar31);
            uVar9 = SUB42(fVar38,0) ^
                    (SUB42(fVar38,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar38);
            *(ulong *)psVar22 =
                 CONCAT26(uVar9 ^ (uVar9 ^ 0x8000) & -(ushort)((int)fVar38 < 0x43bf8000),
                          CONCAT24(uVar8 ^ (uVar8 ^ 0x8000) & -(ushort)((int)fVar31 < 0x43bf8000),
                                   CONCAT22(uVar7 ^ (uVar7 ^ 0x8000) &
                                                    -(ushort)((int)fVar34 < 0x43bf8000),
                                            uVar6 ^ (uVar6 ^ 0x8000) &
                                                    -(ushort)((int)fVar35 < 0x43bf8000))));
            psVar22 = psVar22 + 4;
            pfVar23 = pfVar23 + 4;
          } while (uVar27 != 0);
          bVar14 = uVar26 == param_2;
          param_3 = param_3 + uVar26;
          param_2 = param_2 - uVar26;
          param_1 = param_1 + uVar26;
          if (bVar14) {
            return;
          }
        }
        do {
          fVar34 = fVar30 * *param_3 + 384.0;
          fVar35 = 4.59163e-41;
          if ((int)fVar34 < 0x43c08000) {
            fVar35 = fVar34;
          }
          sVar4 = -0x8000;
          if (0x43bf7fff < (int)fVar34) {
            sVar4 = SUB42(fVar35,0);
          }
          param_2 = param_2 - 1;
          *param_1 = sVar4;
          param_3 = param_3 + 1;
          param_1 = param_1 + 1;
        } while (param_2 != 0);
      }
      else {
        fVar30 = *(float *)ptVar1;
        if (3 < param_2) {
          uVar26 = param_2 & 0xfffffffffffffffc;
          auVar32 = NEON_fmov(0xc1800000,4);
          auVar33 = NEON_fmov(0x41800000,4);
          auVar36 = NEON_fmov(0xbfe0000000000000,8);
          auVar37 = NEON_fmov(0x3fe0000000000000,8);
          auVar41._8_4_ = 0xfff80000;
          auVar41._0_8_ = 0xfff80000fff80000;
          auVar41._12_4_ = 0xfff80000;
          psVar22 = param_1;
          pfVar23 = param_3;
          piVar24 = param_4;
          uVar27 = uVar26;
          do {
            fVar35 = *pfVar23;
            fVar34 = pfVar23[1];
            fVar31 = pfVar23[2];
            fVar38 = pfVar23[3];
            uVar27 = uVar27 - 4;
            auVar45._0_4_ = -(uint)(fVar35 <= auVar32._0_4_);
            auVar45._4_4_ = -(uint)(fVar34 <= auVar32._4_4_);
            auVar45._8_4_ = -(uint)(fVar31 <= auVar32._8_4_);
            auVar45._12_4_ = -(uint)(fVar38 <= auVar32._12_4_);
            iVar28 = -(uint)(auVar33._0_4_ <= fVar35);
            iVar29 = -(uint)(auVar33._4_4_ <= fVar34);
            iVar48 = -(uint)(auVar33._8_4_ <= fVar31);
            iVar49 = -(uint)(auVar33._12_4_ <= fVar38);
            auVar56._0_8_ = (long)(int)-(uint)(0.0 < fVar31 * 1.3421773e+08);
            auVar56._8_8_ = (long)(int)-(uint)(0.0 < fVar38 * 1.3421773e+08);
            fVar39 = fVar30 * fVar35 + 384.0;
            fVar40 = fVar30 * fVar34 + 384.0;
            fVar42 = fVar30 * fVar31 + 384.0;
            fVar43 = fVar30 * fVar38 + 384.0;
            auVar54._0_8_ = (long)(int)-(uint)(0.0 < fVar35 * 1.3421773e+08);
            auVar54._8_8_ = (long)(int)-(uint)(0.0 < fVar34 * 1.3421773e+08);
            auVar57 = auVar36 ^ (auVar36 ^ auVar37) & auVar56;
            auVar55 = auVar36 ^ (auVar36 ^ auVar37) & auVar54;
            uVar6 = SUB42(fVar39,0) ^
                    (SUB42(fVar39,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar39);
            uVar7 = SUB42(fVar40,0) ^
                    (SUB42(fVar40,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar40);
            uVar8 = SUB42(fVar42,0) ^
                    (SUB42(fVar42,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar42);
            uVar9 = SUB42(fVar43,0) ^
                    (SUB42(fVar43,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar43);
            *(ulong *)psVar22 =
                 CONCAT26(uVar9 ^ (uVar9 ^ 0x8000) & -(ushort)((int)fVar43 < 0x43bf8000),
                          CONCAT24(uVar8 ^ (uVar8 ^ 0x8000) & -(ushort)((int)fVar42 < 0x43bf8000),
                                   CONCAT22(uVar7 ^ (uVar7 ^ 0x8000) &
                                                    -(ushort)((int)fVar40 < 0x43bf8000),
                                            uVar6 ^ (uVar6 ^ 0x8000) &
                                                    -(ushort)((int)fVar39 < 0x43bf8000))));
            iVar50 = (int)(long)(auVar55._0_8_ + (double)(fVar35 * 1.3421773e+08)) >> 0xc;
            iVar51 = (int)(long)(auVar55._8_8_ + (double)(fVar34 * 1.3421773e+08)) >> 0xc;
            iVar52 = (int)(long)(auVar57._0_8_ + (double)(fVar31 * 1.3421773e+08)) >> 0xc;
            iVar53 = (int)(long)(auVar57._8_8_ + (double)(fVar38 * 1.3421773e+08)) >> 0xc;
            auVar47[0] = (byte)iVar28 & ~(byte)auVar45._0_4_;
            auVar47[1] = (byte)((uint)iVar28 >> 8) & ~(byte)((uint)auVar45._0_4_ >> 8);
            auVar47[2] = (byte)((uint)iVar28 >> 0x10) & ~(byte)((uint)auVar45._0_4_ >> 0x10);
            auVar47[3] = (byte)((uint)iVar28 >> 0x18) & ~(byte)((uint)auVar45._0_4_ >> 0x18);
            auVar47[4] = (byte)iVar29 & ~(byte)auVar45._4_4_;
            auVar47[5] = (byte)((uint)iVar29 >> 8) & ~(byte)((uint)auVar45._4_4_ >> 8);
            auVar47[6] = (byte)((uint)iVar29 >> 0x10) & ~(byte)((uint)auVar45._4_4_ >> 0x10);
            auVar47[7] = (byte)((uint)iVar29 >> 0x18) & ~(byte)((uint)auVar45._4_4_ >> 0x18);
            auVar47[8] = (byte)iVar48 & ~(byte)auVar45._8_4_;
            auVar47[9] = (byte)((uint)iVar48 >> 8) & ~(byte)((uint)auVar45._8_4_ >> 8);
            auVar47[10] = (byte)((uint)iVar48 >> 0x10) & ~(byte)((uint)auVar45._8_4_ >> 0x10);
            auVar47[0xb] = (byte)((uint)iVar48 >> 0x18) & ~(byte)((uint)auVar45._8_4_ >> 0x18);
            auVar47[0xc] = (byte)iVar49 & ~(byte)auVar45._12_4_;
            auVar47[0xd] = (byte)((uint)iVar49 >> 8) & ~(byte)((uint)auVar45._12_4_ >> 8);
            auVar47[0xe] = (byte)((uint)iVar49 >> 0x10) & ~(byte)((uint)auVar45._12_4_ >> 0x10);
            auVar47[0xf] = (byte)((uint)iVar49 >> 0x18) & ~(byte)((uint)auVar45._12_4_ >> 0x18);
            auVar57._4_4_ = iVar51;
            auVar57._0_4_ = iVar50;
            auVar57._8_4_ = iVar52;
            auVar57._12_4_ = iVar53;
            auVar46._4_4_ = iVar51;
            auVar46._0_4_ = iVar50;
            auVar46._8_4_ = iVar52;
            auVar46._12_4_ = iVar53;
            auVar46 = auVar46 ^ (auVar57 ^ auVar41) & auVar45;
            auVar55._8_4_ = 0x7ffff;
            auVar55._0_8_ = 0x7ffff0007ffff;
            auVar55._12_4_ = 0x7ffff;
            auVar46 = auVar46 ^ (auVar46 ^ auVar55) & auVar47;
            piVar24[2] = piVar24[2] + auVar46._8_4_ * iVar25;
            piVar24[3] = piVar24[3] + auVar46._12_4_ * iVar25;
            *piVar24 = *piVar24 + auVar46._0_4_ * iVar25;
            piVar24[1] = piVar24[1] + auVar46._4_4_ * iVar25;
            psVar22 = psVar22 + 4;
            pfVar23 = pfVar23 + 4;
            piVar24 = piVar24 + 4;
          } while (uVar27 != 0);
          bVar14 = uVar26 == param_2;
          param_2 = param_2 - uVar26;
          param_3 = param_3 + uVar26;
          param_4 = param_4 + uVar26;
          param_1 = param_1 + uVar26;
          if (bVar14) {
            return;
          }
        }
        do {
          fVar35 = *param_3;
          if (fVar35 <= -16.0) {
            iVar28 = -0x80000000;
          }
          else if (16.0 <= fVar35) {
            iVar28 = 0x7fffffff;
          }
          else {
            fVar34 = 0.5;
            if (fVar35 * 1.3421773e+08 <= 0.0) {
              fVar34 = -0.5;
            }
            iVar28 = (int)(fVar34 + fVar35 * 1.3421773e+08);
          }
          fVar34 = fVar30 * fVar35 + 384.0;
          fVar35 = 4.59163e-41;
          if ((int)fVar34 < 0x43c08000) {
            fVar35 = fVar34;
          }
          sVar4 = -0x8000;
          if (0x43bf7fff < (int)fVar34) {
            sVar4 = SUB42(fVar35,0);
          }
          *param_1 = sVar4;
          param_2 = param_2 - 1;
          *param_4 = *param_4 + (iVar28 >> 0xc) * iVar25;
          param_3 = param_3 + 1;
          param_4 = param_4 + 1;
          param_1 = param_1 + 1;
        } while (param_2 != 0);
      }
      break;
    case 1:
      if (param_4 == (int *)0x0) {
        fVar30 = *(float *)(param_6 + 0x94);
        fVar35 = *(float *)(param_6 + 0x98);
        if (3 < param_2) {
          uVar26 = param_2 & 0xfffffffffffffffc;
          pfVar23 = param_3 + uVar26 * 2;
          psVar22 = param_1 + uVar26 * 2;
          uVar27 = uVar26;
          do {
            fVar34 = *param_3;
            pfVar15 = param_3 + 1;
            pfVar16 = param_3 + 2;
            pfVar17 = param_3 + 3;
            pfVar18 = param_3 + 4;
            pfVar19 = param_3 + 5;
            pfVar20 = param_3 + 6;
            pfVar21 = param_3 + 7;
            param_3 = param_3 + 8;
            uVar27 = uVar27 - 4;
            fVar40 = fVar30 * fVar34 + 384.0;
            fVar42 = fVar30 * *pfVar16 + 384.0;
            fVar43 = fVar30 * *pfVar18 + 384.0;
            fVar44 = fVar30 * *pfVar20 + 384.0;
            fVar34 = fVar35 * *pfVar15 + 384.0;
            fVar31 = fVar35 * *pfVar17 + 384.0;
            fVar38 = fVar35 * *pfVar19 + 384.0;
            fVar39 = fVar35 * *pfVar21 + 384.0;
            uVar6 = SUB42(fVar40,0) ^
                    (SUB42(fVar40,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar40);
            uVar7 = SUB42(fVar42,0) ^
                    (SUB42(fVar42,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar42);
            uVar8 = SUB42(fVar43,0) ^
                    (SUB42(fVar43,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar43);
            uVar9 = SUB42(fVar44,0) ^
                    (SUB42(fVar44,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar44);
            uVar10 = SUB42(fVar34,0) ^
                     (SUB42(fVar34,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar34);
            uVar11 = SUB42(fVar31,0) ^
                     (SUB42(fVar31,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar31);
            uVar12 = SUB42(fVar38,0) ^
                     (SUB42(fVar38,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar38);
            uVar13 = SUB42(fVar39,0) ^
                     (SUB42(fVar39,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar39);
            *param_1 = uVar6 ^ (uVar6 ^ 0x8000) & -(ushort)((int)fVar40 < 0x43bf8000);
            param_1[1] = uVar10 ^ (uVar10 ^ 0x8000) & -(ushort)((int)fVar34 < 0x43bf8000);
            param_1[2] = uVar7 ^ (uVar7 ^ 0x8000) & -(ushort)((int)fVar42 < 0x43bf8000);
            param_1[3] = uVar11 ^ (uVar11 ^ 0x8000) & -(ushort)((int)fVar31 < 0x43bf8000);
            param_1[4] = uVar8 ^ (uVar8 ^ 0x8000) & -(ushort)((int)fVar43 < 0x43bf8000);
            param_1[5] = uVar12 ^ (uVar12 ^ 0x8000) & -(ushort)((int)fVar38 < 0x43bf8000);
            param_1[6] = uVar9 ^ (uVar9 ^ 0x8000) & -(ushort)((int)fVar44 < 0x43bf8000);
            param_1[7] = uVar13 ^ (uVar13 ^ 0x8000) & -(ushort)((int)fVar39 < 0x43bf8000);
            param_1 = param_1 + 8;
          } while (uVar27 != 0);
          bVar14 = uVar26 == param_2;
          param_3 = pfVar23;
          param_2 = param_2 - uVar26;
          param_1 = psVar22;
          if (bVar14) {
            return;
          }
        }
        do {
          fVar31 = fVar30 * *param_3 + 384.0;
          fVar34 = 4.59163e-41;
          if ((int)fVar31 < 0x43c08000) {
            fVar34 = fVar31;
          }
          sVar4 = -0x8000;
          if (0x43bf7fff < (int)fVar31) {
            sVar4 = SUB42(fVar34,0);
          }
          *param_1 = sVar4;
          fVar31 = fVar35 * param_3[1] + 384.0;
          fVar34 = 4.59163e-41;
          if ((int)fVar31 < 0x43c08000) {
            fVar34 = fVar31;
          }
          sVar4 = -0x8000;
          if (0x43bf7fff < (int)fVar31) {
            sVar4 = SUB42(fVar34,0);
          }
          param_2 = param_2 - 1;
          param_1[1] = sVar4;
          param_3 = param_3 + 2;
          param_1 = param_1 + 2;
        } while (param_2 != 0);
      }
      else {
        fVar30 = *(float *)(param_6 + 0x94);
        fVar35 = *(float *)(param_6 + 0x98);
        do {
          fVar34 = *param_3;
          if (fVar34 <= -16.0) {
            iVar28 = -0x80000000;
          }
          else if (16.0 <= fVar34) {
            iVar28 = 0x7fffffff;
          }
          else {
            fVar31 = 0.5;
            if (fVar34 * 1.3421773e+08 <= 0.0) {
              fVar31 = -0.5;
            }
            iVar28 = (int)(fVar31 + fVar34 * 1.3421773e+08);
          }
          fVar31 = fVar30 * fVar34 + 384.0;
          fVar34 = 4.59163e-41;
          if ((int)fVar31 < 0x43c08000) {
            fVar34 = fVar31;
          }
          sVar4 = -0x8000;
          if (0x43bf7fff < (int)fVar31) {
            sVar4 = SUB42(fVar34,0);
          }
          *param_1 = sVar4;
          fVar34 = param_3[1];
          if (fVar34 <= -16.0) {
            iVar29 = -0x80000000;
          }
          else if (16.0 <= fVar34) {
            iVar29 = 0x7fffffff;
          }
          else {
            fVar31 = 0.5;
            if (fVar34 * 1.3421773e+08 <= 0.0) {
              fVar31 = -0.5;
            }
            iVar29 = (int)(fVar31 + fVar34 * 1.3421773e+08);
          }
          fVar31 = fVar35 * fVar34 + 384.0;
          iVar29 = iVar29 + iVar28;
          fVar34 = 4.59163e-41;
          if ((int)fVar31 < 0x43c08000) {
            fVar34 = fVar31;
          }
          sVar4 = -0x8000;
          if (0x43bf7fff < (int)fVar31) {
            sVar4 = SUB42(fVar34,0);
          }
          param_1[1] = sVar4;
          if (iVar29 < 0) {
            iVar29 = iVar29 + 1;
          }
          param_3 = param_3 + 2;
          param_2 = param_2 - 1;
          *param_4 = *param_4 + (iVar29 >> 0xd) * iVar25;
          param_1 = param_1 + 2;
          param_4 = param_4 + 1;
        } while (param_2 != 0);
      }
      break;
    case 2:
      volumeMulti<4,3,short,float,float,int,short>
                (param_1,param_2,param_3,param_4,(float *)ptVar1,sVar4);
      return;
    case 3:
      volumeMulti<4,4,short,float,float,int,short>
                (param_1,param_2,param_3,param_4,(float *)ptVar1,sVar4);
      return;
    case 4:
      volumeMulti<4,5,short,float,float,int,short>
                (param_1,param_2,param_3,param_4,(float *)ptVar1,sVar4);
      return;
    case 5:
      volumeMulti<4,6,short,float,float,int,short>
                (param_1,param_2,param_3,param_4,(float *)ptVar1,sVar4);
      return;
    case 6:
      volumeMulti<4,7,short,float,float,int,short>
                (param_1,param_2,param_3,param_4,(float *)ptVar1,sVar4);
      return;
    case 7:
      volumeMulti<4,8,short,float,float,int,short>
                (param_1,param_2,param_3,param_4,(float *)ptVar1,sVar4);
      return;
    }
  }
  return;
}

