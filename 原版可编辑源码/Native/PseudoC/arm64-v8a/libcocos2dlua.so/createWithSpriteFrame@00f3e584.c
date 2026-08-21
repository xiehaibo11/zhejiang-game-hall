
/* cocos2d::Sprite::createWithSpriteFrame(cocos2d::SpriteFrame*) */

Sprite * cocos2d::Sprite::createWithSpriteFrame(SpriteFrame *param_1)

{
  Sprite *this;
  ulong uVar1;
  
  this = operator_new(0x530,(nothrow_t *)&std::nothrow);
  if (this != (Sprite *)0x0) {
    Sprite(this);
    if ((param_1 == (SpriteFrame *)0x0) ||
       (uVar1 = (**(code **)(*(long *)this + 0x610))(this,param_1), (uVar1 & 1) == 0)) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Sprite *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

