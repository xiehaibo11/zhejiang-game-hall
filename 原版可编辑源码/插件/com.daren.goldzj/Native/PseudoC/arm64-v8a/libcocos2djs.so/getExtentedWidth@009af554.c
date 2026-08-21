
/* cocos2d::TextRowSpace::getExtentedWidth(float, float) const */

float __thiscall
cocos2d::TextRowSpace::getExtentedWidth(TextRowSpace *this,float param_1,float param_2)

{
  if (*(long *)(this + 0x20) != *(long *)(this + 0x18)) {
    if (param_2 <= *(float *)(this + 8)) {
      param_2 = *(float *)(this + 8);
    }
    if (*(float *)this <= param_1) {
      param_1 = *(float *)this;
    }
  }
  return param_2 - param_1;
}

