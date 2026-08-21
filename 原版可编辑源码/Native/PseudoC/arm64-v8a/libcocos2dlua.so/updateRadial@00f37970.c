
/* cocos2d::ProgressTimer::updateRadial() */

void __thiscall cocos2d::ProgressTimer::updateRadial(ProgressTimer *this)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  void *pvVar8;
  int iVar9;
  float *pfVar10;
  long lVar11;
  long lVar12;
  ProgressTimer *pPVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  float fVar24;
  ulong uVar25;
  undefined8 uVar26;
  float fVar27;
  ulong uVar28;
  ulong uVar29;
  float local_a0 [3];
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  if (*(long *)(this + 0x310) == 0) goto LAB_00f37ed4;
  fVar20 = 100.0;
  local_80 = *(float *)(this + 0x2fc);
  fVar27 = *(float *)(this + 0x30c) / 100.0;
  pPVar13 = this + 0x2fc;
  fVar18 = 1.0 - fVar27;
  if (this[0x380] != (ProgressTimer)0x0) {
    fVar18 = fVar27;
  }
  fStack_7c = 1.0;
  local_88 = (float)Vec2::rotateByAngle((Vec2 *)&local_80,pPVar13,fVar18 * 6.2831855);
  fStack_84 = fVar20;
  if (fVar27 == 0.0) {
    uVar26 = CONCAT44(fStack_7c,local_80);
    uVar14 = 0;
  }
  else if (fVar27 == 1.0) {
    uVar26 = CONCAT44(fStack_7c,local_80);
    uVar14 = 4;
  }
  else {
    uVar16 = 0;
    uVar17 = 0;
    fVar18 = 3.4028235e+38;
    uVar15 = 0;
    do {
      uVar14 = uVar16 & 6;
      bVar7 = this[0x380] != (ProgressTimer)0x0;
      uVar2 = uVar16 + 6 & 6;
      uVar3 = uVar14 | 1;
      if (bVar7) {
        uVar3 = uVar14 ^ 7;
      }
      if (bVar7) {
        uVar14 = uVar14 ^ 6;
      }
      uVar4 = uVar2;
                    /* try { // try from 00f37ac8 to 01037c67 has its CatchHandler @ 00f37c70 */
      if (bVar7) {
        uVar4 = uVar2 ^ 6;
      }
      uVar5 = uVar2 | 1;
      if (bVar7) {
        uVar5 = uVar2 ^ 7;
      }
      local_90 = (float)(0x4bU >> (ulong)uVar3 & 1);
      fStack_8c = (float)(0x4bU >> (ulong)uVar14 & 1);
      local_a0[2] = (float)(0x4bU >> (ulong)uVar5 & 1);
      fStack_94 = (float)(0x4bU >> (ulong)uVar4 & 1);
      if (uVar17 == 0) {
        pfVar10 = local_a0 + 2;
        pfVar1 = local_a0 + 2;
LAB_00f37b2c:
        fVar24 = 1.0 - *(float *)pPVar13;
        fVar27 = fVar24 * fStack_94;
        fVar20 = (1.0 - fVar24) * fStack_8c;
        *pfVar10 = fVar24 * local_a0[2] + (1.0 - fVar24) * local_90;
        *(float *)((ulong)pfVar1 | 4) = fVar27 + fVar20;
      }
      else if (uVar17 == 4) {
        pfVar10 = &local_90;
        pfVar1 = &local_90;
        goto LAB_00f37b2c;
      }
      local_a0[0] = 0.0;
      local_a0[1] = 0.0;
      uVar28 = Vec2::isLineIntersect
                         ((Vec2 *)&local_90,(Vec2 *)(local_a0 + 2),pPVar13,(Vec2 *)&local_88,
                          local_a0 + 1,local_a0);
      uVar14 = uVar15;
      fVar20 = fVar18;
      if (((uVar28 & 1) != 0) &&
         ((((uVar17 & 0x7ffffffb) != 0 || ((0.0 <= local_a0[1] && (local_a0[1] <= 1.0)))) &&
          (uVar14 = uVar17, fVar20 = local_a0[0], local_a0[0] < 0.0 || fVar18 <= local_a0[0])))) {
        uVar14 = uVar15;
        fVar20 = fVar18;
      }
      fVar18 = fVar20;
      uVar17 = uVar17 + 1;
      uVar16 = uVar16 + 2;
      uVar15 = uVar14;
    } while (uVar17 != 5);
    fVar20 = (float)*(undefined8 *)pPVar13;
    fVar27 = (float)((ulong)*(undefined8 *)pPVar13 >> 0x20);
    uVar26 = CONCAT44(fVar27 + (fStack_84 - fVar27) * fVar18,fVar20 + (local_88 - fVar20) * fVar18);
  }
  uVar28 = NEON_rev64(uVar26,4);
  pvVar8 = *(void **)(this + 800);
  iVar9 = uVar14 + 3;
  if (*(int *)(this + 0x318) == iVar9) {
    bVar7 = true;
    if (pvVar8 == (void *)0x0) goto LAB_00f37bf4;
  }
  else {
    if (pvVar8 != (void *)0x0) {
      free(pvVar8);
      *(undefined8 *)(this + 800) = 0;
    }
    bVar7 = false;
    *(undefined4 *)(this + 0x318) = 0;
LAB_00f37bf4:
    *(int *)(this + 0x318) = iVar9;
    pvVar8 = malloc((long)iVar9 * 0x14);
    *(void **)(this + 800) = pvVar8;
  }
  pPVar13 = this + 800;
  (**(code **)(*(long *)this + 0x528))(this);
  uVar19 = NEON_fmov(0x3f800000,4);
  fVar18 = (float)uVar19;
  fVar20 = (float)((ulong)uVar19 >> 0x20);
  if (!bVar7) {
    lVar11 = *(long *)(this + 0x310);
    uVar19 = 0;
    uVar21 = 0;
    if (lVar11 != 0) {
      uVar22 = *(ulong *)(this + 0x2fc);
      bVar7 = *(char *)(lVar11 + 0x418) != '\0';
      uVar25 = NEON_rev64(uVar22,4);
      uVar22 = uVar22 ^ (uVar22 ^ uVar25) &
                        CONCAT44((int)((uint)bVar7 << 0x1f) >> 0x1f,
                                 (int)((uint)bVar7 << 0x1f) >> 0x1f);
      fVar27 = (float)uVar22;
      fVar24 = (float)(uVar22 >> 0x20);
                    /* try { // try from 00f37c68 to 01037c93 has its CatchHandler @ 00f375ec */
      uVar21 = CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 0x490) >> 0x20) * fVar24 +
                        (float)((ulong)*(undefined8 *)(lVar11 + 0x478) >> 0x20) * (fVar20 - fVar24),
                        (float)*(undefined8 *)(lVar11 + 0x490) * fVar27 +
                        (float)*(undefined8 *)(lVar11 + 0x478) * (fVar18 - fVar27));
    }
                    /* catch() { ... } // from try @ 00f37938 with catch @ 00f37c70
                       catch() { ... } // from try @ 00f37ac8 with catch @ 00f37c70 */
                    /* catch() { ... } // from try @ 00f37844 with catch @ 00f37c74 */
    *(undefined8 *)(*(long *)(this + 800) + 0xc) = uVar21;
                    /* catch() { ... } // from try @ 00f3776c with catch @ 00f37c78 */
    lVar11 = *(long *)(this + 0x310);
    if (lVar11 != 0) {
      uVar19 = *(undefined8 *)(this + 0x2fc);
      fVar27 = (float)uVar19;
      fVar24 = (float)((ulong)uVar19 >> 0x20);
      uVar19 = CONCAT44((fVar20 - fVar24) * (float)((ulong)*(undefined8 *)(lVar11 + 0x468) >> 0x20)
                        + fVar24 * (float)((ulong)*(undefined8 *)(lVar11 + 0x480) >> 0x20),
                        (fVar18 - fVar27) * (float)*(undefined8 *)(lVar11 + 0x468) +
                        fVar27 * (float)*(undefined8 *)(lVar11 + 0x480));
    }
    uVar21 = 0;
    uVar23 = 0;
    **(undefined8 **)pPVar13 = uVar19;
    lVar11 = *(long *)(this + 0x310);
    if (lVar11 != 0) {
      uVar22 = NEON_rev64(CONCAT44(fStack_7c,local_80),4);
      bVar7 = *(char *)(lVar11 + 0x418) != '\0';
      uVar25 = NEON_rev64(uVar22,4);
      uVar25 = uVar25 ^ (uVar25 ^ uVar22) &
                        CONCAT44((int)((uint)bVar7 << 0x1f) >> 0x1f,
                                 (int)((uint)bVar7 << 0x1f) >> 0x1f);
      fVar27 = (float)uVar25;
      fVar24 = (float)(uVar25 >> 0x20);
      uVar23 = CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 0x490) >> 0x20) * fVar24 +
                        (float)((ulong)*(undefined8 *)(lVar11 + 0x478) >> 0x20) * (fVar20 - fVar24),
                        (float)*(undefined8 *)(lVar11 + 0x490) * fVar27 +
                        (float)*(undefined8 *)(lVar11 + 0x478) * (fVar18 - fVar27));
    }
    *(undefined8 *)(*(long *)(this + 800) + 0x20) = uVar23;
    lVar11 = *(long *)(this + 0x310);
    if (lVar11 != 0) {
                    /* catch() { ... } // from try @ 00f37d44 with catch @ 00f37d18 */
      uVar21 = CONCAT44((fVar20 - fStack_7c) *
                        (float)((ulong)*(undefined8 *)(lVar11 + 0x468) >> 0x20) +
                        fStack_7c * (float)((ulong)*(undefined8 *)(lVar11 + 0x480) >> 0x20),
                        (fVar18 - local_80) * (float)*(undefined8 *)(lVar11 + 0x468) +
                        local_80 * (float)*(undefined8 *)(lVar11 + 0x480));
    }
    *(undefined8 *)(*(long *)pPVar13 + 0x14) = uVar21;
    if (0 < (int)uVar14) {
      iVar9 = 0;
      lVar11 = 0;
                    /* try { // try from 00f37d3c to 01037d43 has its CatchHandler @ 00f37d6c */
      uVar22 = 0;
                    /* try { // try from 00f37d44 to 01037d87 has its CatchHandler @ 00f37d18 */
      do {
        if ((char)uVar22 < '\x04') {
          uVar17 = iVar9 >> 0x17;
                    /* catch() { ... } // from try @ 00f37dbc with catch @ 00f37d8c */
          if (this[0x380] == (ProgressTimer)0x0) {
                    /* try { // try from 00f37db4 to 01037dbb has its CatchHandler @ 00f37df8 */
            uVar19 = CONCAT44(-uVar17,-(uVar17 | 1));
          }
          else {
            uVar19 = CONCAT44(-(7 - (uVar17 | 1)),-(7 - uVar17));
          }
                    /* try { // try from 00f37dbc to 01037e13 has its CatchHandler @ 00f37d8c */
          uVar25 = NEON_ushl(0x4b0000004b,uVar19,4);
          uVar19 = NEON_scvtf(uVar25 & 0x100000001,4);
        }
        else {
          uVar19 = 0;
        }
        lVar12 = *(long *)(this + 0x310);
        uVar21 = 0;
        uVar23 = 0;
        if (lVar12 != 0) {
          uVar25 = NEON_rev64(uVar19,4);
          bVar7 = *(char *)(lVar12 + 0x418) != '\0';
                    /* catch() { ... } // from try @ 00f37db4 with catch @ 00f37df8 */
          uVar29 = NEON_rev64(uVar25,4);
          uVar29 = uVar29 ^ (uVar29 ^ uVar25) &
                            CONCAT44((int)((uint)bVar7 << 0x1f) >> 0x1f,
                                     (int)((uint)bVar7 << 0x1f) >> 0x1f);
          fVar27 = (float)uVar29;
          fVar24 = (float)(uVar29 >> 0x20);
          uVar23 = CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x490) >> 0x20) * fVar24 +
                            (float)((ulong)*(undefined8 *)(lVar12 + 0x478) >> 0x20) *
                            (fVar20 - fVar24),
                            (float)*(undefined8 *)(lVar12 + 0x490) * fVar27 +
                            (float)*(undefined8 *)(lVar12 + 0x478) * (fVar18 - fVar27));
        }
        *(undefined8 *)(*(long *)(this + 800) + lVar11 + 0x34) = uVar23;
        lVar12 = *(long *)(this + 0x310);
        if (lVar12 != 0) {
          fVar27 = (float)((ulong)uVar19 >> 0x20);
          uVar21 = CONCAT44((fVar20 - fVar27) *
                            (float)((ulong)*(undefined8 *)(lVar12 + 0x468) >> 0x20) +
                            fVar27 * (float)((ulong)*(undefined8 *)(lVar12 + 0x480) >> 0x20),
                            (fVar18 - (float)uVar19) * (float)*(undefined8 *)(lVar12 + 0x468) +
                            (float)uVar19 * (float)*(undefined8 *)(lVar12 + 0x480));
        }
        uVar22 = uVar22 + 1;
        iVar9 = iVar9 + 0x1000000;
        lVar12 = *(long *)pPVar13 + lVar11;
                    /* catch() { ... } // from try @ 00f37d3c with catch @ 00f37d6c */
        lVar11 = lVar11 + 0x14;
        *(undefined8 *)(lVar12 + 0x28) = uVar21;
      } while (uVar14 != uVar22);
    }
  }
  lVar11 = *(long *)(this + 0x310);
  uVar19 = 0;
  uVar21 = 0;
  if (lVar11 != 0) {
    uVar22 = NEON_rev64(uVar28,4);
    bVar7 = *(char *)(lVar11 + 0x418) != '\0';
    uVar22 = uVar22 ^ (uVar22 ^ uVar28) &
                      CONCAT44((int)((uint)bVar7 << 0x1f) >> 0x1f,(int)((uint)bVar7 << 0x1f) >> 0x1f
                              );
    fVar27 = (float)uVar22;
    fVar24 = (float)(uVar22 >> 0x20);
    uVar21 = CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 0x490) >> 0x20) * fVar24 +
                      (float)((ulong)*(undefined8 *)(lVar11 + 0x478) >> 0x20) * (fVar20 - fVar24),
                      (float)*(undefined8 *)(lVar11 + 0x490) * fVar27 +
                      (float)*(undefined8 *)(lVar11 + 0x478) * (fVar18 - fVar27));
  }
  *(undefined8 *)(*(long *)(this + 800) + (long)*(int *)(this + 0x318) * 0x14 + -8) = uVar21;
  lVar11 = *(long *)(this + 0x310);
  if (lVar11 != 0) {
    fVar27 = (float)((ulong)uVar26 >> 0x20);
    uVar19 = CONCAT44((fVar20 - fVar27) * (float)((ulong)*(undefined8 *)(lVar11 + 0x468) >> 0x20) +
                      fVar27 * (float)((ulong)*(undefined8 *)(lVar11 + 0x480) >> 0x20),
                      (fVar18 - (float)uVar26) * (float)*(undefined8 *)(lVar11 + 0x468) +
                      (float)uVar26 * (float)*(undefined8 *)(lVar11 + 0x480));
  }
  *(undefined8 *)(*(long *)(this + 800) + (long)*(int *)(this + 0x318) * 0x14 + -0x14) = uVar19;
LAB_00f37ed4:
  if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

