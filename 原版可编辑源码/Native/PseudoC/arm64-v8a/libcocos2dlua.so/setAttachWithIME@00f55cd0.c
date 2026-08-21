
/* cocos2d::TextFieldTTF::setAttachWithIME(bool) */

void __thiscall cocos2d::TextFieldTTF::setAttachWithIME(TextFieldTTF *this,bool param_1)

{
  if ((TextFieldTTF)param_1 == this[0x728]) {
    return;
  }
  this[0x728] = (TextFieldTTF)param_1;
  if ((param_1) && (this[0x710] != (TextFieldTTF)0x0)) {
    *(undefined4 *)(this + 0x724) = 0x3f800000;
    *(undefined8 *)(this + 0x718) = *(undefined8 *)(this + 0x6b0);
  }
                    /* WARNING: Could not recover jumptable at 0x00f55d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x588))(this,this + 0x6b8);
  return;
}

