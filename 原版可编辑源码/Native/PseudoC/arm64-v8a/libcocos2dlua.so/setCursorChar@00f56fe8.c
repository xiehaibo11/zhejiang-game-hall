
/* cocos2d::TextFieldTTF::setCursorChar(char) */

void __thiscall cocos2d::TextFieldTTF::setCursorChar(TextFieldTTF *this,char param_1)

{
  if (this[0x720] == (TextFieldTTF)param_1) {
    return;
  }
  this[0x720] = (TextFieldTTF)param_1;
                    /* WARNING: Could not recover jumptable at 0x00f57008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x588))(this,this + 0x6b8);
  return;
}

