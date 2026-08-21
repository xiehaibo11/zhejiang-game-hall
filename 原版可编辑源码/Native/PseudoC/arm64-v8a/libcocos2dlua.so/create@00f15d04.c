
/* cocos2d::LayerColor::create() */

LayerColor * cocos2d::LayerColor::create(void)

{
  LayerColor *this;
  ulong uVar1;
  
  this = operator_new(0x410,(nothrow_t *)&std::nothrow);
  if (this != (LayerColor *)0x0) {
    LayerColor(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (LayerColor *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

