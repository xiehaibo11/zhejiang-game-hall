
/* cocos2d::LayerGradient::LayerGradient() */

void __thiscall cocos2d::LayerGradient::LayerGradient(LayerGradient *this)

{
  LayerColor::LayerColor((LayerColor *)this);
  *(undefined ***)this = &PTR__LayerGradient_01700a20;
  *(undefined ***)(this + 800) = &PTR__LayerGradient_01701090;
  Color3B::Color3B((Color3B *)(this + 0x410),(Color4B *)&Color4B::BLACK);
  Color3B::Color3B((Color3B *)(this + 0x413),(Color4B *)&Color4B::BLACK);
  *(undefined2 *)(this + 0x416) = 0xffff;
  *(undefined8 *)(this + 0x418) = 0xbf80000000000000;
  this[0x420] = (LayerGradient)0x1;
  return;
}

