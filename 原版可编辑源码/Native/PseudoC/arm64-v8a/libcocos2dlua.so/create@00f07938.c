
/* cocos2d::Grid3D::create(cocos2d::Size const&) */

Ref * cocos2d::Grid3D::create(Size *param_1)

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
                    /* try { // try from 00f07998 to 010079a3 has its CatchHandler @ 00f07b00 */
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    this[0x90] = (Ref)0x0;
    *(undefined ***)this = &PTR__Grid3D_016fd258;
    uVar1 = GridBase::initWithSize((GridBase *)this,param_1,Rect::ZERO);
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

