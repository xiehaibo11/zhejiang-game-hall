
/* cocos2d::SpriteBatchNode::updateQuadFromSprite(cocos2d::Sprite*, long) */

void __thiscall
cocos2d::SpriteBatchNode::updateQuadFromSprite(SpriteBatchNode *this,Sprite *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 00f43058 to 0104305b has its CatchHandler @ 00f4305c */
  do {
    lVar1 = TextureAtlas::getCapacity(*(TextureAtlas **)(this + 0x300));
    if (param_2 < lVar1) {
      lVar1 = TextureAtlas::getCapacity(*(TextureAtlas **)(this + 0x300));
      lVar2 = TextureAtlas::getTotalQuads(*(TextureAtlas **)(this + 0x300));
      if (lVar1 != lVar2) {
                    /* try { // try from 00f430b4 to 010430bf has its CatchHandler @ 00f431f0 */
        (**(code **)(*(long *)param_1 + 0x538))(param_1,this);
                    /* try { // try from 00f430c0 to 010431f3 has its CatchHandler @ 00f43070 */
        *(long *)(param_1 + 0x308) = param_2;
        (**(code **)(*(long *)param_1 + 0x5d8))(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00f430f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)param_1 + 0x3e0))(param_1);
        return;
      }
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f43058 with catch @ 00f4305c
                        */
                    /* try { // try from 00f43060 to 01043063 has its CatchHandler @ 00f4306c */
    lVar1 = TextureAtlas::getCapacity(*(TextureAtlas **)(this + 0x300));
                    /* try { // try from 00f43064 to 0104306f has its CatchHandler @ 00f42eec */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f43060 with catch @ 00f4306c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f430c0 with catch @ 00f43070
                        */
    lVar1 = SUB168(SEXT816(lVar1 * 4 + 4) * SEXT816(0x5555555555555556),8);
    TextureAtlas::resizeCapacity(*(TextureAtlas **)(this + 0x300),lVar1 - (lVar1 >> 0x3f));
  } while( true );
}

