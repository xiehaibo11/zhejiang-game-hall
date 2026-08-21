
/* cocos2d::Grid3D::create(cocos2d::Size const&, cocos2d::Texture2D*, bool, cocos2d::Rect const&) */

Ref * cocos2d::Grid3D::create(Size *param_1,Texture2D *param_2,bool param_3,Rect *param_4)

{
  Ref *this;
  ulong uVar1;
  
  this = operator_new(0x98,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined ***)this = &PTR__GridBase_016fd210;
    Size::Size((Size *)(this + 0x28));
    *(undefined8 *)(this + 0x38) = 0;
    Rect::Rect((Rect *)(this + 0x5c));
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined ***)this = &PTR__Grid3D_016fd258;
    this[0x90] = (Ref)0x0;
    uVar1 = GridBase::initWithSize((GridBase *)this,param_1,param_2,param_3,param_4);
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

