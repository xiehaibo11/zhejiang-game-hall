
/* void cocos2d::volumeMulti<4, 4, short, float, float, int, short>(short*, unsigned long, float
   const*, int*, float const*, short) */

void cocos2d::volumeMulti<4,4,short,float,float,int,short>
               (short *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               short param_6)

{
  float *pfVar1;
  short *psVar2;
  short sVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  bool bVar21;
  float *pfVar22;
  ulong uVar37;
  ulong uVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  float fVar43;
  undefined2 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar50;
  float fVar51;
  undefined1 auVar49 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar57;
  float fVar58;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  undefined2 uVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  
  fVar43 = *param_5;
  if (param_4 == (int *)0x0) {
    if (3 < param_2) {
      uVar37 = (param_2 - 1) * 8;
                    /* catch() { ... } // from try @ 00a8fa78 with catch @ 00a8faf4 */
                    /* catch() { ... } // from try @ 00a8fa6c with catch @ 00a8faf8 */
                    /* catch() { ... } // from try @ 00a8fa80 with catch @ 00a8fb00 */
                    /* try { // try from 00a8fb1c to 00b8fb73 has its CatchHandler @ 00a8fb1c
                       catch() { ... } // from try @ 00a8fb1c with catch @ 00a8fb1c
                       catch() { ... } // from try @ 00a8fc20 with catch @ 00a8fb1c */
      if ((((uVar37 < ~(ulong)(param_1 + 2) || uVar37 - ~(ulong)(param_1 + 2) == 0) &&
           (param_2 - 1 >> 0x3d == 0)) &&
          (uVar37 < ~(ulong)(param_1 + 3) || uVar37 - ~(ulong)(param_1 + 3) == 0)) &&
         ((uVar37 < ~(ulong)(param_1 + 1) || uVar37 - ~(ulong)(param_1 + 1) == 0 &&
          (uVar37 < ~(ulong)param_1 || uVar37 - ~(ulong)param_1 == 0)))) {
        uVar38 = param_2 & 0xfffffffffffffffc;
        pfVar1 = param_3 + uVar38 * 4;
        psVar2 = param_1 + uVar38 * 4;
        uVar37 = uVar38;
        do {
          fVar53 = *param_3;
          pfVar22 = param_3 + 1;
          pfVar23 = param_3 + 2;
          pfVar24 = param_3 + 3;
          pfVar25 = param_3 + 4;
          pfVar26 = param_3 + 5;
          pfVar27 = param_3 + 6;
          pfVar28 = param_3 + 7;
          pfVar29 = param_3 + 8;
          pfVar30 = param_3 + 9;
          pfVar31 = param_3 + 10;
          pfVar32 = param_3 + 0xb;
          pfVar33 = param_3 + 0xc;
          pfVar34 = param_3 + 0xd;
          pfVar35 = param_3 + 0xe;
          pfVar36 = param_3 + 0xf;
          param_3 = param_3 + 0x10;
          uVar37 = uVar37 - 4;
                    /* try { // try from 00a8fb74 to 00b8fb7b has its CatchHandler @ 00a8fcb0 */
          fVar48 = fVar53 * fVar43 + 384.0;
          fVar50 = *pfVar25 * fVar43 + 384.0;
          fVar51 = *pfVar29 * fVar43 + 384.0;
          fVar52 = *pfVar33 * fVar43 + 384.0;
                    /* try { // try from 00a8fb80 to 00b8fb87 has its CatchHandler @ 00a8fca8 */
                    /* try { // try from 00a8fb88 to 00b8fb97 has its CatchHandler @ 00a8fca0 */
          fVar53 = *pfVar22 * fVar43 + 384.0;
          fVar46 = *pfVar26 * fVar43 + 384.0;
          uVar44 = (undefined2)((uint)fVar46 >> 0x10);
          fVar60 = *pfVar30 * fVar43 + 384.0;
          fVar61 = *pfVar34 * fVar43 + 384.0;
          fVar47 = *pfVar23 * fVar43 + 384.0;
          fVar45 = *pfVar27 * fVar43 + 384.0;
          uVar62 = (undefined2)((uint)fVar45 >> 0x10);
          fVar63 = *pfVar31 * fVar43 + 384.0;
          fVar64 = *pfVar35 * fVar43 + 384.0;
          fVar54 = *pfVar24 * fVar43 + 384.0;
          fVar57 = *pfVar28 * fVar43 + 384.0;
          fVar58 = *pfVar32 * fVar43 + 384.0;
          fVar59 = *pfVar36 * fVar43 + 384.0;
          auVar66._0_4_ = -(uint)(0x43c07fff < (int)fVar53);
          auVar66._4_4_ = -(uint)(0x43c07fff < (int)fVar46);
          auVar66._8_4_ = -(uint)(0x43c07fff < (int)fVar60);
          auVar66._12_4_ = -(uint)(0x43c07fff < (int)fVar61);
                    /* try { // try from 00a8fba0 to 00b8fbdb has its CatchHandler @ 00a8fcb8 */
          uVar13 = SUB42(fVar48,0) ^
                   (SUB42(fVar48,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar48);
          uVar14 = SUB42(fVar50,0) ^
                   (SUB42(fVar50,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar50);
          uVar15 = SUB42(fVar51,0) ^
                   (SUB42(fVar51,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar51);
          uVar16 = SUB42(fVar52,0) ^
                   (SUB42(fVar52,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar52);
          auVar65._0_4_ = -(uint)((int)fVar53 < 0x43bf8000);
          auVar65._4_4_ = -(uint)((int)fVar46 < 0x43bf8000);
          auVar65._8_4_ = -(uint)((int)fVar60 < 0x43bf8000);
          auVar65._12_4_ = -(uint)((int)fVar61 < 0x43bf8000);
          auVar69._0_4_ = -(uint)(0x43c07fff < (int)fVar47);
          auVar69._4_4_ = -(uint)(0x43c07fff < (int)fVar45);
          auVar69._8_4_ = -(uint)(0x43c07fff < (int)fVar63);
          auVar69._12_4_ = -(uint)(0x43c07fff < (int)fVar64);
          auVar5._8_4_ = 0x7fff;
          auVar5._0_8_ = 0x7fff00007fff;
          auVar5._12_4_ = 0x7fff;
          auVar11._4_2_ = SUB42(fVar46,0);
          auVar11._0_4_ = fVar53;
          auVar11._6_2_ = uVar44;
          auVar11._8_4_ = fVar60;
          auVar11._12_4_ = fVar61;
          auVar67._4_2_ = SUB42(fVar46,0);
          auVar67._0_4_ = fVar53;
          auVar67._6_2_ = uVar44;
          auVar67._8_4_ = fVar60;
          auVar67._12_4_ = fVar61;
          auVar67 = auVar67 ^ (auVar11 ^ auVar5) & auVar66;
          auVar68._0_4_ = -(uint)((int)fVar47 < 0x43bf8000);
          auVar68._4_4_ = -(uint)((int)fVar45 < 0x43bf8000);
          auVar68._8_4_ = -(uint)((int)fVar63 < 0x43bf8000);
          auVar68._12_4_ = -(uint)((int)fVar64 < 0x43bf8000);
          auVar6._8_4_ = 0x7fff;
          auVar6._0_8_ = 0x7fff00007fff;
          auVar6._12_4_ = 0x7fff;
          auVar12._4_2_ = SUB42(fVar45,0);
          auVar12._0_4_ = fVar47;
          auVar12._6_2_ = uVar62;
          auVar12._8_4_ = fVar63;
          auVar12._12_4_ = fVar64;
          auVar70._4_2_ = SUB42(fVar45,0);
          auVar70._0_4_ = fVar47;
          auVar70._6_2_ = uVar62;
          auVar70._8_4_ = fVar63;
          auVar70._12_4_ = fVar64;
          auVar70 = auVar70 ^ (auVar12 ^ auVar6) & auVar69;
          uVar17 = SUB42(fVar54,0) ^
                   (SUB42(fVar54,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar54);
          uVar18 = SUB42(fVar57,0) ^
                   (SUB42(fVar57,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar57);
          uVar19 = SUB42(fVar58,0) ^
                   (SUB42(fVar58,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar58);
          uVar20 = SUB42(fVar59,0) ^
                   (SUB42(fVar59,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar59);
          auVar9._8_4_ = 0x8000;
          auVar9._0_8_ = 0x800000008000;
          auVar9._12_4_ = 0x8000;
          auVar67 = auVar67 ^ (auVar67 ^ auVar9) & auVar65;
          auVar10._8_4_ = 0x8000;
          auVar10._0_8_ = 0x800000008000;
          auVar10._12_4_ = 0x8000;
          auVar70 = auVar70 ^ (auVar70 ^ auVar10) & auVar68;
                    /* try { // try from 00a8fbdc to 00b8fbeb has its CatchHandler @ 00a8fc9c */
          *param_1 = uVar13 ^ (uVar13 ^ 0x8000) & -(ushort)((int)fVar48 < 0x43bf8000);
          param_1[1] = auVar67._0_2_;
          param_1[2] = auVar70._0_2_;
          param_1[3] = uVar17 ^ (uVar17 ^ 0x8000) & -(ushort)((int)fVar54 < 0x43bf8000);
          param_1[4] = uVar14 ^ (uVar14 ^ 0x8000) & -(ushort)((int)fVar50 < 0x43bf8000);
          param_1[5] = auVar67._4_2_;
          param_1[6] = auVar70._4_2_;
          param_1[7] = uVar18 ^ (uVar18 ^ 0x8000) & -(ushort)((int)fVar57 < 0x43bf8000);
          param_1[8] = uVar15 ^ (uVar15 ^ 0x8000) & -(ushort)((int)fVar51 < 0x43bf8000);
          param_1[9] = auVar67._8_2_;
          param_1[10] = auVar70._8_2_;
          param_1[0xb] = uVar19 ^ (uVar19 ^ 0x8000) & -(ushort)((int)fVar58 < 0x43bf8000);
          param_1[0xc] = uVar16 ^ (uVar16 ^ 0x8000) & -(ushort)((int)fVar52 < 0x43bf8000);
          param_1[0xd] = auVar67._12_2_;
          param_1[0xe] = auVar70._12_2_;
          param_1[0xf] = uVar20 ^ (uVar20 ^ 0x8000) & -(ushort)((int)fVar59 < 0x43bf8000);
          param_1 = param_1 + 0x10;
        } while (uVar37 != 0);
                    /* try { // try from 00a8fbec to 00b8fc1f has its CatchHandler @ 00a8fcc8 */
        bVar21 = uVar38 == param_2;
        param_3 = pfVar1;
        param_2 = param_2 - uVar38;
        param_1 = psVar2;
        if (bVar21) {
          return;
        }
      }
    }
    do {
      param_2 = param_2 - 1;
      fVar53 = (float)*(undefined8 *)param_3 * fVar43 + 384.0;
      fVar46 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar43 + 384.0;
      uVar44 = (undefined2)((uint)fVar46 >> 0x10);
      fVar47 = (float)*(undefined8 *)(param_3 + 2) * fVar43 + 384.0;
      fVar45 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) * fVar43 + 384.0;
      auVar55._0_4_ = -(uint)(0x43c07fff < (int)fVar53);
      auVar55._4_4_ = -(uint)(0x43c07fff < (int)fVar46);
      auVar55._8_4_ = -(uint)(0x43c07fff < (int)fVar47);
      auVar55._12_4_ = -(uint)(0x43c07fff < (int)fVar45);
      auVar49._0_4_ = -(uint)((int)fVar53 < 0x43bf8000);
      auVar49._4_4_ = -(uint)((int)fVar46 < 0x43bf8000);
      auVar49._8_4_ = -(uint)((int)fVar47 < 0x43bf8000);
      auVar49._12_4_ = -(uint)((int)fVar45 < 0x43bf8000);
      auVar4._8_4_ = 0x7fff;
      auVar4._0_8_ = 0x7fff00007fff;
      auVar4._12_4_ = 0x7fff;
      auVar8._4_2_ = SUB42(fVar46,0);
      auVar8._0_4_ = fVar53;
      auVar8._6_2_ = uVar44;
      auVar8._8_4_ = fVar47;
      auVar8._12_4_ = fVar45;
      auVar56._4_2_ = SUB42(fVar46,0);
      auVar56._0_4_ = fVar53;
      auVar56._6_2_ = uVar44;
      auVar56._8_4_ = fVar47;
      auVar56._12_4_ = fVar45;
      auVar56 = auVar56 ^ (auVar8 ^ auVar4) & auVar55;
      auVar7._8_4_ = 0x8000;
      auVar7._0_8_ = 0x800000008000;
      auVar7._12_4_ = 0x8000;
                    /* try { // try from 00a8fabc to 00b8fb1b has its CatchHandler @ 00a8fa18 */
      auVar56 = auVar56 ^ (auVar56 ^ auVar7) & auVar49;
      *(ulong *)param_1 =
           CONCAT26(auVar56._12_2_,CONCAT24(auVar56._8_2_,CONCAT22(auVar56._4_2_,auVar56._0_2_)));
      param_3 = param_3 + 4;
      param_1 = param_1 + 4;
    } while (param_2 != 0);
  }
  else {
                    /* catch() { ... } // from try @ 00a8f7f4 with catch @ 00a8f89c */
                    /* catch() { ... } // from try @ 00a8f808 with catch @ 00a8f8a0 */
                    /* catch() { ... } // from try @ 00a8f7dc with catch @ 00a8f8a4 */
                    /* catch() { ... } // from try @ 00a8f80c with catch @ 00a8f8a8 */
    fVar53 = 4.59163e-41;
    do {
      fVar46 = *param_3;
      if (fVar46 <= -16.0) {
        iVar39 = -0x80000000;
      }
      else {
                    /* catch() { ... } // from try @ 00a8f7b4 with catch @ 00a8f8c0 */
        if (16.0 <= fVar46) {
          iVar39 = 0x7fffffff;
        }
        else {
          fVar47 = 0.5;
          if (fVar46 * 1.3421773e+08 <= 0.0) {
            fVar47 = -0.5;
          }
          iVar39 = (int)(fVar47 + fVar46 * 1.3421773e+08);
        }
      }
      fVar47 = fVar46 * fVar43 + 384.0;
      fVar46 = fVar53;
      if ((int)fVar47 < 0x43c08000) {
        fVar46 = fVar47;
      }
      sVar3 = -0x8000;
      if (0x43bf7fff < (int)fVar47) {
        sVar3 = SUB42(fVar46,0);
      }
      *param_1 = sVar3;
      fVar46 = param_3[1];
      if (fVar46 <= -16.0) {
        iVar40 = -0x80000000;
      }
      else if (16.0 <= fVar46) {
        iVar40 = 0x7fffffff;
      }
      else {
        fVar47 = 0.5;
        if (fVar46 * 1.3421773e+08 <= 0.0) {
          fVar47 = -0.5;
        }
                    /* try { // try from 00a8f938 to 00b8f97b has its CatchHandler @ 00a8f938
                       catch() { ... } // from try @ 00a8f938 with catch @ 00a8f938
                       catch() { ... } // from try @ 00a8f9d4 with catch @ 00a8f938 */
        iVar40 = (int)(fVar47 + fVar46 * 1.3421773e+08);
      }
      fVar47 = fVar46 * fVar43 + 384.0;
      fVar46 = fVar53;
      if ((int)fVar47 < 0x43c08000) {
        fVar46 = fVar47;
      }
      sVar3 = -0x8000;
      if (0x43bf7fff < (int)fVar47) {
        sVar3 = SUB42(fVar46,0);
      }
      param_1[1] = sVar3;
      fVar46 = param_3[2];
      if (fVar46 <= -16.0) {
        iVar41 = -0x80000000;
      }
      else {
                    /* try { // try from 00a8f97c to 00b8f9d3 has its CatchHandler @ 00a8fa04 */
        if (16.0 <= fVar46) {
          iVar41 = 0x7fffffff;
        }
        else {
          fVar47 = 0.5;
          if (fVar46 * 1.3421773e+08 <= 0.0) {
            fVar47 = -0.5;
          }
          iVar41 = (int)(fVar47 + fVar46 * 1.3421773e+08);
        }
      }
      fVar47 = fVar46 * fVar43 + 384.0;
      fVar46 = fVar53;
      if ((int)fVar47 < 0x43c08000) {
        fVar46 = fVar47;
      }
      sVar3 = -0x8000;
      if (0x43bf7fff < (int)fVar47) {
        sVar3 = SUB42(fVar46,0);
      }
      param_1[2] = sVar3;
      fVar46 = param_3[3];
                    /* try { // try from 00a8f9d4 to 00b8fa17 has its CatchHandler @ 00a8f938 */
      if (fVar46 <= -16.0) {
        iVar42 = -0x80000000;
                    /* catch() { ... } // from try @ 00a8f97c with catch @ 00a8fa04 */
      }
      else if (16.0 <= fVar46) {
        iVar42 = 0x7fffffff;
      }
      else {
        fVar47 = 0.5;
        if (fVar46 * 1.3421773e+08 <= 0.0) {
          fVar47 = -0.5;
        }
        iVar42 = (int)(fVar47 + fVar46 * 1.3421773e+08);
      }
      fVar47 = fVar46 * fVar43 + 384.0;
      iVar42 = iVar42 + iVar41 + iVar40 + iVar39;
                    /* try { // try from 00a8fa18 to 00b8fa6b has its CatchHandler @ 00a8fa18
                       catch() { ... } // from try @ 00a8fa18 with catch @ 00a8fa18
                       catch() { ... } // from try @ 00a8fabc with catch @ 00a8fa18 */
      fVar46 = fVar53;
      if ((int)fVar47 < 0x43c08000) {
        fVar46 = fVar47;
      }
      sVar3 = -0x8000;
      if (0x43bf7fff < (int)fVar47) {
        sVar3 = SUB42(fVar46,0);
      }
      param_1[3] = sVar3;
      iVar39 = iVar42 + 3;
      if (-1 < iVar42) {
        iVar39 = iVar42;
      }
      param_3 = param_3 + 4;
      param_2 = param_2 - 1;
      *param_4 = *param_4 + (iVar39 >> 0xe) * (int)param_6;
      param_1 = param_1 + 4;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

