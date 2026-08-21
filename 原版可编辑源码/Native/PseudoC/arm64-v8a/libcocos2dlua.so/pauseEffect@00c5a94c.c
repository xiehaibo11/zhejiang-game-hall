
/* cocostudio::ComAudio::pauseEffect(unsigned int) */

void __thiscall cocostudio::ComAudio::pauseEffect(ComAudio *this,uint param_1)

{
  long *plVar1;
  
  plVar1 = (long *)CocosDenshion::SimpleAudioEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00c5a974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  return;
}

