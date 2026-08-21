
/* non-virtual thunk to cocosbuilder::CCBSoundEffect::~CCBSoundEffect() */

void __thiscall cocosbuilder::CCBSoundEffect::~CCBSoundEffect(CCBSoundEffect *this)

{
  *(undefined ***)(this + -0x28) = &PTR__CCBSoundEffect_016cf1a0;
  *(undefined ***)this = &PTR_clone_016cf200;
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  cocos2d::Action::~Action((Action *)(this + -0x28));
  return;
}

