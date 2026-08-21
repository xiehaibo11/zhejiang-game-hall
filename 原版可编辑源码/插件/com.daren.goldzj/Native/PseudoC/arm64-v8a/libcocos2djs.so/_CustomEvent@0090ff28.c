
/* cocos2d::CustomEvent::~CustomEvent() */

void __thiscall cocos2d::CustomEvent::~CustomEvent(CustomEvent *this)

{
  *(undefined ***)this = &PTR__CustomEvent_01c68ad0;
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
  operator_delete(this);
  return;
}

