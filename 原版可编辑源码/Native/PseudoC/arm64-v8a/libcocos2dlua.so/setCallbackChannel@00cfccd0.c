
/* cocosbuilder::CCBSequence::setCallbackChannel(cocosbuilder::CCBSequenceProperty*) */

void __thiscall
cocosbuilder::CCBSequence::setCallbackChannel(CCBSequence *this,CCBSequenceProperty *param_1)

{
  if (*(Ref **)(this + 0x48) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x48));
  }
  *(CCBSequenceProperty **)(this + 0x48) = param_1;
  if (param_1 != (CCBSequenceProperty *)0x0) {
    cocos2d::Ref::retain((Ref *)param_1);
    return;
  }
  return;
}

