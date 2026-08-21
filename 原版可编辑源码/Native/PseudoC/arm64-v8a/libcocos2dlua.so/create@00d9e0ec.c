
/* dragonBones::DBCCSprite::create() */

Sprite * dragonBones::DBCCSprite::create(void)

{
  Sprite *this;
  ulong uVar1;
  
  this = operator_new(0x530,(nothrow_t *)&std::nothrow);
  if (this != (Sprite *)0x0) {
    cocos2d::Sprite::Sprite(this);
    *(undefined ***)this = &PTR__Sprite_016d7648;
    *(undefined ***)(this + 0x2f8) = &PTR__DBCCSprite_016d7cc8;
    uVar1 = cocos2d::Sprite::init(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Sprite *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

