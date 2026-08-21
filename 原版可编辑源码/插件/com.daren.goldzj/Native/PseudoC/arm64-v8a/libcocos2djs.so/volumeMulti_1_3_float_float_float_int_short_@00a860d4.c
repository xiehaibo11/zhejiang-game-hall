
/* void cocos2d::volumeMulti<1, 3, float, float, float, int, short>(float*, unsigned long, float
   const*, int*, float const*, short) */

void cocos2d::volumeMulti<1,3,float,float,float,int,short>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               short param_6)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  float *pfVar4;
  int *piVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  byte bVar23;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  uint uVar24;
  byte bVar28;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  uint uVar29;
  byte bVar33;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  uint uVar34;
  byte bVar38;
  byte bVar41;
  byte bVar42;
  int iVar39;
  byte bVar43;
  uint uVar40;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  
  if (param_4 == (int *)0x0) {
    if (3 < param_2) {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = param_2 - 1;
      uVar6 = (param_2 - 1) * 0xc;
                    /* try { // try from 00a86480 to 00b8656f has its CatchHandler @ 00a86210 */
      if ((((uVar6 < ~(ulong)(param_1 + 2) || uVar6 - ~(ulong)(param_1 + 2) == 0) &&
           (SUB168(auVar15 * ZEXT816(0xc),8) == 0)) &&
          (uVar6 < ~(ulong)(param_1 + 1) || uVar6 - ~(ulong)(param_1 + 1) == 0)) &&
         (uVar6 < ~(ulong)param_1 || uVar6 - ~(ulong)param_1 == 0)) {
        if ((param_3 + param_2 <= param_1 || param_1 + param_2 * 3 <= param_3) &&
           ((float *)((long)param_5 + 9U) <= param_1 || param_1 + param_2 * 3 <= param_5 + 2)) {
          uVar8 = param_2 & 0xfffffffffffffffc;
          pfVar7 = param_1 + uVar8 * 3;
          pfVar4 = param_3;
          uVar6 = uVar8;
          do {
            fVar2 = *param_5;
            fVar44 = param_5[2];
            uVar6 = uVar6 - 4;
            fVar45 = param_5[1];
            fVar18 = (float)*(undefined8 *)pfVar4;
            fVar12 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
            fVar13 = (float)*(undefined8 *)(pfVar4 + 2);
            fVar14 = (float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20);
            *param_1 = *param_1 + fVar18 * fVar2;
            param_1[1] = param_1[1] + fVar18 * fVar45;
            param_1[2] = param_1[2] + fVar18 * fVar44;
            param_1[3] = param_1[3] + fVar12 * fVar2;
            param_1[4] = param_1[4] + fVar12 * fVar45;
            param_1[5] = param_1[5] + fVar12 * fVar44;
            param_1[6] = param_1[6] + fVar13 * fVar2;
            param_1[7] = param_1[7] + fVar13 * fVar45;
            param_1[8] = param_1[8] + fVar13 * fVar44;
            param_1[9] = param_1[9] + fVar14 * fVar2;
            param_1[10] = param_1[10] + fVar14 * fVar45;
            param_1[0xb] = param_1[0xb] + fVar14 * fVar44;
            param_1 = param_1 + 0xc;
            pfVar4 = pfVar4 + 4;
          } while (uVar6 != 0);
          bVar3 = uVar8 == param_2;
          param_3 = param_3 + uVar8;
          param_2 = param_2 - uVar8;
          param_1 = pfVar7;
          if (bVar3) {
            return;
          }
        }
      }
    }
    do {
      param_2 = param_2 - 1;
                    /* try { // try from 00a8626c to 00b86283 has its CatchHandler @ 00a8667c */
      *param_1 = *param_1 + *param_3 * *param_5;
      param_1[1] = param_1[1] + *param_3 * param_5[1];
                    /* try { // try from 00a8628c to 00b86297 has its CatchHandler @ 00a86678 */
                    /* try { // try from 00a86298 to 00b862a3 has its CatchHandler @ 00a86674 */
      param_1[2] = param_1[2] + *param_3 * param_5[2];
      param_3 = param_3 + 1;
      param_1 = param_1 + 3;
                    /* try { // try from 00a862a4 to 00b862bb has its CatchHandler @ 00a8668c */
    } while (param_2 != 0);
  }
  else {
    iVar1 = (int)param_6;
    if (3 < param_2) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = param_2 - 1;
      uVar6 = (param_2 - 1) * 0xc;
                    /* try { // try from 00a862e4 to 00b862eb has its CatchHandler @ 00a8663c */
                    /* try { // try from 00a862f0 to 00b86307 has its CatchHandler @ 00a86620 */
      if (((uVar6 < ~(ulong)(param_1 + 2) || uVar6 - ~(ulong)(param_1 + 2) == 0) &&
          (SUB168(auVar16 * ZEXT816(0xc),8) == 0)) &&
         ((uVar6 < ~(ulong)(param_1 + 1) || uVar6 - ~(ulong)(param_1 + 1) == 0 &&
          (uVar6 < ~(ulong)param_1 || uVar6 - ~(ulong)param_1 == 0)))) {
                    /* try { // try from 00a8630c to 00b86313 has its CatchHandler @ 00a86618 */
                    /* try { // try from 00a86314 to 00b86333 has its CatchHandler @ 00a86624 */
                    /* try { // try from 00a86334 to 00b86343 has its CatchHandler @ 00a86614 */
        if ((param_3 + param_2 <= param_1 || param_1 + param_2 * 3 <= param_3) &&
           ((float *)((long)param_5 + 9U) <= param_1 || param_1 + param_2 * 3 <= param_5 + 2)) {
          uVar8 = param_2 & 0xfffffffffffffffc;
                    /* try { // try from 00a86348 to 00b86353 has its CatchHandler @ 00a8660c */
                    /* try { // try from 00a86354 to 00b86363 has its CatchHandler @ 00a865f4 */
          auVar15 = NEON_fmov(0xc1800000,4);
          auVar16 = NEON_fmov(0x41800000,4);
          auVar17 = NEON_fmov(0xbfe0000000000000,8);
                    /* try { // try from 00a86368 to 00b86373 has its CatchHandler @ 00a865e4 */
          auVar19 = NEON_fmov(0x3fe0000000000000,8);
          pfVar7 = param_1 + uVar8 * 3;
                    /* try { // try from 00a86378 to 00b8637f has its CatchHandler @ 00a865d4 */
          pfVar4 = param_3;
          piVar5 = param_4;
          uVar6 = uVar8;
          do {
            fVar13 = (float)*(undefined8 *)(pfVar4 + 2);
            fVar14 = (float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20);
            fVar18 = (float)*(undefined8 *)pfVar4;
            fVar12 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
            fVar2 = *param_5;
                    /* try { // try from 00a86394 to 00b8639f has its CatchHandler @ 00a865c4 */
            uVar6 = uVar6 - 4;
            auVar48._0_8_ = (long)(int)-(uint)(0.0 < fVar13 * 1.3421773e+08);
            auVar48._8_8_ = (long)(int)-(uint)(0.0 < fVar14 * 1.3421773e+08);
                    /* try { // try from 00a863a4 to 00b863ab has its CatchHandler @ 00a865b4 */
            auVar46._0_8_ = (long)(int)-(uint)(0.0 < fVar18 * 1.3421773e+08);
            auVar46._8_8_ = (long)(int)-(uint)(0.0 < fVar12 * 1.3421773e+08);
            auVar47 = auVar17 ^ (auVar17 ^ auVar19) & auVar46;
            auVar49 = auVar17 ^ (auVar17 ^ auVar19) & auVar48;
            auVar22._0_4_ = (undefined4)(long)(auVar47._0_8_ + (double)(fVar18 * 1.3421773e+08));
            auVar22._4_4_ = (int)(long)(auVar47._8_8_ + (double)(fVar12 * 1.3421773e+08));
            auVar21._0_4_ = -(uint)(fVar18 <= auVar15._0_4_);
            auVar21._4_4_ = -(uint)(fVar12 <= auVar15._4_4_);
            auVar21._8_4_ = -(uint)(fVar13 <= auVar15._8_4_);
            auVar21._12_4_ = -(uint)(fVar14 <= auVar15._12_4_);
            iVar9 = -(uint)(auVar16._0_4_ <= fVar18);
            iVar10 = -(uint)(auVar16._4_4_ <= fVar12);
            iVar11 = -(uint)(auVar16._8_4_ <= fVar13);
            iVar39 = -(uint)(auVar16._12_4_ <= fVar14);
            auVar22._8_4_ = (int)(long)(auVar49._0_8_ + (double)(fVar13 * 1.3421773e+08));
            auVar22._12_4_ = (int)(long)(auVar49._8_8_ + (double)(fVar14 * 1.3421773e+08));
                    /* try { // try from 00a863dc to 00b8647f has its CatchHandler @ 00a8668c */
            fVar44 = param_5[1];
            bVar23 = (byte)iVar9 & ~(byte)auVar21._0_4_;
            bVar25 = (byte)((uint)iVar9 >> 8) & ~(byte)((uint)auVar21._0_4_ >> 8);
            bVar26 = (byte)((uint)iVar9 >> 0x10) & ~(byte)((uint)auVar21._0_4_ >> 0x10);
            bVar27 = (byte)((uint)iVar9 >> 0x18) & ~(byte)((uint)auVar21._0_4_ >> 0x18);
            bVar28 = (byte)iVar10 & ~(byte)auVar21._4_4_;
            bVar30 = (byte)((uint)iVar10 >> 8) & ~(byte)((uint)auVar21._4_4_ >> 8);
            bVar31 = (byte)((uint)iVar10 >> 0x10) & ~(byte)((uint)auVar21._4_4_ >> 0x10);
            bVar32 = (byte)((uint)iVar10 >> 0x18) & ~(byte)((uint)auVar21._4_4_ >> 0x18);
            bVar33 = (byte)iVar11 & ~(byte)auVar21._8_4_;
            bVar35 = (byte)((uint)iVar11 >> 8) & ~(byte)((uint)auVar21._8_4_ >> 8);
            bVar36 = (byte)((uint)iVar11 >> 0x10) & ~(byte)((uint)auVar21._8_4_ >> 0x10);
            bVar37 = (byte)((uint)iVar11 >> 0x18) & ~(byte)((uint)auVar21._8_4_ >> 0x18);
            bVar38 = (byte)iVar39 & ~(byte)auVar21._12_4_;
            bVar41 = (byte)((uint)iVar39 >> 8) & ~(byte)((uint)auVar21._12_4_ >> 8);
            bVar42 = (byte)((uint)iVar39 >> 0x10) & ~(byte)((uint)auVar21._12_4_ >> 0x10);
            bVar43 = (byte)((uint)iVar39 >> 0x18) & ~(byte)((uint)auVar21._12_4_ >> 0x18);
            auVar47._8_4_ = 0x80000000;
            auVar47._0_8_ = 0x8000000080000000;
            auVar47._12_4_ = 0x80000000;
            auVar22 = auVar22 ^ (auVar22 ^ auVar47) & auVar21;
            fVar45 = param_5[2];
            uVar24 = CONCAT13(bVar27,CONCAT12(bVar26,CONCAT11(bVar25,bVar23))) & 0x7fffffff;
            uVar29 = CONCAT13(bVar32,CONCAT12(bVar31,CONCAT11(bVar30,bVar28))) & 0x7fffffff;
            uVar34 = CONCAT13(bVar37,CONCAT12(bVar36,CONCAT11(bVar35,bVar33))) & 0x7fffffff;
            uVar40 = CONCAT13(bVar43,CONCAT12(bVar42,CONCAT11(bVar41,bVar38))) & 0x7fffffff;
            iVar9 = CONCAT13((byte)(uVar24 >> 0x18) | auVar22[3] & ~bVar27,
                             CONCAT12((byte)(uVar24 >> 0x10) | auVar22[2] & ~bVar26,
                                      CONCAT11((byte)(uVar24 >> 8) | auVar22[1] & ~bVar25,
                                               (byte)uVar24 | auVar22[0] & ~bVar23)));
            auVar20._0_8_ =
                 CONCAT17((byte)(uVar29 >> 0x18) | auVar22[7] & ~bVar32,
                          CONCAT16((byte)(uVar29 >> 0x10) | auVar22[6] & ~bVar31,
                                   CONCAT15((byte)(uVar29 >> 8) | auVar22[5] & ~bVar30,
                                            CONCAT14((byte)uVar29 | auVar22[4] & ~bVar28,iVar9))));
            auVar20[8] = (byte)uVar34 | auVar22[8] & ~bVar33;
            auVar20[9] = (byte)(uVar34 >> 8) | auVar22[9] & ~bVar35;
            auVar20[10] = (byte)(uVar34 >> 0x10) | auVar22[10] & ~bVar36;
            auVar20[0xb] = (byte)(uVar34 >> 0x18) | auVar22[0xb] & ~bVar37;
            auVar49[0xc] = (byte)uVar40 | auVar22[0xc] & ~bVar38;
            auVar49._0_12_ = auVar20;
            auVar49[0xd] = (byte)(uVar40 >> 8) | auVar22[0xd] & ~bVar41;
            auVar49[0xe] = (byte)(uVar40 >> 0x10) | auVar22[0xe] & ~bVar42;
            auVar49[0xf] = (byte)(uVar40 >> 0x18) | auVar22[0xf] & ~bVar43;
            *param_1 = fVar18 * fVar2 + *param_1;
            param_1[1] = fVar18 * fVar44 + param_1[1];
            param_1[2] = fVar18 * fVar45 + param_1[2];
            param_1[3] = fVar12 * fVar2 + param_1[3];
            param_1[4] = fVar12 * fVar44 + param_1[4];
            param_1[5] = fVar12 * fVar45 + param_1[5];
            param_1[6] = fVar13 * fVar2 + param_1[6];
            param_1[7] = fVar13 * fVar44 + param_1[7];
            param_1[8] = fVar13 * fVar45 + param_1[8];
            param_1[9] = fVar14 * fVar2 + param_1[9];
            param_1[10] = fVar14 * fVar44 + param_1[10];
            param_1[0xb] = fVar14 * fVar45 + param_1[0xb];
            param_1 = param_1 + 0xc;
            piVar5[2] = piVar5[2] + ((auVar20._8_4_ * 3) / 3 >> 0xc) * iVar1;
            piVar5[3] = piVar5[3] + ((auVar49._12_4_ * 3) / 3 >> 0xc) * iVar1;
            *piVar5 = *piVar5 + ((iVar9 * 3) / 3 >> 0xc) * iVar1;
            piVar5[1] = piVar5[1] + (((int)((ulong)auVar20._0_8_ >> 0x20) * 3) / 3 >> 0xc) * iVar1;
            pfVar4 = pfVar4 + 4;
            piVar5 = piVar5 + 4;
          } while (uVar6 != 0);
          bVar3 = uVar8 == param_2;
          param_3 = param_3 + uVar8;
          param_4 = param_4 + uVar8;
          param_2 = param_2 - uVar8;
          param_1 = pfVar7;
          if (bVar3) {
            return;
          }
        }
      }
    }
    do {
      fVar18 = *param_3;
      fVar2 = 0.5;
      if (fVar18 <= -16.0) {
        iVar9 = -0x80000000;
      }
      else if (16.0 <= fVar18) {
        iVar9 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a86130 to 00b86173 has its CatchHandler @ 00a86188 */
        fVar12 = fVar2;
        if (fVar18 * 1.3421773e+08 <= 0.0) {
          fVar12 = -0.5;
        }
        iVar9 = (int)(fVar12 + fVar18 * 1.3421773e+08);
      }
      *param_1 = fVar18 * *param_5 + *param_1;
      fVar18 = *param_3;
                    /* try { // try from 00a86174 to 00b8620f has its CatchHandler @ 00a85f28 */
      if (fVar18 <= -16.0) {
        iVar10 = -0x80000000;
                    /* catch() { ... } // from try @ 00a85fa8 with catch @ 00a861a0 */
      }
      else if (16.0 <= fVar18) {
                    /* catch() { ... } // from try @ 00a85f9c with catch @ 00a861a4 */
        iVar10 = 0x7fffffff;
      }
      else {
                    /* catch() { ... } // from try @ 00a85fe8 with catch @ 00a86188
                       catch() { ... } // from try @ 00a86130 with catch @ 00a86188 */
        fVar12 = fVar2;
        if (fVar18 * 1.3421773e+08 <= 0.0) {
          fVar12 = -0.5;
        }
        iVar10 = (int)(fVar12 + fVar18 * 1.3421773e+08);
      }
                    /* catch() { ... } // from try @ 00a85f7c with catch @ 00a861a8 */
                    /* catch() { ... } // from try @ 00a85fb4 with catch @ 00a861b8
                       catch() { ... } // from try @ 00a8601c with catch @ 00a861b8 */
      param_1[1] = fVar18 * param_5[1] + param_1[1];
      fVar18 = *param_3;
      if (fVar18 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else if (16.0 <= fVar18) {
        iVar11 = 0x7fffffff;
      }
      else {
        if (fVar18 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar11 = (int)(fVar2 + fVar18 * 1.3421773e+08);
      }
                    /* try { // try from 00a86210 to 00b8626b has its CatchHandler @ 00a86210
                       catch() { ... } // from try @ 00a86210 with catch @ 00a86210
                       catch() { ... } // from try @ 00a86480 with catch @ 00a86210
                       catch() { ... } // from try @ 00a86580 with catch @ 00a86210 */
      param_1[2] = fVar18 * param_5[2] + param_1[2];
      param_2 = param_2 - 1;
      *param_4 = *param_4 + ((iVar11 + iVar10 + iVar9) / 3 >> 0xc) * iVar1;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      param_1 = param_1 + 3;
    } while (param_2 != 0);
  }
  return;
}

