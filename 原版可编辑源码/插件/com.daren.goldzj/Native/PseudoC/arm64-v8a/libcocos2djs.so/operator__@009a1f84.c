
/* cocos2d::Color3B::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Color3B const&) const */

bool __thiscall cocos2d::Color3B::operator==(Color3B *this,Color3B *param_1)

{
  if (*this != *param_1) {
    return false;
  }
  if (this[1] == param_1[1]) {
                    /* try { // try from 009a1fb0 to 00aa1fc7 has its CatchHandler @ 009a21bc */
    return this[2] == param_1[2];
  }
  return false;
}

