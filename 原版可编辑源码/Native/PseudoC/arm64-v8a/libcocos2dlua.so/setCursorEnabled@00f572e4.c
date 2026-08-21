
/* cocos2d::TextFieldTTF::setCursorEnabled(bool) */

void __thiscall cocos2d::TextFieldTTF::setCursorEnabled(TextFieldTTF *this,bool param_1)

{
  if (this[0x710] != (TextFieldTTF)param_1) {
    this[0x710] = (TextFieldTTF)param_1;
    if (param_1) {
      *(undefined8 *)(this + 0x718) = *(undefined8 *)(this + 0x6b0);
      if (*(uint *)(this + 0x308) < 2) {
        Node::scheduleUpdate((Node *)this);
        return;
      }
    }
    else {
      *(undefined8 *)(this + 0x718) = 0;
      if (*(uint *)(this + 0x308) < 2) {
        Node::unscheduleUpdate((Node *)this);
        return;
      }
    }
  }
  return;
}

