
/* cocostudio::ComAudio::playBackgroundMusic() */

void __thiscall cocostudio::ComAudio::playBackgroundMusic(ComAudio *this)

{
  long *plVar1;
  ComAudio *pCVar2;
  
  plVar1 = (long *)CocosDenshion::SimpleAudioEngine::getInstance();
  if (((byte)this[0x58] & 1) == 0) {
    pCVar2 = this + 0x59;
  }
  else {
    pCVar2 = *(ComAudio **)(this + 0x68);
  }
                    /* WARNING: Could not recover jumptable at 0x00c5a740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1,pCVar2,this[0x70]);
  return;
}

