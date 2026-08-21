
/* cocos2d::SpriteBatchNode::increaseAtlasCapacity() */

void __thiscall cocos2d::SpriteBatchNode::increaseAtlasCapacity(SpriteBatchNode *this)

{
  long lVar1;
  
                    /* try { // try from 00f42a0c to 01042a13 has its CatchHandler @ 00f42d0c */
                    /* try { // try from 00f42a14 to 01042d5f has its CatchHandler @ 00f426b4 */
  lVar1 = TextureAtlas::getCapacity(*(TextureAtlas **)(this + 0x300));
  lVar1 = SUB168(SEXT816(lVar1 * 4 + 4) * SEXT816(0x5555555555555556),8);
  TextureAtlas::resizeCapacity(*(TextureAtlas **)(this + 0x300),lVar1 - (lVar1 >> 0x3f));
  return;
}

