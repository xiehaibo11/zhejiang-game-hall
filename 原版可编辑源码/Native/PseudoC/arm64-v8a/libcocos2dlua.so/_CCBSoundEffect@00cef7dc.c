
/* non-virtual thunk to cocosbuilder::CCBSoundEffect::~CCBSoundEffect() */

void __thiscall cocosbuilder::CCBSoundEffect::~CCBSoundEffect(CCBSoundEffect *this)

{
  Action *this_00;
  
  this_00 = (Action *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__CCBSoundEffect_016cf1a0;
  *(undefined ***)this = &PTR_clone_016cf200;
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  cocos2d::Action::~Action(this_00);
  operator_delete(this_00);
  return;
}

