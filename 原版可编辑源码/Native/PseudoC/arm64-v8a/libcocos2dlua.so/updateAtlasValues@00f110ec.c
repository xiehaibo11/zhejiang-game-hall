
/* cocos2d::LabelAtlas::updateAtlasValues() */

void __thiscall cocos2d::LabelAtlas::updateAtlasValues(LabelAtlas *this)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  Texture2D *this_00;
  long lVar5;
  TextureAtlas *this_01;
  float *pfVar6;
  ulong uVar7;
  LabelAtlas *pLVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  float local_8c;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  if (*(int *)(this + 0x300) != 0) {
    if (((byte)this[0x3f0] & 1) == 0) {
      uVar7 = (ulong)((byte)this[0x3f0] >> 1);
      pLVar8 = this + 0x3f1;
    }
    else {
      uVar7 = *(ulong *)(this + 0x3f8);
      pLVar8 = *(LabelAtlas **)(this + 0x400);
    }
    this_00 = (Texture2D *)TextureAtlas::getTexture(*(TextureAtlas **)(this + 0x318));
    iVar3 = Texture2D::getPixelsWide(this_00);
    iVar4 = Texture2D::getPixelsHigh(this_00);
    iVar14 = *(int *)(this + 0x308);
    lVar5 = Director::getInstance();
    fVar15 = *(float *)(lVar5 + 0x1a0);
    iVar17 = *(int *)(this + 0x30c);
    lVar5 = Director::getInstance();
    if (this[0x33c] == (LabelAtlas)0x0) {
      fVar15 = fVar15 * (float)iVar14;
      fVar16 = *(float *)(lVar5 + 0x1a0) * (float)iVar17;
    }
    else {
      fVar15 = (float)*(int *)(this + 0x308);
      fVar16 = (float)*(int *)(this + 0x30c);
    }
    lVar5 = TextureAtlas::getQuads(*(TextureAtlas **)(this + 0x318));
    if (0 < (long)uVar7) {
      uVar9 = 0;
      pfVar6 = (float *)(lVar5 + 0x5c);
      do {
        iVar14 = *(int *)(this + 0x300);
        uVar1 = (uint)(byte)pLVar8[uVar9] - (uint)(byte)this[0x408] & 0xff;
        iVar17 = 0;
        if (iVar14 != 0) {
          iVar17 = (int)uVar1 / iVar14;
        }
        fVar10 = (fVar16 * (float)iVar17) / (float)iVar4;
        fVar11 = (fVar15 * (float)(int)(uVar1 - iVar17 * iVar14)) / (float)iVar3;
        fVar12 = fVar16 / (float)iVar4 + fVar10;
        fVar13 = fVar15 / (float)iVar3 + fVar11;
        pfVar6[-0x13] = fVar11;
        pfVar6[-0x12] = fVar10;
        pfVar6[-0xd] = fVar11;
        pfVar6[-0xc] = fVar12;
        pfVar6[-1] = fVar13;
        *pfVar6 = fVar12;
        pfVar6[-7] = fVar13;
        pfVar6[-6] = fVar10;
        iVar14 = *(int *)(this + 0x308);
        pfVar6[-0x10] = 0.0;
        pfVar6[-0xf] = 0.0;
        pfVar6[-4] = 0.0;
        pfVar6[-3] = 0.0;
        lVar5 = uVar9 * (long)iVar14;
        fVar10 = (float)lVar5;
        fVar11 = (float)(lVar5 + iVar14);
        pfVar6[-0x11] = fVar10;
        pfVar6[-0x17] = fVar10;
        pfVar6[-5] = fVar11;
        iVar14 = *(int *)(this + 0x30c);
        pfVar6[-0x15] = 0.0;
        pfVar6[-9] = 0.0;
        pfVar6[-0x16] = (float)iVar14;
        pfVar6[-0xb] = fVar11;
        pfVar6[-10] = (float)iVar14;
        Color4B::Color4B((Color4B *)&local_8c,(uchar)this[0x21a],(uchar)this[0x21b],
                         (uchar)this[0x21c],(uchar)this[0x218]);
        uVar9 = uVar9 + 1;
        pfVar6[-0x14] = local_8c;
        pfVar6[-8] = local_8c;
        pfVar6[-0xe] = local_8c;
        pfVar6[-2] = local_8c;
        pfVar6 = pfVar6 + 0x18;
      } while (uVar7 != uVar9);
      if (0 < (long)uVar7) {
        this_01 = *(TextureAtlas **)(this + 0x318);
        this_01[0x3c] = (TextureAtlas)0x1;
        lVar5 = TextureAtlas::getTotalQuads(this_01);
        if (lVar5 < (long)uVar7) {
          TextureAtlas::increaseTotalQuadsWith
                    (*(TextureAtlas **)(this + 0x318),(long)((int)uVar7 - (int)lVar5));
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

