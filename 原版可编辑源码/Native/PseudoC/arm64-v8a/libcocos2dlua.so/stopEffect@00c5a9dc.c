
/* cocostudio::ComAudio::stopEffect(unsigned int) */

void __thiscall cocostudio::ComAudio::stopEffect(ComAudio *this,uint param_1)

{
  long *plVar1;
  
  plVar1 = (long *)CocosDenshion::SimpleAudioEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00c5aa04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x88))(plVar1,param_1);
  return;
}

