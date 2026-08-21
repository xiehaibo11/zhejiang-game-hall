
/* cocosbuilder::CCBAnimationManager::getRunningSequenceName() */

void __thiscall cocosbuilder::CCBAnimationManager::getRunningSequenceName(CCBAnimationManager *this)

{
  if (*(CCBSequence **)(this + 0xe0) != (CCBSequence *)0x0) {
    CCBSequence::getName(*(CCBSequence **)(this + 0xe0));
    return;
  }
  return;
}

