
/* cocosbuilder::CCBSequence::setSoundChannel(cocosbuilder::CCBSequenceProperty*) */

void __thiscall
cocosbuilder::CCBSequence::setSoundChannel(CCBSequence *this,CCBSequenceProperty *param_1)

{
  if (*(Ref **)(this + 0x50) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x50));
  }
  *(CCBSequenceProperty **)(this + 0x50) = param_1;
  if (param_1 != (CCBSequenceProperty *)0x0) {
    cocos2d::Ref::retain((Ref *)param_1);
    return;
  }
  return;
}

