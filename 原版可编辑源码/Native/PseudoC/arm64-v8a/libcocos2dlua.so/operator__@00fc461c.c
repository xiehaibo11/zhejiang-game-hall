
/* cocos2d::Color3B::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Color4B const&) const */

bool __thiscall cocos2d::Color3B::operator!=(Color3B *this,Color4B *param_1)

{
  if (((*this == *(Color3B *)param_1) && (this[1] == *(Color3B *)(param_1 + 1))) &&
     (this[2] == *(Color3B *)(param_1 + 2))) {
    return param_1[3] != (Color4B)0xff;
  }
  return true;
}

