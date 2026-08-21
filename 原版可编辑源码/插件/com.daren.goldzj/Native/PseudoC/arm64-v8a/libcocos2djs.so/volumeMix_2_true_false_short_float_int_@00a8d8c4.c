
/* void cocos2d::AudioMixer::volumeMix<2, true, false, short, float, int>(short*, unsigned long,
   float const*, int*, bool, cocos2d::AudioMixer::track_t*) */

void cocos2d::AudioMixer::volumeMix<2,true,false,short,float,int>
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
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar40;
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  float fVar44;
  float fVar45;
  undefined1 auVar43 [16];
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  int iVar51;
  int iVar52;
  undefined1 auVar50 [16];
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
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
                    /* try { // try from 00a8d8f8 to 00b8d90f has its CatchHandler @ 00a8daec */
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
                    /* try { // try from 00a8dba8 to 00b8dbbf has its CatchHandler @ 00a8dd5c */
          fVar36 = 4.59163e-41;
          if ((int)fVar31 < 0x43c08000) {
            fVar36 = fVar31;
          }
          sVar4 = -0x8000;
          if (0x43bf7fff < (int)fVar31) {
            sVar4 = SUB42(fVar36,0);
          }
          fVar30 = fVar30 + fVar35;
          param_2 = param_2 - 1;
          *param_1 = sVar4;
                    /* try { // try from 00a8dbc8 to 00b8dbd3 has its CatchHandler @ 00a8dd58 */
          *(float *)ptVar1 = fVar30;
          param_1 = param_1 + 1;
          param_3 = param_3 + 1;
        } while (param_2 != 0);
      }
      else {
                    /* try { // try from 00a8d918 to 00b8d923 has its CatchHandler @ 00a8dae8 */
                    /* try { // try from 00a8d924 to 00b8d92f has its CatchHandler @ 00a8dae4 */
                    /* try { // try from 00a8d930 to 00b8da6b has its CatchHandler @ 00a8dafc */
        do {
          fVar35 = *param_3;
          if (fVar35 <= -16.0) {
            iVar28 = -0x80000000;
          }
          else if (16.0 <= fVar35) {
            iVar28 = 0x7fffffff;
          }
          else {
            fVar36 = 0.5;
            if (fVar35 * 1.3421773e+08 <= 0.0) {
              fVar36 = -0.5;
            }
            iVar28 = (int)(fVar36 + fVar35 * 1.3421773e+08);
          }
          fVar36 = fVar30 * fVar35 + 384.0;
          fVar35 = 4.59163e-41;
          if ((int)fVar36 < 0x43c08000) {
            fVar35 = fVar36;
          }
          sVar4 = -0x8000;
          if (0x43bf7fff < (int)fVar36) {
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
                    /* try { // try from 00a8dbd4 to 00b8dbdf has its CatchHandler @ 00a8dd54 */
        fVar30 = *(float *)ptVar1;
        if (3 < param_2) {
          uVar27 = param_2 & 0xfffffffffffffffc;
                    /* try { // try from 00a8de38 to 00b8de43 has its CatchHandler @ 00a8dfa4 */
                    /* try { // try from 00a8de44 to 00b8de4f has its CatchHandler @ 00a8dfa0 */
                    /* try { // try from 00a8de50 to 00b8df2b has its CatchHandler @ 00a8dfb8 */
          psVar22 = param_1;
          pfVar23 = param_3;
          uVar26 = uVar27;
          do {
            uVar26 = uVar26 - 4;
            fVar35 = fVar30 * *pfVar23 + 384.0;
            fVar36 = fVar30 * pfVar23[1] + 384.0;
            fVar31 = fVar30 * pfVar23[2] + 384.0;
            fVar40 = fVar30 * pfVar23[3] + 384.0;
            uVar6 = SUB42(fVar35,0) ^
                    (SUB42(fVar35,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar35);
            uVar7 = SUB42(fVar36,0) ^
                    (SUB42(fVar36,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar36);
            uVar8 = SUB42(fVar31,0) ^
                    (SUB42(fVar31,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar31);
            uVar9 = SUB42(fVar40,0) ^
                    (SUB42(fVar40,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar40);
            *(ulong *)psVar22 =
                 CONCAT26(uVar9 ^ (uVar9 ^ 0x8000) & -(ushort)((int)fVar40 < 0x43bf8000),
                          CONCAT24(uVar8 ^ (uVar8 ^ 0x8000) & -(ushort)((int)fVar31 < 0x43bf8000),
                                   CONCAT22(uVar7 ^ (uVar7 ^ 0x8000) &
                                                    -(ushort)((int)fVar36 < 0x43bf8000),
                                            uVar6 ^ (uVar6 ^ 0x8000) &
                                                    -(ushort)((int)fVar35 < 0x43bf8000))));
            psVar22 = psVar22 + 4;
            pfVar23 = pfVar23 + 4;
          } while (uVar26 != 0);
          bVar14 = uVar27 == param_2;
          param_3 = param_3 + uVar27;
          param_2 = param_2 - uVar27;
          param_1 = param_1 + uVar27;
          if (bVar14) {
            return;
          }
        }
        do {
          fVar36 = fVar30 * *param_3 + 384.0;
          fVar35 = 4.59163e-41;
          if ((int)fVar36 < 0x43c08000) {
            fVar35 = fVar36;
          }
          sVar4 = -0x8000;
          if (0x43bf7fff < (int)fVar36) {
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
          uVar27 = param_2 & 0xfffffffffffffffc;
          auVar32 = NEON_fmov(0xc1800000,4);
          auVar33 = NEON_fmov(0x41800000,4);
          auVar34 = NEON_fmov(0xbfe0000000000000,8);
          auVar37 = NEON_fmov(0x3fe0000000000000,8);
          auVar38._8_4_ = 0x7fff;
          auVar38._0_8_ = 0x7fff00007fff;
          auVar38._12_4_ = 0x7fff;
          auVar39._8_4_ = 0x8000;
          auVar39._0_8_ = 0x800000008000;
          auVar39._12_4_ = 0x8000;
          auVar43._8_4_ = 0xfff80000;
          auVar43._0_8_ = 0xfff80000fff80000;
          auVar43._12_4_ = 0xfff80000;
                    /* try { // try from 00a8dce0 to 00b8ddc3 has its CatchHandler @ 00a8db54 */
          psVar22 = param_1;
          pfVar23 = param_3;
          piVar24 = param_4;
          uVar26 = uVar27;
          do {
            fVar35 = *pfVar23;
            fVar36 = pfVar23[1];
            fVar31 = pfVar23[2];
            fVar40 = pfVar23[3];
            uVar26 = uVar26 - 4;
            auVar49._0_4_ = -(uint)(fVar35 <= auVar32._0_4_);
            auVar49._4_4_ = -(uint)(fVar36 <= auVar32._4_4_);
            auVar49._8_4_ = -(uint)(fVar31 <= auVar32._8_4_);
            auVar49._12_4_ = -(uint)(fVar40 <= auVar32._12_4_);
            iVar28 = -(uint)(auVar33._0_4_ <= fVar35);
            iVar29 = -(uint)(auVar33._4_4_ <= fVar36);
            iVar51 = -(uint)(auVar33._8_4_ <= fVar31);
            iVar52 = -(uint)(auVar33._12_4_ <= fVar40);
            auVar59._0_8_ = (long)(int)-(uint)(0.0 < fVar31 * 1.3421773e+08);
            auVar59._8_8_ = (long)(int)-(uint)(0.0 < fVar40 * 1.3421773e+08);
            auVar47._0_4_ = fVar30 * fVar35 + 384.0;
            auVar47._4_4_ = fVar30 * fVar36 + 384.0;
            auVar47._8_4_ = fVar30 * fVar31 + 384.0;
            auVar47._12_4_ = fVar30 * fVar40 + 384.0;
            auVar57._0_8_ = (long)(int)-(uint)(0.0 < fVar35 * 1.3421773e+08);
            auVar57._8_8_ = (long)(int)-(uint)(0.0 < fVar36 * 1.3421773e+08);
            auVar60 = auVar34 ^ (auVar34 ^ auVar37) & auVar59;
            auVar61._0_4_ = -(uint)(0x43c07fff < (int)auVar47._0_4_);
            auVar61._4_4_ = -(uint)(0x43c07fff < (int)auVar47._4_4_);
            auVar61._8_4_ = -(uint)(0x43c07fff < (int)auVar47._8_4_);
            auVar61._12_4_ = -(uint)(0x43c07fff < (int)auVar47._12_4_);
            auVar58 = auVar34 ^ (auVar34 ^ auVar37) & auVar57;
            auVar62 = auVar47 ^ (auVar47 ^ auVar38) & auVar61;
            auVar48._0_4_ = -(uint)((int)auVar47._0_4_ < 0x43bf8000);
            auVar48._4_4_ = -(uint)((int)auVar47._4_4_ < 0x43bf8000);
            auVar48._8_4_ = -(uint)((int)auVar47._8_4_ < 0x43bf8000);
            auVar48._12_4_ = -(uint)((int)auVar47._12_4_ < 0x43bf8000);
            auVar62 = auVar62 ^ (auVar62 ^ auVar39) & auVar48;
            *(ulong *)psVar22 =
                 CONCAT26(auVar62._12_2_,
                          CONCAT24(auVar62._8_2_,CONCAT22(auVar62._4_2_,auVar62._0_2_)));
                    /* catch() { ... } // from try @ 00a8dbd4 with catch @ 00a8dd54 */
                    /* catch() { ... } // from try @ 00a8dbc8 with catch @ 00a8dd58 */
            iVar53 = (int)(long)(auVar58._0_8_ + (double)(fVar35 * 1.3421773e+08)) >> 0xc;
            iVar54 = (int)(long)(auVar58._8_8_ + (double)(fVar36 * 1.3421773e+08)) >> 0xc;
            iVar55 = (int)(long)(auVar60._0_8_ + (double)(fVar31 * 1.3421773e+08)) >> 0xc;
            iVar56 = (int)(long)(auVar60._8_8_ + (double)(fVar40 * 1.3421773e+08)) >> 0xc;
                    /* catch() { ... } // from try @ 00a8dba8 with catch @ 00a8dd5c */
            auVar50[0] = (byte)iVar28 & ~(byte)auVar49._0_4_;
            auVar50[1] = (byte)((uint)iVar28 >> 8) & ~(byte)((uint)auVar49._0_4_ >> 8);
            auVar50[2] = (byte)((uint)iVar28 >> 0x10) & ~(byte)((uint)auVar49._0_4_ >> 0x10);
            auVar50[3] = (byte)((uint)iVar28 >> 0x18) & ~(byte)((uint)auVar49._0_4_ >> 0x18);
            auVar50[4] = (byte)iVar29 & ~(byte)auVar49._4_4_;
            auVar50[5] = (byte)((uint)iVar29 >> 8) & ~(byte)((uint)auVar49._4_4_ >> 8);
            auVar50[6] = (byte)((uint)iVar29 >> 0x10) & ~(byte)((uint)auVar49._4_4_ >> 0x10);
            auVar50[7] = (byte)((uint)iVar29 >> 0x18) & ~(byte)((uint)auVar49._4_4_ >> 0x18);
            auVar50[8] = (byte)iVar51 & ~(byte)auVar49._8_4_;
            auVar50[9] = (byte)((uint)iVar51 >> 8) & ~(byte)((uint)auVar49._8_4_ >> 8);
            auVar50[10] = (byte)((uint)iVar51 >> 0x10) & ~(byte)((uint)auVar49._8_4_ >> 0x10);
            auVar50[0xb] = (byte)((uint)iVar51 >> 0x18) & ~(byte)((uint)auVar49._8_4_ >> 0x18);
            auVar50[0xc] = (byte)iVar52 & ~(byte)auVar49._12_4_;
            auVar50[0xd] = (byte)((uint)iVar52 >> 8) & ~(byte)((uint)auVar49._12_4_ >> 8);
            auVar50[0xe] = (byte)((uint)iVar52 >> 0x10) & ~(byte)((uint)auVar49._12_4_ >> 0x10);
            auVar50[0xf] = (byte)((uint)iVar52 >> 0x18) & ~(byte)((uint)auVar49._12_4_ >> 0x18);
            auVar58._4_4_ = iVar54;
            auVar58._0_4_ = iVar53;
            auVar58._8_4_ = iVar55;
            auVar58._12_4_ = iVar56;
            auVar60._4_4_ = iVar54;
            auVar60._0_4_ = iVar53;
            auVar60._8_4_ = iVar55;
            auVar60._12_4_ = iVar56;
            auVar60 = auVar60 ^ (auVar58 ^ auVar43) & auVar49;
            auVar62._8_4_ = 0x7ffff;
            auVar62._0_8_ = 0x7ffff0007ffff;
            auVar62._12_4_ = 0x7ffff;
            auVar60 = auVar60 ^ (auVar60 ^ auVar62) & auVar50;
                    /* catch() { ... } // from try @ 00a8dbe0 with catch @ 00a8dd6c */
            piVar24[2] = piVar24[2] + auVar60._8_4_ * iVar25;
            piVar24[3] = piVar24[3] + auVar60._12_4_ * iVar25;
            *piVar24 = *piVar24 + auVar60._0_4_ * iVar25;
            piVar24[1] = piVar24[1] + auVar60._4_4_ * iVar25;
            psVar22 = psVar22 + 4;
            pfVar23 = pfVar23 + 4;
            piVar24 = piVar24 + 4;
          } while (uVar26 != 0);
          bVar14 = uVar27 == param_2;
          param_2 = param_2 - uVar27;
          param_3 = param_3 + uVar27;
          param_4 = param_4 + uVar27;
          param_1 = param_1 + uVar27;
          if (bVar14) {
            return;
          }
        }
        do {
          fVar35 = *param_3;
          if (fVar35 <= -16.0) {
            iVar28 = -0x80000000;
          }
          else {
                    /* try { // try from 00a8ddc4 to 00b8de17 has its CatchHandler @ 00a8ddc4
                       catch() { ... } // from try @ 00a8ddc4 with catch @ 00a8ddc4
                       catch() { ... } // from try @ 00a8df2c with catch @ 00a8ddc4 */
            if (16.0 <= fVar35) {
              iVar28 = 0x7fffffff;
            }
            else {
              fVar36 = 0.5;
              if (fVar35 * 1.3421773e+08 <= 0.0) {
                fVar36 = -0.5;
              }
              iVar28 = (int)(fVar36 + fVar35 * 1.3421773e+08);
            }
          }
          fVar36 = fVar30 * fVar35 + 384.0;
          fVar35 = 4.59163e-41;
          if ((int)fVar36 < 0x43c08000) {
            fVar35 = fVar36;
          }
          sVar4 = -0x8000;
          if (0x43bf7fff < (int)fVar36) {
            sVar4 = SUB42(fVar35,0);
          }
          *param_1 = sVar4;
                    /* try { // try from 00a8de18 to 00b8de2f has its CatchHandler @ 00a8dfa8 */
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
          uVar26 = (param_2 - 1) * 4;
          if (((uVar26 < ~(ulong)param_1 || uVar26 - ~(ulong)param_1 == 0) &&
              (param_2 - 1 >> 0x3e == 0)) &&
             (uVar26 < ~(ulong)(param_1 + 1) || uVar26 - ~(ulong)(param_1 + 1) == 0)) {
                    /* try { // try from 00a8df2c to 00b8e00f has its CatchHandler @ 00a8ddc4 */
            uVar27 = param_2 & 0xfffffffffffffffc;
            pfVar23 = param_3 + uVar27 * 2;
            psVar22 = param_1 + uVar27 * 2;
            uVar26 = uVar27;
            do {
              fVar36 = *param_3;
              pfVar15 = param_3 + 1;
              pfVar16 = param_3 + 2;
              pfVar17 = param_3 + 3;
              pfVar18 = param_3 + 4;
              pfVar19 = param_3 + 5;
              pfVar20 = param_3 + 6;
              pfVar21 = param_3 + 7;
              param_3 = param_3 + 8;
              uVar26 = uVar26 - 4;
              fVar42 = fVar30 * fVar36 + 384.0;
              fVar44 = fVar30 * *pfVar16 + 384.0;
              fVar45 = fVar30 * *pfVar18 + 384.0;
              fVar46 = fVar30 * *pfVar20 + 384.0;
              fVar36 = fVar35 * *pfVar15 + 384.0;
              fVar31 = fVar35 * *pfVar17 + 384.0;
              fVar40 = fVar35 * *pfVar19 + 384.0;
              fVar41 = fVar35 * *pfVar21 + 384.0;
                    /* catch() { ... } // from try @ 00a8de44 with catch @ 00a8dfa0 */
              uVar6 = SUB42(fVar42,0) ^
                      (SUB42(fVar42,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar42);
              uVar7 = SUB42(fVar44,0) ^
                      (SUB42(fVar44,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar44);
              uVar8 = SUB42(fVar45,0) ^
                      (SUB42(fVar45,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar45);
              uVar9 = SUB42(fVar46,0) ^
                      (SUB42(fVar46,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar46);
                    /* catch() { ... } // from try @ 00a8de38 with catch @ 00a8dfa4 */
              uVar10 = SUB42(fVar36,0) ^
                       (SUB42(fVar36,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar36);
              uVar11 = SUB42(fVar31,0) ^
                       (SUB42(fVar31,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar31);
              uVar12 = SUB42(fVar40,0) ^
                       (SUB42(fVar40,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar40);
              uVar13 = SUB42(fVar41,0) ^
                       (SUB42(fVar41,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar41);
                    /* catch() { ... } // from try @ 00a8de18 with catch @ 00a8dfa8 */
              *param_1 = uVar6 ^ (uVar6 ^ 0x8000) & -(ushort)((int)fVar42 < 0x43bf8000);
              param_1[1] = uVar10 ^ (uVar10 ^ 0x8000) & -(ushort)((int)fVar36 < 0x43bf8000);
              param_1[2] = uVar7 ^ (uVar7 ^ 0x8000) & -(ushort)((int)fVar44 < 0x43bf8000);
              param_1[3] = uVar11 ^ (uVar11 ^ 0x8000) & -(ushort)((int)fVar31 < 0x43bf8000);
              param_1[4] = uVar8 ^ (uVar8 ^ 0x8000) & -(ushort)((int)fVar45 < 0x43bf8000);
              param_1[5] = uVar12 ^ (uVar12 ^ 0x8000) & -(ushort)((int)fVar40 < 0x43bf8000);
              param_1[6] = uVar9 ^ (uVar9 ^ 0x8000) & -(ushort)((int)fVar46 < 0x43bf8000);
              param_1[7] = uVar13 ^ (uVar13 ^ 0x8000) & -(ushort)((int)fVar41 < 0x43bf8000);
              param_1 = param_1 + 8;
            } while (uVar26 != 0);
            bVar14 = uVar27 == param_2;
            param_3 = pfVar23;
            param_2 = param_2 - uVar27;
            param_1 = psVar22;
            if (bVar14) {
              return;
            }
          }
        }
        do {
          fVar31 = fVar30 * *param_3 + 384.0;
          fVar36 = 4.59163e-41;
          if ((int)fVar31 < 0x43c08000) {
            fVar36 = fVar31;
          }
          sVar4 = -0x8000;
          if (0x43bf7fff < (int)fVar31) {
            sVar4 = SUB42(fVar36,0);
          }
          *param_1 = sVar4;
          pfVar23 = param_3 + 1;
          param_3 = param_3 + 2;
          fVar31 = fVar35 * *pfVar23 + 384.0;
          fVar36 = 4.59163e-41;
          if ((int)fVar31 < 0x43c08000) {
            fVar36 = fVar31;
          }
          sVar4 = -0x8000;
          if (0x43bf7fff < (int)fVar31) {
            sVar4 = SUB42(fVar36,0);
          }
          param_2 = param_2 - 1;
          param_1[1] = sVar4;
          param_1 = param_1 + 2;
        } while (param_2 != 0);
      }
      else {
        fVar30 = *(float *)(param_6 + 0x94);
        fVar35 = *(float *)(param_6 + 0x98);
                    /* try { // try from 00a8da6c to 00b8db53 has its CatchHandler @ 00a8d8a0 */
        do {
          fVar36 = *param_3;
          if (fVar36 <= -16.0) {
            iVar28 = -0x80000000;
          }
          else if (16.0 <= fVar36) {
            iVar28 = 0x7fffffff;
          }
          else {
            fVar31 = 0.5;
            if (fVar36 * 1.3421773e+08 <= 0.0) {
              fVar31 = -0.5;
            }
            iVar28 = (int)(fVar31 + fVar36 * 1.3421773e+08);
          }
          fVar31 = fVar30 * fVar36 + 384.0;
          fVar36 = 4.59163e-41;
          if ((int)fVar31 < 0x43c08000) {
            fVar36 = fVar31;
          }
          sVar4 = -0x8000;
          if (0x43bf7fff < (int)fVar31) {
            sVar4 = SUB42(fVar36,0);
          }
          *param_1 = sVar4;
          fVar36 = param_3[1];
                    /* catch() { ... } // from try @ 00a8d924 with catch @ 00a8dae4 */
          if (fVar36 <= -16.0) {
            iVar29 = -0x80000000;
          }
          else {
                    /* catch() { ... } // from try @ 00a8d918 with catch @ 00a8dae8 */
                    /* catch() { ... } // from try @ 00a8d8f8 with catch @ 00a8daec */
            if (16.0 <= fVar36) {
              iVar29 = 0x7fffffff;
            }
            else {
                    /* catch() { ... } // from try @ 00a8d930 with catch @ 00a8dafc */
              fVar31 = 0.5;
              if (fVar36 * 1.3421773e+08 <= 0.0) {
                fVar31 = -0.5;
              }
              iVar29 = (int)(fVar31 + fVar36 * 1.3421773e+08);
            }
          }
          fVar31 = fVar35 * fVar36 + 384.0;
          iVar29 = iVar29 + iVar28;
          fVar36 = 4.59163e-41;
          if ((int)fVar31 < 0x43c08000) {
            fVar36 = fVar31;
          }
          sVar4 = -0x8000;
          if (0x43bf7fff < (int)fVar31) {
            sVar4 = SUB42(fVar36,0);
          }
          param_1[1] = sVar4;
          if (iVar29 < 0) {
            iVar29 = iVar29 + 1;
          }
          param_3 = param_3 + 2;
                    /* try { // try from 00a8db54 to 00b8dba7 has its CatchHandler @ 00a8db54
                       catch() { ... } // from try @ 00a8db54 with catch @ 00a8db54
                       catch() { ... } // from try @ 00a8dce0 with catch @ 00a8db54 */
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

