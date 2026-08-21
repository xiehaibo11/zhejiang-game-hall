
/* cocos2d::ui::ScrollViewBar::calculateLength(float, float, float) */

float __thiscall
cocos2d::ui::ScrollViewBar::calculateLength
          (ScrollViewBar *this,float param_1,float param_2,float param_3)

{
  if (param_3 != 0.0) {
    if (param_3 < 0.0) {
      param_3 = -param_3;
    }
    param_1 = param_3 * 20.0 + param_1;
  }
  return (param_2 / param_1) * ABS(param_2 - (*(float *)(this + 0x348) + *(float *)(this + 0x348)));
}

