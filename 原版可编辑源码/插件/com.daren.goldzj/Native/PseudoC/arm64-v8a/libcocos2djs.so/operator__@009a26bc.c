
/* cocos2d::Color4F::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Color4F const&) const */

bool __thiscall cocos2d::Color4F::operator!=(Color4F *this,Color4F *param_1)

{
  if (*(float *)this != *(float *)param_1) {
    return true;
  }
  if (*(float *)(this + 4) == *(float *)(param_1 + 4)) {
    if (*(float *)(this + 8) == *(float *)(param_1 + 8)) {
                    /* try { // try from 009a26f0 to 00aa27d3 has its CatchHandler @ 009a2590 */
      return *(float *)(this + 0xc) != *(float *)(param_1 + 0xc);
    }
    return true;
  }
  return true;
}

