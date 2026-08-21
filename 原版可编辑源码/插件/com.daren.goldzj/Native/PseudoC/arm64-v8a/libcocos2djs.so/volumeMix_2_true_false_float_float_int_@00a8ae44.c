
/* void cocos2d::AudioMixer::volumeMix<2, true, false, float, float, int>(float*, unsigned long,
   float const*, int*, bool, cocos2d::AudioMixer::track_t*) */

void cocos2d::AudioMixer::volumeMix<2,true,false,float,float,int>
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
  float fVar33;
  float fVar35;
  float fVar36;
  undefined1 auVar34 [16];
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auVar41 [16];
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [12];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
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
  byte bVar66;
  byte bVar67;
  byte bVar68;
  float fVar69;
  float fVar72;
  float fVar73;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar74;
  float fVar75;
  undefined1 auVar76 [12];
  float fVar82;
  undefined1 auVar77 [12];
  float fVar81;
  undefined1 auVar78 [16];
  float fVar83;
  byte bVar84;
  float fVar85;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  float fVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  float fVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar105;
  byte bVar106;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar104;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  byte bVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  int iVar115;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  float fVar120;
  long lVar121;
  undefined1 auVar122 [16];
  long lVar123;
  byte bVar124;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  ulong uVar126;
  byte bVar134;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  ulong uVar136;
  undefined1 uVar144;
  undefined1 uVar145;
  undefined1 uVar146;
  undefined1 uVar147;
  undefined1 uVar148;
  undefined1 uVar149;
  undefined1 uVar150;
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  int iVar156;
  int iVar157;
  int iVar158;
  int iVar159;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined4 uVar125;
  undefined4 uVar135;
  
  uVar5 = *(int *)(param_6 + 0xbc) - 1;
  if (param_5) {
    if (uVar5 < 8) {
      iVar25 = *(int *)(param_6 + 0x18);
      ptVar1 = param_6 + 0x9c;
      ptVar2 = param_6 + 0xa4;
      ptVar3 = param_6 + 0x1c;
      switch(uVar5) {
      case 0:
        fVar40 = *(float *)ptVar1;
        if (param_4 == (int *)0x0) {
          do {
            param_2 = param_2 - 1;
            *param_1 = fVar40 * *param_3;
            fVar40 = *(float *)ptVar2 + *(float *)ptVar1;
            *(float *)ptVar1 = fVar40;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
          } while (param_2 != 0);
        }
        else {
          do {
            fVar42 = *param_3;
            if (fVar42 <= -16.0) {
              iVar26 = -0x80000000;
            }
            else if (16.0 <= fVar42) {
              iVar26 = 0x7fffffff;
            }
            else {
              uVar44 = 0x3f;
              if (fVar42 * 1.3421773e+08 <= 0.0) {
                uVar44 = 0xbf;
              }
              iVar26 = (int)((double)CONCAT17(uVar44,0xe0000000000000) +
                            (double)(fVar42 * 1.3421773e+08));
            }
            *param_1 = fVar40 * fVar42;
                    /* try { // try from 00a8aeec to 00b8af03 has its CatchHandler @ 00a8b078 */
            param_2 = param_2 - 1;
            fVar40 = *(float *)ptVar2 + *(float *)ptVar1;
            *(float *)ptVar1 = fVar40;
                    /* try { // try from 00a8af0c to 00b8af17 has its CatchHandler @ 00a8b074 */
            *param_4 = *param_4 + (*(int *)ptVar3 >> 0x10) * (iVar26 >> 0xc);
                    /* try { // try from 00a8af18 to 00b8af23 has its CatchHandler @ 00a8b070 */
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
                    /* try { // try from 00a8b194 to 00b8b19b has its CatchHandler @ 00a8b350 */
            *param_1 = *param_3 * *(float *)(param_6 + 0x9c);
                    /* try { // try from 00a8b1a0 to 00b8b1bb has its CatchHandler @ 00a8b34c */
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
            fVar40 = *param_3;
            if (fVar40 <= -16.0) {
              iVar26 = -0x80000000;
            }
            else if (16.0 <= fVar40) {
              iVar26 = 0x7fffffff;
            }
            else {
              uVar44 = 0x3f;
              if (fVar40 * 1.3421773e+08 <= 0.0) {
                uVar44 = 0xbf;
              }
              iVar26 = (int)((double)CONCAT17(uVar44,0xe0000000000000) +
                            (double)(fVar40 * 1.3421773e+08));
            }
            *param_1 = fVar40 * *(float *)ptVar1;
                    /* try { // try from 00a8b0e0 to 00b8b137 has its CatchHandler @ 00a8b0e0
                       catch() { ... } // from try @ 00a8b0e0 with catch @ 00a8b0e0
                       catch() { ... } // from try @ 00a8b2d4 with catch @ 00a8b0e0 */
            *(float *)(param_6 + 0x9c) = *(float *)(param_6 + 0xa4) + *(float *)(param_6 + 0x9c);
            fVar40 = param_3[1];
            if (fVar40 <= -16.0) {
              iVar27 = -0x80000000;
            }
            else if (16.0 <= fVar40) {
              iVar27 = 0x7fffffff;
            }
            else {
              uVar44 = 0x3f;
              if (fVar40 * 1.3421773e+08 <= 0.0) {
                uVar44 = 0xbf;
              }
              iVar27 = (int)((double)CONCAT17(uVar44,0xe0000000000000) +
                            (double)(fVar40 * 1.3421773e+08));
            }
            param_1[1] = fVar40 * *(float *)(param_6 + 0xa0);
                    /* try { // try from 00a8b138 to 00b8b14f has its CatchHandler @ 00a8b370 */
            iVar27 = iVar27 + iVar26;
            *(float *)(param_6 + 0xa0) = *(float *)(param_6 + 0xa8) + *(float *)(param_6 + 0xa0);
            if (iVar27 < 0) {
              iVar27 = iVar27 + 1;
            }
                    /* try { // try from 00a8b158 to 00b8b163 has its CatchHandler @ 00a8b36c */
                    /* try { // try from 00a8b164 to 00b8b16f has its CatchHandler @ 00a8b368 */
            *param_4 = *param_4 + (*(int *)(param_6 + 0x1c) >> 0x10) * (iVar27 >> 0xd);
            param_3 = param_3 + 2;
                    /* try { // try from 00a8b170 to 00b8b177 has its CatchHandler @ 00a8b380 */
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
            fVar40 = *(float *)ptVar1;
            uVar29 = param_2 & 0xfffffffffffffff8;
            pfVar22 = param_1 + 4;
            pfVar23 = param_3 + 4;
            uVar28 = uVar29;
            do {
              fVar42 = pfVar23[-4];
              fVar31 = pfVar23[-3];
              pfVar20 = pfVar23 + -2;
              fVar32 = pfVar23[-1];
              fVar33 = *pfVar23;
              fVar35 = pfVar23[1];
              fVar36 = pfVar23[2];
              fVar37 = pfVar23[3];
              uVar28 = uVar28 - 8;
              pfVar23 = pfVar23 + 8;
              pfVar22[-2] = *pfVar20 * fVar40;
              pfVar22[-1] = fVar32 * fVar40;
              pfVar22[-4] = fVar42 * fVar40;
              pfVar22[-3] = fVar31 * fVar40;
              pfVar22[2] = fVar36 * fVar40;
              pfVar22[3] = fVar37 * fVar40;
              *pfVar22 = fVar33 * fVar40;
              pfVar22[1] = fVar35 * fVar40;
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
            fVar40 = *(float *)ptVar1;
            uVar29 = param_2 & 0xfffffffffffffffc;
            auVar34 = NEON_fmov(0xc1800000,4);
            auVar38 = NEON_fmov(0x41800000,4);
            auVar39 = NEON_fmov(0xbfe0000000000000,8);
            auVar41 = NEON_fmov(0x3fe0000000000000,8);
            auVar49._8_4_ = 0x7ffff;
            auVar49._0_8_ = 0x7ffff0007ffff;
            auVar49._12_4_ = 0x7ffff;
                    /* try { // try from 00a8affc to 00b8b0df has its CatchHandler @ 00a8ae98 */
            pfVar22 = param_1;
            pfVar23 = param_3;
            piVar24 = param_4;
            uVar28 = uVar29;
            do {
              uVar28 = uVar28 - 4;
              fVar42 = (float)*(undefined8 *)pfVar23;
              fVar31 = (float)((ulong)*(undefined8 *)pfVar23 >> 0x20);
              fVar32 = (float)*(undefined8 *)(pfVar23 + 2);
              fVar33 = (float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20);
              auVar116._0_8_ = (long)(int)-(uint)(0.0 < fVar32 * 1.3421773e+08);
              auVar116._8_8_ = (long)(int)-(uint)(0.0 < fVar33 * 1.3421773e+08);
              auVar108._0_8_ = (long)(int)-(uint)(0.0 < fVar42 * 1.3421773e+08);
              auVar108._8_8_ = (long)(int)-(uint)(0.0 < fVar31 * 1.3421773e+08);
              auVar87 = auVar39 ^ (auVar39 ^ auVar41) & auVar108;
              auVar46 = auVar39 ^ (auVar39 ^ auVar41) & auVar116;
              auVar70._0_4_ = -(uint)(fVar42 <= auVar34._0_4_);
              auVar70._4_4_ = -(uint)(fVar31 <= auVar34._4_4_);
              auVar70._8_4_ = -(uint)(fVar32 <= auVar34._8_4_);
              auVar70._12_4_ = -(uint)(fVar33 <= auVar34._12_4_);
              iVar26 = -(uint)(auVar38._0_4_ <= fVar42);
              iVar27 = -(uint)(auVar38._4_4_ <= fVar31);
              iVar30 = -(uint)(auVar38._8_4_ <= fVar32);
              iVar115 = -(uint)(auVar38._12_4_ <= fVar33);
              fVar35 = fVar31 * fVar40;
              fVar36 = fVar33 * fVar40;
              *(ulong *)(pfVar22 + 2) =
                   CONCAT17((char)((uint)fVar36 >> 0x18),
                            CONCAT16((char)((uint)fVar36 >> 0x10),
                                     CONCAT15((char)((uint)fVar36 >> 8),
                                              CONCAT14(SUB41(fVar36,0),fVar32 * fVar40))));
              *(ulong *)pfVar22 =
                   CONCAT17((char)((uint)fVar35 >> 0x18),
                            CONCAT16((char)((uint)fVar35 >> 0x10),
                                     CONCAT15((char)((uint)fVar35 >> 8),
                                              CONCAT14(SUB41(fVar35,0),fVar42 * fVar40))));
              auVar71._0_4_ = (int)(long)(auVar87._0_8_ + (double)(fVar42 * 1.3421773e+08)) >> 0xc;
              auVar71._4_4_ = (int)(long)(auVar87._8_8_ + (double)(fVar31 * 1.3421773e+08)) >> 0xc;
              auVar71._8_4_ = (int)(long)(auVar46._0_8_ + (double)(fVar32 * 1.3421773e+08)) >> 0xc;
              auVar71._12_4_ = (int)(long)(auVar46._8_8_ + (double)(fVar33 * 1.3421773e+08)) >> 0xc;
              auVar78[0] = (byte)iVar26 & ~(byte)auVar70._0_4_;
              auVar78[1] = (byte)((uint)iVar26 >> 8) & ~(byte)((uint)auVar70._0_4_ >> 8);
              auVar78[2] = (byte)((uint)iVar26 >> 0x10) & ~(byte)((uint)auVar70._0_4_ >> 0x10);
              auVar78[3] = (byte)((uint)iVar26 >> 0x18) & ~(byte)((uint)auVar70._0_4_ >> 0x18);
              auVar78[4] = (byte)iVar27 & ~(byte)auVar70._4_4_;
              auVar78[5] = (byte)((uint)iVar27 >> 8) & ~(byte)((uint)auVar70._4_4_ >> 8);
              auVar78[6] = (byte)((uint)iVar27 >> 0x10) & ~(byte)((uint)auVar70._4_4_ >> 0x10);
              auVar78[7] = (byte)((uint)iVar27 >> 0x18) & ~(byte)((uint)auVar70._4_4_ >> 0x18);
              auVar78[8] = (byte)iVar30 & ~(byte)auVar70._8_4_;
              auVar78[9] = (byte)((uint)iVar30 >> 8) & ~(byte)((uint)auVar70._8_4_ >> 8);
              auVar78[10] = (byte)((uint)iVar30 >> 0x10) & ~(byte)((uint)auVar70._8_4_ >> 0x10);
              auVar78[0xb] = (byte)((uint)iVar30 >> 0x18) & ~(byte)((uint)auVar70._8_4_ >> 0x18);
              auVar78[0xc] = (byte)iVar115 & ~(byte)auVar70._12_4_;
              auVar78[0xd] = (byte)((uint)iVar115 >> 8) & ~(byte)((uint)auVar70._12_4_ >> 8);
              auVar78[0xe] = (byte)((uint)iVar115 >> 0x10) & ~(byte)((uint)auVar70._12_4_ >> 0x10);
              auVar78[0xf] = (byte)((uint)iVar115 >> 0x18) & ~(byte)((uint)auVar70._12_4_ >> 0x18);
              auVar6[10] = 0xf8;
              auVar6._0_10_ = (unkuint10)0xfff80000fff80000;
              auVar6[0xb] = 0xff;
              auVar6._12_2_ = 0;
              auVar6[0xe] = 0xf8;
              auVar6[0xf] = 0xff;
              auVar71 = auVar71 ^ (auVar71 ^ auVar6) & auVar70;
              auVar71 = auVar71 ^ (auVar71 ^ auVar49) & auVar78;
              iVar26 = (int)((ulong)*(undefined8 *)piVar24 >> 0x20) + auVar71._4_4_ * (int)sVar4;
              iVar27 = (int)((ulong)*(undefined8 *)(piVar24 + 2) >> 0x20) + auVar71._12_4_ * iVar25;
              *(ulong *)(piVar24 + 2) =
                   CONCAT17((char)((uint)iVar27 >> 0x18),
                            CONCAT16((char)((uint)iVar27 >> 0x10),
                                     CONCAT15((char)((uint)iVar27 >> 8),
                                              CONCAT14((char)iVar27,
                                                       (int)*(undefined8 *)(piVar24 + 2) +
                                                       auVar71._8_4_ * iVar25))));
              *(ulong *)piVar24 =
                   CONCAT17((char)((uint)iVar26 >> 0x18),
                            CONCAT16((char)((uint)iVar26 >> 0x10),
                                     CONCAT15((char)((uint)iVar26 >> 8),
                                              CONCAT14((char)iVar26,
                                                       (int)*(undefined8 *)piVar24 +
                                                       auVar71._0_4_ * (int)sVar4))));
              pfVar22 = pfVar22 + 4;
              pfVar23 = pfVar23 + 4;
              piVar24 = piVar24 + 4;
            } while (uVar28 != 0);
                    /* catch() { ... } // from try @ 00a8af18 with catch @ 00a8b070 */
            bVar21 = uVar29 == param_2;
            param_3 = param_3 + uVar29;
            param_4 = param_4 + uVar29;
            param_2 = param_2 - uVar29;
            param_1 = param_1 + uVar29;
                    /* catch() { ... } // from try @ 00a8af0c with catch @ 00a8b074 */
            if (bVar21) {
              return;
            }
          }
        }
        do {
          fVar40 = *param_3;
          if (fVar40 <= -16.0) {
            iVar26 = -0x80000000;
          }
          else if (16.0 <= fVar40) {
            iVar26 = 0x7fffffff;
          }
          else {
            uVar44 = 0x3f;
            if (fVar40 * 1.3421773e+08 <= 0.0) {
              uVar44 = 0xbf;
            }
            iVar26 = (int)((double)CONCAT17(uVar44,0xe0000000000000) +
                          (double)(fVar40 * 1.3421773e+08));
          }
          *param_1 = fVar40 * *(float *)ptVar1;
          param_2 = param_2 - 1;
          *param_4 = *param_4 + (iVar26 >> 0xc) * iVar25;
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
          uVar28 = (param_2 - 1) * 8;
                    /* try { // try from 00a8bb08 to 00b8bbeb has its CatchHandler @ 00a8b93c */
          if (((uVar28 < ~(ulong)param_1 || uVar28 - ~(ulong)param_1 == 0) &&
              (param_2 - 1 >> 0x3d == 0)) &&
             (uVar28 < ~(ulong)(param_1 + 1) || uVar28 - ~(ulong)(param_1 + 1) == 0)) {
            if ((param_3 + param_2 * 2 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= param_3)
               && (param_6 + 0x99 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= ptVar2)) {
              uVar29 = param_2 & 0xfffffffffffffffc;
              pfVar22 = param_3 + uVar29 * 2;
              pfVar23 = param_1 + uVar29 * 2;
              uVar28 = uVar29;
              do {
                fVar40 = *param_3;
                fVar33 = param_3[1];
                fVar42 = param_3[2];
                fVar35 = param_3[3];
                fVar31 = param_3[4];
                fVar36 = param_3[5];
                fVar32 = param_3[6];
                fVar37 = param_3[7];
                param_3 = param_3 + 8;
                    /* catch() { ... } // from try @ 00a8b9bc with catch @ 00a8bb7c */
                fVar69 = *(float *)ptVar1;
                    /* catch() { ... } // from try @ 00a8b9b0 with catch @ 00a8bb80 */
                fVar72 = *(float *)ptVar2;
                    /* catch() { ... } // from try @ 00a8b990 with catch @ 00a8bb84 */
                uVar28 = uVar28 - 4;
                *param_1 = fVar40 * fVar69;
                param_1[1] = fVar33 * fVar72;
                param_1[2] = fVar42 * fVar69;
                param_1[3] = fVar35 * fVar72;
                param_1[4] = fVar31 * fVar69;
                param_1[5] = fVar36 * fVar72;
                param_1[6] = fVar32 * fVar69;
                param_1[7] = fVar37 * fVar72;
                param_1 = param_1 + 8;
                    /* catch() { ... } // from try @ 00a8b9c8 with catch @ 00a8bb94 */
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
        }
        do {
          param_2 = param_2 - 1;
          *param_1 = *param_3 * *(float *)ptVar1;
          param_1[1] = param_3[1] * *(float *)ptVar2;
          param_3 = param_3 + 2;
          param_1 = param_1 + 2;
                    /* try { // try from 00a8b5a4 to 00b8b68b has its CatchHandler @ 00a8b3d8 */
        } while (param_2 != 0);
      }
      else {
                    /* try { // try from 00a8b1f4 to 00b8b237 has its CatchHandler @ 00a8b350 */
        ptVar2 = param_6 + 0x98;
        if (3 < param_2) {
          uVar28 = (param_2 - 1) * 8;
          if (((uVar28 < ~(ulong)param_1 || uVar28 - ~(ulong)param_1 == 0) &&
              (param_2 - 1 >> 0x3d == 0)) &&
             (uVar28 < ~(ulong)(param_1 + 1) || uVar28 - ~(ulong)(param_1 + 1) == 0)) {
                    /* catch() { ... } // from try @ 00a8b45c with catch @ 00a8b61c */
            if ((param_3 + param_2 * 2 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= param_3)
               && (param_6 + 0x99 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= ptVar2)) {
                    /* catch() { ... } // from try @ 00a8b450 with catch @ 00a8b620 */
              uVar29 = param_2 & 0xfffffffffffffffc;
                    /* catch() { ... } // from try @ 00a8b430 with catch @ 00a8b624 */
              auVar34 = NEON_fmov(0xc1800000,4);
              auVar38 = NEON_fmov(0x41800000,4);
                    /* catch() { ... } // from try @ 00a8b468 with catch @ 00a8b634 */
              auVar39 = NEON_fmov(0xbfe0000000000000,8);
              auVar41 = NEON_fmov(0x3fe0000000000000,8);
              pfVar22 = param_3 + uVar29 * 2;
              pfVar23 = param_1 + uVar29 * 2;
              auVar43._8_4_ = 0x80000000;
              auVar43._0_8_ = 0x8000000080000000;
              auVar43._12_4_ = 0x80000000;
              piVar24 = param_4;
              uVar28 = uVar29;
              do {
                fVar35 = *param_3;
                fVar42 = param_3[1];
                fVar36 = param_3[2];
                fVar31 = param_3[3];
                fVar37 = param_3[4];
                fVar32 = param_3[5];
                fVar69 = param_3[6];
                fVar33 = param_3[7];
                param_3 = param_3 + 8;
                fVar40 = *(float *)ptVar1;
                uVar28 = uVar28 - 4;
                auVar117._0_8_ = (long)(int)-(uint)(0.0 < fVar37 * 1.3421773e+08);
                auVar117._8_8_ = (long)(int)-(uint)(0.0 < fVar69 * 1.3421773e+08);
                auVar86._0_8_ = (long)(int)-(uint)(0.0 < fVar35 * 1.3421773e+08);
                auVar86._8_8_ = (long)(int)-(uint)(0.0 < fVar36 * 1.3421773e+08);
                auVar87 = auVar39 ^ (auVar39 ^ auVar41) & auVar86;
                auVar47 = auVar39 ^ (auVar39 ^ auVar41) & auVar117;
                    /* try { // try from 00a8b68c to 00b8b6df has its CatchHandler @ 00a8b68c
                       catch() { ... } // from try @ 00a8b68c with catch @ 00a8b68c
                       catch() { ... } // from try @ 00a8b858 with catch @ 00a8b68c */
                auVar109._0_8_ = (long)(int)-(uint)(0.0 < fVar32 * 1.3421773e+08);
                auVar109._8_8_ = (long)(int)-(uint)(0.0 < fVar33 * 1.3421773e+08);
                auVar114._0_8_ = (long)(int)-(uint)(0.0 < fVar42 * 1.3421773e+08);
                auVar114._8_8_ = (long)(int)-(uint)(0.0 < fVar31 * 1.3421773e+08);
                auVar46 = auVar39 ^ (auVar39 ^ auVar41) & auVar114;
                auVar119._0_4_ =
                     (undefined4)(long)(auVar87._0_8_ + (double)(fVar35 * 1.3421773e+08));
                auVar119._4_4_ = (int)(long)(auVar87._8_8_ + (double)(fVar36 * 1.3421773e+08));
                auVar87 = auVar39 ^ (auVar39 ^ auVar41) & auVar109;
                auVar119._8_4_ = (int)(long)(auVar47._0_8_ + (double)(fVar37 * 1.3421773e+08));
                auVar119._12_4_ = (int)(long)(auVar47._8_8_ + (double)(fVar69 * 1.3421773e+08));
                fVar72 = *(float *)ptVar2;
                auVar118._0_4_ = -(uint)(fVar35 <= auVar34._0_4_);
                auVar118._4_4_ = -(uint)(fVar36 <= auVar34._4_4_);
                auVar118._8_4_ = -(uint)(fVar37 <= auVar34._8_4_);
                auVar118._12_4_ = -(uint)(fVar69 <= auVar34._12_4_);
                iVar26 = -(uint)(auVar38._0_4_ <= fVar35);
                iVar27 = -(uint)(auVar38._4_4_ <= fVar36);
                iVar30 = -(uint)(auVar38._8_4_ <= fVar37);
                iVar115 = -(uint)(auVar38._12_4_ <= fVar69);
                auVar111._0_4_ =
                     (undefined4)(long)(auVar46._0_8_ + (double)(fVar42 * 1.3421773e+08));
                auVar111._4_4_ = (int)(long)(auVar46._8_8_ + (double)(fVar31 * 1.3421773e+08));
                auVar111._8_4_ = (int)(long)(auVar87._0_8_ + (double)(fVar32 * 1.3421773e+08));
                auVar111._12_4_ = (int)(long)(auVar87._8_8_ + (double)(fVar33 * 1.3421773e+08));
                    /* try { // try from 00a8b6e0 to 00b8b6f7 has its CatchHandler @ 00a8b8d4 */
                auVar110._0_4_ = -(uint)(fVar42 <= auVar34._0_4_);
                auVar110._4_4_ = -(uint)(fVar31 <= auVar34._4_4_);
                auVar110._8_4_ = -(uint)(fVar32 <= auVar34._8_4_);
                auVar110._12_4_ = -(uint)(fVar33 <= auVar34._12_4_);
                bVar84 = (byte)iVar26 & ~(byte)auVar118._0_4_;
                bVar90 = (byte)((uint)iVar26 >> 8) & ~(byte)((uint)auVar118._0_4_ >> 8);
                bVar91 = (byte)((uint)iVar26 >> 0x10) & ~(byte)((uint)auVar118._0_4_ >> 0x10);
                bVar92 = (byte)((uint)iVar26 >> 0x18) & ~(byte)((uint)auVar118._0_4_ >> 0x18);
                bVar93 = (byte)iVar27 & ~(byte)auVar118._4_4_;
                bVar95 = (byte)((uint)iVar27 >> 8) & ~(byte)((uint)auVar118._4_4_ >> 8);
                bVar96 = (byte)((uint)iVar27 >> 0x10) & ~(byte)((uint)auVar118._4_4_ >> 0x10);
                bVar97 = (byte)((uint)iVar27 >> 0x18) & ~(byte)((uint)auVar118._4_4_ >> 0x18);
                bVar98 = (byte)iVar30 & ~(byte)auVar118._8_4_;
                bVar100 = (byte)((uint)iVar30 >> 8) & ~(byte)((uint)auVar118._8_4_ >> 8);
                bVar101 = (byte)((uint)iVar30 >> 0x10) & ~(byte)((uint)auVar118._8_4_ >> 0x10);
                bVar102 = (byte)((uint)iVar30 >> 0x18) & ~(byte)((uint)auVar118._8_4_ >> 0x18);
                bVar103 = (byte)iVar115 & ~(byte)auVar118._12_4_;
                bVar105 = (byte)((uint)iVar115 >> 8) & ~(byte)((uint)auVar118._12_4_ >> 8);
                bVar106 = (byte)((uint)iVar115 >> 0x10) & ~(byte)((uint)auVar118._12_4_ >> 0x10);
                bVar107 = (byte)((uint)iVar115 >> 0x18) & ~(byte)((uint)auVar118._12_4_ >> 0x18);
                auVar119 = auVar119 ^ (auVar119 ^ auVar43) & auVar118;
                iVar26 = -(uint)(auVar38._0_4_ <= fVar42);
                iVar27 = -(uint)(auVar38._4_4_ <= fVar31);
                iVar30 = -(uint)(auVar38._8_4_ <= fVar32);
                iVar115 = -(uint)(auVar38._12_4_ <= fVar33);
                bVar53 = (byte)iVar26 & ~(byte)auVar110._0_4_;
                bVar54 = (byte)((uint)iVar26 >> 8) & ~(byte)((uint)auVar110._0_4_ >> 8);
                bVar55 = (byte)((uint)iVar26 >> 0x10) & ~(byte)((uint)auVar110._0_4_ >> 0x10);
                bVar56 = (byte)((uint)iVar26 >> 0x18) & ~(byte)((uint)auVar110._0_4_ >> 0x18);
                bVar57 = (byte)iVar27 & ~(byte)auVar110._4_4_;
                bVar58 = (byte)((uint)iVar27 >> 8) & ~(byte)((uint)auVar110._4_4_ >> 8);
                bVar59 = (byte)((uint)iVar27 >> 0x10) & ~(byte)((uint)auVar110._4_4_ >> 0x10);
                bVar60 = (byte)((uint)iVar27 >> 0x18) & ~(byte)((uint)auVar110._4_4_ >> 0x18);
                bVar61 = (byte)iVar30 & ~(byte)auVar110._8_4_;
                bVar62 = (byte)((uint)iVar30 >> 8) & ~(byte)((uint)auVar110._8_4_ >> 8);
                bVar63 = (byte)((uint)iVar30 >> 0x10) & ~(byte)((uint)auVar110._8_4_ >> 0x10);
                bVar64 = (byte)((uint)iVar30 >> 0x18) & ~(byte)((uint)auVar110._8_4_ >> 0x18);
                bVar65 = (byte)iVar115 & ~(byte)auVar110._12_4_;
                bVar66 = (byte)((uint)iVar115 >> 8) & ~(byte)((uint)auVar110._12_4_ >> 8);
                bVar67 = (byte)((uint)iVar115 >> 0x10) & ~(byte)((uint)auVar110._12_4_ >> 0x10);
                bVar68 = (byte)((uint)iVar115 >> 0x18) & ~(byte)((uint)auVar110._12_4_ >> 0x18);
                auVar111 = auVar111 ^ (auVar111 ^ auVar43) & auVar110;
                    /* try { // try from 00a8b700 to 00b8b70b has its CatchHandler @ 00a8b8d0 */
                    /* try { // try from 00a8b70c to 00b8b717 has its CatchHandler @ 00a8b8cc */
                *param_1 = fVar35 * fVar40;
                param_1[1] = fVar42 * fVar72;
                param_1[2] = fVar36 * fVar40;
                param_1[3] = fVar31 * fVar72;
                param_1[4] = fVar37 * fVar40;
                param_1[5] = fVar32 * fVar72;
                param_1[6] = fVar69 * fVar40;
                param_1[7] = fVar33 * fVar72;
                param_1 = param_1 + 8;
                    /* try { // try from 00a8b718 to 00b8b857 has its CatchHandler @ 00a8b8e4 */
                iVar26 = CONCAT13(bVar56 & 0x7f | auVar111[3] & ~bVar56,
                                  CONCAT12(bVar55 | auVar111[2] & ~bVar55,
                                           CONCAT11(bVar54 | auVar111[1] & ~bVar54,
                                                    bVar53 | auVar111[0] & ~bVar53)));
                auVar76._0_8_ =
                     CONCAT17(bVar60 & 0x7f | auVar111[7] & ~bVar60,
                              CONCAT16(bVar59 | auVar111[6] & ~bVar59,
                                       CONCAT15(bVar58 | auVar111[5] & ~bVar58,
                                                CONCAT14(bVar57 | auVar111[4] & ~bVar57,iVar26))));
                auVar76[8] = bVar61 | auVar111[8] & ~bVar61;
                auVar76[9] = bVar62 | auVar111[9] & ~bVar62;
                auVar76[10] = bVar63 | auVar111[10] & ~bVar63;
                auVar76[0xb] = bVar64 & 0x7f | auVar111[0xb] & ~bVar64;
                auVar79[0xc] = bVar65 | auVar111[0xc] & ~bVar65;
                auVar79._0_12_ = auVar76;
                auVar79[0xd] = bVar66 | auVar111[0xd] & ~bVar66;
                auVar79[0xe] = bVar67 | auVar111[0xe] & ~bVar67;
                auVar79[0xf] = bVar68 & 0x7f | auVar111[0xf] & ~bVar68;
                iVar26 = iVar26 + CONCAT13(bVar92 & 0x7f | auVar119[3] & ~bVar92,
                                           CONCAT12(bVar91 | auVar119[2] & ~bVar91,
                                                    CONCAT11(bVar90 | auVar119[1] & ~bVar90,
                                                             bVar84 | auVar119[0] & ~bVar84)));
                iVar27 = (int)((ulong)auVar76._0_8_ >> 0x20) +
                         CONCAT13(bVar97 & 0x7f | auVar119[7] & ~bVar97,
                                  CONCAT12(bVar96 | auVar119[6] & ~bVar96,
                                           CONCAT11(bVar95 | auVar119[5] & ~bVar95,
                                                    bVar93 | auVar119[4] & ~bVar93)));
                iVar30 = auVar76._8_4_ +
                         CONCAT13(bVar102 & 0x7f | auVar119[0xb] & ~bVar102,
                                  CONCAT12(bVar101 | auVar119[10] & ~bVar101,
                                           CONCAT11(bVar100 | auVar119[9] & ~bVar100,
                                                    bVar98 | auVar119[8] & ~bVar98)));
                iVar115 = auVar79._12_4_ +
                          CONCAT13(bVar107 & 0x7f | auVar119[0xf] & ~bVar107,
                                   CONCAT12(bVar106 | auVar119[0xe] & ~bVar106,
                                            CONCAT11(bVar105 | auVar119[0xd] & ~bVar105,
                                                     bVar103 | auVar119[0xc] & ~bVar103)));
                iVar26 = iVar26 - (iVar26 >> 0x1f);
                iVar27 = iVar27 - (iVar27 >> 0x1f);
                iVar30 = iVar30 - (iVar30 >> 0x1f);
                iVar115 = iVar115 - (iVar115 >> 0x1f);
                cVar16 = (char)((uint)iVar26 >> 0x18);
                cVar17 = (char)((uint)iVar27 >> 0x18);
                cVar18 = (char)((uint)iVar30 >> 0x18);
                cVar19 = (char)((uint)iVar115 >> 0x18);
                auVar50._0_8_ =
                     CONCAT44(piVar24[1] +
                              CONCAT13(cVar17 >> 7,CONCAT12(cVar17 >> 5,(short)(iVar27 >> 0xd))) *
                              iVar25,*piVar24 +
                                     CONCAT13(cVar16 >> 7,
                                              CONCAT12(cVar16 >> 5,(short)(iVar26 >> 0xd))) * iVar25
                             );
                auVar50._8_4_ =
                     piVar24[2] +
                     CONCAT13(cVar18 >> 7,CONCAT12(cVar18 >> 5,(short)(iVar30 >> 0xd))) * iVar25;
                auVar50._12_4_ =
                     piVar24[3] +
                     CONCAT13(cVar19 >> 7,CONCAT12(cVar19 >> 5,(short)(iVar115 >> 0xd))) * iVar25;
                *(long *)(piVar24 + 2) = auVar50._8_8_;
                *(undefined8 *)piVar24 = auVar50._0_8_;
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
        }
        do {
          fVar40 = *param_3;
          if (fVar40 <= -16.0) {
            iVar26 = -0x80000000;
          }
          else {
                    /* try { // try from 00a8b23c to 00b8b27f has its CatchHandler @ 00a8b34c */
            if (16.0 <= fVar40) {
              iVar26 = 0x7fffffff;
            }
            else {
              uVar44 = 0x3f;
              if (fVar40 * 1.3421773e+08 <= 0.0) {
                uVar44 = 0xbf;
              }
              iVar26 = (int)((double)CONCAT17(uVar44,0xe0000000000000) +
                            (double)(fVar40 * 1.3421773e+08));
            }
          }
          *param_1 = fVar40 * *(float *)ptVar1;
          fVar40 = param_3[1];
          if (fVar40 <= -16.0) {
            iVar27 = -0x80000000;
          }
          else if (16.0 <= fVar40) {
            iVar27 = 0x7fffffff;
          }
          else {
            uVar44 = 0x3f;
            if (fVar40 * 1.3421773e+08 <= 0.0) {
              uVar44 = 0xbf;
            }
                    /* try { // try from 00a8b298 to 00b8b2d3 has its CatchHandler @ 00a8b380 */
            iVar27 = (int)((double)CONCAT17(uVar44,0xe0000000000000) +
                          (double)(fVar40 * 1.3421773e+08));
          }
          param_1[1] = fVar40 * *(float *)ptVar2;
          iVar27 = iVar27 + iVar26;
          if (iVar27 < 0) {
            iVar27 = iVar27 + 1;
          }
                    /* try { // try from 00a8b2d4 to 00b8b3d7 has its CatchHandler @ 00a8b0e0 */
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
          auVar34._8_8_ = 0;
          auVar34._0_8_ = param_2 - 1;
                    /* try { // try from 00a8b990 to 00b8b9a7 has its CatchHandler @ 00a8bb84 */
          uVar28 = (param_2 - 1) * 0xc;
                    /* try { // try from 00a8b9b0 to 00b8b9bb has its CatchHandler @ 00a8bb80 */
                    /* try { // try from 00a8b9bc to 00b8b9c7 has its CatchHandler @ 00a8bb7c */
                    /* try { // try from 00a8b9c8 to 00b8bb07 has its CatchHandler @ 00a8bb94 */
          if ((((uVar28 < ~(ulong)(param_1 + 1) || uVar28 - ~(ulong)(param_1 + 1) == 0) &&
               (SUB168(auVar34 * ZEXT816(0xc),8) == 0)) &&
              (uVar28 < ~(ulong)(param_1 + 2) || uVar28 - ~(ulong)(param_1 + 2) == 0)) &&
             (uVar28 < ~(ulong)param_1 || uVar28 - ~(ulong)param_1 == 0)) {
            if ((param_3 + param_2 * 3 <= param_1 || (track_t *)(param_1 + param_2 * 3) <= param_3)
               && (param_6 + 0x95 <= param_1 || (track_t *)(param_1 + param_2 * 3) <= ptVar1)) {
              uVar29 = param_2 & 0xfffffffffffffffc;
              pfVar22 = param_3 + uVar29 * 3;
              pfVar23 = param_1 + uVar29 * 3;
              uVar28 = uVar29;
              do {
                fVar40 = *param_3;
                fVar33 = param_3[1];
                fVar69 = param_3[2];
                fVar42 = param_3[3];
                fVar35 = param_3[4];
                fVar72 = param_3[5];
                fVar31 = param_3[6];
                fVar36 = param_3[7];
                fVar73 = param_3[8];
                fVar32 = param_3[9];
                fVar37 = param_3[10];
                fVar74 = param_3[0xb];
                param_3 = param_3 + 0xc;
                fVar75 = *(float *)ptVar1;
                uVar28 = uVar28 - 4;
                *param_1 = fVar40 * fVar75;
                param_1[1] = fVar33 * fVar75;
                param_1[2] = fVar69 * fVar75;
                param_1[3] = fVar42 * fVar75;
                param_1[4] = fVar35 * fVar75;
                param_1[5] = fVar72 * fVar75;
                param_1[6] = fVar31 * fVar75;
                param_1[7] = fVar36 * fVar75;
                param_1[8] = fVar73 * fVar75;
                param_1[9] = fVar32 * fVar75;
                param_1[10] = fVar37 * fVar75;
                param_1[0xb] = fVar74 * fVar75;
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
        }
        do {
          param_2 = param_2 - 1;
          *param_1 = *param_3 * *(float *)ptVar1;
          param_1[1] = param_3[1] * *(float *)ptVar1;
          param_1[2] = param_3[2] * *(float *)ptVar1;
          param_3 = param_3 + 3;
          param_1 = param_1 + 3;
        } while (param_2 != 0);
      }
      else {
        if (3 < param_2) {
          auVar38._8_8_ = 0;
          auVar38._0_8_ = param_2 - 1;
          uVar28 = (param_2 - 1) * 0xc;
          if (((uVar28 < ~(ulong)(param_1 + 1) || uVar28 - ~(ulong)(param_1 + 1) == 0) &&
              (SUB168(auVar38 * ZEXT816(0xc),8) == 0)) &&
             ((uVar28 < ~(ulong)(param_1 + 2) || uVar28 - ~(ulong)(param_1 + 2) == 0 &&
              (uVar28 < ~(ulong)param_1 || uVar28 - ~(ulong)param_1 == 0)))) {
            if ((param_3 + param_2 * 3 <= param_1 || (track_t *)(param_1 + param_2 * 3) <= param_3)
               && (param_6 + 0x95 <= param_1 || (track_t *)(param_1 + param_2 * 3) <= ptVar1)) {
              uVar29 = param_2 & 0xfffffffffffffffc;
              auVar34 = NEON_fmov(0xc1800000,4);
              auVar38 = NEON_fmov(0x41800000,4);
              auVar39 = NEON_fmov(0xbfe0000000000000,8);
              auVar41 = NEON_fmov(0x3fe0000000000000,8);
              auVar87._8_4_ = 0x80000000;
              auVar87._0_8_ = 0x8000000080000000;
              auVar87._12_4_ = 0x80000000;
              pfVar22 = param_3 + uVar29 * 3;
              pfVar23 = param_1 + uVar29 * 3;
              piVar24 = param_4;
              uVar28 = uVar29;
              do {
                fVar69 = *param_3;
                fVar75 = param_3[1];
                fVar85 = param_3[2];
                fVar72 = param_3[3];
                fVar81 = param_3[4];
                fVar94 = param_3[5];
                fVar73 = param_3[6];
                fVar82 = param_3[7];
                fVar99 = param_3[8];
                fVar74 = param_3[9];
                fVar83 = param_3[10];
                fVar104 = param_3[0xb];
                param_3 = param_3 + 0xc;
                fVar120 = *(float *)ptVar1;
                uVar28 = uVar28 - 4;
                fVar40 = auVar34._0_4_;
                auVar51._0_4_ = -(uint)(fVar69 <= fVar40);
                fVar42 = auVar34._4_4_;
                auVar51._4_4_ = -(uint)(fVar72 <= fVar42);
                fVar31 = auVar34._8_4_;
                auVar51._8_4_ = -(uint)(fVar73 <= fVar31);
                fVar32 = auVar34._12_4_;
                auVar51._12_4_ = -(uint)(fVar74 <= fVar32);
                fVar33 = auVar38._0_4_;
                iVar26 = -(uint)(fVar33 <= fVar69);
                fVar35 = auVar38._4_4_;
                iVar27 = -(uint)(fVar35 <= fVar72);
                fVar36 = auVar38._8_4_;
                iVar30 = -(uint)(fVar36 <= fVar73);
                fVar37 = auVar38._12_4_;
                iVar115 = -(uint)(fVar37 <= fVar74);
                auVar112._0_4_ = -(uint)(fVar75 <= fVar40);
                auVar112._4_4_ = -(uint)(fVar81 <= fVar42);
                auVar112._8_4_ = -(uint)(fVar82 <= fVar31);
                auVar112._12_4_ = -(uint)(fVar83 <= fVar32);
                iVar11 = -(uint)(fVar33 <= fVar75);
                iVar12 = -(uint)(fVar35 <= fVar81);
                iVar13 = -(uint)(fVar36 <= fVar82);
                iVar15 = -(uint)(fVar37 <= fVar83);
                    /* try { // try from 00a8b858 to 00b8b93b has its CatchHandler @ 00a8b68c */
                auVar155._0_4_ = -(uint)(fVar85 <= fVar40);
                auVar155._4_4_ = -(uint)(fVar94 <= fVar42);
                auVar155._8_4_ = -(uint)(fVar99 <= fVar31);
                auVar155._12_4_ = -(uint)(fVar104 <= fVar32);
                iVar156 = -(uint)(fVar33 <= fVar85);
                iVar157 = -(uint)(fVar35 <= fVar94);
                iVar158 = -(uint)(fVar36 <= fVar99);
                iVar159 = -(uint)(fVar37 <= fVar104);
                auVar151._0_8_ = (long)(int)-(uint)(0.0 < fVar73 * 1.3421773e+08);
                auVar151._8_8_ = (long)(int)-(uint)(0.0 < fVar74 * 1.3421773e+08);
                auVar89._0_8_ = (long)(int)-(uint)(0.0 < fVar69 * 1.3421773e+08);
                auVar89._8_8_ = (long)(int)-(uint)(0.0 < fVar72 * 1.3421773e+08);
                auVar46 = auVar39 ^ (auVar39 ^ auVar41) & auVar89;
                auVar152 = auVar39 ^ (auVar39 ^ auVar41) & auVar151;
                auVar154._0_8_ = (long)(int)-(uint)(0.0 < fVar82 * 1.3421773e+08);
                auVar154._8_8_ = (long)(int)-(uint)(0.0 < fVar83 * 1.3421773e+08);
                auVar88._0_8_ = (long)(int)-(uint)(0.0 < fVar75 * 1.3421773e+08);
                auVar88._8_8_ = (long)(int)-(uint)(0.0 < fVar81 * 1.3421773e+08);
                auVar89 = auVar39 ^ (auVar39 ^ auVar41) & auVar88;
                auVar47 = auVar39 ^ (auVar39 ^ auVar41) & auVar154;
                auVar122._0_8_ = (long)(int)-(uint)(0.0 < fVar99 * 1.3421773e+08);
                auVar122._8_8_ = (long)(int)-(uint)(0.0 < fVar104 * 1.3421773e+08);
                auVar153._0_8_ = (long)(int)-(uint)(0.0 < fVar85 * 1.3421773e+08);
                auVar153._8_8_ = (long)(int)-(uint)(0.0 < fVar94 * 1.3421773e+08);
                auVar52._0_4_ = (undefined4)(long)(auVar46._0_8_ + (double)(fVar69 * 1.3421773e+08))
                ;
                auVar52._4_4_ = (int)(long)(auVar46._8_8_ + (double)(fVar72 * 1.3421773e+08));
                    /* catch() { ... } // from try @ 00a8b70c with catch @ 00a8b8cc */
                auVar154 = auVar39 ^ (auVar39 ^ auVar41) & auVar153;
                auVar52._8_4_ = (int)(long)(auVar152._0_8_ + (double)(fVar73 * 1.3421773e+08));
                    /* catch() { ... } // from try @ 00a8b700 with catch @ 00a8b8d0 */
                auVar52._12_4_ = (int)(long)(auVar152._8_8_ + (double)(fVar74 * 1.3421773e+08));
                    /* catch() { ... } // from try @ 00a8b6e0 with catch @ 00a8b8d4 */
                auVar46 = auVar39 ^ (auVar39 ^ auVar41) & auVar122;
                    /* catch() { ... } // from try @ 00a8b718 with catch @ 00a8b8e4 */
                auVar113._0_4_ =
                     (undefined4)(long)(auVar89._0_8_ + (double)(fVar75 * 1.3421773e+08));
                auVar113._4_4_ = (int)(long)(auVar89._8_8_ + (double)(fVar81 * 1.3421773e+08));
                auVar113._8_4_ = (int)(long)(auVar47._0_8_ + (double)(fVar82 * 1.3421773e+08));
                auVar113._12_4_ = (int)(long)(auVar47._8_8_ + (double)(fVar83 * 1.3421773e+08));
                bVar84 = (byte)iVar11 & ~(byte)auVar112._0_4_;
                bVar90 = (byte)((uint)iVar11 >> 8) & ~(byte)((uint)auVar112._0_4_ >> 8);
                bVar91 = (byte)((uint)iVar11 >> 0x10) & ~(byte)((uint)auVar112._0_4_ >> 0x10);
                bVar92 = (byte)((uint)iVar11 >> 0x18) & ~(byte)((uint)auVar112._0_4_ >> 0x18);
                bVar93 = (byte)iVar12 & ~(byte)auVar112._4_4_;
                bVar95 = (byte)((uint)iVar12 >> 8) & ~(byte)((uint)auVar112._4_4_ >> 8);
                bVar96 = (byte)((uint)iVar12 >> 0x10) & ~(byte)((uint)auVar112._4_4_ >> 0x10);
                bVar97 = (byte)((uint)iVar12 >> 0x18) & ~(byte)((uint)auVar112._4_4_ >> 0x18);
                bVar98 = (byte)iVar13 & ~(byte)auVar112._8_4_;
                bVar100 = (byte)((uint)iVar13 >> 8) & ~(byte)((uint)auVar112._8_4_ >> 8);
                bVar101 = (byte)((uint)iVar13 >> 0x10) & ~(byte)((uint)auVar112._8_4_ >> 0x10);
                bVar102 = (byte)((uint)iVar13 >> 0x18) & ~(byte)((uint)auVar112._8_4_ >> 0x18);
                bVar103 = (byte)iVar15 & ~(byte)auVar112._12_4_;
                bVar105 = (byte)((uint)iVar15 >> 8) & ~(byte)((uint)auVar112._12_4_ >> 8);
                bVar106 = (byte)((uint)iVar15 >> 0x10) & ~(byte)((uint)auVar112._12_4_ >> 0x10);
                bVar107 = (byte)((uint)iVar15 >> 0x18) & ~(byte)((uint)auVar112._12_4_ >> 0x18);
                lVar14 = (long)(auVar154._8_8_ + (double)(fVar94 * 1.3421773e+08));
                lVar121 = (long)(auVar46._0_8_ + (double)(fVar99 * 1.3421773e+08));
                lVar123 = (long)(auVar46._8_8_ + (double)(fVar104 * 1.3421773e+08));
                uVar44 = (undefined1)((ulong)lVar14 >> 8);
                uVar144 = (undefined1)((ulong)lVar14 >> 0x10);
                uVar45 = (undefined1)((ulong)lVar14 >> 0x18);
                bVar53 = (byte)iVar26 & ~(byte)auVar51._0_4_;
                bVar54 = (byte)((uint)iVar26 >> 8) & ~(byte)((uint)auVar51._0_4_ >> 8);
                bVar55 = (byte)((uint)iVar26 >> 0x10) & ~(byte)((uint)auVar51._0_4_ >> 0x10);
                bVar56 = (byte)((uint)iVar26 >> 0x18) & ~(byte)((uint)auVar51._0_4_ >> 0x18);
                bVar57 = (byte)iVar27 & ~(byte)auVar51._4_4_;
                bVar58 = (byte)((uint)iVar27 >> 8) & ~(byte)((uint)auVar51._4_4_ >> 8);
                bVar59 = (byte)((uint)iVar27 >> 0x10) & ~(byte)((uint)auVar51._4_4_ >> 0x10);
                bVar60 = (byte)((uint)iVar27 >> 0x18) & ~(byte)((uint)auVar51._4_4_ >> 0x18);
                bVar61 = (byte)iVar30 & ~(byte)auVar51._8_4_;
                bVar62 = (byte)((uint)iVar30 >> 8) & ~(byte)((uint)auVar51._8_4_ >> 8);
                bVar63 = (byte)((uint)iVar30 >> 0x10) & ~(byte)((uint)auVar51._8_4_ >> 0x10);
                bVar64 = (byte)((uint)iVar30 >> 0x18) & ~(byte)((uint)auVar51._8_4_ >> 0x18);
                bVar65 = (byte)iVar115 & ~(byte)auVar51._12_4_;
                bVar66 = (byte)((uint)iVar115 >> 8) & ~(byte)((uint)auVar51._12_4_ >> 8);
                bVar67 = (byte)((uint)iVar115 >> 0x10) & ~(byte)((uint)auVar51._12_4_ >> 0x10);
                bVar68 = (byte)((uint)iVar115 >> 0x18) & ~(byte)((uint)auVar51._12_4_ >> 0x18);
                uVar145 = (undefined1)((ulong)lVar121 >> 8);
                uVar146 = (undefined1)((ulong)lVar121 >> 0x10);
                uVar147 = (undefined1)((ulong)lVar121 >> 0x18);
                uVar148 = (undefined1)((ulong)lVar123 >> 8);
                uVar149 = (undefined1)((ulong)lVar123 >> 0x10);
                uVar150 = (undefined1)((ulong)lVar123 >> 0x18);
                auVar52 = auVar52 ^ (auVar52 ^ auVar87) & auVar51;
                auVar113 = auVar113 ^ (auVar113 ^ auVar87) & auVar112;
                bVar124 = (byte)iVar156 & ~(byte)auVar155._0_4_;
                bVar127 = (byte)((uint)iVar156 >> 8) & ~(byte)((uint)auVar155._0_4_ >> 8);
                bVar128 = (byte)((uint)iVar156 >> 0x10) & ~(byte)((uint)auVar155._0_4_ >> 0x10);
                bVar129 = (byte)((uint)iVar156 >> 0x18) & ~(byte)((uint)auVar155._0_4_ >> 0x18);
                uVar125 = CONCAT13(bVar129,CONCAT12(bVar128,CONCAT11(bVar127,bVar124)));
                bVar130 = (byte)iVar157 & ~(byte)auVar155._4_4_;
                bVar131 = (byte)((uint)iVar157 >> 8) & ~(byte)((uint)auVar155._4_4_ >> 8);
                bVar132 = (byte)((uint)iVar157 >> 0x10) & ~(byte)((uint)auVar155._4_4_ >> 0x10);
                bVar133 = (byte)((uint)iVar157 >> 0x18) & ~(byte)((uint)auVar155._4_4_ >> 0x18);
                bVar134 = (byte)iVar158 & ~(byte)auVar155._8_4_;
                bVar137 = (byte)((uint)iVar158 >> 8) & ~(byte)((uint)auVar155._8_4_ >> 8);
                bVar138 = (byte)((uint)iVar158 >> 0x10) & ~(byte)((uint)auVar155._8_4_ >> 0x10);
                bVar139 = (byte)((uint)iVar158 >> 0x18) & ~(byte)((uint)auVar155._8_4_ >> 0x18);
                uVar135 = CONCAT13(bVar139,CONCAT12(bVar138,CONCAT11(bVar137,bVar134)));
                bVar140 = (byte)iVar159 & ~(byte)auVar155._12_4_;
                bVar141 = (byte)((uint)iVar159 >> 8) & ~(byte)((uint)auVar155._12_4_ >> 8);
                bVar142 = (byte)((uint)iVar159 >> 0x10) & ~(byte)((uint)auVar155._12_4_ >> 0x10);
                bVar143 = (byte)((uint)iVar159 >> 0x18) & ~(byte)((uint)auVar155._12_4_ >> 0x18);
                uVar10 = (undefined4)(long)(auVar154._0_8_ + (double)(fVar85 * 1.3421773e+08));
                auVar46[4] = (char)lVar14;
                auVar46._0_4_ = uVar10;
                auVar46[5] = uVar44;
                auVar46[6] = uVar144;
                auVar46[7] = uVar45;
                auVar46[8] = (char)lVar121;
                auVar46[9] = uVar145;
                auVar46[10] = uVar146;
                auVar46[0xb] = uVar147;
                auVar46[0xc] = (char)lVar123;
                auVar46[0xd] = uVar148;
                auVar46[0xe] = uVar149;
                auVar46[0xf] = uVar150;
                auVar47[4] = (char)lVar14;
                auVar47._0_4_ = uVar10;
                auVar47[5] = uVar44;
                auVar47[6] = uVar144;
                auVar47[7] = uVar45;
                auVar47[8] = (char)lVar121;
                auVar47[9] = uVar145;
                auVar47[10] = uVar146;
                auVar47[0xb] = uVar147;
                auVar47[0xc] = (char)lVar123;
                auVar47[0xd] = uVar148;
                auVar47[0xe] = uVar149;
                auVar47[0xf] = uVar150;
                auVar47 = auVar47 ^ (auVar46 ^ auVar87) & auVar155;
                uVar5 = CONCAT13(bVar56,CONCAT12(bVar55,CONCAT11(bVar54,bVar53))) & 0x7fffffff;
                uVar7 = CONCAT13(bVar60,CONCAT12(bVar59,CONCAT11(bVar58,bVar57))) & 0x7fffffff;
                uVar8 = CONCAT13(bVar64,CONCAT12(bVar63,CONCAT11(bVar62,bVar61))) & 0x7fffffff;
                uVar9 = CONCAT13(bVar68,CONCAT12(bVar67,CONCAT11(bVar66,bVar65))) & 0x7fffffff;
                uVar126 = CONCAT44((int)(CONCAT17(bVar133,CONCAT16(bVar132,CONCAT15(bVar131,CONCAT14
                                                  (bVar130,uVar125)))) >> 0x20),uVar125) &
                          0x7fffffff7fffffff;
                uVar136 = CONCAT44((int)(CONCAT17(bVar143,CONCAT16(bVar142,CONCAT15(bVar141,CONCAT14
                                                  (bVar140,uVar135)))) >> 0x20),uVar135) &
                          0x7fffffff7fffffff;
                iVar30 = CONCAT13((byte)(uVar5 >> 0x18) | auVar52[3] & ~bVar56,
                                  CONCAT12((byte)(uVar5 >> 0x10) | auVar52[2] & ~bVar55,
                                           CONCAT11((byte)(uVar5 >> 8) | auVar52[1] & ~bVar54,
                                                    (byte)uVar5 | auVar52[0] & ~bVar53)));
                auVar48._0_8_ =
                     CONCAT17((byte)(uVar7 >> 0x18) | auVar52[7] & ~bVar60,
                              CONCAT16((byte)(uVar7 >> 0x10) | auVar52[6] & ~bVar59,
                                       CONCAT15((byte)(uVar7 >> 8) | auVar52[5] & ~bVar58,
                                                CONCAT14((byte)uVar7 | auVar52[4] & ~bVar57,iVar30))
                                      ));
                auVar48[8] = (byte)uVar8 | auVar52[8] & ~bVar61;
                auVar48[9] = (byte)(uVar8 >> 8) | auVar52[9] & ~bVar62;
                auVar48[10] = (byte)(uVar8 >> 0x10) | auVar52[10] & ~bVar63;
                auVar48[0xb] = (byte)(uVar8 >> 0x18) | auVar52[0xb] & ~bVar64;
                auVar152[0xc] = (byte)uVar9 | auVar52[0xc] & ~bVar65;
                auVar152._0_12_ = auVar48;
                auVar152[0xd] = (byte)(uVar9 >> 8) | auVar52[0xd] & ~bVar66;
                auVar152[0xe] = (byte)(uVar9 >> 0x10) | auVar52[0xe] & ~bVar67;
                auVar152[0xf] = (byte)(uVar9 >> 0x18) | auVar52[0xf] & ~bVar68;
                iVar115 = CONCAT13((byte)(uVar126 >> 0x18) | auVar47[3] & ~bVar129,
                                   CONCAT12((byte)(uVar126 >> 0x10) | auVar47[2] & ~bVar128,
                                            CONCAT11((byte)(uVar126 >> 8) | auVar47[1] & ~bVar127,
                                                     (byte)uVar126 | auVar47[0] & ~bVar124)));
                auVar77._0_8_ =
                     CONCAT17((byte)(uVar126 >> 0x38) | auVar47[7] & ~bVar133,
                              CONCAT16((byte)(uVar126 >> 0x30) | auVar47[6] & ~bVar132,
                                       CONCAT15((byte)(uVar126 >> 0x28) | auVar47[5] & ~bVar131,
                                                CONCAT14((byte)(uVar126 >> 0x20) |
                                                         auVar47[4] & ~bVar130,iVar115))));
                auVar77[8] = (byte)uVar136 | auVar47[8] & ~bVar134;
                auVar77[9] = (byte)(uVar136 >> 8) | auVar47[9] & ~bVar137;
                auVar77[10] = (byte)(uVar136 >> 0x10) | auVar47[10] & ~bVar138;
                auVar77[0xb] = (byte)(uVar136 >> 0x18) | auVar47[0xb] & ~bVar139;
                auVar80[0xc] = (byte)(uVar136 >> 0x20) | auVar47[0xc] & ~bVar140;
                auVar80._0_12_ = auVar77;
                auVar80[0xd] = (byte)(uVar136 >> 0x28) | auVar47[0xd] & ~bVar141;
                auVar80[0xe] = (byte)(uVar136 >> 0x30) | auVar47[0xe] & ~bVar142;
                auVar80[0xf] = (byte)(uVar136 >> 0x38) | auVar47[0xf] & ~bVar143;
                    /* try { // try from 00a8b93c to 00b8b98f has its CatchHandler @ 00a8b93c
                       catch() { ... } // from try @ 00a8b93c with catch @ 00a8b93c
                       catch() { ... } // from try @ 00a8bb08 with catch @ 00a8b93c */
                *param_1 = fVar69 * fVar120;
                param_1[1] = fVar75 * fVar120;
                param_1[2] = fVar85 * fVar120;
                param_1[3] = fVar72 * fVar120;
                param_1[4] = fVar81 * fVar120;
                param_1[5] = fVar94 * fVar120;
                param_1[6] = fVar73 * fVar120;
                param_1[7] = fVar82 * fVar120;
                param_1[8] = fVar99 * fVar120;
                param_1[9] = fVar74 * fVar120;
                param_1[10] = fVar83 * fVar120;
                param_1[0xb] = fVar104 * fVar120;
                param_1 = param_1 + 0xc;
                iVar26 = CONCAT13(bVar102 & 0x7f | auVar113[0xb] & ~bVar102,
                                  CONCAT12(bVar101 | auVar113[10] & ~bVar101,
                                           CONCAT11(bVar100 | auVar113[9] & ~bVar100,
                                                    bVar98 | auVar113[8] & ~bVar98))) +
                         auVar48._8_4_ + auVar77._8_4_;
                iVar27 = CONCAT13(bVar107 & 0x7f | auVar113[0xf] & ~bVar107,
                                  CONCAT12(bVar106 | auVar113[0xe] & ~bVar106,
                                           CONCAT11(bVar105 | auVar113[0xd] & ~bVar105,
                                                    bVar103 | auVar113[0xc] & ~bVar103))) +
                         auVar152._12_4_ + auVar80._12_4_;
                iVar26 = iVar26 / 3 + (iVar26 >> 0x1f);
                iVar27 = (int)(CONCAT14((char)(iVar27 / 0x3000000) + (char)(iVar27 >> 0x1f),
                                        (int)((ulong)((long)iVar27 * 0x55555556) >> 0x18)) >> 8);
                piVar24[2] = piVar24[2] + (iVar26 - (iVar26 >> 0x1f) >> 0xc) * iVar25;
                piVar24[3] = piVar24[3] + (iVar27 - (iVar27 >> 0x1f) >> 0xc) * iVar25;
                *piVar24 = *piVar24 +
                           ((CONCAT13(bVar92 & 0x7f | auVar113[3] & ~bVar92,
                                      CONCAT12(bVar91 | auVar113[2] & ~bVar91,
                                               CONCAT11(bVar90 | auVar113[1] & ~bVar90,
                                                        bVar84 | auVar113[0] & ~bVar84))) + iVar30 +
                            iVar115) / 3 >> 0xc) * iVar25;
                piVar24[1] = piVar24[1] +
                             ((CONCAT13(bVar97 & 0x7f | auVar113[7] & ~bVar97,
                                        CONCAT12(bVar96 | auVar113[6] & ~bVar96,
                                                 CONCAT11(bVar95 | auVar113[5] & ~bVar95,
                                                          bVar93 | auVar113[4] & ~bVar93))) +
                               (int)((ulong)auVar48._0_8_ >> 0x20) +
                              (int)((ulong)auVar77._0_8_ >> 0x20)) / 3 >> 0xc) * iVar25;
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
        }
        do {
          fVar40 = *param_3;
          uVar44 = 0x3f;
          uVar144 = 0xbf;
          if (fVar40 <= -16.0) {
            iVar26 = -0x80000000;
          }
          else if (16.0 <= fVar40) {
            iVar26 = 0x7fffffff;
          }
          else {
            uVar45 = uVar44;
            if (fVar40 * 1.3421773e+08 <= 0.0) {
              uVar45 = uVar144;
            }
                    /* catch() { ... } // from try @ 00a8b1a0 with catch @ 00a8b34c
                       catch() { ... } // from try @ 00a8b23c with catch @ 00a8b34c */
                    /* catch() { ... } // from try @ 00a8b194 with catch @ 00a8b350
                       catch() { ... } // from try @ 00a8b1f4 with catch @ 00a8b350 */
            iVar26 = (int)((double)CONCAT17(uVar45,0xe0000000000000) +
                          (double)(fVar40 * 1.3421773e+08));
          }
                    /* catch() { ... } // from try @ 00a8b164 with catch @ 00a8b368 */
          *param_1 = fVar40 * *(float *)ptVar1;
                    /* catch() { ... } // from try @ 00a8b158 with catch @ 00a8b36c */
          fVar40 = param_3[1];
                    /* catch() { ... } // from try @ 00a8b138 with catch @ 00a8b370 */
          if (fVar40 <= -16.0) {
            iVar27 = -0x80000000;
          }
          else {
                    /* catch() { ... } // from try @ 00a8b170 with catch @ 00a8b380
                       catch() { ... } // from try @ 00a8b1d4 with catch @ 00a8b380
                       catch() { ... } // from try @ 00a8b298 with catch @ 00a8b380 */
            if (16.0 <= fVar40) {
              iVar27 = 0x7fffffff;
            }
            else {
              uVar45 = uVar44;
              if (fVar40 * 1.3421773e+08 <= 0.0) {
                uVar45 = uVar144;
              }
              iVar27 = (int)((double)CONCAT17(uVar45,0xe0000000000000) +
                            (double)(fVar40 * 1.3421773e+08));
            }
          }
          param_1[1] = fVar40 * *(float *)ptVar1;
          fVar40 = param_3[2];
          if (fVar40 <= -16.0) {
            iVar30 = -0x80000000;
          }
          else if (16.0 <= fVar40) {
            iVar30 = 0x7fffffff;
          }
          else {
                    /* try { // try from 00a8b3d8 to 00b8b42f has its CatchHandler @ 00a8b3d8
                       catch() { ... } // from try @ 00a8b3d8 with catch @ 00a8b3d8
                       catch() { ... } // from try @ 00a8b5a4 with catch @ 00a8b3d8 */
            if (fVar40 * 1.3421773e+08 <= 0.0) {
              uVar44 = uVar144;
            }
            iVar30 = (int)((double)CONCAT17(uVar44,0xe0000000000000) +
                          (double)(fVar40 * 1.3421773e+08));
          }
          param_1[2] = fVar40 * *(float *)ptVar1;
          param_2 = param_2 - 1;
          *param_4 = *param_4 + ((iVar27 + iVar26 + iVar30) / 3 >> 0xc) * iVar25;
          param_3 = param_3 + 3;
          param_4 = param_4 + 1;
          param_1 = param_1 + 3;
                    /* try { // try from 00a8b430 to 00b8b447 has its CatchHandler @ 00a8b624 */
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

