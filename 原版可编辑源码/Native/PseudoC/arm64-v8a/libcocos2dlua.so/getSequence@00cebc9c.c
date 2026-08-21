
/* cocosbuilder::CCBAnimationManager::getSequence(int) */

undefined8 __thiscall
cocosbuilder::CCBAnimationManager::getSequence(CCBAnimationManager *this,int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(this + 0x38);
  puVar2 = *(undefined8 **)(this + 0x30);
  do {
    if (puVar2 == puVar1) {
      return 0;
    }
    iVar3 = CCBSequence::getSequenceId((CCBSequence *)*puVar2);
    uVar4 = *puVar2;
    puVar2 = puVar2 + 1;
  } while (iVar3 != param_1);
  return uVar4;
}

