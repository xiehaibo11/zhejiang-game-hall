
/* fairygui::FUISprite::updateRadial() */

void __thiscall fairygui::FUISprite::updateRadial(FUISprite *this)

{
  float *pfVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  long lVar9;
  bool bVar10;
  void *pvVar11;
  int iVar12;
  float *pfVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  short sVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar29;
  undefined8 uVar28;
  short sVar30;
  short sVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  ulong uVar42;
  short sVar43;
  float fVar44;
  ulong uVar45;
  undefined8 uVar46;
  short sVar47;
  short sVar49;
  short sVar50;
  undefined8 uVar48;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  short sVar71;
  float local_c0 [3];
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  float local_98;
  float fStack_94;
  undefined4 local_90;
  long local_88;
  
  lVar9 = tpidr_el0;
  local_88 = *(long *)(lVar9 + 0x28);
  fStack_ac = 0.5;
  local_a8 = 0x3f8000003f000000;
  local_a0 = 0x3f0000003f000000;
  fVar26 = *(float *)(this + 0x538);
  if (this[0x53c] != (FUISprite)0x0) {
    fVar26 = 1.0 - *(float *)(this + 0x538);
  }
  local_b0 = (float)cocos2d::Vec2::rotateByAngle
                              ((Vec2 *)&local_a8,(Vec2 *)&local_a0,fVar26 * 6.2831855);
  uVar48 = local_a8;
  if (*(float *)(this + 0x538) == 0.0) {
    uVar21 = 0;
  }
  else if (*(float *)(this + 0x538) == 1.0) {
    uVar21 = 4;
  }
  else {
    uVar20 = 0;
    uVar23 = 0;
    fVar26 = 3.4028235e+38;
    uVar22 = 0;
    do {
      uVar21 = uVar20 & 6;
      bVar10 = this[0x53c] != (FUISprite)0x0;
      uVar4 = uVar20 + 6 & 6;
      uVar5 = uVar21 ^ 7;
      if (bVar10) {
        uVar5 = uVar21 | 1;
      }
      uVar6 = uVar21 ^ 6;
      if (bVar10) {
        uVar6 = uVar21;
      }
      uVar21 = uVar4 ^ 6;
      if (bVar10) {
        uVar21 = uVar4;
      }
      uVar7 = uVar4 ^ 7;
      if (bVar10) {
        uVar7 = uVar4 | 1;
      }
      local_98 = (float)(0x4bU >> (ulong)uVar5 & 1);
      fStack_94 = (float)(0x4bU >> (ulong)uVar6 & 1);
      local_c0[2] = (float)(0x4bU >> (ulong)uVar7 & 1);
      fStack_b4 = (float)(0x4bU >> (ulong)uVar21 & 1);
      if (uVar23 == 0) {
        pfVar13 = local_c0 + 2;
        pfVar1 = local_c0 + 2;
LAB_00aab18c:
        fVar44 = 1.0 - (float)local_a0;
        fVar39 = fVar44 * fStack_b4;
        fVar32 = (1.0 - fVar44) * fStack_94;
        *pfVar13 = fVar44 * local_c0[2] + (1.0 - fVar44) * local_98;
        *(float *)((ulong)pfVar1 | 4) = fVar39 + fVar32;
      }
      else if (uVar23 == 4) {
        pfVar13 = &local_98;
        pfVar1 = &local_98;
        goto LAB_00aab18c;
      }
      local_c0[0] = 0.0;
      local_c0[1] = 0.0;
      uVar45 = cocos2d::Vec2::isLineIntersect
                         ((Vec2 *)&local_98,(Vec2 *)(local_c0 + 2),(Vec2 *)&local_a0,
                          (Vec2 *)&local_b0,local_c0 + 1,local_c0);
      uVar21 = uVar22;
      fVar32 = fVar26;
      if ((((uVar45 & 1) != 0) &&
          (((uVar23 & 0x7ffffffb) != 0 || ((0.0 <= local_c0[1] && (local_c0[1] <= 1.0)))))) &&
         (uVar21 = uVar23, fVar32 = local_c0[0], local_c0[0] < 0.0 || fVar26 <= local_c0[0])) {
        uVar21 = uVar22;
        fVar32 = fVar26;
      }
      fVar26 = fVar32;
      uVar23 = uVar23 + 1;
      uVar20 = uVar20 + 2;
      uVar22 = uVar21;
    } while (uVar23 != 5);
    fVar32 = (float)((ulong)local_a0 >> 0x20);
    uVar48 = CONCAT44(fVar32 + (fStack_ac - fVar32) * fVar26,
                      (float)local_a0 + (local_b0 - (float)local_a0) * fVar26);
  }
  iVar12 = *(int *)(this + 0x540);
  iVar24 = uVar21 + 3;
  if (iVar12 == iVar24) {
    bVar10 = true;
    if (*(long *)(this + 0x560) != 0) goto LAB_00aab234;
LAB_00aab270:
    *(int *)(this + 0x540) = iVar24;
    uVar23 = uVar21 + 1;
    pvVar11 = malloc((long)iVar24 * 0x18);
    *(void **)(this + 0x560) = pvVar11;
    pvVar11 = malloc(-(ulong)(uVar23 * 3 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uVar23 * 3) << 1);
    *(void **)(this + 0x568) = pvVar11;
  }
  else {
    if (*(void **)(this + 0x560) != (void *)0x0) {
      free(*(void **)(this + 0x560));
      *(undefined8 *)(this + 0x560) = 0;
    }
    if (*(void **)(this + 0x568) != (void *)0x0) {
      free(*(void **)(this + 0x568));
      *(undefined8 *)(this + 0x568) = 0;
    }
    iVar12 = 0;
    bVar10 = false;
    *(undefined4 *)(this + 0x540) = 0;
    if (*(long *)(this + 0x560) == 0) goto LAB_00aab270;
LAB_00aab234:
    uVar23 = iVar12 - 2;
  }
  (**(code **)(*(long *)this + 0x528))(this);
  uVar28 = local_a0;
  uVar46 = NEON_fmov(0x3f800000,4);
  fVar26 = (float)uVar46;
  fVar32 = (float)((ulong)uVar46 >> 0x20);
  if (!bVar10) {
    uVar42 = NEON_rev64(local_a0,4);
    uVar45 = NEON_rev64(uVar42,4);
    uVar45 = uVar45 ^ (uVar45 ^ uVar42) &
                      CONCAT44((int)((uint)(this[0x418] != (FUISprite)0x0) << 0x1f) >> 0x1f,
                               (int)((uint)(this[0x418] != (FUISprite)0x0) << 0x1f) >> 0x1f);
    fVar39 = (float)uVar45;
    fVar44 = (float)(uVar45 >> 0x20);
    *(ulong *)(*(long *)(this + 0x560) + 0x10) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x490) >> 0x20) * fVar44 +
                  (float)((ulong)*(undefined8 *)(this + 0x478) >> 0x20) * (fVar32 - fVar44),
                  (float)*(undefined8 *)(this + 0x490) * fVar39 +
                  (float)*(undefined8 *)(this + 0x478) * (fVar26 - fVar39));
    cocos2d::Vec3::Vec3((Vec3 *)&local_98,0.0,0.0,0.0);
    uVar46 = local_a8;
    uVar27 = *(undefined8 *)(this + 0x468);
    uVar34 = *(undefined8 *)(this + 0x480);
    puVar14 = *(undefined8 **)(this + 0x560);
    fVar39 = (float)uVar28;
    fVar44 = (float)((ulong)uVar28 >> 0x20);
    *(undefined4 *)(puVar14 + 1) = local_90;
    *puVar14 = CONCAT44((fVar32 - fVar44) * (float)((ulong)uVar27 >> 0x20) +
                        fVar44 * (float)((ulong)uVar34 >> 0x20),
                        (fVar26 - fVar39) * (float)uVar27 + fVar39 * (float)uVar34);
    uVar45 = NEON_rev64(local_a8,4);
    uVar42 = NEON_rev64(uVar45,4);
    uVar42 = uVar42 ^ (uVar42 ^ uVar45) &
                      CONCAT44((int)((uint)(this[0x418] != (FUISprite)0x0) << 0x1f) >> 0x1f,
                               (int)((uint)(this[0x418] != (FUISprite)0x0) << 0x1f) >> 0x1f);
    fVar39 = (float)uVar42;
    fVar44 = (float)(uVar42 >> 0x20);
    *(ulong *)(*(long *)(this + 0x560) + 0x28) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x490) >> 0x20) * fVar44 +
                  (float)((ulong)*(undefined8 *)(this + 0x478) >> 0x20) * (fVar32 - fVar44),
                  (float)*(undefined8 *)(this + 0x490) * fVar39 +
                  (float)*(undefined8 *)(this + 0x478) * (fVar26 - fVar39));
    cocos2d::Vec3::Vec3((Vec3 *)&local_98,0.0,0.0,0.0);
    lVar15 = *(long *)(this + 0x560);
    fVar39 = (float)uVar46;
    fVar44 = (float)((ulong)uVar46 >> 0x20);
    *(ulong *)(lVar15 + 0x18) =
         CONCAT44((fVar32 - fVar44) * (float)((ulong)*(undefined8 *)(this + 0x468) >> 0x20) +
                  fVar44 * (float)((ulong)*(undefined8 *)(this + 0x480) >> 0x20),
                  (fVar26 - fVar39) * (float)*(undefined8 *)(this + 0x468) +
                  fVar39 * (float)*(undefined8 *)(this + 0x480));
    *(undefined4 *)(lVar15 + 0x20) = local_90;
    if (0 < (int)uVar21) {
      iVar24 = 0;
      lVar15 = 0;
      uVar45 = 0;
      do {
        if ((char)uVar45 < '\x04') {
          uVar20 = iVar24 >> 0x17;
          if (this[0x53c] == (FUISprite)0x0) {
            uVar28 = CONCAT44(-(7 - (uVar20 | 1)),-(7 - uVar20));
          }
          else {
            uVar28 = CONCAT44(-uVar20,-(uVar20 | 1));
          }
          uVar42 = NEON_ushl(0x4b0000004b,uVar28,4);
          uVar28 = NEON_scvtf(uVar42 & 0x100000001,4);
        }
        else {
          uVar28 = 0;
        }
        fVar44 = (float)uVar28;
        fVar29 = (float)((ulong)uVar28 >> 0x20);
        fVar40 = *(float *)(this + 0x494);
        fVar39 = fVar29;
        if (this[0x418] == (FUISprite)0x0) {
          fVar39 = fVar44;
        }
        fVar33 = *(float *)(this + 0x47c);
        fVar41 = fVar44;
        if (this[0x418] == (FUISprite)0x0) {
          fVar41 = fVar29;
        }
        lVar17 = *(long *)(this + 0x560);
        *(float *)(lVar17 + lVar15 + 0x40) =
             *(float *)(this + 0x490) * fVar39 + *(float *)(this + 0x478) * (1.0 - fVar39);
        *(float *)(lVar17 + lVar15 + 0x44) = fVar40 * fVar41 + fVar33 * (1.0 - fVar41);
        cocos2d::Vec3::Vec3((Vec3 *)&local_98,0.0,0.0,0.0);
        uVar28 = *(undefined8 *)(this + 0x468);
        uVar46 = *(undefined8 *)(this + 0x480);
        uVar45 = uVar45 + 1;
        lVar17 = *(long *)(this + 0x560) + lVar15;
        lVar15 = lVar15 + 0x18;
        iVar24 = iVar24 + 0x1000000;
        *(undefined4 *)(lVar17 + 0x38) = local_90;
        *(ulong *)(lVar17 + 0x30) =
             CONCAT44((fVar32 - fVar29) * (float)((ulong)uVar28 >> 0x20) +
                      fVar29 * (float)((ulong)uVar46 >> 0x20),
                      (fVar26 - fVar44) * (float)uVar28 + fVar44 * (float)uVar46);
      } while (uVar21 != uVar45);
    }
  }
  fVar44 = (float)uVar48;
  fVar29 = (float)((ulong)uVar48 >> 0x20);
  lVar15 = *(long *)(this + 0x560) + (long)*(int *)(this + 0x540) * 0x18;
  fVar39 = fVar29;
  if (this[0x418] == (FUISprite)0x0) {
    fVar39 = fVar44;
  }
  fVar41 = *(float *)(this + 0x47c);
  fVar33 = *(float *)(this + 0x494);
  fVar40 = fVar44;
  if (this[0x418] == (FUISprite)0x0) {
    fVar40 = fVar29;
  }
  *(float *)(lVar15 + -8) =
       *(float *)(this + 0x490) * fVar39 + *(float *)(this + 0x478) * (1.0 - fVar39);
  *(float *)(lVar15 + -4) = fVar33 * fVar40 + fVar41 * (1.0 - fVar40);
  cocos2d::Vec3::Vec3((Vec3 *)&local_98,0.0,0.0,0.0);
  lVar15 = *(long *)(this + 0x560) + (long)*(int *)(this + 0x540) * 0x18;
  *(ulong *)(lVar15 + -0x18) =
       CONCAT44((fVar32 - fVar29) * (float)((ulong)*(undefined8 *)(this + 0x468) >> 0x20) +
                fVar29 * (float)((ulong)*(undefined8 *)(this + 0x480) >> 0x20),
                (fVar26 - fVar44) * (float)*(undefined8 *)(this + 0x468) +
                fVar44 * (float)*(undefined8 *)(this + 0x480));
  *(undefined4 *)(lVar15 + -0x10) = local_90;
  if ((int)uVar23 < 1) {
    uVar45 = *(ulong *)(this + 0x568);
  }
  else {
    uVar45 = *(ulong *)(this + 0x568);
    uVar16 = (ulong)uVar23;
    uVar42 = 0;
    if (0xf < uVar23) {
      uVar18 = uVar16 - 1;
      uVar19 = (uVar18 & 0xffffffff) + (uVar18 & 0xffffffff) * 2;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar18;
      if (((((uVar18 >> 0x20 == 0) && (uVar19 >> 0x20 == 0)) &&
           (uVar20 = (uint)uVar19, uVar20 != 0xffffffff)) &&
          ((uVar20 < 0xfffffffe &&
           (uVar18 = uVar18 * 6, uVar18 < ~(uVar45 + 2) || uVar18 - ~(uVar45 + 2) == 0)))) &&
         ((SUB168(auVar8 * ZEXT816(6),8) == 0 &&
          ((uVar18 < ~(uVar45 + 4) || uVar18 - ~(uVar45 + 4) == 0 &&
           (uVar18 < ~uVar45 || uVar18 - ~uVar45 == 0)))))) {
        sVar30 = 7;
        sVar25 = 6;
        sVar35 = 5;
        sVar31 = 4;
        sVar37 = 3;
        sVar36 = 2;
        sVar43 = 1;
        sVar38 = 0;
        uVar28 = 0x7000600050004;
        uVar48 = 0x3000200010000;
        uVar42 = uVar16 & 0xfffffff0;
        uVar19 = 0x18;
        uVar18 = uVar42;
        do {
          sVar64 = sVar38 + 1;
          sVar65 = sVar43 + 1;
          sVar66 = sVar36 + 1;
          sVar67 = sVar37 + 1;
          sVar68 = sVar31 + 1;
          sVar69 = sVar35 + 1;
          sVar70 = sVar25 + 1;
          sVar71 = sVar30 + 1;
          sVar56 = sVar38 + 9;
          sVar57 = sVar43 + 9;
          sVar58 = sVar36 + 9;
          sVar59 = sVar37 + 9;
          sVar60 = sVar31 + 9;
          sVar61 = sVar35 + 9;
          sVar62 = sVar25 + 9;
          sVar63 = sVar30 + 9;
          sVar47 = (short)uVar48;
          sVar49 = (short)((ulong)uVar48 >> 0x10);
          sVar50 = (short)((ulong)uVar48 >> 0x20);
          sVar51 = (short)((ulong)uVar48 >> 0x30);
          sVar52 = (short)uVar28;
          sVar53 = (short)((ulong)uVar28 >> 0x10);
          sVar54 = (short)((ulong)uVar28 >> 0x20);
          sVar55 = (short)((ulong)uVar28 >> 0x30);
          sVar31 = sVar31 + 0x10;
          sVar35 = sVar35 + 0x10;
          sVar38 = sVar38 + 0x10;
          sVar43 = sVar43 + 0x10;
          uVar18 = uVar18 - 0x10;
          sVar36 = sVar36 + 0x10;
          sVar37 = sVar37 + 0x10;
          sVar25 = sVar25 + 0x10;
          sVar30 = sVar30 + 0x10;
          puVar2 = (undefined2 *)((uVar45 - 4) + (((uVar19 & 0xfffffff8) >> 3) << 4 | 4));
          puVar3 = (undefined2 *)((uVar45 - 4) + ((ulong)((int)uVar19 - 0x18U >> 4) << 5 | 4));
          uVar48 = CONCAT26(sVar51 + 0x10,
                            CONCAT24(sVar50 + 0x10,CONCAT22(sVar49 + 0x10,sVar47 + 0x10)));
          uVar28 = CONCAT26(sVar55 + 0x10,
                            CONCAT24(sVar54 + 0x10,CONCAT22(sVar53 + 0x10,sVar52 + 0x10)));
          uVar19 = uVar19 + 0x30;
          *puVar3 = 0;
          puVar3[1] = sVar64;
          puVar3[2] = sVar47 + 2;
          puVar3[3] = 0;
          puVar3[4] = sVar65;
          puVar3[5] = sVar49 + 2;
          puVar3[6] = 0;
          puVar3[7] = sVar66;
          puVar3[8] = sVar50 + 2;
          puVar3[9] = 0;
          puVar3[10] = sVar67;
          puVar3[0xb] = sVar51 + 2;
          puVar3[0xc] = 0;
          puVar3[0xd] = sVar68;
          puVar3[0xe] = sVar52 + 2;
          puVar3[0xf] = 0;
          puVar3[0x10] = sVar69;
          puVar3[0x11] = sVar53 + 2;
          puVar3[0x12] = 0;
          puVar3[0x13] = sVar70;
          puVar3[0x14] = sVar54 + 2;
          puVar3[0x15] = 0;
          puVar3[0x16] = sVar71;
          puVar3[0x17] = sVar55 + 2;
          *puVar2 = 0;
          puVar2[1] = sVar56;
          puVar2[2] = sVar47 + 10;
          puVar2[3] = 0;
          puVar2[4] = sVar57;
          puVar2[5] = sVar49 + 10;
          puVar2[6] = 0;
          puVar2[7] = sVar58;
          puVar2[8] = sVar50 + 10;
          puVar2[9] = 0;
          puVar2[10] = sVar59;
          puVar2[0xb] = sVar51 + 10;
          puVar2[0xc] = 0;
          puVar2[0xd] = sVar60;
          puVar2[0xe] = sVar52 + 10;
          puVar2[0xf] = 0;
          puVar2[0x10] = sVar61;
          puVar2[0x11] = sVar53 + 10;
          puVar2[0x12] = 0;
          puVar2[0x13] = sVar62;
          puVar2[0x14] = sVar54 + 10;
          puVar2[0x15] = 0;
          puVar2[0x16] = sVar63;
          puVar2[0x17] = sVar55 + 10;
        } while (uVar18 != 0);
        if (uVar42 == uVar16) goto LAB_00aab768;
      }
    }
    uVar20 = (int)uVar42 * 3;
    do {
      sVar25 = (short)uVar42;
      uVar42 = uVar42 + 1;
      *(undefined2 *)(uVar45 + (ulong)uVar20 * 2) = 0;
      uVar22 = uVar20 + 1;
      uVar21 = uVar20 + 2;
      uVar20 = uVar20 + 3;
      *(short *)(uVar45 + (ulong)uVar22 * 2) = (short)uVar42;
      *(short *)(uVar45 + (ulong)uVar21 * 2) = sVar25 + 2;
    } while (uVar16 != uVar42);
  }
LAB_00aab768:
  *(ulong *)(this + 0x550) = uVar45;
  *(undefined8 *)(this + 0x548) = *(undefined8 *)(this + 0x560);
  *(undefined4 *)(this + 0x558) = *(undefined4 *)(this + 0x540);
  *(uint *)(this + 0x55c) = uVar23 * 3;
  if (*(long *)(lVar9 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

