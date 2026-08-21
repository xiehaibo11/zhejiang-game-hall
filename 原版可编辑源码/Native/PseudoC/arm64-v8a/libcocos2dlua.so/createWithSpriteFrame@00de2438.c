
/* cocos2d::ui::Scale9Sprite::createWithSpriteFrame(cocos2d::SpriteFrame*, cocos2d::Rect const&) */

Sprite * cocos2d::ui::Scale9Sprite::createWithSpriteFrame(SpriteFrame *param_1,Rect *param_2)

{
  Sprite *this;
  ulong uVar1;
  
  this = operator_new(0x550,(nothrow_t *)&std::nothrow);
  if (this != (Sprite *)0x0) {
                    /* try { // try from 00de2468 to 00ee2473 has its CatchHandler @ 00de25bc */
    Sprite::Sprite(this);
    this[0x52d] = (Sprite)0x0;
    *(undefined8 *)(this + 0x538) = 0;
    *(undefined8 *)(this + 0x530) = 0;
    *(undefined ***)this = &PTR__Scale9Sprite_016e4b08;
    *(undefined ***)(this + 0x2f8) = &PTR__Scale9Sprite_016e51e8;
    *(undefined8 *)(this + 0x540) = 0x100000000;
                    /* try { // try from 00de24ac to 00ee2513 has its CatchHandler @ 00de2578 */
    uVar1 = initWithSpriteFrame((Scale9Sprite *)this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Sprite *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

