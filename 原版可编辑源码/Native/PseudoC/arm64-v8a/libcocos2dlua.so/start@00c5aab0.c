
/* non-virtual thunk to cocostudio::ComAudio::start() */

void __thiscall cocostudio::ComAudio::start(ComAudio *this)

{
  undefined4 uVar1;
  long *plVar2;
  ComAudio *pCVar3;
  
  plVar2 = (long *)CocosDenshion::SimpleAudioEngine::getInstance();
  if (((byte)this[8] & 1) == 0) {
    pCVar3 = this + 9;
  }
  else {
    pCVar3 = *(ComAudio **)(this + 0x18);
  }
  uVar1 = (**(code **)(*plVar2 + 0x60))(0x3f800000,0,0x3f800000,(int)plVar2,pCVar3,this[0x20]);
  *(undefined4 *)(this + 0x24) = uVar1;
  return;
}

