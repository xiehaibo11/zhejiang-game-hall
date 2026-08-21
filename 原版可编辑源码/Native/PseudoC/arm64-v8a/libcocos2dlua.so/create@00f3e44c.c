
/* cocos2d::Sprite::create(cocos2d::PolygonInfo const&) */

Sprite * cocos2d::Sprite::create(PolygonInfo *param_1)

{
  Sprite *this;
  ulong uVar1;
  
  this = operator_new(0x530,(nothrow_t *)&std::nothrow);
  if (this != (Sprite *)0x0) {
    Sprite(this);
    uVar1 = (**(code **)(*(long *)this + 0x5f8))(this,param_1);
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

