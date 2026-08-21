
/* cocos2d::TMXLayer::setupTiles() */

void __thiscall cocos2d::TMXLayer::setupTiles(TMXLayer *this)

{
  Texture2D *pTVar1;
  Size *pSVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_48;
  float fStack_44;
  
  pTVar1 = (Texture2D *)TextureAtlas::getTexture(*(TextureAtlas **)(this + 0x300));
  pSVar2 = (Size *)Texture2D::getContentSizeInPixels(pTVar1);
  Size::operator=((Size *)(*(long *)(this + 0x3f8) + 0x78),pSVar2);
                    /* try { // try from 00f4c868 to 0104c87f has its CatchHandler @ 00f4d5b4 */
  pTVar1 = (Texture2D *)TextureAtlas::getTexture(*(TextureAtlas **)(this + 0x300));
  Texture2D::setAliasTexParameters(pTVar1);
  parseInternalProperties(this);
  if (0.0 < *(float *)(this + 0x3e0)) {
    fVar7 = *(float *)(this + 0x3dc);
    iVar4 = 0;
                    /* try { // try from 00f4c890 to 0104c897 has its CatchHandler @ 00f4d470 */
    fVar10 = 0.0;
    do {
      if (0.0 < fVar7) {
        iVar5 = 0;
        fVar8 = 0.0;
                    /* try { // try from 00f4c8c8 to 0104c8df has its CatchHandler @ 00f4d440 */
        iVar6 = 1;
        do {
          uVar3 = iVar6 - 1;
          if ((*(int *)(this + 0x404) == 0) && (*(int *)(this + 0x400) == 1)) {
            fVar9 = fVar7 * 0.5;
            if (*(int *)(this + 0x408) == 0) {
              if (fVar9 <= fVar8) {
                uVar3 = (uint)((fVar8 - (float)(int)fVar9) + (fVar8 - (float)(int)fVar9) + 1.0);
              }
              else {
                uVar3 = iVar5 << 1;
              }
            }
            else if ((int)uVar3 < (int)fVar9) {
              uVar3 = iVar5 << 1 | 1;
            }
            else {
              uVar3 = (iVar5 - (int)fVar9) * 2;
            }
          }
          local_48 = (float)(int)uVar3;
                    /* try { // try from 00f4c960 to 0104c977 has its CatchHandler @ 00f4d5b4 */
          uVar3 = *(uint *)(*(long *)(this + 0x3f0) + (long)(int)(fVar10 * fVar7 + local_48) * 4);
          if (uVar3 != 0) {
            fStack_44 = fVar10;
            appendTileForGID(this,uVar3,(Vec2 *)&local_48);
            fVar7 = *(float *)(this + 0x3dc);
          }
          fVar8 = (float)iVar6;
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 1;
        } while (fVar8 < fVar7);
      }
      iVar4 = iVar4 + 1;
      fVar10 = (float)iVar4;
                    /* try { // try from 00f4c8b4 to 0104c8bb has its CatchHandler @ 00f4d444 */
    } while (fVar10 < *(float *)(this + 0x3e0));
  }
                    /* try { // try from 00f4c98c to 0104c993 has its CatchHandler @ 00f4d3d4 */
  return;
}

