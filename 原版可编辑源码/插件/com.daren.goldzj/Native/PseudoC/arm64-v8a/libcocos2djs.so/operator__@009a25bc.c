
/* cocos2d::Color4F::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Color3B const&) const */

bool __thiscall cocos2d::Color4F::operator==(Color4F *this,Color3B *param_1)

{
  if (*(float *)(this + 0xc) != 1.0) {
    return false;
  }
                    /* try { // try from 009a25e4 to 00aa25fb has its CatchHandler @ 009a276c */
  if ((uint)(byte)*param_1 == (int)(*(float *)this * 255.0)) {
    if ((uint)(byte)param_1[1] == (int)(*(float *)(this + 4) * 255.0)) {
                    /* try { // try from 009a2604 to 00aa260f has its CatchHandler @ 009a2768 */
                    /* try { // try from 009a2610 to 00aa261b has its CatchHandler @ 009a2764 */
                    /* try { // try from 009a261c to 00aa26ef has its CatchHandler @ 009a277c */
      return (uint)(byte)param_1[2] == (int)(*(float *)(this + 8) * 255.0);
    }
    return false;
  }
  return false;
}

