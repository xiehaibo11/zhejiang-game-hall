
/* cocos2d::LayerGradient::create() */

LayerColor * cocos2d::LayerGradient::create(void)

{
  LayerColor *this;
  ulong uVar1;
  
  this = operator_new(0x430,(nothrow_t *)&std::nothrow);
  if (this != (LayerColor *)0x0) {
    LayerColor::LayerColor(this);
    *(undefined ***)this = &PTR__LayerGradient_01700a20;
    *(undefined ***)(this + 800) = &PTR__LayerGradient_01701090;
    Color3B::Color3B((Color3B *)(this + 0x410),(Color4B *)&Color4B::BLACK);
    Color3B::Color3B((Color3B *)(this + 0x413),(Color4B *)&Color4B::BLACK);
    *(undefined2 *)(this + 0x416) = 0xffff;
    *(undefined8 *)(this + 0x418) = 0xbf80000000000000;
    this[0x420] = (LayerColor)0x1;
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

