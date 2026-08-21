
/* cocos2d::TextureAtlas::createWithTexture(cocos2d::Texture2D*, long) */

Ref * cocos2d::TextureAtlas::createWithTexture(Texture2D *param_1,long param_2)

{
  Ref *this;
  ulong uVar1;
  
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x28) = 0;
    this[0x3c] = (Ref)0x0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined ***)this = &PTR__TextureAtlas_01724470;
    *(undefined8 *)(this + 0x50) = 0;
    uVar1 = initWithTexture((TextureAtlas *)this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
    else {
      Ref::autorelease(this);
    }
  }
  return this;
}

