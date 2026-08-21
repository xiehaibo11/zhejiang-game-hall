
/* void cocos2d::experimental::AudioMixer::volumeMix<0, true, true, float, float, int>(float*,
   unsigned long, float const*, int*, bool, cocos2d::experimental::AudioMixer::track_t*) */

void cocos2d::experimental::AudioMixer::volumeMix<0,true,true,float,float,int>
               (float *param_1,ulong param_2,float *param_3,int *param_4,bool param_5,
               track_t *param_6)

{
  track_t *ptVar1;
  track_t *ptVar2;
  track_t *ptVar3;
  short sVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined2 uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  float *pfVar15;
  bool bVar16;
  float *pfVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  float *pfVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [12];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  byte bVar42;
  byte bVar43;
  char cVar44;
  byte bVar45;
  char cVar46;
  byte bVar47;
  undefined1 uVar48;
  byte bVar49;
  undefined1 uVar50;
  byte bVar51;
  char cVar52;
  byte bVar53;
  char cVar54;
  byte bVar55;
  undefined1 uVar56;
  byte bVar57;
  undefined1 uVar58;
  byte bVar59;
  char cVar60;
  byte bVar61;
  char cVar62;
  byte bVar63;
  undefined1 uVar64;
  byte bVar65;
  undefined1 uVar66;
  byte bVar67;
  char cVar68;
  byte bVar69;
  char cVar70;
  byte bVar71;
  float fVar72;
  long lVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  long lVar76;
  int iVar79;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  byte bVar80;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  int iVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar97;
  byte bVar98;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  int iVar96;
  byte bVar99;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  
  uVar5 = *(int *)(param_6 + 0xbc) - 1;
  if (param_5) {
    if (uVar5 < 8) {
      iVar18 = *(int *)(param_6 + 0x18);
      ptVar1 = param_6 + 0x9c;
      ptVar2 = param_6 + 0xa4;
      ptVar3 = param_6 + 0x1c;
      switch(uVar5) {
      case 0:
        fVar25 = *(float *)ptVar1;
        piVar19 = param_4;
        if (param_4 == (int *)0x0) {
          do {
            param_2 = param_2 - 1;
            *param_1 = *param_1 + fVar25 * *param_3;
            fVar25 = *(float *)ptVar2 + *(float *)ptVar1;
            *(float *)ptVar1 = fVar25;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
          } while (param_2 != 0);
        }
        else {
          do {
            fVar29 = *param_3;
            if (fVar29 <= -16.0) {
              iVar20 = -0x80000000;
            }
            else if (16.0 <= fVar29) {
              iVar20 = 0x7fffffff;
            }
            else {
              fVar31 = 0.5;
              if (fVar29 * 1.3421773e+08 <= 0.0) {
                fVar31 = -0.5;
              }
              iVar20 = (int)(fVar31 + fVar29 * 1.3421773e+08);
            }
            param_2 = param_2 - 1;
            *param_1 = fVar25 * fVar29 + *param_1;
            fVar25 = *(float *)ptVar2 + *(float *)ptVar1;
            *(float *)ptVar1 = fVar25;
            *piVar19 = *piVar19 + (*(int *)ptVar3 >> 0x10) * (iVar20 >> 0xc);
            *(int *)ptVar3 = *(int *)ptVar3 + iVar18;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
            piVar19 = piVar19 + 1;
          } while (param_2 != 0);
        }
        break;
      case 1:
        volumeRampMulti<0,2,float,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar18);
        break;
      case 2:
        volumeRampMulti<3,3,float,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar18);
        break;
      case 3:
        volumeRampMulti<3,4,float,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar18);
        break;
      case 4:
        volumeRampMulti<3,5,float,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar18);
        break;
      case 5:
        volumeRampMulti<3,6,float,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar18);
        break;
      case 6:
        volumeRampMulti<3,7,float,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar18);
        break;
      case 7:
        volumeRampMulti<3,8,float,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar18);
      }
    }
    track_t::adjustVolumeRamp(param_6,param_4 != (int *)0x0,true);
    return;
  }
  if (uVar5 < 8) {
    sVar4 = *(short *)(param_6 + 0x20);
    iVar18 = (int)sVar4;
    ptVar1 = param_6 + 0x94;
    switch(uVar5) {
    case 0:
      if (param_4 == (int *)0x0) {
        if (7 < param_2) {
          if ((param_3 + param_2 <= param_1 || (track_t *)(param_1 + param_2) <= param_3) &&
             (param_6 + 0x95 <= param_1 || (track_t *)(param_1 + param_2) <= ptVar1)) {
            fVar25 = *(float *)ptVar1;
            uVar23 = param_2 & 0xfffffffffffffff8;
            pfVar17 = param_1 + 4;
            pfVar21 = param_3 + 4;
            uVar22 = uVar23;
            do {
              fVar29 = pfVar21[-4];
              fVar31 = pfVar21[-3];
              pfVar15 = pfVar21 + -2;
              fVar32 = pfVar21[-1];
              fVar33 = *pfVar21;
              fVar34 = pfVar21[1];
              fVar35 = pfVar21[2];
              fVar36 = pfVar21[3];
              uVar22 = uVar22 - 8;
              pfVar21 = pfVar21 + 8;
              pfVar17[-2] = pfVar17[-2] + *pfVar15 * fVar25;
              pfVar17[-1] = pfVar17[-1] + fVar32 * fVar25;
              pfVar17[-4] = pfVar17[-4] + fVar29 * fVar25;
              pfVar17[-3] = pfVar17[-3] + fVar31 * fVar25;
              pfVar17[2] = pfVar17[2] + fVar35 * fVar25;
              pfVar17[3] = pfVar17[3] + fVar36 * fVar25;
              *pfVar17 = *pfVar17 + fVar33 * fVar25;
              pfVar17[1] = pfVar17[1] + fVar34 * fVar25;
              pfVar17 = pfVar17 + 8;
            } while (uVar22 != 0);
            bVar16 = uVar23 == param_2;
            param_3 = param_3 + uVar23;
            param_2 = param_2 - uVar23;
            param_1 = param_1 + uVar23;
            if (bVar16) {
              return;
            }
          }
        }
        do {
          param_2 = param_2 - 1;
          *param_1 = *param_1 + *param_3 * *(float *)ptVar1;
          param_3 = param_3 + 1;
          param_1 = param_1 + 1;
        } while (param_2 != 0);
      }
      else {
        if (3 < param_2) {
          if ((param_3 + param_2 <= param_1 || (track_t *)(param_1 + param_2) <= param_3) &&
             (param_6 + 0x95 <= param_1 || (track_t *)(param_1 + param_2) <= ptVar1)) {
            fVar25 = *(float *)ptVar1;
            uVar23 = param_2 & 0xfffffffffffffffc;
            auVar26 = NEON_fmov(0xc1800000,4);
            auVar27 = NEON_fmov(0x41800000,4);
            auVar28 = NEON_fmov(0xbfe0000000000000,8);
            auVar30 = NEON_fmov(0x3fe0000000000000,8);
            pfVar17 = param_3;
            uVar22 = uVar23;
            pfVar21 = param_1;
            piVar19 = param_4;
            do {
              uVar22 = uVar22 - 4;
              fVar34 = (float)*(undefined8 *)pfVar17;
              fVar29 = fVar34 * 1.3421773e+08;
              fVar35 = (float)((ulong)*(undefined8 *)pfVar17 >> 0x20);
              fVar31 = fVar35 * 1.3421773e+08;
              fVar36 = (float)*(undefined8 *)(pfVar17 + 2);
              fVar32 = fVar36 * 1.3421773e+08;
              fVar37 = (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20);
              fVar33 = fVar37 * 1.3421773e+08;
              auVar81._0_8_ = (long)(int)-(uint)(0.0 < fVar32);
              auVar81._8_8_ = (long)(int)-(uint)(0.0 < fVar33);
              auVar74._0_8_ = (long)(int)-(uint)(0.0 < fVar29);
              auVar74._8_8_ = (long)(int)-(uint)(0.0 < fVar31);
              auVar75 = auVar28 ^ (auVar28 ^ auVar30) & auVar74;
              auVar82 = auVar28 ^ (auVar28 ^ auVar30) & auVar81;
              lVar73 = (long)(auVar75._0_8_ + (double)fVar29);
              lVar76 = (long)(auVar75._8_8_ +
                             (double)(float)(CONCAT17((char)((uint)fVar31 >> 0x18),
                                                      CONCAT16((char)((uint)fVar31 >> 0x10),
                                                               CONCAT15((char)((uint)fVar31 >> 8),
                                                                        CONCAT14(SUB41(fVar31,0),
                                                                                 fVar29)))) >> 0x20)
                             );
              lVar10 = (long)(auVar82._0_8_ + (double)fVar32);
              lVar13 = (long)(auVar82._8_8_ +
                             (double)(float)(CONCAT17((char)((uint)fVar33 >> 0x18),
                                                      CONCAT16((char)((uint)fVar33 >> 0x10),
                                                               CONCAT15((char)((uint)fVar33 >> 8),
                                                                        CONCAT14(SUB41(fVar33,0),
                                                                                 fVar32)))) >> 0x20)
                             );
              auVar39._0_4_ = -(uint)(fVar34 <= auVar26._0_4_);
              auVar39._4_4_ = -(uint)(fVar35 <= auVar26._4_4_);
              auVar39._8_4_ = -(uint)(fVar36 <= auVar26._8_4_);
              auVar39._12_4_ = -(uint)(fVar37 <= auVar26._12_4_);
              iVar24 = -(uint)(auVar27._0_4_ <= fVar34);
              iVar91 = -(uint)(auVar27._4_4_ <= fVar35);
              iVar96 = -(uint)(auVar27._8_4_ <= fVar36);
              iVar79 = -(uint)(auVar27._12_4_ <= fVar37);
              *(ulong *)(pfVar21 + 2) =
                   CONCAT44(fVar37 * fVar25 + (float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20),
                            fVar36 * fVar25 + (float)*(undefined8 *)(pfVar21 + 2));
              *(ulong *)pfVar21 =
                   CONCAT44(fVar35 * fVar25 + (float)((ulong)*(undefined8 *)pfVar21 >> 0x20),
                            fVar34 * fVar25 + (float)*(undefined8 *)pfVar21);
              cVar46 = (char)((ulong)lVar73 >> 0x18);
              cVar44 = cVar46 >> 4;
              cVar46 = cVar46 >> 7;
              iVar20 = (int)lVar76 >> 0xc;
              uVar48 = (undefined1)iVar20;
              uVar50 = (undefined1)((uint)iVar20 >> 8);
              cVar54 = (char)((ulong)lVar76 >> 0x18);
              cVar52 = cVar54 >> 4;
              cVar54 = cVar54 >> 7;
              iVar20 = (int)lVar10 >> 0xc;
              uVar56 = (undefined1)iVar20;
              uVar58 = (undefined1)((uint)iVar20 >> 8);
              cVar62 = (char)((ulong)lVar10 >> 0x18);
              cVar60 = cVar62 >> 4;
              cVar62 = cVar62 >> 7;
              iVar20 = (int)lVar13 >> 0xc;
              uVar64 = (undefined1)iVar20;
              uVar66 = (undefined1)((uint)iVar20 >> 8);
              cVar70 = (char)((ulong)lVar13 >> 0x18);
              cVar68 = cVar70 >> 4;
              cVar70 = cVar70 >> 7;
              auVar77[0] = (byte)iVar24 & ~(byte)auVar39._0_4_;
              auVar77[1] = (byte)((uint)iVar24 >> 8) & ~(byte)((uint)auVar39._0_4_ >> 8);
              auVar77[2] = (byte)((uint)iVar24 >> 0x10) & ~(byte)((uint)auVar39._0_4_ >> 0x10);
              auVar77[3] = (byte)((uint)iVar24 >> 0x18) & ~(byte)((uint)auVar39._0_4_ >> 0x18);
              auVar77[4] = (byte)iVar91 & ~(byte)auVar39._4_4_;
              auVar77[5] = (byte)((uint)iVar91 >> 8) & ~(byte)((uint)auVar39._4_4_ >> 8);
              auVar77[6] = (byte)((uint)iVar91 >> 0x10) & ~(byte)((uint)auVar39._4_4_ >> 0x10);
              auVar77[7] = (byte)((uint)iVar91 >> 0x18) & ~(byte)((uint)auVar39._4_4_ >> 0x18);
              auVar77[8] = (byte)iVar96 & ~(byte)auVar39._8_4_;
              auVar77[9] = (byte)((uint)iVar96 >> 8) & ~(byte)((uint)auVar39._8_4_ >> 8);
              auVar77[10] = (byte)((uint)iVar96 >> 0x10) & ~(byte)((uint)auVar39._8_4_ >> 0x10);
              auVar77[0xb] = (byte)((uint)iVar96 >> 0x18) & ~(byte)((uint)auVar39._8_4_ >> 0x18);
              auVar77[0xc] = (byte)iVar79 & ~(byte)auVar39._12_4_;
              auVar77[0xd] = (byte)((uint)iVar79 >> 8) & ~(byte)((uint)auVar39._12_4_ >> 8);
              auVar77[0xe] = (byte)((uint)iVar79 >> 0x10) & ~(byte)((uint)auVar39._12_4_ >> 0x10);
              auVar77[0xf] = (byte)((uint)iVar79 >> 0x18) & ~(byte)((uint)auVar39._12_4_ >> 0x18);
              auVar6._8_4_ = 0xfff80000;
              auVar6._0_8_ = 0xfff80000fff80000;
              auVar6._12_4_ = 0xfff80000;
              uVar9 = (undefined2)((int)lVar73 >> 0xc);
              auVar8[2] = cVar44;
              auVar8._0_2_ = uVar9;
              auVar8[3] = cVar46;
              auVar8[4] = uVar48;
              auVar8[5] = uVar50;
              auVar8[6] = cVar52;
              auVar8[7] = cVar54;
              auVar8[8] = uVar56;
              auVar8[9] = uVar58;
              auVar8[10] = cVar60;
              auVar8[0xb] = cVar62;
              auVar8[0xc] = uVar64;
              auVar8[0xd] = uVar66;
              auVar8[0xe] = cVar68;
              auVar8[0xf] = cVar70;
              auVar40[2] = cVar44;
              auVar40._0_2_ = uVar9;
              auVar40[3] = cVar46;
              auVar40[4] = uVar48;
              auVar40[5] = uVar50;
              auVar40[6] = cVar52;
              auVar40[7] = cVar54;
              auVar40[8] = uVar56;
              auVar40[9] = uVar58;
              auVar40[10] = cVar60;
              auVar40[0xb] = cVar62;
              auVar40[0xc] = uVar64;
              auVar40[0xd] = uVar66;
              auVar40[0xe] = cVar68;
              auVar40[0xf] = cVar70;
              auVar40 = auVar40 ^ (auVar8 ^ auVar6) & auVar39;
              auVar7._8_4_ = 0x7ffff;
              auVar7._0_8_ = 0x7ffff0007ffff;
              auVar7._12_4_ = 0x7ffff;
              auVar40 = auVar40 ^ (auVar40 ^ auVar7) & auVar77;
              *(ulong *)(piVar19 + 2) =
                   CONCAT44((int)((ulong)*(undefined8 *)(piVar19 + 2) >> 0x20) +
                            auVar40._12_4_ * iVar18,
                            (int)*(undefined8 *)(piVar19 + 2) + auVar40._8_4_ * iVar18);
              *(ulong *)piVar19 =
                   CONCAT44((int)((ulong)*(undefined8 *)piVar19 >> 0x20) + auVar40._4_4_ * iVar18,
                            (int)*(undefined8 *)piVar19 + auVar40._0_4_ * iVar18);
              pfVar17 = pfVar17 + 4;
              pfVar21 = pfVar21 + 4;
              piVar19 = piVar19 + 4;
            } while (uVar22 != 0);
            bVar16 = uVar23 == param_2;
            param_3 = param_3 + uVar23;
            param_4 = param_4 + uVar23;
            param_2 = param_2 - uVar23;
            param_1 = param_1 + uVar23;
            if (bVar16) {
              return;
            }
          }
        }
        do {
          fVar25 = *param_3;
          if (fVar25 <= -16.0) {
            iVar20 = -0x80000000;
          }
          else if (16.0 <= fVar25) {
            iVar20 = 0x7fffffff;
          }
          else {
            fVar29 = 0.5;
            if (fVar25 * 1.3421773e+08 <= 0.0) {
              fVar29 = -0.5;
            }
            iVar20 = (int)(fVar29 + fVar25 * 1.3421773e+08);
          }
          param_2 = param_2 - 1;
          *param_1 = fVar25 * *(float *)ptVar1 + *param_1;
          *param_4 = *param_4 + (iVar20 >> 0xc) * iVar18;
          param_3 = param_3 + 1;
          param_4 = param_4 + 1;
          param_1 = param_1 + 1;
        } while (param_2 != 0);
      }
      break;
    case 1:
      if (param_4 == (int *)0x0) {
        ptVar2 = param_6 + 0x98;
        if (3 < param_2) {
          if ((param_3 + param_2 * 2 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= param_3) &&
             (param_6 + 0x99 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= ptVar2)) {
            uVar23 = param_2 & 0xfffffffffffffffc;
            pfVar17 = param_3 + uVar23 * 2;
            pfVar21 = param_1 + uVar23 * 2;
            uVar22 = uVar23;
            do {
              fVar25 = *param_3;
              fVar33 = param_3[1];
              fVar29 = param_3[2];
              fVar34 = param_3[3];
              fVar31 = param_3[4];
              fVar35 = param_3[5];
              fVar32 = param_3[6];
              fVar36 = param_3[7];
              param_3 = param_3 + 8;
              fVar37 = *(float *)ptVar1;
              fVar72 = *(float *)ptVar2;
              uVar22 = uVar22 - 4;
              *param_1 = *param_1 + fVar25 * fVar37;
              param_1[1] = param_1[1] + fVar33 * fVar72;
              param_1[2] = param_1[2] + fVar29 * fVar37;
              param_1[3] = param_1[3] + fVar34 * fVar72;
              param_1[4] = param_1[4] + fVar31 * fVar37;
              param_1[5] = param_1[5] + fVar35 * fVar72;
              param_1[6] = param_1[6] + fVar32 * fVar37;
              param_1[7] = param_1[7] + fVar36 * fVar72;
              param_1 = param_1 + 8;
            } while (uVar22 != 0);
            bVar16 = uVar23 == param_2;
            param_3 = pfVar17;
            param_2 = param_2 - uVar23;
            param_1 = pfVar21;
            if (bVar16) {
              return;
            }
          }
        }
        do {
          param_2 = param_2 - 1;
          *param_1 = *param_1 + *param_3 * *(float *)ptVar1;
          pfVar17 = param_3 + 1;
          param_3 = param_3 + 2;
          param_1[1] = param_1[1] + *pfVar17 * *(float *)ptVar2;
          param_1 = param_1 + 2;
        } while (param_2 != 0);
      }
      else {
        ptVar2 = param_6 + 0x98;
        if (3 < param_2) {
          if ((param_3 + param_2 * 2 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= param_3) &&
             (param_6 + 0x99 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= ptVar2)) {
            uVar23 = param_2 & 0xfffffffffffffffc;
            auVar26 = NEON_fmov(0xc1800000,4);
            auVar27 = NEON_fmov(0x41800000,4);
            auVar28 = NEON_fmov(0xbfe0000000000000,8);
            auVar30 = NEON_fmov(0x3fe0000000000000,8);
            pfVar17 = param_3 + uVar23 * 2;
            pfVar21 = param_1 + uVar23 * 2;
            auVar75._8_4_ = 0x80000000;
            auVar75._0_8_ = 0x8000000080000000;
            auVar75._12_4_ = 0x80000000;
            uVar22 = uVar23;
            piVar19 = param_4;
            do {
              fVar29 = *param_3;
              fVar34 = param_3[1];
              fVar31 = param_3[2];
              fVar35 = param_3[3];
              fVar32 = param_3[4];
              fVar36 = param_3[5];
              fVar33 = param_3[6];
              fVar37 = param_3[7];
              param_3 = param_3 + 8;
              fVar25 = *(float *)ptVar1;
              uVar22 = uVar22 - 4;
              auVar104._0_8_ = (long)(int)-(uint)(0.0 < fVar32 * 1.3421773e+08);
              auVar104._8_8_ = (long)(int)-(uint)(0.0 < fVar33 * 1.3421773e+08);
              auVar105._0_8_ = (long)(int)-(uint)(0.0 < fVar29 * 1.3421773e+08);
              auVar105._8_8_ = (long)(int)-(uint)(0.0 < fVar31 * 1.3421773e+08);
              auVar82 = auVar28 ^ (auVar28 ^ auVar30) & auVar105;
              auVar105 = auVar28 ^ (auVar28 ^ auVar30) & auVar104;
              auVar100._0_8_ = (long)(int)-(uint)(0.0 < fVar36 * 1.3421773e+08);
              auVar100._8_8_ = (long)(int)-(uint)(0.0 < fVar37 * 1.3421773e+08);
              auVar102._0_8_ = (long)(int)-(uint)(0.0 < fVar34 * 1.3421773e+08);
              auVar102._8_8_ = (long)(int)-(uint)(0.0 < fVar35 * 1.3421773e+08);
              auVar103 = auVar28 ^ (auVar28 ^ auVar30) & auVar102;
              auVar101 = auVar28 ^ (auVar28 ^ auVar30) & auVar100;
              auVar41._0_4_ = (undefined4)(long)(auVar82._0_8_ + (double)(fVar29 * 1.3421773e+08));
              auVar41._4_4_ = (int)(long)(auVar82._8_8_ + (double)(fVar31 * 1.3421773e+08));
              auVar82._0_4_ = -(uint)(fVar29 <= auVar26._0_4_);
              auVar82._4_4_ = -(uint)(fVar31 <= auVar26._4_4_);
              auVar82._8_4_ = -(uint)(fVar32 <= auVar26._8_4_);
              auVar82._12_4_ = -(uint)(fVar33 <= auVar26._12_4_);
              iVar20 = -(uint)(auVar27._0_4_ <= fVar29);
              iVar24 = -(uint)(auVar27._4_4_ <= fVar31);
              iVar91 = -(uint)(auVar27._8_4_ <= fVar32);
              iVar96 = -(uint)(auVar27._12_4_ <= fVar33);
              auVar78._0_4_ = (undefined4)(long)(auVar103._0_8_ + (double)(fVar34 * 1.3421773e+08));
              auVar78._4_4_ = (int)(long)(auVar103._8_8_ + (double)(fVar35 * 1.3421773e+08));
              auVar41._8_4_ = (int)(long)(auVar105._0_8_ + (double)(fVar32 * 1.3421773e+08));
              auVar41._12_4_ = (int)(long)(auVar105._8_8_ + (double)(fVar33 * 1.3421773e+08));
              fVar72 = *(float *)ptVar2;
              auVar78._8_4_ = (int)(long)(auVar101._0_8_ + (double)(fVar36 * 1.3421773e+08));
              auVar78._12_4_ = (int)(long)(auVar101._8_8_ + (double)(fVar37 * 1.3421773e+08));
              auVar103._0_4_ = -(uint)(fVar34 <= auVar26._0_4_);
              auVar103._4_4_ = -(uint)(fVar35 <= auVar26._4_4_);
              auVar103._8_4_ = -(uint)(fVar36 <= auVar26._8_4_);
              auVar103._12_4_ = -(uint)(fVar37 <= auVar26._12_4_);
              bVar42 = (byte)iVar20 & ~(byte)auVar82._0_4_;
              bVar43 = (byte)((uint)iVar20 >> 8) & ~(byte)((uint)auVar82._0_4_ >> 8);
              bVar45 = (byte)((uint)iVar20 >> 0x10) & ~(byte)((uint)auVar82._0_4_ >> 0x10);
              bVar47 = (byte)((uint)iVar20 >> 0x18) & ~(byte)((uint)auVar82._0_4_ >> 0x18);
              bVar49 = (byte)iVar24 & ~(byte)auVar82._4_4_;
              bVar51 = (byte)((uint)iVar24 >> 8) & ~(byte)((uint)auVar82._4_4_ >> 8);
              bVar53 = (byte)((uint)iVar24 >> 0x10) & ~(byte)((uint)auVar82._4_4_ >> 0x10);
              bVar55 = (byte)((uint)iVar24 >> 0x18) & ~(byte)((uint)auVar82._4_4_ >> 0x18);
              bVar57 = (byte)iVar91 & ~(byte)auVar82._8_4_;
              bVar59 = (byte)((uint)iVar91 >> 8) & ~(byte)((uint)auVar82._8_4_ >> 8);
              bVar61 = (byte)((uint)iVar91 >> 0x10) & ~(byte)((uint)auVar82._8_4_ >> 0x10);
              bVar63 = (byte)((uint)iVar91 >> 0x18) & ~(byte)((uint)auVar82._8_4_ >> 0x18);
              bVar65 = (byte)iVar96 & ~(byte)auVar82._12_4_;
              bVar67 = (byte)((uint)iVar96 >> 8) & ~(byte)((uint)auVar82._12_4_ >> 8);
              bVar69 = (byte)((uint)iVar96 >> 0x10) & ~(byte)((uint)auVar82._12_4_ >> 0x10);
              bVar71 = (byte)((uint)iVar96 >> 0x18) & ~(byte)((uint)auVar82._12_4_ >> 0x18);
              auVar41 = auVar41 ^ (auVar41 ^ auVar75) & auVar82;
              iVar20 = -(uint)(auVar27._0_4_ <= fVar34);
              iVar24 = -(uint)(auVar27._4_4_ <= fVar35);
              iVar91 = -(uint)(auVar27._8_4_ <= fVar36);
              iVar96 = -(uint)(auVar27._12_4_ <= fVar37);
              bVar80 = (byte)iVar20 & ~(byte)auVar103._0_4_;
              bVar83 = (byte)((uint)iVar20 >> 8) & ~(byte)((uint)auVar103._0_4_ >> 8);
              bVar84 = (byte)((uint)iVar20 >> 0x10) & ~(byte)((uint)auVar103._0_4_ >> 0x10);
              bVar85 = (byte)((uint)iVar20 >> 0x18) & ~(byte)((uint)auVar103._0_4_ >> 0x18);
              bVar86 = (byte)iVar24 & ~(byte)auVar103._4_4_;
              bVar87 = (byte)((uint)iVar24 >> 8) & ~(byte)((uint)auVar103._4_4_ >> 8);
              bVar88 = (byte)((uint)iVar24 >> 0x10) & ~(byte)((uint)auVar103._4_4_ >> 0x10);
              bVar89 = (byte)((uint)iVar24 >> 0x18) & ~(byte)((uint)auVar103._4_4_ >> 0x18);
              bVar90 = (byte)iVar91 & ~(byte)auVar103._8_4_;
              bVar92 = (byte)((uint)iVar91 >> 8) & ~(byte)((uint)auVar103._8_4_ >> 8);
              bVar93 = (byte)((uint)iVar91 >> 0x10) & ~(byte)((uint)auVar103._8_4_ >> 0x10);
              bVar94 = (byte)((uint)iVar91 >> 0x18) & ~(byte)((uint)auVar103._8_4_ >> 0x18);
              bVar95 = (byte)iVar96 & ~(byte)auVar103._12_4_;
              bVar97 = (byte)((uint)iVar96 >> 8) & ~(byte)((uint)auVar103._12_4_ >> 8);
              bVar98 = (byte)((uint)iVar96 >> 0x10) & ~(byte)((uint)auVar103._12_4_ >> 0x10);
              bVar99 = (byte)((uint)iVar96 >> 0x18) & ~(byte)((uint)auVar103._12_4_ >> 0x18);
              auVar78 = auVar78 ^ (auVar78 ^ auVar75) & auVar103;
              uVar5 = CONCAT13(bVar47,CONCAT12(bVar45,CONCAT11(bVar43,bVar42))) & 0x7fffffff;
              uVar11 = CONCAT13(bVar55,CONCAT12(bVar53,CONCAT11(bVar51,bVar49))) & 0x7fffffff;
              uVar12 = CONCAT13(bVar63,CONCAT12(bVar61,CONCAT11(bVar59,bVar57))) & 0x7fffffff;
              uVar14 = CONCAT13(bVar71,CONCAT12(bVar69,CONCAT11(bVar67,bVar65))) & 0x7fffffff;
              iVar20 = CONCAT13((byte)(uVar5 >> 0x18) | auVar41[3] & ~bVar47,
                                CONCAT12((byte)(uVar5 >> 0x10) | auVar41[2] & ~bVar45,
                                         CONCAT11((byte)(uVar5 >> 8) | auVar41[1] & ~bVar43,
                                                  (byte)uVar5 | auVar41[0] & ~bVar42)));
              auVar38._0_8_ =
                   CONCAT17((byte)(uVar11 >> 0x18) | auVar41[7] & ~bVar55,
                            CONCAT16((byte)(uVar11 >> 0x10) | auVar41[6] & ~bVar53,
                                     CONCAT15((byte)(uVar11 >> 8) | auVar41[5] & ~bVar51,
                                              CONCAT14((byte)uVar11 | auVar41[4] & ~bVar49,iVar20)))
                           );
              auVar38[8] = (byte)uVar12 | auVar41[8] & ~bVar57;
              auVar38[9] = (byte)(uVar12 >> 8) | auVar41[9] & ~bVar59;
              auVar38[10] = (byte)(uVar12 >> 0x10) | auVar41[10] & ~bVar61;
              auVar38[0xb] = (byte)(uVar12 >> 0x18) | auVar41[0xb] & ~bVar63;
              auVar101[0xc] = (byte)uVar14 | auVar41[0xc] & ~bVar65;
              auVar101._0_12_ = auVar38;
              auVar101[0xd] = (byte)(uVar14 >> 8) | auVar41[0xd] & ~bVar67;
              auVar101[0xe] = (byte)(uVar14 >> 0x10) | auVar41[0xe] & ~bVar69;
              auVar101[0xf] = (byte)(uVar14 >> 0x18) | auVar41[0xf] & ~bVar71;
              *param_1 = fVar29 * fVar25 + *param_1;
              param_1[1] = fVar34 * fVar72 + param_1[1];
              param_1[2] = fVar31 * fVar25 + param_1[2];
              param_1[3] = fVar35 * fVar72 + param_1[3];
              param_1[4] = fVar32 * fVar25 + param_1[4];
              param_1[5] = fVar36 * fVar72 + param_1[5];
              param_1[6] = fVar33 * fVar25 + param_1[6];
              param_1[7] = fVar37 * fVar72 + param_1[7];
              param_1 = param_1 + 8;
              iVar20 = CONCAT13(bVar85 & 0x7f | auVar78[3] & ~bVar85,
                                CONCAT12(bVar84 | auVar78[2] & ~bVar84,
                                         CONCAT11(bVar83 | auVar78[1] & ~bVar83,
                                                  bVar80 | auVar78[0] & ~bVar80))) + iVar20;
              iVar24 = CONCAT13(bVar89 & 0x7f | auVar78[7] & ~bVar89,
                                CONCAT12(bVar88 | auVar78[6] & ~bVar88,
                                         CONCAT11(bVar87 | auVar78[5] & ~bVar87,
                                                  bVar86 | auVar78[4] & ~bVar86))) +
                       (int)((ulong)auVar38._0_8_ >> 0x20);
              iVar91 = CONCAT13(bVar94 & 0x7f | auVar78[0xb] & ~bVar94,
                                CONCAT12(bVar93 | auVar78[10] & ~bVar93,
                                         CONCAT11(bVar92 | auVar78[9] & ~bVar92,
                                                  bVar90 | auVar78[8] & ~bVar90))) + auVar38._8_4_;
              iVar96 = CONCAT13(bVar99 & 0x7f | auVar78[0xf] & ~bVar99,
                                CONCAT12(bVar98 | auVar78[0xe] & ~bVar98,
                                         CONCAT11(bVar97 | auVar78[0xd] & ~bVar97,
                                                  bVar95 | auVar78[0xc] & ~bVar95))) +
                       auVar101._12_4_;
              *(ulong *)(piVar19 + 2) =
                   CONCAT44((int)((ulong)*(undefined8 *)(piVar19 + 2) >> 0x20) +
                            (iVar96 - (iVar96 >> 0x1f) >> 0xd) * iVar18,
                            (int)*(undefined8 *)(piVar19 + 2) +
                            (iVar91 - (iVar91 >> 0x1f) >> 0xd) * iVar18);
              *(ulong *)piVar19 =
                   CONCAT44((int)((ulong)*(undefined8 *)piVar19 >> 0x20) +
                            (iVar24 - (iVar24 >> 0x1f) >> 0xd) * iVar18,
                            (int)*(undefined8 *)piVar19 +
                            (iVar20 - (iVar20 >> 0x1f) >> 0xd) * iVar18);
              piVar19 = piVar19 + 4;
            } while (uVar22 != 0);
            bVar16 = uVar23 == param_2;
            param_3 = pfVar17;
            param_4 = param_4 + uVar23;
            param_2 = param_2 - uVar23;
            param_1 = pfVar21;
            if (bVar16) {
              return;
            }
          }
        }
        do {
          fVar25 = *param_3;
          if (fVar25 <= -16.0) {
            iVar20 = -0x80000000;
          }
          else if (16.0 <= fVar25) {
            iVar20 = 0x7fffffff;
          }
          else {
            fVar29 = 0.5;
            if (fVar25 * 1.3421773e+08 <= 0.0) {
              fVar29 = -0.5;
            }
            iVar20 = (int)(fVar29 + fVar25 * 1.3421773e+08);
          }
          *param_1 = fVar25 * *(float *)ptVar1 + *param_1;
          fVar25 = param_3[1];
          if (fVar25 <= -16.0) {
            iVar24 = -0x80000000;
          }
          else if (16.0 <= fVar25) {
            iVar24 = 0x7fffffff;
          }
          else {
            fVar29 = 0.5;
            if (fVar25 * 1.3421773e+08 <= 0.0) {
              fVar29 = -0.5;
            }
            iVar24 = (int)(fVar29 + fVar25 * 1.3421773e+08);
          }
          iVar24 = iVar24 + iVar20;
          param_1[1] = fVar25 * *(float *)ptVar2 + param_1[1];
          if (iVar24 < 0) {
            iVar24 = iVar24 + 1;
          }
          param_2 = param_2 - 1;
          *param_4 = *param_4 + (iVar24 >> 0xd) * iVar18;
          param_3 = param_3 + 2;
          param_4 = param_4 + 1;
          param_1 = param_1 + 2;
        } while (param_2 != 0);
      }
      break;
    case 2:
      volumeMulti<3,3,float,float,float,int,short>
                (param_1,param_2,param_3,param_4,(float *)ptVar1,sVar4);
      return;
    case 3:
      volumeMulti<3,4,float,float,float,int,short>
                (param_1,param_2,param_3,param_4,(float *)ptVar1,sVar4);
      return;
    case 4:
      volumeMulti<3,5,float,float,float,int,short>
                (param_1,param_2,param_3,param_4,(float *)ptVar1,sVar4);
      return;
    case 5:
      volumeMulti<3,6,float,float,float,int,short>
                (param_1,param_2,param_3,param_4,(float *)ptVar1,sVar4);
      return;
    case 6:
      volumeMulti<3,7,float,float,float,int,short>
                (param_1,param_2,param_3,param_4,(float *)ptVar1,sVar4);
      return;
    case 7:
      volumeMulti<3,8,float,float,float,int,short>
                (param_1,param_2,param_3,param_4,(float *)ptVar1,sVar4);
      return;
    }
  }
  return;
}

