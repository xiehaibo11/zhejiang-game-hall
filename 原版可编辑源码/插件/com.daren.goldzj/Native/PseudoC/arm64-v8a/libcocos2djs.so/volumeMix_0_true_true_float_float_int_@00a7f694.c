
/* void cocos2d::AudioMixer::volumeMix<0, true, true, float, float, int>(float*, unsigned long,
   float const*, int*, bool, cocos2d::AudioMixer::track_t*) */

void cocos2d::AudioMixer::volumeMix<0,true,true,float,float,int>
               (float *param_1,ulong param_2,float *param_3,int *param_4,bool param_5,
               track_t *param_6)

{
  track_t *ptVar1;
  track_t *ptVar2;
  track_t *ptVar3;
  short sVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined2 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  float *pfVar14;
  bool bVar15;
  float *pfVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  float *pfVar22;
  int iVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  uint uVar30;
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
  
  uVar30 = *(int *)(param_6 + 0xbc) - 1;
  if (param_5) {
    if (uVar30 < 8) {
      iVar17 = *(int *)(param_6 + 0x18);
                    /* catch() { ... } // from try @ 00a7f50c with catch @ 00a7f6c0 */
                    /* catch() { ... } // from try @ 00a7f500 with catch @ 00a7f6c4 */
                    /* catch() { ... } // from try @ 00a7f4e0 with catch @ 00a7f6c8 */
      ptVar1 = param_6 + 0x9c;
                    /* catch() { ... } // from try @ 00a7f518 with catch @ 00a7f6d8 */
      ptVar2 = param_6 + 0xa4;
      ptVar3 = param_6 + 0x1c;
      switch(uVar30) {
      case 0:
        fVar24 = *(float *)ptVar1;
        piVar18 = param_4;
        if (param_4 == (int *)0x0) {
          do {
            param_2 = param_2 - 1;
                    /* try { // try from 00a7f7a4 to 00b7f7af has its CatchHandler @ 00a7f974 */
            *param_1 = *param_1 + fVar24 * *param_3;
                    /* try { // try from 00a7f7b0 to 00b7f7bb has its CatchHandler @ 00a7f970 */
            fVar24 = *(float *)ptVar2 + *(float *)ptVar1;
            *(float *)ptVar1 = fVar24;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
                    /* try { // try from 00a7f7bc to 00b7f8fb has its CatchHandler @ 00a7f988 */
          } while (param_2 != 0);
        }
        else {
          do {
            fVar29 = *param_3;
            if (fVar29 <= -16.0) {
              iVar19 = -0x80000000;
            }
            else if (16.0 <= fVar29) {
              iVar19 = 0x7fffffff;
            }
            else {
              uVar30 = 0x3fe00000;
              if (fVar29 * 1.3421773e+08 <= 0.0) {
                uVar30 = 0xbfe00000;
              }
                    /* try { // try from 00a7f730 to 00b7f783 has its CatchHandler @ 00a7f730
                       catch() { ... } // from try @ 00a7f730 with catch @ 00a7f730
                       catch() { ... } // from try @ 00a7f8fc with catch @ 00a7f730 */
              iVar19 = (int)((double)((ulong)uVar30 << 0x20) + (double)(fVar29 * 1.3421773e+08));
            }
            param_2 = param_2 - 1;
            *param_1 = fVar24 * fVar29 + *param_1;
            fVar24 = *(float *)ptVar2 + *(float *)ptVar1;
            *(float *)ptVar1 = fVar24;
            *piVar18 = *piVar18 + (*(int *)ptVar3 >> 0x10) * (iVar19 >> 0xc);
                    /* try { // try from 00a7f784 to 00b7f79b has its CatchHandler @ 00a7f978 */
            *(int *)ptVar3 = *(int *)ptVar3 + iVar17;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
            piVar18 = piVar18 + 1;
          } while (param_2 != 0);
        }
        break;
      case 1:
        volumeRampMulti<0,2,float,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar17);
        break;
      case 2:
        volumeRampMulti<3,3,float,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar17);
        break;
      case 3:
        volumeRampMulti<3,4,float,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar17);
        break;
      case 4:
        volumeRampMulti<3,5,float,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar17);
        break;
      case 5:
        volumeRampMulti<3,6,float,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar17);
        break;
      case 6:
        volumeRampMulti<3,7,float,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar17);
        break;
      case 7:
        volumeRampMulti<3,8,float,float,float,int,int>
                  (param_1,param_2,param_3,param_4,(float *)ptVar1,(float *)ptVar2,(int *)ptVar3,
                   iVar17);
      }
    }
    track_t::adjustVolumeRamp(param_6,param_4 != (int *)0x0,true);
    return;
  }
  if (uVar30 < 8) {
    sVar4 = *(short *)(param_6 + 0x20);
    iVar17 = (int)sVar4;
    ptVar1 = param_6 + 0x94;
    switch(uVar30) {
    case 0:
      if (param_4 == (int *)0x0) {
                    /* try { // try from 00a7fb6c to 00b7fb73 has its CatchHandler @ 00a7fe34 */
        if (7 < param_2) {
          if ((param_3 + param_2 <= param_1 || (track_t *)(param_1 + param_2) <= param_3) &&
             (param_6 + 0x95 <= param_1 || (track_t *)(param_1 + param_2) <= ptVar1)) {
            fVar24 = *(float *)ptVar1;
            uVar21 = param_2 & 0xfffffffffffffff8;
            pfVar16 = param_1 + 4;
            pfVar22 = param_3 + 4;
            uVar20 = uVar21;
            do {
              fVar29 = pfVar22[-4];
              fVar31 = pfVar22[-3];
              pfVar14 = pfVar22 + -2;
              fVar32 = pfVar22[-1];
              fVar33 = *pfVar22;
              fVar34 = pfVar22[1];
              fVar35 = pfVar22[2];
              fVar36 = pfVar22[3];
              uVar20 = uVar20 - 8;
                    /* catch() { ... } // from try @ 00a7fb98 with catch @ 00a7fe14 */
              pfVar22 = pfVar22 + 8;
                    /* catch() { ... } // from try @ 00a7fb88 with catch @ 00a7fe24 */
              pfVar16[-2] = pfVar16[-2] + *pfVar14 * fVar24;
              pfVar16[-1] = pfVar16[-1] + fVar32 * fVar24;
              pfVar16[-4] = pfVar16[-4] + fVar29 * fVar24;
              pfVar16[-3] = pfVar16[-3] + fVar31 * fVar24;
              pfVar16[2] = pfVar16[2] + fVar35 * fVar24;
              pfVar16[3] = pfVar16[3] + fVar36 * fVar24;
              *pfVar16 = *pfVar16 + fVar33 * fVar24;
              pfVar16[1] = pfVar16[1] + fVar34 * fVar24;
              pfVar16 = pfVar16 + 8;
            } while (uVar20 != 0);
                    /* catch() { ... } // from try @ 00a7fb6c with catch @ 00a7fe34 */
            bVar15 = uVar21 == param_2;
            param_3 = param_3 + uVar21;
            param_2 = param_2 - uVar21;
            param_1 = param_1 + uVar21;
            if (bVar15) {
              return;
            }
          }
        }
        do {
                    /* try { // try from 00a7fb88 to 00b7fb93 has its CatchHandler @ 00a7fe24 */
          param_2 = param_2 - 1;
          *param_1 = *param_1 + *param_3 * *(float *)ptVar1;
          param_3 = param_3 + 1;
          param_1 = param_1 + 1;
                    /* try { // try from 00a7fb98 to 00b7fb9f has its CatchHandler @ 00a7fe14 */
        } while (param_2 != 0);
      }
      else {
        if (3 < param_2) {
          if ((param_3 + param_2 <= param_1 || (track_t *)(param_1 + param_2) <= param_3) &&
             (param_6 + 0x95 <= param_1 || (track_t *)(param_1 + param_2) <= ptVar1)) {
            fVar24 = *(float *)ptVar1;
            uVar21 = param_2 & 0xfffffffffffffffc;
            auVar25 = NEON_fmov(0xc1800000,4);
            auVar26 = NEON_fmov(0x41800000,4);
            auVar27 = NEON_fmov(0xbfe0000000000000,8);
            auVar28 = NEON_fmov(0x3fe0000000000000,8);
            pfVar16 = param_3;
            uVar20 = uVar21;
            pfVar22 = param_1;
            piVar18 = param_4;
            do {
              uVar20 = uVar20 - 4;
              fVar34 = (float)*(undefined8 *)pfVar16;
              fVar29 = fVar34 * 1.3421773e+08;
              fVar35 = (float)((ulong)*(undefined8 *)pfVar16 >> 0x20);
              fVar31 = fVar35 * 1.3421773e+08;
              fVar36 = (float)*(undefined8 *)(pfVar16 + 2);
              fVar32 = fVar36 * 1.3421773e+08;
              fVar37 = (float)((ulong)*(undefined8 *)(pfVar16 + 2) >> 0x20);
              fVar33 = fVar37 * 1.3421773e+08;
              auVar81._0_8_ = (long)(int)-(uint)(0.0 < fVar32);
              auVar81._8_8_ = (long)(int)-(uint)(0.0 < fVar33);
              auVar74._0_8_ = (long)(int)-(uint)(0.0 < fVar29);
              auVar74._8_8_ = (long)(int)-(uint)(0.0 < fVar31);
              auVar75 = auVar27 ^ (auVar27 ^ auVar28) & auVar74;
              auVar82 = auVar27 ^ (auVar27 ^ auVar28) & auVar81;
              lVar73 = (long)(auVar75._0_8_ + (double)fVar29);
              lVar76 = (long)(auVar75._8_8_ +
                             (double)(float)(CONCAT17((char)((uint)fVar31 >> 0x18),
                                                      CONCAT16((char)((uint)fVar31 >> 0x10),
                                                               CONCAT15((char)((uint)fVar31 >> 8),
                                                                        CONCAT14(SUB41(fVar31,0),
                                                                                 fVar29)))) >> 0x20)
                             );
              lVar9 = (long)(auVar82._0_8_ + (double)fVar32);
              lVar12 = (long)(auVar82._8_8_ +
                             (double)(float)(CONCAT17((char)((uint)fVar33 >> 0x18),
                                                      CONCAT16((char)((uint)fVar33 >> 0x10),
                                                               CONCAT15((char)((uint)fVar33 >> 8),
                                                                        CONCAT14(SUB41(fVar33,0),
                                                                                 fVar32)))) >> 0x20)
                             );
              auVar39._0_4_ = -(uint)(fVar34 <= auVar25._0_4_);
              auVar39._4_4_ = -(uint)(fVar35 <= auVar25._4_4_);
              auVar39._8_4_ = -(uint)(fVar36 <= auVar25._8_4_);
              auVar39._12_4_ = -(uint)(fVar37 <= auVar25._12_4_);
              iVar23 = -(uint)(auVar26._0_4_ <= fVar34);
              iVar91 = -(uint)(auVar26._4_4_ <= fVar35);
              iVar96 = -(uint)(auVar26._8_4_ <= fVar36);
              iVar79 = -(uint)(auVar26._12_4_ <= fVar37);
              *(ulong *)(pfVar22 + 2) =
                   CONCAT44(fVar37 * fVar24 + (float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20),
                            fVar36 * fVar24 + (float)*(undefined8 *)(pfVar22 + 2));
              *(ulong *)pfVar22 =
                   CONCAT44(fVar35 * fVar24 + (float)((ulong)*(undefined8 *)pfVar22 >> 0x20),
                            fVar34 * fVar24 + (float)*(undefined8 *)pfVar22);
              cVar46 = (char)((ulong)lVar73 >> 0x18);
              cVar44 = cVar46 >> 4;
              cVar46 = cVar46 >> 7;
              iVar19 = (int)lVar76 >> 0xc;
              uVar48 = (undefined1)iVar19;
              uVar50 = (undefined1)((uint)iVar19 >> 8);
              cVar54 = (char)((ulong)lVar76 >> 0x18);
              cVar52 = cVar54 >> 4;
              cVar54 = cVar54 >> 7;
              iVar19 = (int)lVar9 >> 0xc;
              uVar56 = (undefined1)iVar19;
              uVar58 = (undefined1)((uint)iVar19 >> 8);
              cVar62 = (char)((ulong)lVar9 >> 0x18);
              cVar60 = cVar62 >> 4;
              cVar62 = cVar62 >> 7;
              iVar19 = (int)lVar12 >> 0xc;
              uVar64 = (undefined1)iVar19;
              uVar66 = (undefined1)((uint)iVar19 >> 8);
              cVar70 = (char)((ulong)lVar12 >> 0x18);
              cVar68 = cVar70 >> 4;
              cVar70 = cVar70 >> 7;
              auVar77[0] = (byte)iVar23 & ~(byte)auVar39._0_4_;
              auVar77[1] = (byte)((uint)iVar23 >> 8) & ~(byte)((uint)auVar39._0_4_ >> 8);
              auVar77[2] = (byte)((uint)iVar23 >> 0x10) & ~(byte)((uint)auVar39._0_4_ >> 0x10);
              auVar77[3] = (byte)((uint)iVar23 >> 0x18) & ~(byte)((uint)auVar39._0_4_ >> 0x18);
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
              auVar5._8_4_ = 0xfff80000;
              auVar5._0_8_ = 0xfff80000fff80000;
              auVar5._12_4_ = 0xfff80000;
              uVar8 = (undefined2)((int)lVar73 >> 0xc);
              auVar7[2] = cVar44;
              auVar7._0_2_ = uVar8;
              auVar7[3] = cVar46;
              auVar7[4] = uVar48;
              auVar7[5] = uVar50;
              auVar7[6] = cVar52;
              auVar7[7] = cVar54;
              auVar7[8] = uVar56;
              auVar7[9] = uVar58;
              auVar7[10] = cVar60;
              auVar7[0xb] = cVar62;
              auVar7[0xc] = uVar64;
              auVar7[0xd] = uVar66;
              auVar7[0xe] = cVar68;
              auVar7[0xf] = cVar70;
              auVar40[2] = cVar44;
              auVar40._0_2_ = uVar8;
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
              auVar40 = auVar40 ^ (auVar7 ^ auVar5) & auVar39;
              auVar6._8_4_ = 0x7ffff;
              auVar6._0_8_ = 0x7ffff0007ffff;
              auVar6._12_4_ = 0x7ffff;
              auVar40 = auVar40 ^ (auVar40 ^ auVar6) & auVar77;
              *(ulong *)(piVar18 + 2) =
                   CONCAT44((int)((ulong)*(undefined8 *)(piVar18 + 2) >> 0x20) +
                            auVar40._12_4_ * iVar17,
                            (int)*(undefined8 *)(piVar18 + 2) + auVar40._8_4_ * iVar17);
              *(ulong *)piVar18 =
                   CONCAT44((int)((ulong)*(undefined8 *)piVar18 >> 0x20) + auVar40._4_4_ * iVar17,
                            (int)*(undefined8 *)piVar18 + auVar40._0_4_ * iVar17);
              pfVar16 = pfVar16 + 4;
              pfVar22 = pfVar22 + 4;
              piVar18 = piVar18 + 4;
            } while (uVar20 != 0);
            bVar15 = uVar21 == param_2;
            param_3 = param_3 + uVar21;
            param_4 = param_4 + uVar21;
            param_2 = param_2 - uVar21;
            param_1 = param_1 + uVar21;
            if (bVar15) {
              return;
            }
          }
        }
        do {
          fVar24 = *param_3;
                    /* try { // try from 00a7fb00 to 00b7fb07 has its CatchHandler @ 00a7fe78 */
                    /* try { // try from 00a7fb08 to 00b7fb27 has its CatchHandler @ 00a7fe84 */
          if (fVar24 <= -16.0) {
            iVar19 = -0x80000000;
          }
          else if (16.0 <= fVar24) {
            iVar19 = 0x7fffffff;
          }
          else {
            uVar30 = 0x3fe00000;
            if (fVar24 * 1.3421773e+08 <= 0.0) {
              uVar30 = 0xbfe00000;
            }
                    /* try { // try from 00a7fb28 to 00b7fb37 has its CatchHandler @ 00a7fe74 */
            iVar19 = (int)((double)((ulong)uVar30 << 0x20) + (double)(fVar24 * 1.3421773e+08));
          }
                    /* try { // try from 00a7fb3c to 00b7fb47 has its CatchHandler @ 00a7fe6c */
                    /* try { // try from 00a7fb48 to 00b7fb57 has its CatchHandler @ 00a7fe54 */
          param_2 = param_2 - 1;
          *param_1 = fVar24 * *(float *)ptVar1 + *param_1;
                    /* try { // try from 00a7fb5c to 00b7fb67 has its CatchHandler @ 00a7fe44 */
          *param_4 = *param_4 + (iVar19 >> 0xc) * iVar17;
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
                    /* catch() { ... } // from try @ 00a7fb5c with catch @ 00a7fe44 */
          uVar20 = (param_2 - 1) * 8;
                    /* catch() { ... } // from try @ 00a7fb48 with catch @ 00a7fe54 */
                    /* catch() { ... } // from try @ 00a7fb3c with catch @ 00a7fe6c */
          if (((uVar20 < ~(ulong)(param_1 + 1) || uVar20 - ~(ulong)(param_1 + 1) == 0) &&
              (param_2 - 1 >> 0x3d == 0)) &&
             (uVar20 < ~(ulong)param_1 || uVar20 - ~(ulong)param_1 == 0)) {
                    /* catch() { ... } // from try @ 00a7fb28 with catch @ 00a7fe74 */
                    /* catch() { ... } // from try @ 00a7fb00 with catch @ 00a7fe78 */
                    /* catch() { ... } // from try @ 00a7fae0 with catch @ 00a7fe80 */
                    /* catch() { ... } // from try @ 00a7fb08 with catch @ 00a7fe84 */
                    /* catch() { ... } // from try @ 00a7fa6c with catch @ 00a7fe9c */
                    /* catch() { ... } // from try @ 00a7fa60 with catch @ 00a7fea0 */
                    /* catch() { ... } // from try @ 00a7fab4 with catch @ 00a7fea4
                       catch() { ... } // from try @ 00a7fc78 with catch @ 00a7fea4
                       catch() { ... } // from try @ 00a7fcd0 with catch @ 00a7fea4 */
            if ((param_3 + param_2 * 2 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= param_3)
               && (param_6 + 0x99 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= ptVar2)) {
              uVar21 = param_2 & 0xfffffffffffffffc;
              pfVar16 = param_3 + uVar21 * 2;
              pfVar22 = param_1 + uVar21 * 2;
              uVar20 = uVar21;
              do {
                fVar24 = *param_3;
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
                uVar20 = uVar20 - 4;
                    /* catch() { ... } // from try @ 00a7fa40 with catch @ 00a7fee8 */
                *param_1 = *param_1 + fVar24 * fVar37;
                param_1[1] = param_1[1] + fVar33 * fVar72;
                param_1[2] = param_1[2] + fVar29 * fVar37;
                param_1[3] = param_1[3] + fVar34 * fVar72;
                param_1[4] = param_1[4] + fVar31 * fVar37;
                param_1[5] = param_1[5] + fVar35 * fVar72;
                param_1[6] = param_1[6] + fVar32 * fVar37;
                param_1[7] = param_1[7] + fVar36 * fVar72;
                param_1 = param_1 + 8;
              } while (uVar20 != 0);
                    /* catch() { ... } // from try @ 00a7fa78 with catch @ 00a7fef8
                       catch() { ... } // from try @ 00a7fbd0 with catch @ 00a7fef8
                       catch() { ... } // from try @ 00a7fd58 with catch @ 00a7fef8 */
              bVar15 = uVar21 == param_2;
              param_3 = pfVar16;
              param_2 = param_2 - uVar21;
              param_1 = pfVar22;
              if (bVar15) {
                return;
              }
            }
          }
        }
        do {
          param_2 = param_2 - 1;
                    /* try { // try from 00a7fbd0 to 00b7fc37 has its CatchHandler @ 00a7fef8 */
          *param_1 = *param_1 + *param_3 * *(float *)ptVar1;
          param_1[1] = param_1[1] + param_3[1] * *(float *)ptVar2;
          param_3 = param_3 + 2;
          param_1 = param_1 + 2;
        } while (param_2 != 0);
      }
      else {
                    /* catch() { ... } // from try @ 00a7f7b0 with catch @ 00a7f970 */
                    /* catch() { ... } // from try @ 00a7f7a4 with catch @ 00a7f974 */
        ptVar2 = param_6 + 0x98;
                    /* catch() { ... } // from try @ 00a7f784 with catch @ 00a7f978 */
        if (3 < param_2) {
          uVar20 = (param_2 - 1) * 8;
          if (((uVar20 < ~(ulong)(param_1 + 1) || uVar20 - ~(ulong)(param_1 + 1) == 0) &&
              (param_2 - 1 >> 0x3d == 0)) &&
             (uVar20 < ~(ulong)param_1 || uVar20 - ~(ulong)param_1 == 0)) {
                    /* try { // try from 00a7fc38 to 00b7fc77 has its CatchHandler @ 00a7f9e0 */
            if ((param_3 + param_2 * 2 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= param_3)
               && (param_6 + 0x99 <= param_1 || (track_t *)(param_1 + param_2 * 2) <= ptVar2)) {
              uVar21 = param_2 & 0xfffffffffffffffc;
                    /* try { // try from 00a7fc78 to 00b7fc87 has its CatchHandler @ 00a7fea4 */
              auVar25 = NEON_fmov(0xc1800000,4);
              auVar26 = NEON_fmov(0x41800000,4);
                    /* try { // try from 00a7fc88 to 00b7fccf has its CatchHandler @ 00a7f9e0 */
              auVar27 = NEON_fmov(0xbfe0000000000000,8);
              auVar28 = NEON_fmov(0x3fe0000000000000,8);
              pfVar16 = param_3 + uVar21 * 2;
              pfVar22 = param_1 + uVar21 * 2;
              auVar75._8_4_ = 0x80000000;
              auVar75._0_8_ = 0x8000000080000000;
              auVar75._12_4_ = 0x80000000;
              uVar20 = uVar21;
              piVar18 = param_4;
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
                fVar24 = *(float *)ptVar1;
                uVar20 = uVar20 - 4;
                auVar104._0_8_ = (long)(int)-(uint)(0.0 < fVar32 * 1.3421773e+08);
                auVar104._8_8_ = (long)(int)-(uint)(0.0 < fVar33 * 1.3421773e+08);
                auVar105._0_8_ = (long)(int)-(uint)(0.0 < fVar29 * 1.3421773e+08);
                auVar105._8_8_ = (long)(int)-(uint)(0.0 < fVar31 * 1.3421773e+08);
                    /* try { // try from 00a7fcd0 to 00b7fd13 has its CatchHandler @ 00a7fea4 */
                auVar82 = auVar27 ^ (auVar27 ^ auVar28) & auVar105;
                auVar105 = auVar27 ^ (auVar27 ^ auVar28) & auVar104;
                auVar100._0_8_ = (long)(int)-(uint)(0.0 < fVar36 * 1.3421773e+08);
                auVar100._8_8_ = (long)(int)-(uint)(0.0 < fVar37 * 1.3421773e+08);
                auVar102._0_8_ = (long)(int)-(uint)(0.0 < fVar34 * 1.3421773e+08);
                auVar102._8_8_ = (long)(int)-(uint)(0.0 < fVar35 * 1.3421773e+08);
                auVar103 = auVar27 ^ (auVar27 ^ auVar28) & auVar102;
                auVar101 = auVar27 ^ (auVar27 ^ auVar28) & auVar100;
                    /* try { // try from 00a7fd14 to 00b7fd57 has its CatchHandler @ 00a7f9e0 */
                auVar41._0_4_ = (undefined4)(long)(auVar82._0_8_ + (double)(fVar29 * 1.3421773e+08))
                ;
                auVar41._4_4_ = (int)(long)(auVar82._8_8_ + (double)(fVar31 * 1.3421773e+08));
                auVar82._0_4_ = -(uint)(fVar29 <= auVar25._0_4_);
                auVar82._4_4_ = -(uint)(fVar31 <= auVar25._4_4_);
                auVar82._8_4_ = -(uint)(fVar32 <= auVar25._8_4_);
                auVar82._12_4_ = -(uint)(fVar33 <= auVar25._12_4_);
                iVar19 = -(uint)(auVar26._0_4_ <= fVar29);
                iVar23 = -(uint)(auVar26._4_4_ <= fVar31);
                iVar91 = -(uint)(auVar26._8_4_ <= fVar32);
                iVar96 = -(uint)(auVar26._12_4_ <= fVar33);
                auVar78._0_4_ =
                     (undefined4)(long)(auVar103._0_8_ + (double)(fVar34 * 1.3421773e+08));
                auVar78._4_4_ = (int)(long)(auVar103._8_8_ + (double)(fVar35 * 1.3421773e+08));
                auVar41._8_4_ = (int)(long)(auVar105._0_8_ + (double)(fVar32 * 1.3421773e+08));
                auVar41._12_4_ = (int)(long)(auVar105._8_8_ + (double)(fVar33 * 1.3421773e+08));
                fVar72 = *(float *)ptVar2;
                auVar78._8_4_ = (int)(long)(auVar101._0_8_ + (double)(fVar36 * 1.3421773e+08));
                auVar78._12_4_ = (int)(long)(auVar101._8_8_ + (double)(fVar37 * 1.3421773e+08));
                auVar103._0_4_ = -(uint)(fVar34 <= auVar25._0_4_);
                auVar103._4_4_ = -(uint)(fVar35 <= auVar25._4_4_);
                auVar103._8_4_ = -(uint)(fVar36 <= auVar25._8_4_);
                auVar103._12_4_ = -(uint)(fVar37 <= auVar25._12_4_);
                bVar42 = (byte)iVar19 & ~(byte)auVar82._0_4_;
                bVar43 = (byte)((uint)iVar19 >> 8) & ~(byte)((uint)auVar82._0_4_ >> 8);
                bVar45 = (byte)((uint)iVar19 >> 0x10) & ~(byte)((uint)auVar82._0_4_ >> 0x10);
                bVar47 = (byte)((uint)iVar19 >> 0x18) & ~(byte)((uint)auVar82._0_4_ >> 0x18);
                bVar49 = (byte)iVar23 & ~(byte)auVar82._4_4_;
                bVar51 = (byte)((uint)iVar23 >> 8) & ~(byte)((uint)auVar82._4_4_ >> 8);
                bVar53 = (byte)((uint)iVar23 >> 0x10) & ~(byte)((uint)auVar82._4_4_ >> 0x10);
                bVar55 = (byte)((uint)iVar23 >> 0x18) & ~(byte)((uint)auVar82._4_4_ >> 0x18);
                bVar57 = (byte)iVar91 & ~(byte)auVar82._8_4_;
                bVar59 = (byte)((uint)iVar91 >> 8) & ~(byte)((uint)auVar82._8_4_ >> 8);
                bVar61 = (byte)((uint)iVar91 >> 0x10) & ~(byte)((uint)auVar82._8_4_ >> 0x10);
                bVar63 = (byte)((uint)iVar91 >> 0x18) & ~(byte)((uint)auVar82._8_4_ >> 0x18);
                bVar65 = (byte)iVar96 & ~(byte)auVar82._12_4_;
                bVar67 = (byte)((uint)iVar96 >> 8) & ~(byte)((uint)auVar82._12_4_ >> 8);
                bVar69 = (byte)((uint)iVar96 >> 0x10) & ~(byte)((uint)auVar82._12_4_ >> 0x10);
                bVar71 = (byte)((uint)iVar96 >> 0x18) & ~(byte)((uint)auVar82._12_4_ >> 0x18);
                auVar41 = auVar41 ^ (auVar41 ^ auVar75) & auVar82;
                iVar19 = -(uint)(auVar26._0_4_ <= fVar34);
                iVar23 = -(uint)(auVar26._4_4_ <= fVar35);
                iVar91 = -(uint)(auVar26._8_4_ <= fVar36);
                iVar96 = -(uint)(auVar26._12_4_ <= fVar37);
                bVar80 = (byte)iVar19 & ~(byte)auVar103._0_4_;
                bVar83 = (byte)((uint)iVar19 >> 8) & ~(byte)((uint)auVar103._0_4_ >> 8);
                bVar84 = (byte)((uint)iVar19 >> 0x10) & ~(byte)((uint)auVar103._0_4_ >> 0x10);
                bVar85 = (byte)((uint)iVar19 >> 0x18) & ~(byte)((uint)auVar103._0_4_ >> 0x18);
                bVar86 = (byte)iVar23 & ~(byte)auVar103._4_4_;
                bVar87 = (byte)((uint)iVar23 >> 8) & ~(byte)((uint)auVar103._4_4_ >> 8);
                bVar88 = (byte)((uint)iVar23 >> 0x10) & ~(byte)((uint)auVar103._4_4_ >> 0x10);
                bVar89 = (byte)((uint)iVar23 >> 0x18) & ~(byte)((uint)auVar103._4_4_ >> 0x18);
                bVar90 = (byte)iVar91 & ~(byte)auVar103._8_4_;
                bVar92 = (byte)((uint)iVar91 >> 8) & ~(byte)((uint)auVar103._8_4_ >> 8);
                bVar93 = (byte)((uint)iVar91 >> 0x10) & ~(byte)((uint)auVar103._8_4_ >> 0x10);
                bVar94 = (byte)((uint)iVar91 >> 0x18) & ~(byte)((uint)auVar103._8_4_ >> 0x18);
                bVar95 = (byte)iVar96 & ~(byte)auVar103._12_4_;
                bVar97 = (byte)((uint)iVar96 >> 8) & ~(byte)((uint)auVar103._12_4_ >> 8);
                bVar98 = (byte)((uint)iVar96 >> 0x10) & ~(byte)((uint)auVar103._12_4_ >> 0x10);
                bVar99 = (byte)((uint)iVar96 >> 0x18) & ~(byte)((uint)auVar103._12_4_ >> 0x18);
                auVar78 = auVar78 ^ (auVar78 ^ auVar75) & auVar103;
                uVar30 = CONCAT13(bVar47,CONCAT12(bVar45,CONCAT11(bVar43,bVar42))) & 0x7fffffff;
                uVar10 = CONCAT13(bVar55,CONCAT12(bVar53,CONCAT11(bVar51,bVar49))) & 0x7fffffff;
                uVar11 = CONCAT13(bVar63,CONCAT12(bVar61,CONCAT11(bVar59,bVar57))) & 0x7fffffff;
                uVar13 = CONCAT13(bVar71,CONCAT12(bVar69,CONCAT11(bVar67,bVar65))) & 0x7fffffff;
                    /* try { // try from 00a7fd58 to 00b7fd93 has its CatchHandler @ 00a7fef8 */
                iVar19 = CONCAT13((byte)(uVar30 >> 0x18) | auVar41[3] & ~bVar47,
                                  CONCAT12((byte)(uVar30 >> 0x10) | auVar41[2] & ~bVar45,
                                           CONCAT11((byte)(uVar30 >> 8) | auVar41[1] & ~bVar43,
                                                    (byte)uVar30 | auVar41[0] & ~bVar42)));
                auVar38._0_8_ =
                     CONCAT17((byte)(uVar10 >> 0x18) | auVar41[7] & ~bVar55,
                              CONCAT16((byte)(uVar10 >> 0x10) | auVar41[6] & ~bVar53,
                                       CONCAT15((byte)(uVar10 >> 8) | auVar41[5] & ~bVar51,
                                                CONCAT14((byte)uVar10 | auVar41[4] & ~bVar49,iVar19)
                                               )));
                auVar38[8] = (byte)uVar11 | auVar41[8] & ~bVar57;
                auVar38[9] = (byte)(uVar11 >> 8) | auVar41[9] & ~bVar59;
                auVar38[10] = (byte)(uVar11 >> 0x10) | auVar41[10] & ~bVar61;
                auVar38[0xb] = (byte)(uVar11 >> 0x18) | auVar41[0xb] & ~bVar63;
                auVar101[0xc] = (byte)uVar13 | auVar41[0xc] & ~bVar65;
                auVar101._0_12_ = auVar38;
                auVar101[0xd] = (byte)(uVar13 >> 8) | auVar41[0xd] & ~bVar67;
                auVar101[0xe] = (byte)(uVar13 >> 0x10) | auVar41[0xe] & ~bVar69;
                auVar101[0xf] = (byte)(uVar13 >> 0x18) | auVar41[0xf] & ~bVar71;
                *param_1 = fVar29 * fVar24 + *param_1;
                param_1[1] = fVar34 * fVar72 + param_1[1];
                param_1[2] = fVar31 * fVar24 + param_1[2];
                param_1[3] = fVar35 * fVar72 + param_1[3];
                param_1[4] = fVar32 * fVar24 + param_1[4];
                param_1[5] = fVar36 * fVar72 + param_1[5];
                param_1[6] = fVar33 * fVar24 + param_1[6];
                param_1[7] = fVar37 * fVar72 + param_1[7];
                param_1 = param_1 + 8;
                iVar19 = CONCAT13(bVar85 & 0x7f | auVar78[3] & ~bVar85,
                                  CONCAT12(bVar84 | auVar78[2] & ~bVar84,
                                           CONCAT11(bVar83 | auVar78[1] & ~bVar83,
                                                    bVar80 | auVar78[0] & ~bVar80))) + iVar19;
                iVar23 = CONCAT13(bVar89 & 0x7f | auVar78[7] & ~bVar89,
                                  CONCAT12(bVar88 | auVar78[6] & ~bVar88,
                                           CONCAT11(bVar87 | auVar78[5] & ~bVar87,
                                                    bVar86 | auVar78[4] & ~bVar86))) +
                         (int)((ulong)auVar38._0_8_ >> 0x20);
                iVar91 = CONCAT13(bVar94 & 0x7f | auVar78[0xb] & ~bVar94,
                                  CONCAT12(bVar93 | auVar78[10] & ~bVar93,
                                           CONCAT11(bVar92 | auVar78[9] & ~bVar92,
                                                    bVar90 | auVar78[8] & ~bVar90))) + auVar38._8_4_
                ;
                iVar96 = CONCAT13(bVar99 & 0x7f | auVar78[0xf] & ~bVar99,
                                  CONCAT12(bVar98 | auVar78[0xe] & ~bVar98,
                                           CONCAT11(bVar97 | auVar78[0xd] & ~bVar97,
                                                    bVar95 | auVar78[0xc] & ~bVar95))) +
                         auVar101._12_4_;
                *(ulong *)(piVar18 + 2) =
                     CONCAT44((int)((ulong)*(undefined8 *)(piVar18 + 2) >> 0x20) +
                              (iVar96 - (iVar96 >> 0x1f) >> 0xd) * iVar17,
                              (int)*(undefined8 *)(piVar18 + 2) +
                              (iVar91 - (iVar91 >> 0x1f) >> 0xd) * iVar17);
                *(ulong *)piVar18 =
                     CONCAT44((int)((ulong)*(undefined8 *)piVar18 >> 0x20) +
                              (iVar23 - (iVar23 >> 0x1f) >> 0xd) * iVar17,
                              (int)*(undefined8 *)piVar18 +
                              (iVar19 - (iVar19 >> 0x1f) >> 0xd) * iVar17);
                piVar18 = piVar18 + 4;
                    /* try { // try from 00a7fd94 to 00b7ff4f has its CatchHandler @ 00a7f9e0 */
              } while (uVar20 != 0);
              bVar15 = uVar21 == param_2;
              param_3 = pfVar16;
              param_4 = param_4 + uVar21;
              param_2 = param_2 - uVar21;
              param_1 = pfVar22;
              if (bVar15) {
                return;
              }
            }
          }
        }
        do {
          fVar24 = *param_3;
          if (fVar24 <= -16.0) {
            iVar19 = -0x80000000;
          }
          else if (16.0 <= fVar24) {
                    /* try { // try from 00a7f9e0 to 00b7fa3f has its CatchHandler @ 00a7f9e0
                       catch() { ... } // from try @ 00a7f9e0 with catch @ 00a7f9e0
                       catch() { ... } // from try @ 00a7fc38 with catch @ 00a7f9e0
                       catch() { ... } // from try @ 00a7fc88 with catch @ 00a7f9e0
                       catch() { ... } // from try @ 00a7fd14 with catch @ 00a7f9e0
                       catch() { ... } // from try @ 00a7fd94 with catch @ 00a7f9e0 */
            iVar19 = 0x7fffffff;
          }
          else {
            uVar30 = 0x3fe00000;
            if (fVar24 * 1.3421773e+08 <= 0.0) {
              uVar30 = 0xbfe00000;
            }
            iVar19 = (int)((double)((ulong)uVar30 << 0x20) + (double)(fVar24 * 1.3421773e+08));
          }
          *param_1 = fVar24 * *(float *)ptVar1 + *param_1;
          fVar24 = param_3[1];
          if (fVar24 <= -16.0) {
            iVar23 = -0x80000000;
          }
          else if (16.0 <= fVar24) {
            iVar23 = 0x7fffffff;
          }
          else {
            uVar30 = 0x3fe00000;
            if (fVar24 * 1.3421773e+08 <= 0.0) {
              uVar30 = 0xbfe00000;
            }
            iVar23 = (int)((double)((ulong)uVar30 << 0x20) + (double)(fVar24 * 1.3421773e+08));
          }
          iVar23 = iVar23 + iVar19;
                    /* try { // try from 00a7fa40 to 00b7fa57 has its CatchHandler @ 00a7fee8 */
          param_1[1] = fVar24 * *(float *)ptVar2 + param_1[1];
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
                    /* try { // try from 00a7fa60 to 00b7fa6b has its CatchHandler @ 00a7fea0 */
          param_2 = param_2 - 1;
          *param_4 = *param_4 + (iVar23 >> 0xd) * iVar17;
          param_3 = param_3 + 2;
          param_4 = param_4 + 1;
          param_1 = param_1 + 2;
                    /* try { // try from 00a7fa6c to 00b7fa77 has its CatchHandler @ 00a7fe9c */
        } while (param_2 != 0);
      }
      break;
    case 2:
                    /* try { // try from 00a7fa78 to 00b7fa8f has its CatchHandler @ 00a7fef8 */
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
                    /* try { // try from 00a7fab4 to 00b7fadb has its CatchHandler @ 00a7fea4 */
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

