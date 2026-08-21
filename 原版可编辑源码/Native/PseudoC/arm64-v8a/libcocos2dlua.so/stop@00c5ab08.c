
/* cocostudio::ComAudio::stop() */

void __thiscall cocostudio::ComAudio::stop(ComAudio *this)

{
  undefined4 uVar1;
  long *plVar2;
  
  uVar1 = *(undefined4 *)(this + 0x74);
  plVar2 = (long *)CocosDenshion::SimpleAudioEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00c5ab30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x88))(plVar2,uVar1);
  return;
}

