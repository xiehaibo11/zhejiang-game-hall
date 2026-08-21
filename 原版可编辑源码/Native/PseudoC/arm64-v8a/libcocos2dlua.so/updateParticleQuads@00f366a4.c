
/* cocos2d::ParticleSystemQuad::updateParticleQuads() */

void cocos2d::ParticleSystemQuad::updateParticleQuads(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  Node *in_x0;
  long lVar6;
  Node *pNVar7;
  Node *pNVar8;
  undefined1 *puVar9;
  long lVar10;
  float *pfVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float in_s1;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  long local_130;
  float local_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  undefined8 local_110;
  float local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  Mat4 aMStack_f0 [64];
  long local_b0;
  
  lVar5 = tpidr_el0;
  local_b0 = *(long *)(lVar5 + 0x28);
  if (*(int *)(in_x0 + 0x478) < 1) goto LAB_00f36c94;
  if (*(int *)(in_x0 + 0x528) == 1) {
    fVar19 = *(float *)(in_x0 + 0x50);
    fVar20 = *(float *)(in_x0 + 0x54);
    lVar6 = *(long *)(in_x0 + 0x460);
    if (lVar6 != 0) goto LAB_00f36728;
LAB_00f36758:
    local_130 = *(long *)(in_x0 + 0x530);
    pNVar7 = (Node *)&Vec2::ZERO;
    pNVar8 = (Node *)((long)&Vec2::ZERO + 4);
  }
  else {
    fVar20 = 0.0;
    fVar19 = 0.0;
    if (*(int *)(in_x0 + 0x528) == 0) {
      fVar20 = in_s1;
      fVar19 = (float)Node::convertToWorldSpace(in_x0,(Vec2 *)&Vec2::ZERO);
    }
    lVar6 = *(long *)(in_x0 + 0x460);
    if (lVar6 == 0) goto LAB_00f36758;
LAB_00f36728:
    local_130 = TextureAtlas::getQuads(*(TextureAtlas **)(lVar6 + 0x300));
    pNVar7 = in_x0 + 0x50;
    local_130 = local_130 + (long)*(int *)(in_x0 + 0x468) * 0x60;
    pNVar8 = in_x0 + 0x54;
  }
  fVar22 = *(float *)pNVar7;
  fVar23 = *(float *)pNVar8;
  if (*(int *)(in_x0 + 0x528) == 1) {
    iVar12 = *(int *)(in_x0 + 0x478);
    if (0 < iVar12) {
      lVar14 = *(long *)(in_x0 + 0x3d8);
      lVar15 = *(long *)(in_x0 + 0x3c8);
      lVar13 = *(long *)(in_x0 + 0x370);
      lVar16 = *(long *)(in_x0 + 0x368);
      lVar17 = *(long *)(in_x0 + 0x380);
      lVar18 = *(long *)(in_x0 + 0x378);
      lVar6 = 0;
      pfVar11 = (float *)(local_130 + 0x30);
      do {
        lVar10 = lVar6 * 4;
        fVar24 = *(float *)(lVar15 + lVar10) * 0.5;
        fVar28 = *(float *)(lVar15 + lVar10) * -0.5;
        fVar25 = (*(float *)(lVar16 + lVar10) - (fVar19 - *(float *)(lVar18 + lVar10))) + fVar22;
        fVar27 = (*(float *)(lVar13 + lVar10) - (fVar20 - *(float *)(lVar17 + lVar10))) + fVar23;
        sincosf(*(float *)(lVar14 + lVar10) * -0.017453292,&fStack_114,&local_118);
        lVar6 = lVar6 + 1;
        fVar26 = local_118 * fVar28;
        fVar28 = fStack_114 * fVar28;
        fVar21 = fVar24 * local_118;
        fVar24 = fVar24 * fStack_114;
        pfVar11[-6] = fVar25 + (fVar26 - fVar28);
        pfVar11[-5] = fVar27 + fVar28 + fVar26;
        pfVar11[6] = fVar25 + (fVar21 - fVar28);
        pfVar11[7] = fVar27 + fVar24 + fVar26;
        pfVar11[-0xc] = fVar25 + (fVar26 - fVar24);
        pfVar11[-0xb] = fVar27 + fVar28 + fVar21;
        *pfVar11 = fVar25 + (fVar21 - fVar24);
        pfVar11[1] = fVar27 + fVar24 + fVar21;
        pfVar11 = pfVar11 + 0x18;
      } while ((int)lVar6 < iVar12);
    }
  }
  else if (*(int *)(in_x0 + 0x528) == 0) {
    Vec3::Vec3((Vec3 *)&local_100,fVar19,fVar20,0.0);
    (**(code **)(*(long *)in_x0 + 0x448))(aMStack_f0);
    Mat4::transformVector(aMStack_f0,local_100,fStack_fc,local_f8,1.0,(Vec3 *)&local_100);
    Vec3::Vec3((Vec3 *)&local_110);
    if (0 < *(int *)(in_x0 + 0x478)) {
      lVar13 = *(long *)(in_x0 + 0x3d8);
      lVar14 = *(long *)(in_x0 + 0x3c8);
      lVar15 = *(long *)(in_x0 + 0x370);
      lVar16 = *(long *)(in_x0 + 0x368);
      lVar17 = *(long *)(in_x0 + 0x380);
      lVar18 = *(long *)(in_x0 + 0x378);
      lVar6 = 0;
      pfVar11 = (float *)(local_130 + 0x30);
      do {
        lVar10 = lVar6 * 4;
        local_110._4_4_ = *(float *)(lVar17 + lVar10);
        local_110._0_4_ = *(float *)(lVar18 + lVar10);
        local_108 = 0.0;
        Mat4::transformVector
                  (aMStack_f0,(float)local_110,local_110._4_4_,0.0,1.0,(Vec3 *)&local_110);
        local_110._0_4_ = local_100 - (float)local_110;
        local_110._4_4_ = fStack_fc - local_110._4_4_;
        local_108 = local_f8 - local_108;
        fVar26 = *(float *)(lVar16 + lVar10) - ((float)local_110 - fVar22);
        fVar28 = *(float *)(lVar15 + lVar10) - (local_110._4_4_ - fVar23);
        fVar19 = *(float *)(lVar14 + lVar10) * 0.5;
        fVar24 = *(float *)(lVar14 + lVar10) * -0.5;
        sincosf(*(float *)(lVar13 + lVar10) * -0.017453292,&fStack_11c,&local_120);
        lVar6 = lVar6 + 1;
        fVar21 = local_120 * fVar24;
        fVar24 = fStack_11c * fVar24;
        fVar20 = fVar19 * local_120;
        fVar19 = fVar19 * fStack_11c;
        pfVar11[-6] = fVar26 + (fVar21 - fVar24);
        pfVar11[-5] = fVar28 + fVar24 + fVar21;
        pfVar11[6] = fVar26 + (fVar20 - fVar24);
        pfVar11[7] = fVar28 + fVar19 + fVar21;
        pfVar11[-0xc] = fVar26 + (fVar21 - fVar19);
        pfVar11[-0xb] = fVar28 + fVar24 + fVar20;
        *pfVar11 = fVar26 + (fVar20 - fVar19);
        pfVar11[1] = fVar28 + fVar19 + fVar20;
        pfVar11 = pfVar11 + 0x18;
      } while ((int)lVar6 < *(int *)(in_x0 + 0x478));
    }
    Mat4::~Mat4(aMStack_f0);
    iVar12 = *(int *)(in_x0 + 0x478);
  }
  else {
    iVar12 = *(int *)(in_x0 + 0x478);
    if (0 < iVar12) {
      lVar13 = *(long *)(in_x0 + 0x3d8);
      lVar14 = *(long *)(in_x0 + 0x3c8);
      lVar15 = *(long *)(in_x0 + 0x370);
      lVar16 = *(long *)(in_x0 + 0x368);
      lVar6 = 0;
      pfVar11 = (float *)(local_130 + 0x30);
      do {
        lVar17 = lVar6 * 4;
        fVar26 = *(float *)(lVar16 + lVar17) + fVar22;
        fVar28 = *(float *)(lVar15 + lVar17) + fVar23;
        fVar19 = *(float *)(lVar14 + lVar17) * 0.5;
        fVar24 = *(float *)(lVar14 + lVar17) * -0.5;
        sincosf(*(float *)(lVar13 + lVar17) * -0.017453292,&fStack_124,&local_128);
        lVar6 = lVar6 + 1;
        fVar21 = local_128 * fVar24;
        fVar24 = fStack_124 * fVar24;
        fVar20 = fVar19 * local_128;
        fVar19 = fVar19 * fStack_124;
        pfVar11[-6] = fVar26 + (fVar21 - fVar24);
        pfVar11[-5] = fVar28 + fVar24 + fVar21;
        pfVar11[6] = fVar26 + (fVar20 - fVar24);
        pfVar11[7] = fVar28 + fVar19 + fVar21;
        pfVar11[-0xc] = fVar26 + (fVar21 - fVar19);
        pfVar11[-0xb] = fVar28 + fVar24 + fVar20;
        *pfVar11 = fVar26 + (fVar20 - fVar19);
        pfVar11[1] = fVar28 + fVar19 + fVar20;
        pfVar11 = pfVar11 + 0x18;
      } while ((int)lVar6 < iVar12);
    }
  }
  lVar6 = *(long *)(in_x0 + 0x388);
  lVar13 = *(long *)(in_x0 + 0x390);
  lVar14 = *(long *)(in_x0 + 0x398);
  lVar15 = *(long *)(in_x0 + 0x3a0);
  if (in_x0[0x520] == (Node)0x0) {
    if (0 < iVar12) {
      lVar16 = 0;
      puVar9 = (undefined1 *)(local_130 + 0x3c);
      do {
        lVar17 = lVar16 * 4;
        fVar20 = *(float *)(lVar13 + lVar17);
        fVar19 = *(float *)(lVar14 + lVar17);
        fVar22 = *(float *)(lVar15 + lVar17);
        lVar16 = lVar16 + 1;
        uVar1 = (undefined1)(int)(*(float *)(lVar6 + lVar17) * 255.0);
        puVar9[-0x18] = uVar1;
        uVar2 = (undefined1)(int)(fVar20 * 255.0);
        puVar9[-0x17] = uVar2;
        uVar3 = (undefined1)(int)(fVar19 * 255.0);
        puVar9[-0x16] = uVar3;
        uVar4 = (undefined1)(int)(fVar22 * 255.0);
        puVar9[-0x15] = uVar4;
        puVar9[0x18] = uVar1;
        puVar9[0x19] = uVar2;
        puVar9[0x1a] = uVar3;
        puVar9[0x1b] = uVar4;
        puVar9[-0x30] = uVar1;
        puVar9[-0x2f] = uVar2;
        puVar9[-0x2e] = uVar3;
        puVar9[-0x2d] = uVar4;
        *puVar9 = uVar1;
        puVar9[1] = uVar2;
        puVar9[2] = uVar3;
        puVar9[3] = uVar4;
        puVar9 = puVar9 + 0x60;
      } while ((int)lVar16 < iVar12);
    }
  }
  else if (0 < iVar12) {
    lVar16 = 0;
    puVar9 = (undefined1 *)(local_130 + 0x3c);
    do {
      lVar17 = lVar16 * 4;
      fVar20 = *(float *)(lVar6 + lVar17);
      fVar19 = *(float *)(lVar15 + lVar17);
      fVar22 = *(float *)(lVar13 + lVar17);
      fVar23 = *(float *)(lVar14 + lVar17);
      lVar16 = lVar16 + 1;
      uVar1 = (undefined1)(int)(fVar19 * 255.0);
      puVar9[-0x15] = uVar1;
      puVar9[0x1b] = uVar1;
      puVar9[-0x2d] = uVar1;
      puVar9[3] = uVar1;
      uVar1 = (undefined1)(int)(fVar20 * fVar19 * 255.0);
      puVar9[-0x18] = uVar1;
      uVar2 = (undefined1)(int)(fVar19 * fVar22 * 255.0);
      puVar9[-0x17] = uVar2;
      uVar3 = (undefined1)(int)(fVar19 * fVar23 * 255.0);
      puVar9[-0x16] = uVar3;
      puVar9[0x18] = uVar1;
      puVar9[0x19] = uVar2;
      puVar9[0x1a] = uVar3;
      puVar9[-0x30] = uVar1;
      puVar9[-0x2f] = uVar2;
      puVar9[-0x2e] = uVar3;
      *puVar9 = uVar1;
      puVar9[1] = uVar2;
      puVar9[2] = uVar3;
      puVar9 = puVar9 + 0x60;
    } while ((int)lVar16 < iVar12);
  }
LAB_00f36c94:
  if (*(long *)(lVar5 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

