
/* cocostudio::ComAudio::onRemove() */

void cocostudio::ComAudio::onRemove(void)

{
  long *plVar1;
  
  plVar1 = (long *)CocosDenshion::SimpleAudioEngine::getInstance();
  (**(code **)(*plVar1 + 0x10))(plVar1,1);
  plVar1 = (long *)CocosDenshion::SimpleAudioEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00c5a134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x90))();
  return;
}

