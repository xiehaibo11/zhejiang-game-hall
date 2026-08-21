
/* cocostudio::ComAudio::stopBackgroundMusic(bool) */

void __thiscall cocostudio::ComAudio::stopBackgroundMusic(ComAudio *this,bool param_1)

{
  long *plVar1;
  
  plVar1 = (long *)CocosDenshion::SimpleAudioEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00c5a0e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
  return;
}

