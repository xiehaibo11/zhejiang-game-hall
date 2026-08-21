
/* cocos2d::Label::setAdditionalKerning(float) */

void __thiscall cocos2d::Label::setAdditionalKerning(Label *this,float param_1)

{
  if ((*(int *)(this + 0x308) != 3) && (*(float *)(this + 0x42c) != param_1)) {
                    /* try { // try from 00f0cd8c to 0100cd93 has its CatchHandler @ 00f0ce5c */
    *(float *)(this + 0x42c) = param_1;
                    /* try { // try from 00f0cd94 to 0100ce7f has its CatchHandler @ 00f0cc48 */
    this[0x30c] = (Label)0x1;
  }
  return;
}

