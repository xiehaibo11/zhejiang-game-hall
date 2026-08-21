
/* cocos2d::ui::Scale9Sprite::initWithSpriteFrame(cocos2d::SpriteFrame*, cocos2d::Rect const&) */

uint __thiscall
cocos2d::ui::Scale9Sprite::initWithSpriteFrame
          (Scale9Sprite *this,SpriteFrame *param_1,Rect *param_2)

{
  uint uVar1;
  Texture2D *pTVar2;
  
                    /* catch() { ... } // from try @ 00de29cc with catch @ 00de2b08 */
                    /* catch() { ... } // from try @ 00de28dc with catch @ 00de2b0c */
                    /* catch() { ... } // from try @ 00de29b0 with catch @ 00de2b10
                       catch() { ... } // from try @ 00de29f8 with catch @ 00de2b10 */
                    /* catch() { ... } // from try @ 00de2a1c with catch @ 00de2b14 */
  uVar1 = Sprite::initWithSpriteFrame((Sprite *)this,param_1);
                    /* try { // try from 00de2b34 to 00ee2bc7 has its CatchHandler @ 00de2b34
                       catch() { ... } // from try @ 00de2b34 with catch @ 00de2b34
                       catch() { ... } // from try @ 00de2c0c with catch @ 00de2b34 */
  pTVar2 = (Texture2D *)(**(code **)(*(long *)this + 0x550))(this);
  setupSlice9(this,pTVar2,param_2);
  return uVar1 & 1;
}

