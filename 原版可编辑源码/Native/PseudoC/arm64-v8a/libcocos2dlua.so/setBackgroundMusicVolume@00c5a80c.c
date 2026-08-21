
/* cocostudio::ComAudio::setBackgroundMusicVolume(float) */

void cocostudio::ComAudio::setBackgroundMusicVolume(float param_1)

{
  long *plVar1;
  undefined4 in_register_00005004;
  
  plVar1 = (long *)CocosDenshion::SimpleAudioEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00c5a834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(CONCAT44(in_register_00005004,param_1));
  return;
}

