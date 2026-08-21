
/* cocos2d::Color3B::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Color3B const&) const */

bool __thiscall cocos2d::Color3B::operator==(Color3B *this,Color3B *param_1)

{
  if ((*this == *param_1) && (this[1] == param_1[1])) {
    return this[2] == param_1[2];
  }
  return false;
}

