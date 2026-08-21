
/* cocos2d::GridBase::create(cocos2d::Size const&, cocos2d::Texture2D*, bool) */

Ref * cocos2d::GridBase::create(Size *param_1,Texture2D *param_2,bool param_3)

{
  Ref *this;
  ulong uVar1;
  
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)this = 0;
    Ref::Ref(this);
    *(undefined ***)this = &PTR__GridBase_016fd210;
    Size::Size((Size *)(this + 0x28));
    *(undefined8 *)(this + 0x38) = 0;
    Rect::Rect((Rect *)(this + 0x5c));
    uVar1 = initWithSize((GridBase *)this,param_1,param_2,param_3,Rect::ZERO);
    if ((uVar1 & 1) == 0) {
      Ref::release(this);
      this = (Ref *)0x0;
    }
    else {
      Ref::autorelease(this);
    }
  }
  return this;
}

