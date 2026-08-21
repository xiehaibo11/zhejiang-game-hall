
/* cocos2d::Sprite::createWithTexture(cocos2d::Texture2D*, cocos2d::Rect const&, bool) */

Sprite * cocos2d::Sprite::createWithTexture(Texture2D *param_1,Rect *param_2,bool param_3)

{
  Sprite *this;
  ulong uVar1;
  
  this = operator_new(0x530,(nothrow_t *)&std::nothrow);
  if (this != (Sprite *)0x0) {
    Sprite(this);
    uVar1 = (**(code **)(*(long *)this + 0x608))(this,param_1,param_2,param_3);
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

