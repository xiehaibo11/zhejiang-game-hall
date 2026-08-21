
/* cocos2d::ParticleSystemQuad::initTexCoordsWithRect(cocos2d::Rect const&) */

void __thiscall
cocos2d::ParticleSystemQuad::initTexCoordsWithRect(ParticleSystemQuad *this,Rect *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  Rect local_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar17 = *(float *)param_1;
  lVar4 = Director::getInstance();
  fVar13 = *(float *)(lVar4 + 0x1a0);
  fVar19 = *(float *)(param_1 + 4);
  lVar4 = Director::getInstance();
  fVar14 = *(float *)(lVar4 + 0x1a0);
  fVar20 = *(float *)(param_1 + 8);
  lVar4 = Director::getInstance();
  fVar15 = *(float *)(lVar4 + 0x1a0);
  fVar21 = *(float *)(param_1 + 0xc);
  lVar4 = Director::getInstance();
  Rect::Rect(local_68,fVar17 * fVar13,fVar19 * fVar14,fVar20 * fVar15,
             fVar21 * *(float *)(lVar4 + 0x1a0));
  if (*(Texture2D **)(this + 0x510) == (Texture2D *)0x0) {
    uVar18 = *(undefined8 *)(param_1 + 8);
  }
  else {
    uVar2 = Texture2D::getPixelsWide(*(Texture2D **)(this + 0x510));
    uVar3 = Texture2D::getPixelsHigh(*(Texture2D **)(this + 0x510));
    uVar18 = NEON_scvtf(CONCAT44(uVar3,uVar2),4);
  }
  if (*(long *)(this + 0x460) == 0) {
    lVar4 = *(long *)(this + 0x530);
    uVar5 = *(uint *)(this + 0x508);
    uVar6 = 0;
    if (uVar5 == 0) goto LAB_00f3646c;
  }
  else {
    lVar4 = TextureAtlas::getQuads(*(TextureAtlas **)(*(long *)(this + 0x460) + 0x300));
    uVar6 = *(uint *)(this + 0x468);
    uVar5 = *(int *)(this + 0x508) + uVar6;
    if (uVar5 <= uVar6) goto LAB_00f3646c;
  }
  uVar10 = (ulong)uVar6;
  fVar13 = (float)local_68._0_8_ / (float)uVar18;
  fVar17 = (float)((ulong)uVar18 >> 0x20);
  fVar14 = SUB84(local_68._0_8_,4) / fVar17;
  uVar16 = CONCAT44(fVar14,fVar13);
  uVar7 = uVar5 - uVar10;
  fVar15 = fVar13 + (float)local_68._8_8_ / (float)uVar18;
  fVar17 = fVar14 + SUB84(local_68._8_8_,4) / fVar17;
  uVar18 = CONCAT44(fVar17,fVar15);
  if (1 < uVar7) {
    uVar9 = uVar7 & 0xfffffffffffffffe;
    puVar11 = (undefined8 *)(lVar4 + uVar10 * 0x60 + 0x70);
    uVar12 = uVar9;
    do {
      *(float *)(puVar11 + -9) = fVar13;
      *(float *)((long)puVar11 + -0x44) = fVar17;
      *(float *)(puVar11 + 3) = fVar13;
      *(float *)((long)puVar11 + 0x1c) = fVar17;
      puVar11[-3] = uVar18;
      puVar11[9] = uVar18;
      puVar11[-0xc] = uVar16;
      *puVar11 = uVar16;
      *(float *)(puVar11 + -6) = fVar15;
      *(float *)((long)puVar11 + -0x2c) = fVar14;
      *(float *)(puVar11 + 6) = fVar15;
      *(float *)((long)puVar11 + 0x34) = fVar14;
      uVar12 = uVar12 - 2;
      puVar11 = puVar11 + 0x18;
    } while (uVar12 != 0);
    uVar10 = uVar9 + uVar10;
    if (uVar7 == uVar9) goto LAB_00f3646c;
  }
  pfVar8 = (float *)(lVar4 + uVar10 * 0x60 + 0x2c);
  lVar4 = uVar5 - uVar10;
  do {
    pfVar8[-1] = fVar13;
    *pfVar8 = fVar17;
    *(undefined8 *)(pfVar8 + 0xb) = uVar18;
    *(undefined8 *)(pfVar8 + -7) = uVar16;
    pfVar8[5] = fVar15;
    pfVar8[6] = fVar14;
    lVar4 = lVar4 + -1;
    pfVar8 = pfVar8 + 0x18;
  } while (lVar4 != 0);
LAB_00f3646c:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

