
/* cocos2d::Label::isHorizontalClamped(float, int) */

bool __thiscall cocos2d::Label::isHorizontalClamped(Label *this,float param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = param_1 < 0.0 || *(float *)(this + 0x80) < param_1;
  if (this[0x678] != (Label)0x0) {
    bVar1 = bVar1 && *(float *)(this + 0x80) <
                     *(float *)(*(long *)(this + 0x460) + (long)param_2 * 4);
  }
  return bVar1;
}

