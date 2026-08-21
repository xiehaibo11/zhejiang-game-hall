
/* cocostudio::ComAudio::pauseAllEffects() */

void cocostudio::ComAudio::pauseAllEffects(void)

{
  long *plVar1;
  
  plVar1 = (long *)CocosDenshion::SimpleAudioEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00c5a990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x70))();
  return;
}

