
/* non-virtual thunk to cocostudio::ComAudio::~ComAudio() */

void __thiscall cocostudio::ComAudio::~ComAudio(ComAudio *this)

{
  *(undefined ***)(this + -0x50) = &PTR__ComAudio_016c9f08;
  *(undefined ***)this = &PTR__ComAudio_016c9f88;
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
  cocos2d::Component::~Component((Component *)(this + -0x50));
  return;
}

