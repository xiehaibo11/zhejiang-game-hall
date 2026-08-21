
/* cocos2d::TextFieldTTF::didDetachWithIME() */

void __thiscall cocos2d::TextFieldTTF::didDetachWithIME(TextFieldTTF *this)

{
  if (this[0x728] != (TextFieldTTF)0x0) {
    this[0x728] = (TextFieldTTF)0x0;
                    /* try { // try from 00f55d6c to 01055d8f has its CatchHandler @ 00f55db0 */
                    /* WARNING: Could not recover jumptable at 0x00f55d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x588))(this,this + 0x6b8);
    return;
  }
  return;
}

