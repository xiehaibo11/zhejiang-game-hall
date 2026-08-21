
/* cocos2d::TextFieldTTF::setCursorPosition(unsigned long) */

void __thiscall cocos2d::TextFieldTTF::setCursorPosition(TextFieldTTF *this,ulong param_1)

{
  if ((this[0x710] != (TextFieldTTF)0x0) && (param_1 <= *(ulong *)(this + 0x6b0))) {
    *(ulong *)(this + 0x718) = param_1;
    *(undefined4 *)(this + 0x724) = 0x3f800000;
  }
  return;
}

