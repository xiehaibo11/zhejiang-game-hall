
/* cocos2d::Color4F::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Color3B const&) const */

bool __thiscall cocos2d::Color4F::operator!=(Color4F *this,Color3B *param_1)

{
  if (*(float *)(this + 0xc) != 1.0) {
                    /* catch() { ... } // from try @ 009a261c with catch @ 009a277c */
    return true;
  }
  if ((uint)(byte)*param_1 == (int)(*(float *)this * 255.0)) {
    if ((uint)(byte)param_1[1] == (int)(*(float *)(this + 4) * 255.0)) {
                    /* catch() { ... } // from try @ 009a2610 with catch @ 009a2764 */
                    /* catch() { ... } // from try @ 009a2604 with catch @ 009a2768 */
                    /* catch() { ... } // from try @ 009a25e4 with catch @ 009a276c */
      return (uint)(byte)param_1[2] != (int)(*(float *)(this + 8) * 255.0);
    }
    return true;
  }
  return true;
}

