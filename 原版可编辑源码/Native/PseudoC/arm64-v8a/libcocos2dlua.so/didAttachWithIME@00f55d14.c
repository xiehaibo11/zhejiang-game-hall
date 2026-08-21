
/* non-virtual thunk to cocos2d::TextFieldTTF::didAttachWithIME() */

void __thiscall cocos2d::TextFieldTTF::didAttachWithIME(TextFieldTTF *this)

{
  if (this[0x88] == (TextFieldTTF)0x1) {
    return;
  }
  this[0x88] = (TextFieldTTF)0x1;
                    /* try { // try from 00f55d34 to 01055d6b has its CatchHandler @ 00f55d34
                       catch() { ... } // from try @ 00f55d34 with catch @ 00f55d34
                       catch() { ... } // from try @ 00f55d90 with catch @ 00f55d34 */
  if (this[0x70] != (TextFieldTTF)0x0) {
    *(undefined4 *)(this + 0x84) = 0x3f800000;
    *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00f55d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0x6a0) + 0x588))(this + -0x6a0,this + 0x18);
  return;
}

