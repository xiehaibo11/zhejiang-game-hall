
/* cocos2d::ui::Scale9Sprite::init() */

uint __thiscall cocos2d::ui::Scale9Sprite::init(Scale9Sprite *this)

{
  uint uVar1;
  Texture2D *pTVar2;
  
                    /* catch() { ... } // from try @ 00de2ca4 with catch @ 00de2c6c */
  uVar1 = Sprite::init((Sprite *)this);
  pTVar2 = (Texture2D *)(**(code **)(*(long *)this + 0x550))(this);
                    /* try { // try from 00de2c9c to 00ee2ca3 has its CatchHandler @ 00de2cd0 */
  setupSlice9(this,pTVar2,Rect::ZERO);
                    /* try { // try from 00de2ca4 to 00ee2ceb has its CatchHandler @ 00de2c6c */
  return uVar1 & 1;
}

