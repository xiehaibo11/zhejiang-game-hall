
/* cocos2d::TMXLayer::reusedTileWithRect(cocos2d::Rect const&) */

undefined8 __thiscall cocos2d::TMXLayer::reusedTileWithRect(TMXLayer *this,Rect *param_1)

{
  long *plVar1;
  Texture2D *pTVar2;
  
                    /* try { // try from 00f4d34c to 0104d367 has its CatchHandler @ 00f4d3d4 */
  plVar1 = *(long **)(this + 0x3c8);
  if (plVar1 == (long *)0x0) {
    pTVar2 = (Texture2D *)TextureAtlas::getTexture(*(TextureAtlas **)(this + 0x300));
    plVar1 = (long *)Sprite::createWithTexture(pTVar2,param_1,false);
    *(long **)(this + 0x3c8) = plVar1;
    (**(code **)(*plVar1 + 0x538))(plVar1,this);
                    /* catch() { ... } // from try @ 00f4c98c with catch @ 00f4d3d4
                       catch() { ... } // from try @ 00f4d34c with catch @ 00f4d3d4 */
    Ref::retain(*(Ref **)(this + 0x3c8));
  }
  else {
                    /* try { // try from 00f4d368 to 0104d60f has its CatchHandler @ 00f4ac28 */
    (**(code **)(*plVar1 + 0x538))(plVar1,0);
    (**(code **)(**(long **)(this + 0x3c8) + 0x560))(*(long **)(this + 0x3c8),param_1,0,param_1 + 8)
    ;
    (**(code **)(**(long **)(this + 0x3c8) + 0x538))(*(long **)(this + 0x3c8),this);
  }
  return *(undefined8 *)(this + 0x3c8);
}

