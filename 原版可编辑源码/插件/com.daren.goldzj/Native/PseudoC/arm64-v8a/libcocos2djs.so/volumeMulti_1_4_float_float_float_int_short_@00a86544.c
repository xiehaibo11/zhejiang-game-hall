
/* void cocos2d::volumeMulti<1, 4, float, float, float, int, short>(float*, unsigned long, float
   const*, int*, float const*, short) */

void cocos2d::volumeMulti<1,4,float,float,float,int,short>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               short param_6)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  float *pfVar5;
  int *piVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  uint uVar25;
  byte bVar29;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  uint uVar30;
  byte bVar34;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  uint uVar35;
  byte bVar39;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  uint uVar40;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  undefined1 auVar23 [16];
  
  if (param_4 == (int *)0x0) {
    if (3 < param_2) {
      uVar7 = (param_2 - 1) * 0x10;
                    /* try { // try from 00a8695c to 00b869af has its CatchHandler @ 00a8695c
                       catch() { ... } // from try @ 00a8695c with catch @ 00a8695c
                       catch() { ... } // from try @ 00a86a98 with catch @ 00a8695c */
      if ((((uVar7 < ~(ulong)(param_1 + 3) || uVar7 - ~(ulong)(param_1 + 3) == 0) &&
           (param_2 - 1 >> 0x3c == 0)) &&
          (uVar7 < ~(ulong)(param_1 + 2) || uVar7 - ~(ulong)(param_1 + 2) == 0)) &&
         ((uVar7 < ~(ulong)(param_1 + 1) || uVar7 - ~(ulong)(param_1 + 1) == 0 &&
          (uVar7 < ~(ulong)param_1 || uVar7 - ~(ulong)param_1 == 0)))) {
        if ((param_3 + param_2 <= param_1 || param_1 + param_2 * 4 <= param_3) &&
           ((float *)((long)param_5 + 0xdU) <= param_1 || param_1 + param_2 * 4 <= param_5 + 3)) {
                    /* try { // try from 00a869b0 to 00b869c7 has its CatchHandler @ 00a86b14 */
          uVar9 = param_2 & 0xfffffffffffffffc;
          pfVar1 = param_1 + uVar9 * 4;
          pfVar5 = param_3;
          uVar7 = uVar9;
          do {
            fVar3 = *param_5;
                    /* try { // try from 00a869d0 to 00b869db has its CatchHandler @ 00a86b10 */
            fVar44 = param_5[2];
            fVar49 = param_5[3];
            uVar7 = uVar7 - 4;
                    /* try { // try from 00a869dc to 00b869e7 has its CatchHandler @ 00a86b0c */
            fVar50 = param_5[1];
            fVar19 = (float)*(undefined8 *)pfVar5;
            fVar13 = (float)((ulong)*(undefined8 *)pfVar5 >> 0x20);
            fVar14 = (float)*(undefined8 *)(pfVar5 + 2);
            fVar15 = (float)((ulong)*(undefined8 *)(pfVar5 + 2) >> 0x20);
                    /* try { // try from 00a869e8 to 00b86a97 has its CatchHandler @ 00a86b24 */
            *param_1 = *param_1 + fVar19 * fVar3;
            param_1[1] = param_1[1] + fVar19 * fVar50;
            param_1[2] = param_1[2] + fVar19 * fVar44;
            param_1[3] = param_1[3] + fVar19 * fVar49;
            param_1[4] = param_1[4] + fVar13 * fVar3;
            param_1[5] = param_1[5] + fVar13 * fVar50;
            param_1[6] = param_1[6] + fVar13 * fVar44;
            param_1[7] = param_1[7] + fVar13 * fVar49;
            param_1[8] = param_1[8] + fVar14 * fVar3;
            param_1[9] = param_1[9] + fVar14 * fVar50;
            param_1[10] = param_1[10] + fVar14 * fVar44;
            param_1[0xb] = param_1[0xb] + fVar14 * fVar49;
            param_1[0xc] = param_1[0xc] + fVar15 * fVar3;
            param_1[0xd] = param_1[0xd] + fVar15 * fVar50;
            param_1[0xe] = param_1[0xe] + fVar15 * fVar44;
            param_1[0xf] = param_1[0xf] + fVar15 * fVar49;
            param_1 = param_1 + 0x10;
            pfVar5 = pfVar5 + 4;
          } while (uVar7 != 0);
          bVar4 = uVar9 == param_2;
          param_3 = param_3 + uVar9;
          param_2 = param_2 - uVar9;
          param_1 = pfVar1;
          if (bVar4) {
            return;
          }
        }
      }
    }
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + *param_3 * *param_5;
                    /* try { // try from 00a86738 to 00b8674f has its CatchHandler @ 00a868f4 */
      param_1[1] = param_1[1] + *param_3 * param_5[1];
      param_1[2] = param_1[2] + *param_3 * param_5[2];
                    /* try { // try from 00a86758 to 00b86763 has its CatchHandler @ 00a868f0 */
                    /* try { // try from 00a86764 to 00b8676f has its CatchHandler @ 00a868ec */
      param_1[3] = param_1[3] + *param_3 * param_5[3];
                    /* try { // try from 00a86770 to 00b8687f has its CatchHandler @ 00a86904 */
      param_3 = param_3 + 1;
      param_1 = param_1 + 4;
    } while (param_2 != 0);
  }
  else {
    iVar2 = (int)param_6;
    if (3 < param_2) {
      uVar7 = (param_2 - 1) * 0x10;
      if (((uVar7 < ~(ulong)(param_1 + 3) || uVar7 - ~(ulong)(param_1 + 3) == 0) &&
          (param_2 - 1 >> 0x3c == 0)) &&
         ((uVar7 < ~(ulong)(param_1 + 2) || uVar7 - ~(ulong)(param_1 + 2) == 0 &&
          ((uVar7 < ~(ulong)(param_1 + 1) || uVar7 - ~(ulong)(param_1 + 1) == 0 &&
           (uVar7 < ~(ulong)param_1 || uVar7 - ~(ulong)param_1 == 0)))))) {
        if ((param_3 + param_2 <= param_1 || param_1 + param_2 * 4 <= param_3) &&
           ((float *)((long)param_5 + 0xdU) <= param_1 || param_1 + param_2 * 4 <= param_5 + 3)) {
          uVar9 = param_2 & 0xfffffffffffffffc;
          auVar16 = NEON_fmov(0xc1800000,4);
          auVar17 = NEON_fmov(0x41800000,4);
          auVar18 = NEON_fmov(0xbfe0000000000000,8);
          auVar20 = NEON_fmov(0x3fe0000000000000,8);
          pfVar1 = param_1 + uVar9 * 4;
          pfVar5 = param_3;
          piVar6 = param_4;
          uVar7 = uVar9;
          do {
            fVar3 = *param_5;
            uVar7 = uVar7 - 4;
            fVar19 = (float)*(undefined8 *)pfVar5;
            fVar13 = (float)((ulong)*(undefined8 *)pfVar5 >> 0x20);
            fVar14 = (float)*(undefined8 *)(pfVar5 + 2);
            fVar15 = (float)((ulong)*(undefined8 *)(pfVar5 + 2) >> 0x20);
            auVar47._0_8_ = (long)(int)-(uint)(0.0 < fVar14 * 1.3421773e+08);
            auVar47._8_8_ = (long)(int)-(uint)(0.0 < fVar15 * 1.3421773e+08);
            auVar45._0_8_ = (long)(int)-(uint)(0.0 < fVar19 * 1.3421773e+08);
            auVar45._8_8_ = (long)(int)-(uint)(0.0 < fVar13 * 1.3421773e+08);
            auVar46 = auVar18 ^ (auVar18 ^ auVar20) & auVar45;
            auVar48 = auVar18 ^ (auVar18 ^ auVar20) & auVar47;
                    /* try { // try from 00a86880 to 00b8695b has its CatchHandler @ 00a866e4 */
            auVar22._0_4_ = (undefined4)(long)(auVar46._0_8_ + (double)(fVar19 * 1.3421773e+08));
            auVar22._4_4_ = (int)(long)(auVar46._8_8_ + (double)(fVar13 * 1.3421773e+08));
            auVar22._8_4_ = (int)(long)(auVar48._0_8_ + (double)(fVar14 * 1.3421773e+08));
            auVar22._12_4_ = (int)(long)(auVar48._8_8_ + (double)(fVar15 * 1.3421773e+08));
            fVar44 = param_5[1];
            fVar49 = param_5[2];
            fVar50 = param_5[3];
            auVar48._0_4_ = -(uint)(fVar19 <= auVar16._0_4_);
            auVar48._4_4_ = -(uint)(fVar13 <= auVar16._4_4_);
            auVar48._8_4_ = -(uint)(fVar14 <= auVar16._8_4_);
            auVar48._12_4_ = -(uint)(fVar15 <= auVar16._12_4_);
            iVar8 = -(uint)(auVar17._0_4_ <= fVar19);
            iVar10 = -(uint)(auVar17._4_4_ <= fVar13);
            iVar11 = -(uint)(auVar17._8_4_ <= fVar14);
            iVar12 = -(uint)(auVar17._12_4_ <= fVar15);
            bVar24 = (byte)iVar8 & ~(byte)auVar48._0_4_;
            bVar26 = (byte)((uint)iVar8 >> 8) & ~(byte)((uint)auVar48._0_4_ >> 8);
            bVar27 = (byte)((uint)iVar8 >> 0x10) & ~(byte)((uint)auVar48._0_4_ >> 0x10);
            bVar28 = (byte)((uint)iVar8 >> 0x18) & ~(byte)((uint)auVar48._0_4_ >> 0x18);
            bVar29 = (byte)iVar10 & ~(byte)auVar48._4_4_;
            bVar31 = (byte)((uint)iVar10 >> 8) & ~(byte)((uint)auVar48._4_4_ >> 8);
            bVar32 = (byte)((uint)iVar10 >> 0x10) & ~(byte)((uint)auVar48._4_4_ >> 0x10);
            bVar33 = (byte)((uint)iVar10 >> 0x18) & ~(byte)((uint)auVar48._4_4_ >> 0x18);
            bVar34 = (byte)iVar11 & ~(byte)auVar48._8_4_;
            bVar36 = (byte)((uint)iVar11 >> 8) & ~(byte)((uint)auVar48._8_4_ >> 8);
            bVar37 = (byte)((uint)iVar11 >> 0x10) & ~(byte)((uint)auVar48._8_4_ >> 0x10);
            bVar38 = (byte)((uint)iVar11 >> 0x18) & ~(byte)((uint)auVar48._8_4_ >> 0x18);
            bVar39 = (byte)iVar12 & ~(byte)auVar48._12_4_;
            bVar41 = (byte)((uint)iVar12 >> 8) & ~(byte)((uint)auVar48._12_4_ >> 8);
            bVar42 = (byte)((uint)iVar12 >> 0x10) & ~(byte)((uint)auVar48._12_4_ >> 0x10);
            bVar43 = (byte)((uint)iVar12 >> 0x18) & ~(byte)((uint)auVar48._12_4_ >> 0x18);
            auVar46._8_4_ = 0x80000000;
            auVar46._0_8_ = 0x8000000080000000;
            auVar46._12_4_ = 0x80000000;
            auVar22 = auVar22 ^ (auVar22 ^ auVar46) & auVar48;
            uVar25 = CONCAT13(bVar28,CONCAT12(bVar27,CONCAT11(bVar26,bVar24))) & 0x7fffffff;
            uVar30 = CONCAT13(bVar33,CONCAT12(bVar32,CONCAT11(bVar31,bVar29))) & 0x7fffffff;
            uVar35 = CONCAT13(bVar38,CONCAT12(bVar37,CONCAT11(bVar36,bVar34))) & 0x7fffffff;
            uVar40 = CONCAT13(bVar43,CONCAT12(bVar42,CONCAT11(bVar41,bVar39))) & 0x7fffffff;
            iVar8 = CONCAT13((byte)(uVar25 >> 0x18) | auVar22[3] & ~bVar28,
                             CONCAT12((byte)(uVar25 >> 0x10) | auVar22[2] & ~bVar27,
                                      CONCAT11((byte)(uVar25 >> 8) | auVar22[1] & ~bVar26,
                                               (byte)uVar25 | auVar22[0] & ~bVar24)));
            auVar21._0_8_ =
                 CONCAT17((byte)(uVar30 >> 0x18) | auVar22[7] & ~bVar33,
                          CONCAT16((byte)(uVar30 >> 0x10) | auVar22[6] & ~bVar32,
                                   CONCAT15((byte)(uVar30 >> 8) | auVar22[5] & ~bVar31,
                                            CONCAT14((byte)uVar30 | auVar22[4] & ~bVar29,iVar8))));
            auVar21[8] = (byte)uVar35 | auVar22[8] & ~bVar34;
            auVar21[9] = (byte)(uVar35 >> 8) | auVar22[9] & ~bVar36;
            auVar21[10] = (byte)(uVar35 >> 0x10) | auVar22[10] & ~bVar37;
            auVar21[0xb] = (byte)(uVar35 >> 0x18) | auVar22[0xb] & ~bVar38;
            auVar23[0xc] = (byte)uVar40 | auVar22[0xc] & ~bVar39;
            auVar23._0_12_ = auVar21;
            auVar23[0xd] = (byte)(uVar40 >> 8) | auVar22[0xd] & ~bVar41;
            auVar23[0xe] = (byte)(uVar40 >> 0x10) | auVar22[0xe] & ~bVar42;
            auVar23[0xf] = (byte)(uVar40 >> 0x18) | auVar22[0xf] & ~bVar43;
            iVar8 = iVar8 * 4;
            iVar11 = (int)((ulong)auVar21._0_8_ >> 0x20) * 4;
            iVar10 = auVar21._8_4_ * 4;
            iVar12 = auVar23._12_4_ * 4;
            *param_1 = fVar19 * fVar3 + *param_1;
            param_1[1] = fVar19 * fVar44 + param_1[1];
            param_1[2] = fVar19 * fVar49 + param_1[2];
            param_1[3] = fVar19 * fVar50 + param_1[3];
            param_1[4] = fVar13 * fVar3 + param_1[4];
            param_1[5] = fVar13 * fVar44 + param_1[5];
            param_1[6] = fVar13 * fVar49 + param_1[6];
            param_1[7] = fVar13 * fVar50 + param_1[7];
            param_1[8] = fVar14 * fVar3 + param_1[8];
            param_1[9] = fVar14 * fVar44 + param_1[9];
            param_1[10] = fVar14 * fVar49 + param_1[10];
            param_1[0xb] = fVar14 * fVar50 + param_1[0xb];
            param_1[0xc] = fVar15 * fVar3 + param_1[0xc];
            param_1[0xd] = fVar15 * fVar44 + param_1[0xd];
            param_1[0xe] = fVar15 * fVar49 + param_1[0xe];
            param_1[0xf] = fVar15 * fVar50 + param_1[0xf];
            param_1 = param_1 + 0x10;
                    /* catch() { ... } // from try @ 00a86764 with catch @ 00a868ec */
                    /* catch() { ... } // from try @ 00a86758 with catch @ 00a868f0 */
                    /* catch() { ... } // from try @ 00a86738 with catch @ 00a868f4 */
            *(ulong *)(piVar6 + 2) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar6 + 2) >> 0x20) +
                          ((int)(iVar12 + ((uint)(iVar12 >> 0x1f) >> 0x1e)) >> 0xe) * iVar2,
                          (int)*(undefined8 *)(piVar6 + 2) +
                          ((int)(iVar10 + ((uint)(iVar10 >> 0x1f) >> 0x1e)) >> 0xe) * iVar2);
            *(ulong *)piVar6 =
                 CONCAT44((int)((ulong)*(undefined8 *)piVar6 >> 0x20) +
                          ((int)(iVar11 + ((uint)(iVar11 >> 0x1f) >> 0x1e)) >> 0xe) * iVar2,
                          (int)*(undefined8 *)piVar6 +
                          ((int)(iVar8 + ((uint)(iVar8 >> 0x1f) >> 0x1e)) >> 0xe) * iVar2);
            pfVar5 = pfVar5 + 4;
            piVar6 = piVar6 + 4;
                    /* catch() { ... } // from try @ 00a86770 with catch @ 00a86904 */
          } while (uVar7 != 0);
          bVar4 = uVar9 == param_2;
          param_3 = param_3 + uVar9;
          param_4 = param_4 + uVar9;
          param_2 = param_2 - uVar9;
          param_1 = pfVar1;
          if (bVar4) {
            return;
          }
        }
      }
    }
    do {
                    /* try { // try from 00a86580 to 00b866e3 has its CatchHandler @ 00a86210 */
      fVar19 = *param_3;
      fVar3 = 0.5;
      if (fVar19 <= -16.0) {
                    /* catch() { ... } // from try @ 00a863a4 with catch @ 00a865b4 */
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar19) {
        iVar8 = 0x7fffffff;
      }
      else {
        fVar13 = fVar3;
        if (fVar19 * 1.3421773e+08 <= 0.0) {
          fVar13 = -0.5;
        }
        iVar8 = (int)(fVar13 + fVar19 * 1.3421773e+08);
      }
                    /* catch() { ... } // from try @ 00a86394 with catch @ 00a865c4 */
      *param_1 = fVar19 * *param_5 + *param_1;
      fVar19 = *param_3;
                    /* catch() { ... } // from try @ 00a86378 with catch @ 00a865d4 */
      if (fVar19 <= -16.0) {
        iVar10 = -0x80000000;
      }
      else {
                    /* catch() { ... } // from try @ 00a86368 with catch @ 00a865e4 */
        if (16.0 <= fVar19) {
                    /* catch() { ... } // from try @ 00a86348 with catch @ 00a8660c */
          iVar10 = 0x7fffffff;
        }
        else {
                    /* catch() { ... } // from try @ 00a86354 with catch @ 00a865f4 */
          fVar13 = fVar3;
          if (fVar19 * 1.3421773e+08 <= 0.0) {
            fVar13 = -0.5;
          }
          iVar10 = (int)(fVar13 + fVar19 * 1.3421773e+08);
        }
      }
                    /* catch() { ... } // from try @ 00a86334 with catch @ 00a86614 */
                    /* catch() { ... } // from try @ 00a8630c with catch @ 00a86618 */
                    /* catch() { ... } // from try @ 00a862f0 with catch @ 00a86620 */
      param_1[1] = fVar19 * param_5[1] + param_1[1];
                    /* catch() { ... } // from try @ 00a86314 with catch @ 00a86624 */
      fVar19 = *param_3;
      if (fVar19 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else if (16.0 <= fVar19) {
        iVar11 = 0x7fffffff;
      }
      else {
                    /* catch() { ... } // from try @ 00a862e4 with catch @ 00a8663c
                       catch() { ... } // from try @ 00a86570 with catch @ 00a8663c */
        fVar13 = fVar3;
        if (fVar19 * 1.3421773e+08 <= 0.0) {
          fVar13 = -0.5;
        }
        iVar11 = (int)(fVar13 + fVar19 * 1.3421773e+08);
      }
                    /* catch() { ... } // from try @ 00a86298 with catch @ 00a86674 */
      param_1[2] = fVar19 * param_5[2] + param_1[2];
                    /* catch() { ... } // from try @ 00a8628c with catch @ 00a86678 */
      fVar19 = *param_3;
                    /* catch() { ... } // from try @ 00a8626c with catch @ 00a8667c */
      if (fVar19 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else {
                    /* catch() { ... } // from try @ 00a862a4 with catch @ 00a8668c
                       catch() { ... } // from try @ 00a863dc with catch @ 00a8668c */
        if (16.0 <= fVar19) {
          iVar12 = 0x7fffffff;
        }
        else {
          if (fVar19 * 1.3421773e+08 <= 0.0) {
            fVar3 = -0.5;
          }
          iVar12 = (int)(fVar3 + fVar19 * 1.3421773e+08);
        }
      }
      iVar12 = iVar12 + iVar11 + iVar10 + iVar8;
      param_1[3] = fVar19 * param_5[3] + param_1[3];
      iVar8 = iVar12 + 3;
      if (-1 < iVar12) {
        iVar8 = iVar12;
      }
                    /* try { // try from 00a866e4 to 00b86737 has its CatchHandler @ 00a866e4
                       catch() { ... } // from try @ 00a866e4 with catch @ 00a866e4
                       catch() { ... } // from try @ 00a86880 with catch @ 00a866e4 */
      param_2 = param_2 - 1;
      *param_4 = *param_4 + (iVar8 >> 0xe) * iVar2;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      param_1 = param_1 + 4;
    } while (param_2 != 0);
  }
  return;
}

