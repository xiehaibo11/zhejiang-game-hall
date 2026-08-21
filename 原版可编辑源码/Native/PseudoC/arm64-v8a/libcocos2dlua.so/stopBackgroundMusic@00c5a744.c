
/* cocostudio::ComAudio::stopBackgroundMusic() */

void cocostudio::ComAudio::stopBackgroundMusic(void)

{
  long *plVar1;
  
  plVar1 = (long *)CocosDenshion::SimpleAudioEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00c5a760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,0);
  return;
}

