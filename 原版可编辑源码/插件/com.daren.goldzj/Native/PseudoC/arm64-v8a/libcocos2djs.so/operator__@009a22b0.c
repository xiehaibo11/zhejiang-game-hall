
/* cocos2d::Color4B::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Color4B const&) const */

bool __thiscall cocos2d::Color4B::operator==(Color4B *this,Color4B *param_1)

{
                    /* try { // try from 009a22b8 to 00aa24a3 has its CatchHandler @ 009a2538 */
  if (*this != *param_1) {
    return false;
  }
  if (this[1] == param_1[1]) {
    if (this[2] == param_1[2]) {
      return this[3] == param_1[3];
    }
    return false;
  }
  return false;
}

