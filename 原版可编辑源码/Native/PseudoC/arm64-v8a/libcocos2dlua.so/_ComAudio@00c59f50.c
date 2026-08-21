
/* cocostudio::ComAudio::~ComAudio() */

void __thiscall cocostudio::ComAudio::~ComAudio(ComAudio *this)

{
  *(undefined ***)this = &PTR__ComAudio_016c9f08;
  *(undefined ***)(this + 0x50) = &PTR__ComAudio_016c9f88;
  if (((byte)this[0x58] & 1) != 0) {
    operator_delete(*(void **)(this + 0x68));
  }
  cocos2d::Component::~Component((Component *)this);
  return;
}

