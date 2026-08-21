
/* cocostudio::ComAudio::isBackgroundMusicPlaying() */

void cocostudio::ComAudio::isBackgroundMusicPlaying(void)

{
  long *plVar1;
  
  plVar1 = (long *)CocosDenshion::SimpleAudioEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00c5a7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))();
  return;
}

