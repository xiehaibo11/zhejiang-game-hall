
/* dragonBones::CCSlot::_updateFrame() */

void __thiscall dragonBones::CCSlot::_updateFrame(CCSlot *this)

{
  CCSlot *pCVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  short sVar7;
  short sVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  Texture2D *this_00;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  float *pfVar15;
  undefined8 *puVar16;
  float *pfVar17;
  undefined8 *puVar18;
  float *pfVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  if ((*(long *)(this + 0xd8) == 0) || (*(long *)(this + 0x170) != *(long *)(this + 0xe8))) {
    lVar23 = 0;
    iVar10 = *(int *)(this + 0x100);
  }
  else {
    lVar23 = *(long *)(*(long *)(this + 0xd8) + 0x40);
    iVar10 = *(int *)(this + 0x100);
  }
  if (iVar10 < 0) {
    return;
  }
  lVar24 = *(long *)(this + 0x168);
  if (lVar24 == 0) {
    return;
  }
  if (*(long *)(this + 0x170) == 0) {
    return;
  }
  if (*(SpriteFrame **)(lVar24 + 0x48) == (SpriteFrame *)0x0) {
    return;
  }
  this_00 = (Texture2D *)
            cocos2d::middleware::SpriteFrame::getTexture(*(SpriteFrame **)(lVar24 + 0x48));
  iVar10 = cocos2d::middleware::Texture2D::getPixelsWide(this_00);
  iVar11 = cocos2d::middleware::Texture2D::getPixelsHigh(this_00);
  if (lVar23 == 0) {
    adjustTriangles(this,4,6);
    fVar32 = *(float *)(lVar24 + 0x28);
    fVar28 = *(float *)(lVar24 + 0x2c);
    fVar33 = *(float *)(lVar24 + 0x30);
    fVar29 = *(float *)(lVar24 + 0x34);
    puVar16 = *(undefined8 **)(this + 0x1d0);
    puVar18 = *(undefined8 **)(this + 0x1d8);
    fVar31 = fVar32 / (float)iVar10;
    fVar30 = fVar28 / (float)iVar11;
    *(float *)((long)puVar16 + 0x14) = fVar33;
    *(float *)((long)puVar16 + 0x3c) = fVar33;
    *(float *)(puVar16 + 8) = fVar29;
    fVar28 = (fVar28 + fVar29) / (float)iVar11;
    fVar32 = (fVar32 + fVar33) / (float)iVar10;
    *(undefined4 *)(puVar16 + 5) = 0;
    *(undefined4 *)(puVar16 + 3) = 0;
    *puVar16 = 0;
    *(float *)((long)puVar16 + 0x2c) = fVar29;
    *(float *)(puVar16 + 6) = fVar31;
    *(float *)((long)puVar16 + 0x34) = fVar30;
    *(float *)(puVar16 + 1) = fVar31;
    *(float *)((long)puVar16 + 0xc) = fVar28;
    *(float *)((long)puVar16 + 0x1c) = fVar32;
    *(float *)(puVar16 + 4) = fVar28;
    *(float *)((long)puVar16 + 0x44) = fVar32;
    *(float *)(puVar16 + 9) = fVar30;
    *puVar18 = 0x1000200010000;
    *(undefined4 *)(puVar18 + 1) = 0x20003;
    goto LAB_00d52820;
  }
  uVar6 = *(uint *)(lVar23 + 4);
  lVar3 = *(long *)(*(long *)(lVar23 + 8) + 0xb0);
  lVar4 = *(long *)(*(long *)(lVar23 + 8) + 0xb8);
  sVar7 = *(short *)(lVar3 + (ulong)(uVar6 + 1) * 2);
  sVar8 = *(short *)(lVar3 + (ulong)(uVar6 + 2) * 2);
  uVar22 = (uint)*(short *)(lVar3 + (ulong)uVar6 * 2);
  uVar6 = (int)sVar7 + sVar7 * 2;
  uVar21 = (ulong)uVar6;
  iVar2 = sVar8 + 0x10000;
  if (-1 < sVar8) {
    iVar2 = (int)sVar8;
  }
  adjustTriangles(this,uVar22,uVar6);
  uVar5 = *(ulong *)(this + 0x1d8);
  pCVar1 = this + 500;
  *(undefined8 *)(this + 0x1fc) = 0xc97423f0c97423f0;
  *(undefined8 *)pCVar1 = 0x497423f0497423f0;
  if (uVar22 == 0) {
    fVar30 = 999999.0;
    fVar33 = -999999.0;
    fVar28 = fVar33;
    fVar32 = fVar30;
  }
  else {
    uVar13 = 0;
    pfVar15 = (float *)(*(long *)(this + 0x1d0) + 8);
    pfVar17 = (float *)(lVar4 + (long)iVar2 * 4 + 4);
    pfVar19 = (float *)(lVar4 + (ulong)(iVar2 + uVar22 * 2) * 4 + 4);
    do {
      fVar31 = pfVar17[-1];
      fVar32 = pfVar19[-1];
      fVar30 = *pfVar19;
      fVar29 = -*pfVar17;
      pfVar15[-2] = fVar31;
      pfVar15[-1] = fVar29;
      fVar34 = *(float *)(lVar24 + 0x34);
      fVar33 = *(float *)(lVar24 + 0x2c);
      fVar28 = fVar30;
      if (*(char *)(lVar24 + 0xd) != '\0') {
        fVar28 = fVar32;
        fVar32 = 1.0 - fVar30;
      }
      *pfVar15 = (*(float *)(lVar24 + 0x28) + fVar32 * *(float *)(lVar24 + 0x30)) / (float)iVar10;
      pfVar15[1] = (fVar33 + fVar28 * fVar34) / (float)iVar11;
      pfVar15[2] = cocos2d::Color4B::WHITE;
      fVar30 = *(float *)pCVar1;
      if (fVar31 < *(float *)pCVar1) {
        *(float *)pCVar1 = fVar31;
        fVar30 = fVar31;
      }
      fVar33 = *(float *)(this + 0x1fc);
      if (*(float *)(this + 0x1fc) < fVar31) {
        *(float *)(this + 0x1fc) = fVar31;
        fVar33 = fVar31;
      }
      fVar32 = *(float *)(this + 0x1f8);
      if (fVar29 < *(float *)(this + 0x1f8)) {
        *(float *)(this + 0x1f8) = fVar29;
        fVar32 = fVar29;
      }
      fVar28 = *(float *)(this + 0x200);
      if (*(float *)(this + 0x200) < fVar29) {
        *(float *)(this + 0x200) = fVar29;
        fVar28 = fVar29;
      }
      uVar13 = uVar13 + 2;
      pfVar19 = pfVar19 + 2;
      pfVar17 = pfVar17 + 2;
      pfVar15 = pfVar15 + 5;
    } while (uVar13 < uVar22 * 2);
  }
  *(float *)(this + 0x1fc) = fVar33 - fVar30;
  *(float *)(this + 0x200) = fVar28 - fVar32;
  if (sVar7 != 0) {
    uVar13 = uVar21;
    if (uVar21 < 2) {
      uVar13 = 1;
    }
    uVar12 = (ulong)(*(int *)(lVar23 + 4) + 4);
    if (uVar13 < 0x10) {
LAB_00d527e8:
      uVar14 = 0;
    }
    else {
      uVar14 = uVar21;
      if (uVar21 < 2) {
        uVar14 = 1;
      }
      uVar20 = lVar3 + uVar12 * 2;
      if ((uVar5 < lVar3 + (uVar14 + uVar12) * 2) && (uVar20 < uVar5 + uVar14 * 2))
      goto LAB_00d527e8;
      uVar14 = uVar13 & 0xfffffff0;
      puVar16 = (undefined8 *)(uVar20 + 0x10);
      puVar18 = (undefined8 *)(uVar5 + 0x10);
      uVar20 = uVar14;
      do {
        puVar9 = puVar16 + -1;
        uVar25 = puVar16[-2];
        uVar27 = puVar16[1];
        uVar26 = *puVar16;
        puVar16 = puVar16 + 4;
        uVar20 = uVar20 - 0x10;
        puVar18[-1] = *puVar9;
        puVar18[-2] = uVar25;
        puVar18[1] = uVar27;
        *puVar18 = uVar26;
        puVar18 = puVar18 + 4;
      } while (uVar20 != 0);
      if (uVar13 == uVar14) goto LAB_00d52808;
    }
    do {
      lVar24 = uVar14 * 2;
      uVar14 = uVar14 + 1;
      *(undefined2 *)(uVar5 + lVar24) = *(undefined2 *)(lVar3 + uVar12 * 2 + lVar24);
    } while (uVar14 < uVar21);
  }
LAB_00d52808:
  if (*(long *)(lVar23 + 0x10) != 0) {
    (**(code **)(*(long *)this + 0x70))(this);
  }
LAB_00d52820:
  memcpy(*(void **)(this + 0x1e8),*(void **)(this + 0x1d0),(long)*(int *)(this + 0x1e0) * 0x14);
  *(undefined2 *)(this + 0xfa) = 0x101;
  this[0x90] = (CCSlot)0x1;
  return;
}

