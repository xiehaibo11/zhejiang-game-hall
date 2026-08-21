
/* void cocos2d::experimental::AudioMixer::volumeMix<2, true, false, float, float, int>(float*,
   unsigned long, float const*, int*, bool, cocos2d::experimental::AudioMixer::track_t*) */

void cocos2d::experimental::AudioMixer::volumeMix<2,true,false,float,float,int>
               (float *param_1,ulong param_2,float *param_3,int *param_4,bool param_5,
               track_t *param_6)

{
  track_t *ptVar1;
  track_t *ptVar2;
  track_t *ptVar3;
  short sVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  float *pfVar20;
  bool bVar21;
  float *pfVar22;
  float *pfVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  ulong uVar28;
  ulong uVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [12];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  float fVar66;
  float fVar69;
  float fVar70;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar71;
  float fVar72;
  undefined1 auVar73 [12];
  float fVar79;
  undefined1 auVar74 [12];
  float fVar78;
  undefined1 auVar75 [16];
  float fVar80;
  byte bVar81;
  float fVar82;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  float fVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  float fVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar102;
  byte bVar103;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar101;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  byte bVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  int iVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  float fVar117;
  long lVar118;
  undefined1 auVar119 [16];
  long lVar120;
  byte bVar121;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  ulong uVar123;
  byte bVar131;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  ulong uVar133;
  undefined1 uVar141;
  undefined1 uVar142;
  undefined1 uVar143;
  undefined1 uVar144;
  undefined1 uVar145;
  undefined1 uVar146;
  undefined1 uVar147;
  undefined1 uVar148;
  undefined1 uVar149;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  int iVar155;
  int iVar156;
  int iVar157;
  int iVar158;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined4 uVar122;
  undefined4 uVar132;
  
  uVar5 = *(int *)(param_6 + 0xbc) - 1;
  if (param_5) {
    if (uVar5 < 8) {
      iVar25 = *(int *)(param_6 + 0x18);
      ptVar1 = param_6 + 0x9c;
      ptVar2 = param_6 + 0xa4;
      ptVar3 = param_6 + 0x1c;
      switch(uVar5) {
      case 0:
        fVar38 = *(float *)ptVar1;
        if (param_4 == (int *)0x0) {
          do {
            param_2 = param_2 - 1;
            *param_1 = fVar38 * *param_3;
            fVar38 = *(float *)ptVar2 + *(float *)ptVar1;
            *(float *)ptVar1 = fVar38;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
          } while (param_2 != 0);
        }
        else {
          do {
            fVar41 = *param_3;
            if (fVar41 <= -16.0) {
              iVar26 = -0x80000000;
            }
            else if (16.0 <= fVar41) {
              iVar26 = 0x7fffffff;
            }
            else {
              fVar39 = 0.5;
              if (fVar41 * 1.3421773e+08 <= 0.0) {
                fVar39 = -0.5;
              }
              iVar26 = (int)(fVar39 + fVar41 * 1.3421773e+08);
            }
            *param_1 = fVar38 * fVar41;
            param_2 = param_2 - 1;
            fVar38 = *(float *)ptVar2 + *(float *)ptVar1;
            *(float *)ptVar1 = fVar38;
            *param_4 = *param_4 + (*(int *)ptVar3 >> 0x10) * (iVar26 >> 0xc);
            *(int *)ptVar3 = *(int *)ptVar3 + iVar25;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
            param_4 = param_4 + 1;
          } while (param_2 != 0);
        }
        break;
      case 1:
        if (param_4 == (int *)0x0) {
          do {
            param_2 = param_2 - 1;
            *param_1 = *param_3 * *(float *)(param_6 + 0x9c);
            *(float *)(param_6 + 0x9c) = *(float *)(param_6 + 0xa4) + *(float *)(param_6 + 0x9c);
            pfVar22 = param_3 + 1;
            param_3 = param_3 + 2;
            param_1[1] = *pfVar22 * *(float *)(param_6 + 0xa0);
            param_1 = param_1 + 2;
            *(float *)(param_6 + 0xa0) = *(float *)(param_6 + 0xa8) + *(float *)(param_6 + 0xa0);
          } while (param_2 != 0);
        }
        else {
          do {
            fVar38 = *param_3;
            if (fVar38 <= -16.0) {
              iVar26 = -0x80000000;
            }
            else if (16.0 <= fVar38) {
              iVar26 = 0x7fffffff;
            }
            else {
              fVar41 = 0.5;
              if (fVar38 * 1.3421773e+08 <= 0.0) {
                fVar41 = -0.5;
              }
              iVar26 = (int)(fVar41 + fVar38 * 1.3421773e+08);
            }
            *param_1 = fVar38 * *(float *)ptVar1;
            *(float *)(param_6 + 0x9c) = *(float *)(param_6 + 0xa4) + *(float *)(param_6 + 0x9c);
            fVar38 = param_3[1];
            if (fVar38 <= -16.0) {
              iVar27 = -0x80000000;
            }
            else if (16.0 <= fVar38) {
              iVar27 = 0x7fffffff;
            }
            else {
              fVar41 = 0.5;
              if (fVar38 * 1.3421773e+08 <= 0.0) {
                fVar41 = -0.5;
              }
              iVar27 = (int)(fVar41 + fVar38 * 1.3421773e+08);
            }
            param_1[1] = fVar38 * *(float *)(param_6 + 0xa0);
            iVar27 = iVar27 + iVar26;
            *(float *)(param_6 + 0xa0) = *(float *)(param_6 + 0xa8) + *(float *)(param_6 + 0xa0);
            if (iVar27 < 0) {
              iVar27 = iVar27 + 1;
            }
            *param_4 = *param_4 + (*(int *)(param_6 + 0x1c) >> 0x10) * (iVar27 >> 0xd);
            param_3 = param_3 + 2;
            param_2 = param_2 - 1;
            param_1 = param_1 + 2;
            *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + iVar25;
            param_4 = param_4 + 1;
          } while (param_2 != 0);
        }
        break;
      case 2:
        volumeRampMulti<4,3,float,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar25);
        return;
      case 3:
        volumeRampMulti<4,4,float,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar25);
        return;
      case 4:
        volumeRampMulti<4,5,float,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar25);
        return;
      case 5:
        volumeRampMulti<4,6,float,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar25);
        return;
      case 6:
        volumeRampMulti<4,7,float,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar25);
        return;
      case 7:
        volumeRampMulti<4,8,float,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar25);
        return;
      }
    }
  }
  else if (uVar5 < 8) {
    sVar4 = *(short *)(param_6 + 0x20);
    iVar25 = (int)sVar4;
    ptVar1 = param_6 + 0x94;
    switch(uVar5) {
    case 0:
      if (param_4 == (int *)0x0) {
        if (7 < param_2) {
          if ((param_3 + param_2 <= param_1 || (track_t *)(param_1 + param_2) <= param_3) &&
             (param_6 + 0x95 <= param_1 || (track_t *)(param_1 + param_2) <= ptVar1)) {
            fVar38 = *(float *)ptVar1;
            uVar29 = param_2 & 0xfffffffffffffff8;
            pfVar22 = param_1 + 4;
            pfVar23 = param_3 + 4;
            uVar28 = uVar29;
            do {
              fVar41 = pfVar23[-4];
              fVar39 = pfVar23[-3];
              pfVar20 = pfVar23 + -2;
              fVar31 = pfVar23[-1];
              fVar32 = *pfVar23;
              fVar34 = pfVar23[1];
              fVar35 = pfVar23[2];
              fVar36 = pfVar23[3];
              uVar28 = uVar28 - 8;
              pfVar23 = pfVar23 + 8;
              pfVar22[-2] = *pfVar20 * fVar38;
              pfVar22[-1] = fVar31 * fVar38;
              pfVar22[-4] = fVar41 * fVar38;
              pfVar22[-3] = fVar39 * fVar38;
              pfVar22[2] = fVar35 * fVar38;
              pfVar22[3] = fVar36 * fVar38;
              *pfVar22 = fVar32 * fVar38;
              pfVar22[1] = fVar34 * fVar38;
              pfVar22 = pfVar22 + 8;
            } while (uVar28 != 0);
            bVar21 = uVar29 == param_2;
            param_3 = param_3 + uVar29;
            param_2 = param_2 - uVar29;
            param_1 = param_1 + uVar29;
            if (bVar21) {
              return;
            }
          }
        }
        do {
          param_2 = param_2 - 1;
          *param_1 = *param_3 * *(float *)ptVar1;
          param_3 = param_3 + 1;
          param_1 = param_1 + 1;
        } while (param_2 != 0);
      }
      else {
        if (3 < param_2) {
          if ((param_3 + param_2 <= param_1 || (track_t *)(param_1 + param_2) <= param_3) &&
             (param_6 + 0x95 <= param_1 || (track_t *)(param_1 + param_2) <= ptVar1)) {
            fVar38 = *(float *)ptVar1;
            uVar29 = param_2 & 0xfffffffffffffffc;
            auVar33 = NEON_fmov(0xc1800000,4);
            auVar37 = NEON_fmov(0x41800000,4);
            auVar40 = NEON_fmov(0xbfe0000000000000,8);
            auVar42 = NEON_fmov(0x3fe0000000000000,8);
            auVar47._8_4_ = 0x7ffff;
            auVar47._0_8_ = 0x7ffff0007ffff;
            auVar47._12_4_ = 0x7ffff;
            pfVar22 = param_1;
            pfVar23 = param_3;
            piVar24 = param_4;
            uVar28 = uVar29;
            do {
              uVar28 = uVar28 - 4;
              fVar41 = (float)*(undefined8 *)pfVar23;
              fVar39 = (float)((ulong)*(undefined8 *)pfVar23 >> 0x20);
              fVar31 = (float)*(undefined8 *)(pfVar23 + 2);
              fVar32 = (float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20);
              auVar113._0_8_ = (long)(int)-(uint)(0.0 < fVar31 * 1.3421773e+08);
              auVar113._8_8_ = (long)(int)-(uint)(0.0 < fVar32 * 1.3421773e+08);
              auVar105._0_8_ = (long)(int)-(uint)(0.0 < fVar41 * 1.3421773e+08);
              auVar105._8_8_ = (long)(int)-(uint)(0.0 < fVar39 * 1.3421773e+08);
              auVar84 = auVar40 ^ (auVar40 ^ auVar42) & auVar105;
              auVar44 = auVar40 ^ (auVar40 ^ auVar42) & auVar113;
              auVar67._0_4_ = -(uint)(fVar41 <= auVar33._0_4_);
              auVar67._4_4_ = -(uint)(fVar39 <= auVar33._4_4_);
              auVar67._8_4_ = -(uint)(fVar31 <= auVar33._8_4_);
              auVar67._12_4_ = -(uint)(fVar32 <= auVar33._12_4_);
              iVar26 = -(uint)(auVar37._0_4_ <= fVar41);
              iVar27 = -(uint)(auVar37._4_4_ <= fVar39);
              iVar30 = -(uint)(auVar37._8_4_ <= fVar31);
              iVar112 = -(uint)(auVar37._12_4_ <= fVar32);
              fVar34 = fVar39 * fVar38;
              fVar35 = fVar32 * fVar38;
              *(ulong *)(pfVar22 + 2) =
                   CONCAT17((char)((uint)fVar35 >> 0x18),
                            CONCAT16((char)((uint)fVar35 >> 0x10),
                                     CONCAT15((char)((uint)fVar35 >> 8),
                                              CONCAT14(SUB41(fVar35,0),fVar31 * fVar38))));
              *(ulong *)pfVar22 =
                   CONCAT17((char)((uint)fVar34 >> 0x18),
                            CONCAT16((char)((uint)fVar34 >> 0x10),
                                     CONCAT15((char)((uint)fVar34 >> 8),
                                              CONCAT14(SUB41(fVar34,0),fVar41 * fVar38))));
              auVar68._0_4_ = (int)(long)(auVar84._0_8_ + (double)(fVar41 * 1.3421773e+08)) >> 0xc;
              auVar68._4_4_ = (int)(long)(auVar84._8_8_ + (double)(fVar39 * 1.3421773e+08)) >> 0xc;
              auVar68._8_4_ = (int)(long)(auVar44._0_8_ + (double)(fVar31 * 1.3421773e+08)) >> 0xc;
              auVar68._12_4_ = (int)(long)(auVar44._8_8_ + (double)(fVar32 * 1.3421773e+08)) >> 0xc;
              auVar75[0] = (byte)iVar26 & ~(byte)auVar67._0_4_;
              auVar75[1] = (byte)((uint)iVar26 >> 8) & ~(byte)((uint)auVar67._0_4_ >> 8);
              auVar75[2] = (byte)((uint)iVar26 >> 0x10) & ~(byte)((uint)auVar67._0_4_ >> 0x10);
              auVar75[3] = (byte)((uint)iVar26 >> 0x18) & ~(byte)((uint)auVar67._0_4_ >> 0x18);
              auVar75[4] = (byte)iVar27 & ~(byte)auVar67._4_4_;
              auVar75[5] = (byte)((uint)iVar27 >> 8) & ~(byte)((uint)auVar67._4_4_ >> 8);
              auVar75[6] = (byte)((uint)iVar27 >> 0x10) & ~(byte)((uint)auVar67._4_4_ >> 0x10);
              auVar75[7] = (byte)((uint)iVar27 >> 0x18) & ~(byte)((uint)auVar67._4_4_ >> 0x18);
              auVar75[8] = (byte)iVar30 & ~(byte)auVar67._8_4_;
              auVar75[9] = (byte)((uint)iVar30 >> 8) & ~(byte)((uint)auVar67._8_4_ >> 8);
              auVar75[10] = (byte)((uint)iVar30 >> 0x10) & ~(byte)((uint)auVar67._8_4_ >> 0x10);
              auVar75[0xb] = (byte)((uint)iVar30 >> 0x18) & ~(byte)((uint)auVar67._8_4_ >> 0x18);
              auVar75[0xc] = (byte)iVar112 & ~(byte)auVar67._12_4_;
              auVar75[0xd] = (byte)((uint)iVar112 >> 8) & ~(byte)((uint)auVar67._12_4_ >> 8);
              auVar75[0xe] = (byte)((uint)iVar112 >> 0x10) & ~(byte)((uint)auVar67._12_4_ >> 0x10);
              auVar75[0xf] = (byte)((uint)iVar112 >> 0x18) & ~(byte)((uint)auVar67._12_4_ >> 0x18);
              auVar6[10] = 0xf8;
              auVar6._0_10_ = (unkuint10)0xfff80000fff80000;
              auVar6[0xb] = 0xff;
              auVar6._12_2_ = 0;
              auVar6[0xe] = 0xf8;
              auVar6[0xf] = 0xff;
              auVar68 = auVar68 ^ (auVar68 ^ auVar6) & auVar67;
              auVar68 = auVar68 ^ (auVar68 ^ auVar47) & auVar75;
              iVar26 = (int)((ulong)*(undefined8 *)piVar24 >> 0x20) + auVar68._4_4_ * iVar25;
              iVar27 = (int)((ulong)*(undefined8 *)(piVar24 + 2) >> 0x20) + auVar68._12_4_ * iVar25;
              *(ulong *)(piVar24 + 2) =
                   CONCAT17((char)((uint)iVar27 >> 0x18),
                            CONCAT16((char)((uint)iVar27 >> 0x10),
                                     CONCAT15((char)((uint)iVar27 >> 8),
                                              CONCAT14((char)iVar27,
                                                       (int)*(undefined8 *)(piVar24 + 2) +
                                                       auVar68._8_4_ * iVar25))));
              *(ulong *)piVar24 =
                   CONCAT17((char)((uint)iVar26 >> 0x18),
                            CONCAT16((char)((uint)iVar26 >> 0x10),
                                     CONCAT15((char)((uint)iVar26 >> 8),
                                              CONCAT14((char)iVar26,
                                                       (int)*(undefined8 *)piVar24 +
                                                       auVar68._0_4_ * iVar25))));
              pfVar22 = pfVar22 + 4;
              pfVar23 = pfVar23 + 4;
              piVar24 = piVar24 + 4;
            } while (uVar28 != 0);
            bVar21 = uVar29 == param_2;
            param_3 = param_3 + uVar29;
            param_4 = param_4 + uVar29;
            param_2 = param_2 - uVar29;
            param_1 = param_1 + uVar29;
            if (bVar21) {
              return;
            }
          }
        }
        do {
          fVar38 = *param_3;
          if (fVar38 <= -16.0) {
            iVar25 = -0x80000000;
          }
          else if (16.0 <= fVar38) {
            iVar25 = 0x7fffffff;
          }
          else {
            fVar41 = 0.5;
            if (fVar38 * 1.3421773e+08 <= 0.0) {
              fVar41 = -0.5;
            }
            iVar25 = (int)(fVar41 + fVar38 * 1.3421773e+08);
          }
          *param_1 = fVar38 * *(float *)ptVar1;
          param_2 = param_2 - 1;
          *param_4 = *param_4 + (iVar25 >> 0xc) * (int)sVar4;
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
            uVar29 = param_2 & 0xfffffffffffffffc;
            pfVar22 = param_3 + uVar29 * 2;
            pfVar23 = param_1 + uVar29 * 2;
            uVar28 = uVar29;
            do {
              fVar38 = *param_3;
              fVar32 = param_3[1];
              fVar41 = param_3[2];
              fVar34 = param_3[3];
              fVar39 = param_3[4];
              fVar35 = param_3[5];
              fVar31 = param_3[6];
              fVar36 = param_3[7];
              param_3 = param_3 + 8;
              fVar66 = *(float *)ptVar1;
              fVar69 = *(float *)ptVar2;
              uVar28 = uVar28 - 4;
              *param_1 = fVar38 * fVar66;
              param_1[1] = fVar32 * fVar69;
              param_1[2] = fVar41 * fVar66;
              param_1[3] = fVar34 * fVar69;
              param_1[4] = fVar39 * fVar66;
              param_1[5] = fVar35 * fVar69;
              param_1[6] = fVar31 * fVar66;
              param_1[7] = fVar36 * fVar69;
              param_1 = param_1 + 8;
            } while (uVar28 != 0);
            bVar21 = uVar29 == param_2;
            param_3 = pfVar22;
            param_2 = param_2 - uVar29;
            param_1 = pfVar23;
            if (bVar21) {
              return;
            }
          }
        }
        do {
          param_2 = param_2 - 1;
          *param_1 = *param_3 * *(float *)ptVar1;
          pfVar22 = param_3 + 1;
          param_3 = param_3 + 2;
          param_1[1] = *pfVar22 * *(float *)ptVar2;
          param_1 = param_1 + 2;
        } while (param_2 != 0);
      }
      else {
        ptVar2 = param_6 + 0x98;
        if (3 < param_2) {
          if ((param_3 + param_2 * 2 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= param_3) &&
             (param_6 + 0x99 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= ptVar2)) {
            uVar29 = param_2 & 0xfffffffffffffffc;
            auVar33 = NEON_fmov(0xc1800000,4);
            auVar37 = NEON_fmov(0x41800000,4);
            auVar40 = NEON_fmov(0xbfe0000000000000,8);
            auVar42 = NEON_fmov(0x3fe0000000000000,8);
            pfVar22 = param_3 + uVar29 * 2;
            pfVar23 = param_1 + uVar29 * 2;
            auVar43._8_4_ = 0x80000000;
            auVar43._0_8_ = 0x8000000080000000;
            auVar43._12_4_ = 0x80000000;
            piVar24 = param_4;
            uVar28 = uVar29;
            do {
              fVar34 = *param_3;
              fVar41 = param_3[1];
              fVar35 = param_3[2];
              fVar39 = param_3[3];
              fVar36 = param_3[4];
              fVar31 = param_3[5];
              fVar66 = param_3[6];
              fVar32 = param_3[7];
              param_3 = param_3 + 8;
              fVar38 = *(float *)ptVar1;
              uVar28 = uVar28 - 4;
              auVar114._0_8_ = (long)(int)-(uint)(0.0 < fVar36 * 1.3421773e+08);
              auVar114._8_8_ = (long)(int)-(uint)(0.0 < fVar66 * 1.3421773e+08);
              auVar83._0_8_ = (long)(int)-(uint)(0.0 < fVar34 * 1.3421773e+08);
              auVar83._8_8_ = (long)(int)-(uint)(0.0 < fVar35 * 1.3421773e+08);
              auVar84 = auVar40 ^ (auVar40 ^ auVar42) & auVar83;
              auVar45 = auVar40 ^ (auVar40 ^ auVar42) & auVar114;
              auVar106._0_8_ = (long)(int)-(uint)(0.0 < fVar31 * 1.3421773e+08);
              auVar106._8_8_ = (long)(int)-(uint)(0.0 < fVar32 * 1.3421773e+08);
              auVar111._0_8_ = (long)(int)-(uint)(0.0 < fVar41 * 1.3421773e+08);
              auVar111._8_8_ = (long)(int)-(uint)(0.0 < fVar39 * 1.3421773e+08);
              auVar44 = auVar40 ^ (auVar40 ^ auVar42) & auVar111;
              auVar116._0_4_ = (undefined4)(long)(auVar84._0_8_ + (double)(fVar34 * 1.3421773e+08));
              auVar116._4_4_ = (int)(long)(auVar84._8_8_ + (double)(fVar35 * 1.3421773e+08));
              auVar84 = auVar40 ^ (auVar40 ^ auVar42) & auVar106;
              auVar116._8_4_ = (int)(long)(auVar45._0_8_ + (double)(fVar36 * 1.3421773e+08));
              auVar116._12_4_ = (int)(long)(auVar45._8_8_ + (double)(fVar66 * 1.3421773e+08));
              fVar69 = *(float *)ptVar2;
              auVar115._0_4_ = -(uint)(fVar34 <= auVar33._0_4_);
              auVar115._4_4_ = -(uint)(fVar35 <= auVar33._4_4_);
              auVar115._8_4_ = -(uint)(fVar36 <= auVar33._8_4_);
              auVar115._12_4_ = -(uint)(fVar66 <= auVar33._12_4_);
              iVar26 = -(uint)(auVar37._0_4_ <= fVar34);
              iVar27 = -(uint)(auVar37._4_4_ <= fVar35);
              iVar30 = -(uint)(auVar37._8_4_ <= fVar36);
              iVar112 = -(uint)(auVar37._12_4_ <= fVar66);
              auVar108._0_4_ = (undefined4)(long)(auVar44._0_8_ + (double)(fVar41 * 1.3421773e+08));
              auVar108._4_4_ = (int)(long)(auVar44._8_8_ + (double)(fVar39 * 1.3421773e+08));
              auVar108._8_4_ = (int)(long)(auVar84._0_8_ + (double)(fVar31 * 1.3421773e+08));
              auVar108._12_4_ = (int)(long)(auVar84._8_8_ + (double)(fVar32 * 1.3421773e+08));
              auVar107._0_4_ = -(uint)(fVar41 <= auVar33._0_4_);
              auVar107._4_4_ = -(uint)(fVar39 <= auVar33._4_4_);
              auVar107._8_4_ = -(uint)(fVar31 <= auVar33._8_4_);
              auVar107._12_4_ = -(uint)(fVar32 <= auVar33._12_4_);
              bVar81 = (byte)iVar26 & ~(byte)auVar115._0_4_;
              bVar87 = (byte)((uint)iVar26 >> 8) & ~(byte)((uint)auVar115._0_4_ >> 8);
              bVar88 = (byte)((uint)iVar26 >> 0x10) & ~(byte)((uint)auVar115._0_4_ >> 0x10);
              bVar89 = (byte)((uint)iVar26 >> 0x18) & ~(byte)((uint)auVar115._0_4_ >> 0x18);
              bVar90 = (byte)iVar27 & ~(byte)auVar115._4_4_;
              bVar92 = (byte)((uint)iVar27 >> 8) & ~(byte)((uint)auVar115._4_4_ >> 8);
              bVar93 = (byte)((uint)iVar27 >> 0x10) & ~(byte)((uint)auVar115._4_4_ >> 0x10);
              bVar94 = (byte)((uint)iVar27 >> 0x18) & ~(byte)((uint)auVar115._4_4_ >> 0x18);
              bVar95 = (byte)iVar30 & ~(byte)auVar115._8_4_;
              bVar97 = (byte)((uint)iVar30 >> 8) & ~(byte)((uint)auVar115._8_4_ >> 8);
              bVar98 = (byte)((uint)iVar30 >> 0x10) & ~(byte)((uint)auVar115._8_4_ >> 0x10);
              bVar99 = (byte)((uint)iVar30 >> 0x18) & ~(byte)((uint)auVar115._8_4_ >> 0x18);
              bVar100 = (byte)iVar112 & ~(byte)auVar115._12_4_;
              bVar102 = (byte)((uint)iVar112 >> 8) & ~(byte)((uint)auVar115._12_4_ >> 8);
              bVar103 = (byte)((uint)iVar112 >> 0x10) & ~(byte)((uint)auVar115._12_4_ >> 0x10);
              bVar104 = (byte)((uint)iVar112 >> 0x18) & ~(byte)((uint)auVar115._12_4_ >> 0x18);
              auVar116 = auVar116 ^ (auVar116 ^ auVar43) & auVar115;
              iVar26 = -(uint)(auVar37._0_4_ <= fVar41);
              iVar27 = -(uint)(auVar37._4_4_ <= fVar39);
              iVar30 = -(uint)(auVar37._8_4_ <= fVar31);
              iVar112 = -(uint)(auVar37._12_4_ <= fVar32);
              bVar50 = (byte)iVar26 & ~(byte)auVar107._0_4_;
              bVar51 = (byte)((uint)iVar26 >> 8) & ~(byte)((uint)auVar107._0_4_ >> 8);
              bVar52 = (byte)((uint)iVar26 >> 0x10) & ~(byte)((uint)auVar107._0_4_ >> 0x10);
              bVar53 = (byte)((uint)iVar26 >> 0x18) & ~(byte)((uint)auVar107._0_4_ >> 0x18);
              bVar54 = (byte)iVar27 & ~(byte)auVar107._4_4_;
              bVar55 = (byte)((uint)iVar27 >> 8) & ~(byte)((uint)auVar107._4_4_ >> 8);
              bVar56 = (byte)((uint)iVar27 >> 0x10) & ~(byte)((uint)auVar107._4_4_ >> 0x10);
              bVar57 = (byte)((uint)iVar27 >> 0x18) & ~(byte)((uint)auVar107._4_4_ >> 0x18);
              bVar58 = (byte)iVar30 & ~(byte)auVar107._8_4_;
              bVar59 = (byte)((uint)iVar30 >> 8) & ~(byte)((uint)auVar107._8_4_ >> 8);
              bVar60 = (byte)((uint)iVar30 >> 0x10) & ~(byte)((uint)auVar107._8_4_ >> 0x10);
              bVar61 = (byte)((uint)iVar30 >> 0x18) & ~(byte)((uint)auVar107._8_4_ >> 0x18);
              bVar62 = (byte)iVar112 & ~(byte)auVar107._12_4_;
              bVar63 = (byte)((uint)iVar112 >> 8) & ~(byte)((uint)auVar107._12_4_ >> 8);
              bVar64 = (byte)((uint)iVar112 >> 0x10) & ~(byte)((uint)auVar107._12_4_ >> 0x10);
              bVar65 = (byte)((uint)iVar112 >> 0x18) & ~(byte)((uint)auVar107._12_4_ >> 0x18);
              auVar108 = auVar108 ^ (auVar108 ^ auVar43) & auVar107;
              *param_1 = fVar34 * fVar38;
              param_1[1] = fVar41 * fVar69;
              param_1[2] = fVar35 * fVar38;
              param_1[3] = fVar39 * fVar69;
              param_1[4] = fVar36 * fVar38;
              param_1[5] = fVar31 * fVar69;
              param_1[6] = fVar66 * fVar38;
              param_1[7] = fVar32 * fVar69;
              param_1 = param_1 + 8;
              iVar26 = CONCAT13(bVar53 & 0x7f | auVar108[3] & ~bVar53,
                                CONCAT12(bVar52 | auVar108[2] & ~bVar52,
                                         CONCAT11(bVar51 | auVar108[1] & ~bVar51,
                                                  bVar50 | auVar108[0] & ~bVar50)));
              auVar73._0_8_ =
                   CONCAT17(bVar57 & 0x7f | auVar108[7] & ~bVar57,
                            CONCAT16(bVar56 | auVar108[6] & ~bVar56,
                                     CONCAT15(bVar55 | auVar108[5] & ~bVar55,
                                              CONCAT14(bVar54 | auVar108[4] & ~bVar54,iVar26))));
              auVar73[8] = bVar58 | auVar108[8] & ~bVar58;
              auVar73[9] = bVar59 | auVar108[9] & ~bVar59;
              auVar73[10] = bVar60 | auVar108[10] & ~bVar60;
              auVar73[0xb] = bVar61 & 0x7f | auVar108[0xb] & ~bVar61;
              auVar76[0xc] = bVar62 | auVar108[0xc] & ~bVar62;
              auVar76._0_12_ = auVar73;
              auVar76[0xd] = bVar63 | auVar108[0xd] & ~bVar63;
              auVar76[0xe] = bVar64 | auVar108[0xe] & ~bVar64;
              auVar76[0xf] = bVar65 & 0x7f | auVar108[0xf] & ~bVar65;
              iVar26 = iVar26 + CONCAT13(bVar89 & 0x7f | auVar116[3] & ~bVar89,
                                         CONCAT12(bVar88 | auVar116[2] & ~bVar88,
                                                  CONCAT11(bVar87 | auVar116[1] & ~bVar87,
                                                           bVar81 | auVar116[0] & ~bVar81)));
              iVar27 = (int)((ulong)auVar73._0_8_ >> 0x20) +
                       CONCAT13(bVar94 & 0x7f | auVar116[7] & ~bVar94,
                                CONCAT12(bVar93 | auVar116[6] & ~bVar93,
                                         CONCAT11(bVar92 | auVar116[5] & ~bVar92,
                                                  bVar90 | auVar116[4] & ~bVar90)));
              iVar30 = auVar73._8_4_ +
                       CONCAT13(bVar99 & 0x7f | auVar116[0xb] & ~bVar99,
                                CONCAT12(bVar98 | auVar116[10] & ~bVar98,
                                         CONCAT11(bVar97 | auVar116[9] & ~bVar97,
                                                  bVar95 | auVar116[8] & ~bVar95)));
              iVar112 = auVar76._12_4_ +
                        CONCAT13(bVar104 & 0x7f | auVar116[0xf] & ~bVar104,
                                 CONCAT12(bVar103 | auVar116[0xe] & ~bVar103,
                                          CONCAT11(bVar102 | auVar116[0xd] & ~bVar102,
                                                   bVar100 | auVar116[0xc] & ~bVar100)));
              iVar26 = iVar26 - (iVar26 >> 0x1f);
              iVar27 = iVar27 - (iVar27 >> 0x1f);
              iVar30 = iVar30 - (iVar30 >> 0x1f);
              iVar112 = iVar112 - (iVar112 >> 0x1f);
              cVar16 = (char)((uint)iVar26 >> 0x18);
              cVar17 = (char)((uint)iVar27 >> 0x18);
              cVar18 = (char)((uint)iVar30 >> 0x18);
              cVar19 = (char)((uint)iVar112 >> 0x18);
              piVar24[2] = piVar24[2] +
                           CONCAT13(cVar18 >> 7,CONCAT12(cVar18 >> 5,(short)(iVar30 >> 0xd))) *
                           iVar25;
              piVar24[3] = piVar24[3] +
                           CONCAT13(cVar19 >> 7,CONCAT12(cVar19 >> 5,(short)(iVar112 >> 0xd))) *
                           iVar25;
              *piVar24 = *piVar24 +
                         CONCAT13(cVar16 >> 7,CONCAT12(cVar16 >> 5,(short)(iVar26 >> 0xd))) * iVar25
              ;
              piVar24[1] = piVar24[1] +
                           CONCAT13(cVar17 >> 7,CONCAT12(cVar17 >> 5,(short)(iVar27 >> 0xd))) *
                           iVar25;
              piVar24 = piVar24 + 4;
            } while (uVar28 != 0);
            bVar21 = uVar29 == param_2;
            param_3 = pfVar22;
            param_4 = param_4 + uVar29;
            param_2 = param_2 - uVar29;
            param_1 = pfVar23;
            if (bVar21) {
              return;
            }
          }
        }
        do {
          fVar38 = *param_3;
          if (fVar38 <= -16.0) {
            iVar26 = -0x80000000;
          }
          else if (16.0 <= fVar38) {
            iVar26 = 0x7fffffff;
          }
          else {
            fVar41 = 0.5;
            if (fVar38 * 1.3421773e+08 <= 0.0) {
              fVar41 = -0.5;
            }
            iVar26 = (int)(fVar41 + fVar38 * 1.3421773e+08);
          }
          *param_1 = fVar38 * *(float *)ptVar1;
          fVar38 = param_3[1];
          if (fVar38 <= -16.0) {
            iVar27 = -0x80000000;
          }
          else if (16.0 <= fVar38) {
            iVar27 = 0x7fffffff;
          }
          else {
            fVar41 = 0.5;
            if (fVar38 * 1.3421773e+08 <= 0.0) {
              fVar41 = -0.5;
            }
            iVar27 = (int)(fVar41 + fVar38 * 1.3421773e+08);
          }
          param_1[1] = fVar38 * *(float *)ptVar2;
          iVar27 = iVar27 + iVar26;
          if (iVar27 < 0) {
            iVar27 = iVar27 + 1;
          }
          param_2 = param_2 - 1;
          *param_4 = *param_4 + (iVar27 >> 0xd) * iVar25;
          param_3 = param_3 + 2;
          param_4 = param_4 + 1;
          param_1 = param_1 + 2;
        } while (param_2 != 0);
      }
      break;
    case 2:
      if (param_4 == (int *)0x0) {
        if (3 < param_2) {
          if ((param_3 + param_2 * 3 <= param_1 || (track_t *)(param_1 + param_2 * 3) <= param_3) &&
             (param_6 + 0x95 <= param_1 || (track_t *)(param_1 + param_2 * 3) <= ptVar1)) {
            uVar29 = param_2 & 0xfffffffffffffffc;
            pfVar22 = param_3 + uVar29 * 3;
            pfVar23 = param_1 + uVar29 * 3;
            uVar28 = uVar29;
            do {
              fVar38 = *param_3;
              fVar32 = param_3[1];
              fVar66 = param_3[2];
              fVar41 = param_3[3];
              fVar34 = param_3[4];
              fVar69 = param_3[5];
              fVar39 = param_3[6];
              fVar35 = param_3[7];
              fVar70 = param_3[8];
              fVar31 = param_3[9];
              fVar36 = param_3[10];
              fVar71 = param_3[0xb];
              param_3 = param_3 + 0xc;
              fVar72 = *(float *)ptVar1;
              uVar28 = uVar28 - 4;
              *param_1 = fVar38 * fVar72;
              param_1[1] = fVar32 * fVar72;
              param_1[2] = fVar66 * fVar72;
              param_1[3] = fVar41 * fVar72;
              param_1[4] = fVar34 * fVar72;
              param_1[5] = fVar69 * fVar72;
              param_1[6] = fVar39 * fVar72;
              param_1[7] = fVar35 * fVar72;
              param_1[8] = fVar70 * fVar72;
              param_1[9] = fVar31 * fVar72;
              param_1[10] = fVar36 * fVar72;
              param_1[0xb] = fVar71 * fVar72;
              param_1 = param_1 + 0xc;
            } while (uVar28 != 0);
            bVar21 = uVar29 == param_2;
            param_3 = pfVar22;
            param_2 = param_2 - uVar29;
            param_1 = pfVar23;
            if (bVar21) {
              return;
            }
          }
        }
        do {
          param_2 = param_2 - 1;
          *param_1 = *param_3 * *(float *)ptVar1;
          param_1[1] = param_3[1] * *(float *)ptVar1;
          pfVar22 = param_3 + 2;
          param_3 = param_3 + 3;
          param_1[2] = *pfVar22 * *(float *)ptVar1;
          param_1 = param_1 + 3;
        } while (param_2 != 0);
      }
      else {
        if (3 < param_2) {
          if ((param_3 + param_2 * 3 <= param_1 || (track_t *)(param_1 + param_2 * 3) <= param_3) &&
             (param_6 + 0x95 <= param_1 || (track_t *)(param_1 + param_2 * 3) <= ptVar1)) {
            uVar29 = param_2 & 0xfffffffffffffffc;
            auVar33 = NEON_fmov(0xc1800000,4);
            auVar37 = NEON_fmov(0x41800000,4);
            auVar40 = NEON_fmov(0xbfe0000000000000,8);
            auVar42 = NEON_fmov(0x3fe0000000000000,8);
            auVar84._8_4_ = 0x80000000;
            auVar84._0_8_ = 0x8000000080000000;
            auVar84._12_4_ = 0x80000000;
            pfVar22 = param_3 + uVar29 * 3;
            pfVar23 = param_1 + uVar29 * 3;
            piVar24 = param_4;
            uVar28 = uVar29;
            do {
              fVar66 = *param_3;
              fVar72 = param_3[1];
              fVar82 = param_3[2];
              fVar69 = param_3[3];
              fVar78 = param_3[4];
              fVar91 = param_3[5];
              fVar70 = param_3[6];
              fVar79 = param_3[7];
              fVar96 = param_3[8];
              fVar71 = param_3[9];
              fVar80 = param_3[10];
              fVar101 = param_3[0xb];
              param_3 = param_3 + 0xc;
              fVar117 = *(float *)ptVar1;
              uVar28 = uVar28 - 4;
              fVar38 = auVar33._0_4_;
              auVar48._0_4_ = -(uint)(fVar66 <= fVar38);
              fVar41 = auVar33._4_4_;
              auVar48._4_4_ = -(uint)(fVar69 <= fVar41);
              fVar39 = auVar33._8_4_;
              auVar48._8_4_ = -(uint)(fVar70 <= fVar39);
              fVar31 = auVar33._12_4_;
              auVar48._12_4_ = -(uint)(fVar71 <= fVar31);
              fVar32 = auVar37._0_4_;
              iVar26 = -(uint)(fVar32 <= fVar66);
              fVar34 = auVar37._4_4_;
              iVar27 = -(uint)(fVar34 <= fVar69);
              fVar35 = auVar37._8_4_;
              iVar30 = -(uint)(fVar35 <= fVar70);
              fVar36 = auVar37._12_4_;
              iVar112 = -(uint)(fVar36 <= fVar71);
              auVar109._0_4_ = -(uint)(fVar72 <= fVar38);
              auVar109._4_4_ = -(uint)(fVar78 <= fVar41);
              auVar109._8_4_ = -(uint)(fVar79 <= fVar39);
              auVar109._12_4_ = -(uint)(fVar80 <= fVar31);
              iVar11 = -(uint)(fVar32 <= fVar72);
              iVar12 = -(uint)(fVar34 <= fVar78);
              iVar13 = -(uint)(fVar35 <= fVar79);
              iVar15 = -(uint)(fVar36 <= fVar80);
              auVar154._0_4_ = -(uint)(fVar82 <= fVar38);
              auVar154._4_4_ = -(uint)(fVar91 <= fVar41);
              auVar154._8_4_ = -(uint)(fVar96 <= fVar39);
              auVar154._12_4_ = -(uint)(fVar101 <= fVar31);
              iVar155 = -(uint)(fVar32 <= fVar82);
              iVar156 = -(uint)(fVar34 <= fVar91);
              iVar157 = -(uint)(fVar35 <= fVar96);
              iVar158 = -(uint)(fVar36 <= fVar101);
              auVar150._0_8_ = (long)(int)-(uint)(0.0 < fVar70 * 1.3421773e+08);
              auVar150._8_8_ = (long)(int)-(uint)(0.0 < fVar71 * 1.3421773e+08);
              auVar86._0_8_ = (long)(int)-(uint)(0.0 < fVar66 * 1.3421773e+08);
              auVar86._8_8_ = (long)(int)-(uint)(0.0 < fVar69 * 1.3421773e+08);
              auVar44 = auVar40 ^ (auVar40 ^ auVar42) & auVar86;
              auVar151 = auVar40 ^ (auVar40 ^ auVar42) & auVar150;
              auVar153._0_8_ = (long)(int)-(uint)(0.0 < fVar79 * 1.3421773e+08);
              auVar153._8_8_ = (long)(int)-(uint)(0.0 < fVar80 * 1.3421773e+08);
              auVar85._0_8_ = (long)(int)-(uint)(0.0 < fVar72 * 1.3421773e+08);
              auVar85._8_8_ = (long)(int)-(uint)(0.0 < fVar78 * 1.3421773e+08);
              auVar86 = auVar40 ^ (auVar40 ^ auVar42) & auVar85;
              auVar45 = auVar40 ^ (auVar40 ^ auVar42) & auVar153;
              auVar119._0_8_ = (long)(int)-(uint)(0.0 < fVar96 * 1.3421773e+08);
              auVar119._8_8_ = (long)(int)-(uint)(0.0 < fVar101 * 1.3421773e+08);
              auVar152._0_8_ = (long)(int)-(uint)(0.0 < fVar82 * 1.3421773e+08);
              auVar152._8_8_ = (long)(int)-(uint)(0.0 < fVar91 * 1.3421773e+08);
              auVar49._0_4_ = (undefined4)(long)(auVar44._0_8_ + (double)(fVar66 * 1.3421773e+08));
              auVar49._4_4_ = (int)(long)(auVar44._8_8_ + (double)(fVar69 * 1.3421773e+08));
              auVar153 = auVar40 ^ (auVar40 ^ auVar42) & auVar152;
              auVar49._8_4_ = (int)(long)(auVar151._0_8_ + (double)(fVar70 * 1.3421773e+08));
              auVar49._12_4_ = (int)(long)(auVar151._8_8_ + (double)(fVar71 * 1.3421773e+08));
              auVar44 = auVar40 ^ (auVar40 ^ auVar42) & auVar119;
              auVar110._0_4_ = (undefined4)(long)(auVar86._0_8_ + (double)(fVar72 * 1.3421773e+08));
              auVar110._4_4_ = (int)(long)(auVar86._8_8_ + (double)(fVar78 * 1.3421773e+08));
              auVar110._8_4_ = (int)(long)(auVar45._0_8_ + (double)(fVar79 * 1.3421773e+08));
              auVar110._12_4_ = (int)(long)(auVar45._8_8_ + (double)(fVar80 * 1.3421773e+08));
              bVar81 = (byte)iVar11 & ~(byte)auVar109._0_4_;
              bVar87 = (byte)((uint)iVar11 >> 8) & ~(byte)((uint)auVar109._0_4_ >> 8);
              bVar88 = (byte)((uint)iVar11 >> 0x10) & ~(byte)((uint)auVar109._0_4_ >> 0x10);
              bVar89 = (byte)((uint)iVar11 >> 0x18) & ~(byte)((uint)auVar109._0_4_ >> 0x18);
              bVar90 = (byte)iVar12 & ~(byte)auVar109._4_4_;
              bVar92 = (byte)((uint)iVar12 >> 8) & ~(byte)((uint)auVar109._4_4_ >> 8);
              bVar93 = (byte)((uint)iVar12 >> 0x10) & ~(byte)((uint)auVar109._4_4_ >> 0x10);
              bVar94 = (byte)((uint)iVar12 >> 0x18) & ~(byte)((uint)auVar109._4_4_ >> 0x18);
              bVar95 = (byte)iVar13 & ~(byte)auVar109._8_4_;
              bVar97 = (byte)((uint)iVar13 >> 8) & ~(byte)((uint)auVar109._8_4_ >> 8);
              bVar98 = (byte)((uint)iVar13 >> 0x10) & ~(byte)((uint)auVar109._8_4_ >> 0x10);
              bVar99 = (byte)((uint)iVar13 >> 0x18) & ~(byte)((uint)auVar109._8_4_ >> 0x18);
              bVar100 = (byte)iVar15 & ~(byte)auVar109._12_4_;
              bVar102 = (byte)((uint)iVar15 >> 8) & ~(byte)((uint)auVar109._12_4_ >> 8);
              bVar103 = (byte)((uint)iVar15 >> 0x10) & ~(byte)((uint)auVar109._12_4_ >> 0x10);
              bVar104 = (byte)((uint)iVar15 >> 0x18) & ~(byte)((uint)auVar109._12_4_ >> 0x18);
              lVar14 = (long)(auVar153._8_8_ + (double)(fVar91 * 1.3421773e+08));
              lVar118 = (long)(auVar44._0_8_ + (double)(fVar96 * 1.3421773e+08));
              lVar120 = (long)(auVar44._8_8_ + (double)(fVar101 * 1.3421773e+08));
              uVar141 = (undefined1)((ulong)lVar14 >> 8);
              uVar142 = (undefined1)((ulong)lVar14 >> 0x10);
              uVar143 = (undefined1)((ulong)lVar14 >> 0x18);
              bVar50 = (byte)iVar26 & ~(byte)auVar48._0_4_;
              bVar51 = (byte)((uint)iVar26 >> 8) & ~(byte)((uint)auVar48._0_4_ >> 8);
              bVar52 = (byte)((uint)iVar26 >> 0x10) & ~(byte)((uint)auVar48._0_4_ >> 0x10);
              bVar53 = (byte)((uint)iVar26 >> 0x18) & ~(byte)((uint)auVar48._0_4_ >> 0x18);
              bVar54 = (byte)iVar27 & ~(byte)auVar48._4_4_;
              bVar55 = (byte)((uint)iVar27 >> 8) & ~(byte)((uint)auVar48._4_4_ >> 8);
              bVar56 = (byte)((uint)iVar27 >> 0x10) & ~(byte)((uint)auVar48._4_4_ >> 0x10);
              bVar57 = (byte)((uint)iVar27 >> 0x18) & ~(byte)((uint)auVar48._4_4_ >> 0x18);
              bVar58 = (byte)iVar30 & ~(byte)auVar48._8_4_;
              bVar59 = (byte)((uint)iVar30 >> 8) & ~(byte)((uint)auVar48._8_4_ >> 8);
              bVar60 = (byte)((uint)iVar30 >> 0x10) & ~(byte)((uint)auVar48._8_4_ >> 0x10);
              bVar61 = (byte)((uint)iVar30 >> 0x18) & ~(byte)((uint)auVar48._8_4_ >> 0x18);
              bVar62 = (byte)iVar112 & ~(byte)auVar48._12_4_;
              bVar63 = (byte)((uint)iVar112 >> 8) & ~(byte)((uint)auVar48._12_4_ >> 8);
              bVar64 = (byte)((uint)iVar112 >> 0x10) & ~(byte)((uint)auVar48._12_4_ >> 0x10);
              bVar65 = (byte)((uint)iVar112 >> 0x18) & ~(byte)((uint)auVar48._12_4_ >> 0x18);
              uVar144 = (undefined1)((ulong)lVar118 >> 8);
              uVar145 = (undefined1)((ulong)lVar118 >> 0x10);
              uVar146 = (undefined1)((ulong)lVar118 >> 0x18);
              uVar147 = (undefined1)((ulong)lVar120 >> 8);
              uVar148 = (undefined1)((ulong)lVar120 >> 0x10);
              uVar149 = (undefined1)((ulong)lVar120 >> 0x18);
              auVar49 = auVar49 ^ (auVar49 ^ auVar84) & auVar48;
              auVar110 = auVar110 ^ (auVar110 ^ auVar84) & auVar109;
              bVar121 = (byte)iVar155 & ~(byte)auVar154._0_4_;
              bVar124 = (byte)((uint)iVar155 >> 8) & ~(byte)((uint)auVar154._0_4_ >> 8);
              bVar125 = (byte)((uint)iVar155 >> 0x10) & ~(byte)((uint)auVar154._0_4_ >> 0x10);
              bVar126 = (byte)((uint)iVar155 >> 0x18) & ~(byte)((uint)auVar154._0_4_ >> 0x18);
              uVar122 = CONCAT13(bVar126,CONCAT12(bVar125,CONCAT11(bVar124,bVar121)));
              bVar127 = (byte)iVar156 & ~(byte)auVar154._4_4_;
              bVar128 = (byte)((uint)iVar156 >> 8) & ~(byte)((uint)auVar154._4_4_ >> 8);
              bVar129 = (byte)((uint)iVar156 >> 0x10) & ~(byte)((uint)auVar154._4_4_ >> 0x10);
              bVar130 = (byte)((uint)iVar156 >> 0x18) & ~(byte)((uint)auVar154._4_4_ >> 0x18);
              bVar131 = (byte)iVar157 & ~(byte)auVar154._8_4_;
              bVar134 = (byte)((uint)iVar157 >> 8) & ~(byte)((uint)auVar154._8_4_ >> 8);
              bVar135 = (byte)((uint)iVar157 >> 0x10) & ~(byte)((uint)auVar154._8_4_ >> 0x10);
              bVar136 = (byte)((uint)iVar157 >> 0x18) & ~(byte)((uint)auVar154._8_4_ >> 0x18);
              uVar132 = CONCAT13(bVar136,CONCAT12(bVar135,CONCAT11(bVar134,bVar131)));
              bVar137 = (byte)iVar158 & ~(byte)auVar154._12_4_;
              bVar138 = (byte)((uint)iVar158 >> 8) & ~(byte)((uint)auVar154._12_4_ >> 8);
              bVar139 = (byte)((uint)iVar158 >> 0x10) & ~(byte)((uint)auVar154._12_4_ >> 0x10);
              bVar140 = (byte)((uint)iVar158 >> 0x18) & ~(byte)((uint)auVar154._12_4_ >> 0x18);
              uVar10 = (undefined4)(long)(auVar153._0_8_ + (double)(fVar82 * 1.3421773e+08));
              auVar44[4] = (char)lVar14;
              auVar44._0_4_ = uVar10;
              auVar44[5] = uVar141;
              auVar44[6] = uVar142;
              auVar44[7] = uVar143;
              auVar44[8] = (char)lVar118;
              auVar44[9] = uVar144;
              auVar44[10] = uVar145;
              auVar44[0xb] = uVar146;
              auVar44[0xc] = (char)lVar120;
              auVar44[0xd] = uVar147;
              auVar44[0xe] = uVar148;
              auVar44[0xf] = uVar149;
              auVar45[4] = (char)lVar14;
              auVar45._0_4_ = uVar10;
              auVar45[5] = uVar141;
              auVar45[6] = uVar142;
              auVar45[7] = uVar143;
              auVar45[8] = (char)lVar118;
              auVar45[9] = uVar144;
              auVar45[10] = uVar145;
              auVar45[0xb] = uVar146;
              auVar45[0xc] = (char)lVar120;
              auVar45[0xd] = uVar147;
              auVar45[0xe] = uVar148;
              auVar45[0xf] = uVar149;
              auVar45 = auVar45 ^ (auVar44 ^ auVar84) & auVar154;
              uVar5 = CONCAT13(bVar53,CONCAT12(bVar52,CONCAT11(bVar51,bVar50))) & 0x7fffffff;
              uVar7 = CONCAT13(bVar57,CONCAT12(bVar56,CONCAT11(bVar55,bVar54))) & 0x7fffffff;
              uVar8 = CONCAT13(bVar61,CONCAT12(bVar60,CONCAT11(bVar59,bVar58))) & 0x7fffffff;
              uVar9 = CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,bVar62))) & 0x7fffffff;
              uVar123 = CONCAT44((int)(CONCAT17(bVar130,CONCAT16(bVar129,CONCAT15(bVar128,CONCAT14(
                                                  bVar127,uVar122)))) >> 0x20),uVar122) &
                        0x7fffffff7fffffff;
              uVar133 = CONCAT44((int)(CONCAT17(bVar140,CONCAT16(bVar139,CONCAT15(bVar138,CONCAT14(
                                                  bVar137,uVar132)))) >> 0x20),uVar132) &
                        0x7fffffff7fffffff;
              iVar30 = CONCAT13((byte)(uVar5 >> 0x18) | auVar49[3] & ~bVar53,
                                CONCAT12((byte)(uVar5 >> 0x10) | auVar49[2] & ~bVar52,
                                         CONCAT11((byte)(uVar5 >> 8) | auVar49[1] & ~bVar51,
                                                  (byte)uVar5 | auVar49[0] & ~bVar50)));
              auVar46._0_8_ =
                   CONCAT17((byte)(uVar7 >> 0x18) | auVar49[7] & ~bVar57,
                            CONCAT16((byte)(uVar7 >> 0x10) | auVar49[6] & ~bVar56,
                                     CONCAT15((byte)(uVar7 >> 8) | auVar49[5] & ~bVar55,
                                              CONCAT14((byte)uVar7 | auVar49[4] & ~bVar54,iVar30))))
              ;
              auVar46[8] = (byte)uVar8 | auVar49[8] & ~bVar58;
              auVar46[9] = (byte)(uVar8 >> 8) | auVar49[9] & ~bVar59;
              auVar46[10] = (byte)(uVar8 >> 0x10) | auVar49[10] & ~bVar60;
              auVar46[0xb] = (byte)(uVar8 >> 0x18) | auVar49[0xb] & ~bVar61;
              auVar151[0xc] = (byte)uVar9 | auVar49[0xc] & ~bVar62;
              auVar151._0_12_ = auVar46;
              auVar151[0xd] = (byte)(uVar9 >> 8) | auVar49[0xd] & ~bVar63;
              auVar151[0xe] = (byte)(uVar9 >> 0x10) | auVar49[0xe] & ~bVar64;
              auVar151[0xf] = (byte)(uVar9 >> 0x18) | auVar49[0xf] & ~bVar65;
              iVar112 = CONCAT13((byte)(uVar123 >> 0x18) | auVar45[3] & ~bVar126,
                                 CONCAT12((byte)(uVar123 >> 0x10) | auVar45[2] & ~bVar125,
                                          CONCAT11((byte)(uVar123 >> 8) | auVar45[1] & ~bVar124,
                                                   (byte)uVar123 | auVar45[0] & ~bVar121)));
              auVar74._0_8_ =
                   CONCAT17((byte)(uVar123 >> 0x38) | auVar45[7] & ~bVar130,
                            CONCAT16((byte)(uVar123 >> 0x30) | auVar45[6] & ~bVar129,
                                     CONCAT15((byte)(uVar123 >> 0x28) | auVar45[5] & ~bVar128,
                                              CONCAT14((byte)(uVar123 >> 0x20) |
                                                       auVar45[4] & ~bVar127,iVar112))));
              auVar74[8] = (byte)uVar133 | auVar45[8] & ~bVar131;
              auVar74[9] = (byte)(uVar133 >> 8) | auVar45[9] & ~bVar134;
              auVar74[10] = (byte)(uVar133 >> 0x10) | auVar45[10] & ~bVar135;
              auVar74[0xb] = (byte)(uVar133 >> 0x18) | auVar45[0xb] & ~bVar136;
              auVar77[0xc] = (byte)(uVar133 >> 0x20) | auVar45[0xc] & ~bVar137;
              auVar77._0_12_ = auVar74;
              auVar77[0xd] = (byte)(uVar133 >> 0x28) | auVar45[0xd] & ~bVar138;
              auVar77[0xe] = (byte)(uVar133 >> 0x30) | auVar45[0xe] & ~bVar139;
              auVar77[0xf] = (byte)(uVar133 >> 0x38) | auVar45[0xf] & ~bVar140;
              *param_1 = fVar66 * fVar117;
              param_1[1] = fVar72 * fVar117;
              param_1[2] = fVar82 * fVar117;
              param_1[3] = fVar69 * fVar117;
              param_1[4] = fVar78 * fVar117;
              param_1[5] = fVar91 * fVar117;
              param_1[6] = fVar70 * fVar117;
              param_1[7] = fVar79 * fVar117;
              param_1[8] = fVar96 * fVar117;
              param_1[9] = fVar71 * fVar117;
              param_1[10] = fVar80 * fVar117;
              param_1[0xb] = fVar101 * fVar117;
              param_1 = param_1 + 0xc;
              iVar26 = CONCAT13(bVar99 & 0x7f | auVar110[0xb] & ~bVar99,
                                CONCAT12(bVar98 | auVar110[10] & ~bVar98,
                                         CONCAT11(bVar97 | auVar110[9] & ~bVar97,
                                                  bVar95 | auVar110[8] & ~bVar95))) + auVar46._8_4_
                       + auVar74._8_4_;
              iVar27 = CONCAT13(bVar104 & 0x7f | auVar110[0xf] & ~bVar104,
                                CONCAT12(bVar103 | auVar110[0xe] & ~bVar103,
                                         CONCAT11(bVar102 | auVar110[0xd] & ~bVar102,
                                                  bVar100 | auVar110[0xc] & ~bVar100))) +
                       auVar151._12_4_ + auVar77._12_4_;
              iVar26 = iVar26 / 3 + (iVar26 >> 0x1f);
              iVar27 = (int)(CONCAT14((char)(iVar27 / 0x3000000) + (char)(iVar27 >> 0x1f),
                                      (int)((ulong)((long)iVar27 * 0x55555556) >> 0x18)) >> 8);
              piVar24[2] = piVar24[2] + (iVar26 - (iVar26 >> 0x1f) >> 0xc) * iVar25;
              piVar24[3] = piVar24[3] + (iVar27 - (iVar27 >> 0x1f) >> 0xc) * iVar25;
              *piVar24 = *piVar24 +
                         ((CONCAT13(bVar89 & 0x7f | auVar110[3] & ~bVar89,
                                    CONCAT12(bVar88 | auVar110[2] & ~bVar88,
                                             CONCAT11(bVar87 | auVar110[1] & ~bVar87,
                                                      bVar81 | auVar110[0] & ~bVar81))) + iVar30 +
                          iVar112) / 3 >> 0xc) * iVar25;
              piVar24[1] = piVar24[1] +
                           ((CONCAT13(bVar94 & 0x7f | auVar110[7] & ~bVar94,
                                      CONCAT12(bVar93 | auVar110[6] & ~bVar93,
                                               CONCAT11(bVar92 | auVar110[5] & ~bVar92,
                                                        bVar90 | auVar110[4] & ~bVar90))) +
                             (int)((ulong)auVar46._0_8_ >> 0x20) +
                            (int)((ulong)auVar74._0_8_ >> 0x20)) / 3 >> 0xc) * iVar25;
              piVar24 = piVar24 + 4;
            } while (uVar28 != 0);
            bVar21 = uVar29 == param_2;
            param_3 = pfVar22;
            param_4 = param_4 + uVar29;
            param_2 = param_2 - uVar29;
            param_1 = pfVar23;
            if (bVar21) {
              return;
            }
          }
        }
        do {
          fVar39 = *param_3;
          fVar38 = -0.5;
          fVar41 = 0.5;
          if (fVar39 <= -16.0) {
            iVar26 = -0x80000000;
          }
          else if (16.0 <= fVar39) {
            iVar26 = 0x7fffffff;
          }
          else {
            fVar31 = fVar41;
            if (fVar39 * 1.3421773e+08 <= 0.0) {
              fVar31 = fVar38;
            }
            iVar26 = (int)(fVar31 + fVar39 * 1.3421773e+08);
          }
          *param_1 = fVar39 * *(float *)ptVar1;
          fVar39 = param_3[1];
          if (fVar39 <= -16.0) {
            iVar27 = -0x80000000;
          }
          else if (16.0 <= fVar39) {
            iVar27 = 0x7fffffff;
          }
          else {
            fVar31 = fVar41;
            if (fVar39 * 1.3421773e+08 <= 0.0) {
              fVar31 = fVar38;
            }
            iVar27 = (int)(fVar31 + fVar39 * 1.3421773e+08);
          }
          param_1[1] = fVar39 * *(float *)ptVar1;
          fVar39 = param_3[2];
          if (fVar39 <= -16.0) {
            iVar30 = -0x80000000;
          }
          else if (16.0 <= fVar39) {
            iVar30 = 0x7fffffff;
          }
          else {
            if (fVar39 * 1.3421773e+08 <= 0.0) {
              fVar41 = fVar38;
            }
            iVar30 = (int)(fVar41 + fVar39 * 1.3421773e+08);
          }
          param_1[2] = fVar39 * *(float *)ptVar1;
          param_2 = param_2 - 1;
          *param_4 = *param_4 + ((iVar27 + iVar26 + iVar30) / 3 >> 0xc) * iVar25;
          param_3 = param_3 + 3;
          param_4 = param_4 + 1;
          param_1 = param_1 + 3;
        } while (param_2 != 0);
      }
      break;
    case 3:
      volumeMulti<4,4,float,float,float,int,short>
                (param_1,param_2,param_3,param_4,(float *)ptVar1,sVar4);
      return;
    case 4:
      volumeMulti<4,5,float,float,float,int,short>
                (param_1,param_2,param_3,param_4,(float *)ptVar1,sVar4);
      return;
    case 5:
      volumeMulti<4,6,float,float,float,int,short>
                (param_1,param_2,param_3,param_4,(float *)ptVar1,sVar4);
      return;
    case 6:
      volumeMulti<4,7,float,float,float,int,short>
                (param_1,param_2,param_3,param_4,(float *)ptVar1,sVar4);
      return;
    case 7:
      volumeMulti<4,8,float,float,float,int,short>
                (param_1,param_2,param_3,param_4,(float *)ptVar1,sVar4);
      return;
    }
  }
  return;
}

