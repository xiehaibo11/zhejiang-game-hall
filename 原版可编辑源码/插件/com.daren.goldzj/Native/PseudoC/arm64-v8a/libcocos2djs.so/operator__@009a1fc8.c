
/* cocos2d::Color3B::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Color4B const&) const */

bool __thiscall cocos2d::Color3B::operator==(Color3B *this,Color4B *param_1)

{
                    /* try { // try from 009a1fd0 to 00aa1fdb has its CatchHandler @ 009a21b8 */
  if (*this != *(Color3B *)param_1) {
    return false;
  }
                    /* try { // try from 009a1fdc to 00aa1fe7 has its CatchHandler @ 009a21b4 */
  if (this[1] == *(Color3B *)(param_1 + 1)) {
                    /* try { // try from 009a1fe8 to 00aa213b has its CatchHandler @ 009a21cc */
    if (this[2] == *(Color3B *)(param_1 + 2)) {
      return param_1[3] == (Color4B)0xff;
    }
    return false;
  }
  return false;
}

