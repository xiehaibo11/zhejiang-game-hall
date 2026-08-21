
/* cocostudio::ComAudio::playEffect(char const*) */

void __thiscall cocostudio::ComAudio::playEffect(ComAudio *this,char *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)CocosDenshion::SimpleAudioEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00c5a8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(0x3f800000,0,0x3f800000,plVar1,param_1,0);
  return;
}

