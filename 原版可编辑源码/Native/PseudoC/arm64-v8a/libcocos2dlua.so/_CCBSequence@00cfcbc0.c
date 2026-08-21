
/* cocosbuilder::CCBSequence::~CCBSequence() */

void __thiscall cocosbuilder::CCBSequence::~CCBSequence(CCBSequence *this)

{
  *(undefined ***)this = &PTR__CCBSequence_016cfd00;
  if (*(Ref **)(this + 0x48) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x48));
  }
  if (*(Ref **)(this + 0x50) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x50));
  }
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

