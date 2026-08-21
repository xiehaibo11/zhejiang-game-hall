
/* cocostudio::ComAudio::playBackgroundMusic(char const*) */

void __thiscall cocostudio::ComAudio::playBackgroundMusic(ComAudio *this,char *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)CocosDenshion::SimpleAudioEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00c5a6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1,param_1,0);
  return;
}

