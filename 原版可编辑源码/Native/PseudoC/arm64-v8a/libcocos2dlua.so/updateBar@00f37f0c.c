
/* cocos2d::ProgressTimer::updateBar() */

void __thiscall cocos2d::ProgressTimer::updateBar(ProgressTimer *this)

{
  bool bVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  float fVar8;
  undefined8 uVar6;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar14;
  ulong uVar13;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  
  lVar3 = *(long *)(this + 0x310);
  if (lVar3 == 0) {
                    /* catch() { ... } // from try @ 00f382c0 with catch @ 00f38308 */
    return;
  }
  fVar4 = ((1.0 - *(float *)(this + 0x304)) +
          (*(float *)(this + 0x30c) / 100.0) * *(float *)(this + 0x304)) * 0.5;
  fVar7 = ((1.0 - *(float *)(this + 0x308)) +
          (*(float *)(this + 0x30c) / 100.0) * *(float *)(this + 0x308)) * 0.5;
  fVar5 = (float)*(undefined8 *)(this + 0x2fc);
  fVar9 = fVar5 - fVar4;
  fVar8 = (float)((ulong)*(undefined8 *)(this + 0x2fc) >> 0x20);
  fVar11 = fVar8 - fVar7;
  fVar5 = fVar5 + fVar4;
  fVar8 = fVar8 + fVar7;
  uVar13 = CONCAT44(fVar8,fVar5);
  iVar12 = -(uint)(fVar9 < 0.0);
  iVar14 = -(uint)(fVar11 < 0.0);
  fVar4 = (float)CONCAT13((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                          CONCAT12((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                   CONCAT11((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                            SUB41(fVar9,0) & ~(byte)iVar12)));
  uVar19 = CONCAT17((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                    CONCAT16((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                             CONCAT15((byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                      CONCAT14(SUB41(fVar11,0) & ~(byte)iVar14,fVar4))));
  uVar13 = uVar13 ^ (uVar13 ^ CONCAT44(fVar8 - fVar11,fVar5 - fVar9)) & CONCAT44(iVar14,iVar12);
  uVar6 = NEON_fmov(0xbf800000,4);
  pfVar2 = *(float **)(this + 800);
  uVar20 = NEON_fmov(0x3f800000,4);
  fVar5 = (float)(uVar13 >> 0x20);
  fVar7 = (float)uVar20;
  fVar8 = (float)((ulong)uVar20 >> 0x20);
  uVar21 = NEON_fmin(uVar13,uVar20,4);
  uVar19 = uVar19 ^ (uVar19 ^ CONCAT44((float)(uVar19 >> 0x20) -
                                       (fVar5 + (float)((ulong)uVar6 >> 0x20)),
                                       fVar4 - ((float)uVar13 + (float)uVar6))) &
                    CONCAT44(-(uint)(fVar8 < fVar5),-(uint)(fVar7 < (float)uVar13));
  fVar9 = (float)uVar21;
  fVar11 = (float)(uVar21 >> 0x20);
  fVar4 = (float)uVar19;
  fVar5 = (float)(uVar19 >> 0x20);
  if (this[0x380] == (ProgressTimer)0x0) {
    if (pfVar2 == (float *)0x0) {
      *(undefined4 *)(this + 0x318) = 4;
      pfVar2 = malloc(0x50);
      *(float **)(this + 800) = pfVar2;
    }
    fVar15 = *(float *)(lVar3 + 0x494);
    fVar10 = *(float *)(lVar3 + 0x47c);
    fVar17 = fVar4;
    fVar18 = fVar11;
    if (*(char *)(lVar3 + 0x418) == '\0') {
      fVar17 = fVar11;
      fVar18 = fVar4;
    }
                    /* catch() { ... } // from try @ 00f383a0 with catch @ 00f38370 */
    pfVar2[3] = *(float *)(lVar3 + 0x490) * fVar18 + *(float *)(lVar3 + 0x478) * (1.0 - fVar18);
    pfVar2[4] = fVar15 * fVar17 + fVar10 * (1.0 - fVar17);
    lVar3 = *(long *)(this + 0x310);
    uVar20 = 0;
    uVar6 = 0;
                    /* try { // try from 00f38398 to 0103839f has its CatchHandler @ 00f383f4 */
    if (lVar3 != 0) {
                    /* try { // try from 00f383a0 to 0103840f has its CatchHandler @ 00f38370 */
      uVar6 = CONCAT44((fVar8 - fVar11) * (float)((ulong)*(undefined8 *)(lVar3 + 0x468) >> 0x20) +
                       fVar11 * (float)((ulong)*(undefined8 *)(lVar3 + 0x480) >> 0x20),
                       (fVar7 - fVar4) * (float)*(undefined8 *)(lVar3 + 0x468) +
                       fVar4 * (float)*(undefined8 *)(lVar3 + 0x480));
    }
    **(undefined8 **)(this + 800) = uVar6;
    lVar3 = *(long *)(this + 0x310);
    if (lVar3 != 0) {
      bVar1 = *(char *)(lVar3 + 0x418) != '\0';
                    /* catch() { ... } // from try @ 00f38398 with catch @ 00f383f4 */
      uVar19 = uVar19 ^ (uVar19 ^ CONCAT44(fVar4,fVar5)) &
                        CONCAT44((int)((uint)bVar1 << 0x1f) >> 0x1f,
                                 (int)((uint)bVar1 << 0x1f) >> 0x1f);
      fVar17 = (float)uVar19;
      fVar18 = (float)(uVar19 >> 0x20);
      uVar20 = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x490) >> 0x20) * fVar18 +
                        (float)((ulong)*(undefined8 *)(lVar3 + 0x478) >> 0x20) * (fVar8 - fVar18),
                        (float)*(undefined8 *)(lVar3 + 0x490) * fVar17 +
                        (float)*(undefined8 *)(lVar3 + 0x478) * (fVar7 - fVar17));
    }
    uVar16 = 0;
    *(undefined8 *)(*(long *)(this + 800) + 0x20) = uVar20;
    lVar3 = *(long *)(this + 0x310);
    uVar6 = 0;
    if (lVar3 != 0) {
      uVar16 = CONCAT44((fVar8 - fVar5) * (float)((ulong)*(undefined8 *)(lVar3 + 0x468) >> 0x20) +
                        fVar5 * (float)((ulong)*(undefined8 *)(lVar3 + 0x480) >> 0x20),
                        (fVar7 - fVar4) * (float)*(undefined8 *)(lVar3 + 0x468) +
                        fVar4 * (float)*(undefined8 *)(lVar3 + 0x480));
    }
    *(undefined8 *)(*(long *)(this + 800) + 0x14) = uVar16;
    lVar3 = *(long *)(this + 0x310);
    if (lVar3 != 0) {
      bVar1 = *(char *)(lVar3 + 0x418) != '\0';
      uVar21 = uVar21 ^ (uVar21 ^ CONCAT44(fVar9,fVar11)) &
                        CONCAT44((int)((uint)bVar1 << 0x1f) >> 0x1f,
                                 (int)((uint)bVar1 << 0x1f) >> 0x1f);
      fVar4 = (float)uVar21;
      fVar17 = (float)(uVar21 >> 0x20);
      uVar6 = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x490) >> 0x20) * fVar17 +
                       (float)((ulong)*(undefined8 *)(lVar3 + 0x478) >> 0x20) * (fVar8 - fVar17),
                       (float)*(undefined8 *)(lVar3 + 0x490) * fVar4 +
                       (float)*(undefined8 *)(lVar3 + 0x478) * (fVar7 - fVar4));
    }
    *(undefined8 *)(*(long *)(this + 800) + 0x34) = uVar6;
    lVar3 = *(long *)(this + 0x310);
    if (lVar3 == 0) {
      fVar4 = 0.0;
      fVar11 = 0.0;
    }
    else {
      fVar4 = (1.0 - fVar9) * *(float *)(lVar3 + 0x468) + fVar9 * *(float *)(lVar3 + 0x480);
      fVar11 = (1.0 - fVar11) * *(float *)(lVar3 + 0x46c) + fVar11 * *(float *)(lVar3 + 0x484);
    }
    lVar3 = *(long *)(this + 800);
    *(float *)(lVar3 + 0x28) = fVar4;
    *(float *)(lVar3 + 0x2c) = fVar11;
    lVar3 = *(long *)(this + 0x310);
    if (lVar3 == 0) {
      uVar6 = 0;
    }
    else {
      bVar1 = *(char *)(lVar3 + 0x418) != '\0';
      uVar13 = CONCAT44(fVar5,fVar9) ^
               (CONCAT44(fVar5,fVar9) ^ CONCAT44(fVar9,fVar5)) &
               CONCAT44((int)((uint)bVar1 << 0x1f) >> 0x1f,(int)((uint)bVar1 << 0x1f) >> 0x1f);
      fVar4 = (float)uVar13;
      fVar11 = (float)(uVar13 >> 0x20);
      uVar6 = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x490) >> 0x20) * fVar11 +
                       (float)((ulong)*(undefined8 *)(lVar3 + 0x478) >> 0x20) * (fVar8 - fVar11),
                       (float)*(undefined8 *)(lVar3 + 0x490) * fVar4 +
                       (float)*(undefined8 *)(lVar3 + 0x478) * (fVar7 - fVar4));
    }
    *(undefined8 *)(*(long *)(this + 800) + 0x48) = uVar6;
    lVar3 = *(long *)(this + 0x310);
    if (lVar3 == 0) {
      fVar7 = 0.0;
      fVar4 = 0.0;
    }
    else {
      fVar7 = (1.0 - fVar9) * *(float *)(lVar3 + 0x468) + *(float *)(lVar3 + 0x480) * fVar9;
      fVar4 = (1.0 - fVar5) * *(float *)(lVar3 + 0x46c) + fVar5 * *(float *)(lVar3 + 0x484);
    }
    lVar3 = *(long *)(this + 800);
    *(float *)(lVar3 + 0x3c) = fVar7;
    pfVar2 = (float *)(lVar3 + 0x40);
  }
  else {
    if (pfVar2 == (float *)0x0) {
      *(undefined4 *)(this + 0x318) = 8;
      pfVar2 = malloc(0xa0);
      *(float **)(this + 800) = pfVar2;
      bVar1 = *(char *)(lVar3 + 0x418) != '\0';
      uVar13 = CONCAT44((int)((uint)bVar1 << 0x1f) >> 0x1f,(int)((uint)bVar1 << 0x1f) >> 0x1f) &
               0x3f8000003f800000;
      fVar18 = (float)((uint)(uVar13 >> 0x20) ^ 0x3f800000);
      fVar17 = (float)uVar13;
      *(ulong *)(pfVar2 + 3) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x490) >> 0x20) * fVar18 +
                    (float)((ulong)*(undefined8 *)(lVar3 + 0x478) >> 0x20) * (fVar8 - fVar18),
                    (float)*(undefined8 *)(lVar3 + 0x490) * fVar17 +
                    (float)*(undefined8 *)(lVar3 + 0x478) * (fVar7 - fVar17));
      fVar17 = *(float *)(lVar3 + 0x46c);
      fVar18 = *(float *)(lVar3 + 0x484);
      *pfVar2 = *(float *)(lVar3 + 0x468) + *(float *)(lVar3 + 0x480) * 0.0;
      pfVar2[1] = fVar17 * 0.0 + fVar18;
      *(ulong *)(pfVar2 + 8) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x478) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar3 + 0x490) >> 0x20) * 0.0,
                    (float)*(undefined8 *)(lVar3 + 0x478) +
                    (float)*(undefined8 *)(lVar3 + 0x490) * 0.0);
      *(ulong *)(pfVar2 + 5) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x468) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar3 + 0x480) >> 0x20) * 0.0,
                    (float)*(undefined8 *)(lVar3 + 0x468) +
                    (float)*(undefined8 *)(lVar3 + 0x480) * 0.0);
      *(ulong *)(pfVar2 + 0x21) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x478) >> 0x20) * 0.0 +
                    (float)((ulong)*(undefined8 *)(lVar3 + 0x490) >> 0x20),
                    (float)*(undefined8 *)(lVar3 + 0x478) * 0.0 +
                    (float)*(undefined8 *)(lVar3 + 0x490));
      *(ulong *)(pfVar2 + 0x1e) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x468) >> 0x20) * 0.0 +
                    (float)((ulong)*(undefined8 *)(lVar3 + 0x480) >> 0x20),
                    (float)*(undefined8 *)(lVar3 + 0x468) * 0.0 +
                    (float)*(undefined8 *)(lVar3 + 0x480));
      bVar1 = *(char *)(lVar3 + 0x418) != '\0';
      uVar13 = CONCAT44((int)((uint)bVar1 << 0x1f) >> 0x1f,(int)((uint)bVar1 << 0x1f) >> 0x1f) &
               0x3f8000003f800000;
      fVar17 = (float)((uint)uVar13 ^ 0x3f800000);
      fVar18 = (float)(uVar13 >> 0x20);
      *(ulong *)(pfVar2 + 0x26) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x490) >> 0x20) * fVar18 +
                    (float)((ulong)*(undefined8 *)(lVar3 + 0x478) >> 0x20) * (fVar8 - fVar18),
                    (float)*(undefined8 *)(lVar3 + 0x490) * fVar17 +
                    (float)*(undefined8 *)(lVar3 + 0x478) * (fVar7 - fVar17));
      fVar17 = *(float *)(lVar3 + 0x484);
      fVar18 = *(float *)(lVar3 + 0x46c);
      pfVar2[0x23] = *(float *)(lVar3 + 0x468) * 0.0 + *(float *)(lVar3 + 0x480);
      pfVar2[0x24] = fVar18 + fVar17 * 0.0;
    }
    fVar10 = *(float *)(lVar3 + 0x47c);
    fVar15 = *(float *)(lVar3 + 0x494);
    fVar17 = fVar4;
    fVar18 = fVar11;
    if (*(char *)(lVar3 + 0x418) == '\0') {
      fVar17 = fVar11;
      fVar18 = fVar4;
    }
    pfVar2[0xd] = *(float *)(lVar3 + 0x490) * fVar18 + *(float *)(lVar3 + 0x478) * (1.0 - fVar18);
    pfVar2[0xe] = fVar15 * fVar17 + fVar10 * (1.0 - fVar17);
    lVar3 = *(long *)(this + 0x310);
    uVar6 = 0;
    uVar20 = 0;
    if (lVar3 != 0) {
      uVar20 = CONCAT44((fVar8 - fVar11) * (float)((ulong)*(undefined8 *)(lVar3 + 0x468) >> 0x20) +
                        fVar11 * (float)((ulong)*(undefined8 *)(lVar3 + 0x480) >> 0x20),
                        (fVar7 - fVar4) * (float)*(undefined8 *)(lVar3 + 0x468) +
                        fVar4 * (float)*(undefined8 *)(lVar3 + 0x480));
    }
    *(undefined8 *)(*(long *)(this + 800) + 0x28) = uVar20;
    lVar3 = *(long *)(this + 0x310);
    if (lVar3 != 0) {
      bVar1 = *(char *)(lVar3 + 0x418) != '\0';
      uVar13 = NEON_ext(uVar19,uVar19,4,1);
      uVar19 = uVar19 ^ (uVar19 ^ uVar13) &
                        CONCAT44((int)((uint)bVar1 << 0x1f) >> 0x1f,
                                 (int)((uint)bVar1 << 0x1f) >> 0x1f);
      fVar17 = (float)uVar19;
      fVar18 = (float)(uVar19 >> 0x20);
      uVar6 = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x490) >> 0x20) * fVar18 +
                       (float)((ulong)*(undefined8 *)(lVar3 + 0x478) >> 0x20) * (fVar8 - fVar18),
                       (float)*(undefined8 *)(lVar3 + 0x490) * fVar17 +
                       (float)*(undefined8 *)(lVar3 + 0x478) * (fVar7 - fVar17));
    }
    uVar20 = 0;
    *(undefined8 *)(*(long *)(this + 800) + 0x48) = uVar6;
    lVar3 = *(long *)(this + 0x310);
    uVar6 = 0;
    if (lVar3 != 0) {
      uVar20 = CONCAT44((fVar8 - fVar5) * (float)((ulong)*(undefined8 *)(lVar3 + 0x468) >> 0x20) +
                        fVar5 * (float)((ulong)*(undefined8 *)(lVar3 + 0x480) >> 0x20),
                        (fVar7 - fVar4) * (float)*(undefined8 *)(lVar3 + 0x468) +
                        fVar4 * (float)*(undefined8 *)(lVar3 + 0x480));
    }
    *(undefined8 *)(*(long *)(this + 800) + 0x3c) = uVar20;
    lVar3 = *(long *)(this + 0x310);
    if (lVar3 != 0) {
      bVar1 = *(char *)(lVar3 + 0x418) != '\0';
      uVar21 = uVar21 ^ (uVar21 ^ CONCAT44(fVar9,fVar11)) &
                        CONCAT44((int)((uint)bVar1 << 0x1f) >> 0x1f,
                                 (int)((uint)bVar1 << 0x1f) >> 0x1f);
      fVar4 = (float)uVar21;
      fVar17 = (float)(uVar21 >> 0x20);
      uVar6 = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x490) >> 0x20) * fVar17 +
                       (float)((ulong)*(undefined8 *)(lVar3 + 0x478) >> 0x20) * (fVar8 - fVar17),
                       (float)*(undefined8 *)(lVar3 + 0x490) * fVar4 +
                       (float)*(undefined8 *)(lVar3 + 0x478) * (fVar7 - fVar4));
    }
    uVar20 = 0;
    *(undefined8 *)(*(long *)(this + 800) + 0x5c) = uVar6;
    lVar3 = *(long *)(this + 0x310);
    uVar6 = 0;
    if (lVar3 != 0) {
      uVar20 = CONCAT44((fVar8 - fVar11) * (float)((ulong)*(undefined8 *)(lVar3 + 0x468) >> 0x20) +
                        fVar11 * (float)((ulong)*(undefined8 *)(lVar3 + 0x480) >> 0x20),
                        (fVar7 - fVar9) * (float)*(undefined8 *)(lVar3 + 0x468) +
                        fVar9 * (float)*(undefined8 *)(lVar3 + 0x480));
    }
    *(undefined8 *)(*(long *)(this + 800) + 0x50) = uVar20;
    lVar3 = *(long *)(this + 0x310);
    if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 00f382c8 with catch @ 00f3829c */
      bVar1 = *(char *)(lVar3 + 0x418) != '\0';
      uVar13 = CONCAT44(fVar5,fVar9) ^
               (CONCAT44(fVar5,fVar9) ^ CONCAT44(fVar9,fVar5)) &
               CONCAT44((int)((uint)bVar1 << 0x1f) >> 0x1f,(int)((uint)bVar1 << 0x1f) >> 0x1f);
      fVar4 = (float)uVar13;
                    /* try { // try from 00f382c0 to 010382c7 has its CatchHandler @ 00f38308 */
      fVar11 = (float)(uVar13 >> 0x20);
                    /* try { // try from 00f382c8 to 01038323 has its CatchHandler @ 00f3829c */
      uVar6 = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x490) >> 0x20) * fVar11 +
                       (float)((ulong)*(undefined8 *)(lVar3 + 0x478) >> 0x20) * (fVar8 - fVar11),
                       (float)*(undefined8 *)(lVar3 + 0x490) * fVar4 +
                       (float)*(undefined8 *)(lVar3 + 0x478) * (fVar7 - fVar4));
    }
    *(undefined8 *)(*(long *)(this + 800) + 0x70) = uVar6;
    lVar3 = *(long *)(this + 0x310);
    if (lVar3 == 0) {
      fVar7 = 0.0;
      fVar4 = 0.0;
    }
    else {
      fVar7 = (fVar7 - fVar9) * (float)*(undefined8 *)(lVar3 + 0x468) +
              fVar9 * (float)*(undefined8 *)(lVar3 + 0x480);
      fVar4 = (fVar8 - fVar5) * (float)((ulong)*(undefined8 *)(lVar3 + 0x468) >> 0x20) +
              fVar5 * (float)((ulong)*(undefined8 *)(lVar3 + 0x480) >> 0x20);
    }
    lVar3 = *(long *)(this + 800);
    *(float *)(lVar3 + 100) = fVar7;
    pfVar2 = (float *)(lVar3 + 0x68);
  }
  *pfVar2 = fVar4;
                    /* WARNING: Could not recover jumptable at 0x00f385d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x528))(this);
  return;
}

