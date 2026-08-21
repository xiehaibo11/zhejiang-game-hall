
/* cocos2d::ui::Scale9Sprite::createWithSpriteFrame(cocos2d::SpriteFrame*) */

Sprite * cocos2d::ui::Scale9Sprite::createWithSpriteFrame(SpriteFrame *param_1)

{
  Sprite *this;
  ulong uVar1;
  Texture2D *pTVar2;
  
                    /* try { // try from 00de2514 to 00ee2617 has its CatchHandler @ 00de1ebc */
  this = operator_new(0x550,(nothrow_t *)&std::nothrow);
  if (this != (Sprite *)0x0) {
    Sprite::Sprite(this);
    this[0x52d] = (Sprite)0x0;
    *(undefined8 *)(this + 0x538) = 0;
    *(undefined8 *)(this + 0x530) = 0;
    *(undefined ***)this = &PTR__Scale9Sprite_016e4b08;
    *(undefined ***)(this + 0x2f8) = &PTR__Scale9Sprite_016e51e8;
    *(undefined8 *)(this + 0x540) = 0x100000000;
    uVar1 = Sprite::initWithSpriteFrame(this,param_1);
                    /* catch() { ... } // from try @ 00de229c with catch @ 00de2574 */
                    /* catch() { ... } // from try @ 00de24ac with catch @ 00de2578 */
                    /* catch() { ... } // from try @ 00de2420 with catch @ 00de257c */
    pTVar2 = (Texture2D *)(**(code **)(*(long *)this + 0x550))(this);
    setupSlice9((Scale9Sprite *)this,pTVar2,Rect::ZERO);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Sprite *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
                    /* catch() { ... } // from try @ 00de2468 with catch @ 00de25bc */
                    /* catch() { ... } // from try @ 00de22f4 with catch @ 00de25c0 */
                    /* catch() { ... } // from try @ 00de1f74 with catch @ 00de25c4 */
  return this;
}

