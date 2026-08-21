
/* cocos2d::EventCustom::~EventCustom() */

void __thiscall cocos2d::EventCustom::~EventCustom(EventCustom *this)

{
  *(undefined ***)this = &PTR__EventCustom_01698250;
  if (((byte)this[0x40] & 1) != 0) {
    operator_delete(*(void **)(this + 0x50));
  }
  Event::~Event((Event *)this);
  return;
}

