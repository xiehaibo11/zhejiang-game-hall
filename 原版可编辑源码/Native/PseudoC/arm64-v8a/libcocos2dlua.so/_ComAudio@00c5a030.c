
/* non-virtual thunk to cocostudio::ComAudio::~ComAudio() */

void __thiscall cocostudio::ComAudio::~ComAudio(ComAudio *this)

{
  Component *this_00;
  
  this_00 = (Component *)(this + -0x50);
  *(undefined ***)this_00 = &PTR__ComAudio_016c9f08;
  *(undefined ***)this = &PTR__ComAudio_016c9f88;
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
  cocos2d::Component::~Component(this_00);
  operator_delete(this_00);
  return;
}

