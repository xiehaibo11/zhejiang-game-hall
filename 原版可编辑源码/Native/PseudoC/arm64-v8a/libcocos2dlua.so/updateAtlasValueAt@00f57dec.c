
/* cocos2d::TileMapAtlas::updateAtlasValueAt(cocos2d::Vec2 const&, cocos2d::Color3B const&, int) */

void __thiscall
cocos2d::TileMapAtlas::updateAtlasValueAt
          (TileMapAtlas *this,Vec2 *param_1,Color3B *param_2,int param_3)

{
  Color3B CVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  Texture2D *pTVar6;
  long lVar7;
  TextureAtlas *this_00;
  float *pfVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float local_8c;
  long local_88;
  
                    /* try { // try from 00f57dec to 01057e03 has its CatchHandler @ 00f57f88 */
                    /* try { // try from 00f57e08 to 01057e17 has its CatchHandler @ 00f57f70 */
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00f57e34 to 01057e3b has its CatchHandler @ 00f57fd8 */
  lVar5 = TextureAtlas::getQuads(*(TextureAtlas **)(this + 0x318));
  CVar1 = *param_2;
  iVar11 = *(int *)(this + 0x300);
  iVar13 = 0;
  if (iVar11 != 0) {
    iVar13 = (int)(uint)(byte)CVar1 / iVar11;
  }
  iVar17 = (int)(float)*(undefined8 *)param_1;
  iVar18 = (int)(float)((ulong)*(undefined8 *)param_1 >> 0x20);
  pTVar6 = (Texture2D *)TextureAtlas::getTexture(*(TextureAtlas **)(this + 0x318));
  iVar3 = Texture2D::getPixelsWide(pTVar6);
  pTVar6 = (Texture2D *)TextureAtlas::getTexture(*(TextureAtlas **)(this + 0x318));
  iVar4 = Texture2D::getPixelsHigh(pTVar6);
  iVar9 = *(int *)(this + 0x308);
  lVar7 = Director::getInstance();
  iVar14 = *(int *)(this + 0x30c);
  fVar19 = *(float *)(lVar7 + 0x1a0) * (float)iVar9;
  lVar7 = Director::getInstance();
  fVar10 = *(float *)(lVar7 + 0x1a0) * (float)iVar14;
  fVar15 = (fVar19 * (float)(int)((uint)(byte)CVar1 - iVar13 * iVar11)) / (float)iVar3;
  fVar16 = (fVar10 * (float)iVar13) / (float)iVar4;
  pfVar8 = (float *)(lVar5 + (long)param_3 * 0x60);
  fVar19 = fVar19 / (float)iVar3 + fVar15;
  fVar10 = fVar10 / (float)iVar4 + fVar16;
  pfVar8[4] = fVar15;
  pfVar8[5] = fVar16;
  pfVar8[0x10] = fVar19;
  pfVar8[0x11] = fVar16;
  pfVar8[10] = fVar15;
  pfVar8[0xb] = fVar10;
  pfVar8[0x16] = fVar19;
  pfVar8[0x17] = fVar10;
                    /* try { // try from 00f57ee0 to 01057f67 has its CatchHandler @ 00f57fc4 */
  uVar12 = *(undefined8 *)(this + 0x308);
  pfVar8[8] = 0.0;
  pfVar8[0x14] = 0.0;
  iVar11 = (int)uVar12;
  iVar13 = (int)((ulong)uVar12 >> 0x20);
  fVar10 = (float)(iVar11 * iVar17);
  uVar12 = NEON_scvtf(CONCAT44(iVar13 + iVar13 * iVar18,iVar11 + iVar11 * iVar17),4);
  fVar15 = (float)(iVar13 * iVar18);
  *pfVar8 = fVar10;
  pfVar8[6] = fVar10;
  pfVar8[7] = fVar15;
  pfVar8[0x12] = (float)uVar12;
  pfVar8[0x13] = fVar15;
  pfVar8[1] = (float)((ulong)uVar12 >> 0x20);
  pfVar8[2] = 0.0;
  *(undefined8 *)(pfVar8 + 0xc) = uVar12;
  pfVar8[0xe] = 0.0;
  Color4B::Color4B((Color4B *)&local_8c,(uchar)this[0x21a],(uchar)this[0x21b],(uchar)this[0x21c],
                   (uchar)this[0x218]);
  pfVar8[0xf] = local_8c;
  pfVar8[3] = local_8c;
  pfVar8[0x15] = local_8c;
  pfVar8[9] = local_8c;
  this_00 = *(TextureAtlas **)(this + 0x318);
                    /* try { // try from 00f57f68 to 0105802b has its CatchHandler @ 00f57a18 */
  this_00[0x3c] = (TextureAtlas)0x1;
  lVar5 = TextureAtlas::getTotalQuads(this_00);
                    /* catch() { ... } // from try @ 00f57e08 with catch @ 00f57f70 */
  if (lVar5 < param_3 + 1) {
                    /* catch() { ... } // from try @ 00f57dec with catch @ 00f57f88 */
    TextureAtlas::increaseTotalQuadsWith(*(TextureAtlas **)(this + 0x318),(param_3 + 1) - lVar5);
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
                    /* catch() { ... } // from try @ 00f57ddc with catch @ 00f57fa0 */
                    /* catch() { ... } // from try @ 00f57adc with catch @ 00f57fa4 */
                    /* catch() { ... } // from try @ 00f57ad4 with catch @ 00f57fac */
                    /* catch() { ... } // from try @ 00f57acc with catch @ 00f57fb4 */
                    /* catch() { ... } // from try @ 00f57ac4 with catch @ 00f57fbc */
                    /* catch() { ... } // from try @ 00f57cd8 with catch @ 00f57fc4
                       catch() { ... } // from try @ 00f57ee0 with catch @ 00f57fc4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

