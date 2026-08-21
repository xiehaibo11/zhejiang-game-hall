
/* cocostudio::ComAudio::resumeAllEffects() */

void cocostudio::ComAudio::resumeAllEffects(void)

{
  long *plVar1;
  
  plVar1 = (long *)CocosDenshion::SimpleAudioEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00c5a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x80))();
  return;
}

