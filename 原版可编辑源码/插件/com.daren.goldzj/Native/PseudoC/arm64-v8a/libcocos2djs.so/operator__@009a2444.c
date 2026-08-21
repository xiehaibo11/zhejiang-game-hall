
/* cocos2d::Color4B::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Color3B const&) const */

bool __thiscall cocos2d::Color4B::operator!=(Color4B *this,Color3B *param_1)

{
  if (*this != *(Color4B *)param_1) {
    return true;
  }
  if (this[1] == *(Color4B *)(param_1 + 1)) {
    if (this[2] == *(Color4B *)(param_1 + 2)) {
      return this[3] != (Color4B)0xff;
    }
    return true;
  }
  return true;
}

