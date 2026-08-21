
/* cocos2d::Label::getLineHeight() const */

float __thiscall cocos2d::Label::getLineHeight(Label *this)

{
  if (*(long *)(this + 0x3c0) != 0) {
    return 0.0;
  }
  return *(float *)(this + 0x424) * *(float *)(this + 0x680);
}

