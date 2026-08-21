
/* cocos2d::Color4B::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Color4B const&) const */

bool __thiscall cocos2d::Color4B::operator!=(Color4B *this,Color4B *param_1)

{
  if (((*this == *param_1) && (this[1] == param_1[1])) && (this[2] == param_1[2])) {
    return this[3] != param_1[3];
  }
  return true;
}

