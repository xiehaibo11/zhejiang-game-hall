
/* cocostudio::ComAudio::unloadEffect(char const*) */

void __thiscall cocostudio::ComAudio::unloadEffect(ComAudio *this,char *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)CocosDenshion::SimpleAudioEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00c5aa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xa0))(plVar1,param_1);
  return;
}

