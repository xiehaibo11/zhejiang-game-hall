
/* cocos2d::TextFieldTTF::didAttachWithIME() */

void __thiscall cocos2d::TextFieldTTF::didAttachWithIME(TextFieldTTF *this)

{
  if (this[0x728] == (TextFieldTTF)0x1) {
    return;
  }
  this[0x728] = (TextFieldTTF)0x1;
  if (this[0x710] != (TextFieldTTF)0x0) {
    *(undefined4 *)(this + 0x724) = 0x3f800000;
    *(undefined8 *)(this + 0x718) = *(undefined8 *)(this + 0x6b0);
  }
                    /* WARNING: Could not recover jumptable at 0x00f55ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x588))(this,this + 0x6b8);
  return;
}

