
/* cocos2d::LayerRadialGradient::setEndOpacity(unsigned char) */

void __thiscall cocos2d::LayerRadialGradient::setEndOpacity(LayerRadialGradient *this,uchar param_1)

{
  *(float *)(this + 0x344) = (float)param_1 / 255.0;
  this[0x337] = (LayerRadialGradient)param_1;
  return;
}

