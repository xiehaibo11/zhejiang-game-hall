
/* cocos2d::LayerRadialGradient::setStartOpacity(unsigned char) */

void __thiscall
cocos2d::LayerRadialGradient::setStartOpacity(LayerRadialGradient *this,uchar param_1)

{
                    /* catch() { ... } // from try @ 00f17ab4 with catch @ 00f17a64 */
  *(float *)(this + 0x330) = (float)param_1 / 255.0;
  this[800] = (LayerRadialGradient)param_1;
  return;
}

