
/* non-virtual thunk to cocos2d::TextFieldTTF::didDetachWithIME() */

void __thiscall cocos2d::TextFieldTTF::didDetachWithIME(TextFieldTTF *this)

{
  if (this[0x88] != (TextFieldTTF)0x0) {
    this[0x88] = (TextFieldTTF)0x0;
                    /* try { // try from 00f55d90 to 01055dc3 has its CatchHandler @ 00f55d34 */
                    /* WARNING: Could not recover jumptable at 0x00f55d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(this + -0x6a0) + 0x588))(this + -0x6a0,this + 0x18);
    return;
  }
  return;
}

