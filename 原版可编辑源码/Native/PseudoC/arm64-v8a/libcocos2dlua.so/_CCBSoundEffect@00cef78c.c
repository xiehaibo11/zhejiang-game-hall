
/* cocosbuilder::CCBSoundEffect::~CCBSoundEffect() */

void __thiscall cocosbuilder::CCBSoundEffect::~CCBSoundEffect(CCBSoundEffect *this)

{
  *(undefined ***)this = &PTR__CCBSoundEffect_016cf1a0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016cf200;
  if (((byte)this[0x58] & 1) != 0) {
    operator_delete(*(void **)(this + 0x68));
  }
  cocos2d::Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

