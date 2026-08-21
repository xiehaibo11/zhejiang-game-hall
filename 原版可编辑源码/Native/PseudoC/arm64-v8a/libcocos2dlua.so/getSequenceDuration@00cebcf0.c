
/* cocosbuilder::CCBAnimationManager::getSequenceDuration(char const*) */

undefined1  [16] __thiscall
cocosbuilder::CCBAnimationManager::getSequenceDuration(CCBAnimationManager *this,char *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  CCBSequence *this_00;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar5 [16];
  
  iVar3 = getSequenceId(this,param_1);
  if (iVar3 == -1) {
    return ZEXT816(0);
  }
  puVar1 = *(undefined8 **)(this + 0x38);
  puVar2 = *(undefined8 **)(this + 0x30);
  do {
    if (puVar2 == puVar1) {
      this_00 = (CCBSequence *)0x0;
      break;
    }
    iVar4 = CCBSequence::getSequenceId((CCBSequence *)*puVar2);
    this_00 = (CCBSequence *)*puVar2;
    puVar2 = puVar2 + 1;
  } while (iVar4 != iVar3);
  CCBSequence::getDuration(this_00);
  auVar5._4_4_ = extraout_var;
  auVar5._0_4_ = extraout_s0;
  auVar5._8_8_ = extraout_var_00;
  return auVar5;
}

