
/* cocos2d::Color3B::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Color4F const&) const */

undefined8 __thiscall cocos2d::Color3B::operator!=(Color3B *this,Color4F *param_1)

{
  float fVar1;
  
  if (*(float *)(param_1 + 0xc) != 1.0) {
    return 1;
  }
                    /* catch() { ... } // from try @ 009a1fdc with catch @ 009a21b4 */
                    /* catch() { ... } // from try @ 009a1fd0 with catch @ 009a21b8 */
                    /* catch() { ... } // from try @ 009a1fb0 with catch @ 009a21bc */
  fVar1 = (float)NEON_ucvtf((uint)(byte)*this);
                    /* catch() { ... } // from try @ 009a1fe8 with catch @ 009a21cc */
  if (fVar1 / 255.0 != *(float *)param_1) {
    return 1;
  }
  fVar1 = (float)NEON_ucvtf((uint)(byte)this[1]);
  if (fVar1 / 255.0 != *(float *)(param_1 + 4)) {
    return 1;
  }
  fVar1 = (float)NEON_ucvtf((uint)(byte)this[2]);
  if (fVar1 / 255.0 == *(float *)(param_1 + 8)) {
    return 0;
  }
                    /* try { // try from 009a2224 to 00aa227f has its CatchHandler @ 009a2224
                       catch() { ... } // from try @ 009a2224 with catch @ 009a2224
                       catch() { ... } // from try @ 009a24a4 with catch @ 009a2224 */
  return 1;
}

