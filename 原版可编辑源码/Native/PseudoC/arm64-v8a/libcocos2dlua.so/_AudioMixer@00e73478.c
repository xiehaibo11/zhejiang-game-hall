
/* cocos2d::experimental::AudioMixer::~AudioMixer() */

void __thiscall cocos2d::experimental::AudioMixer::~AudioMixer(AudioMixer *this)

{
  AudioMixer *pAVar1;
  long *plVar2;
  int iVar3;
  
  pAVar1 = this + 0xb8;
  iVar3 = 0x20;
  plVar2 = *(long **)pAVar1;
  while( true ) {
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    iVar3 = iVar3 + -1;
    pAVar1 = pAVar1 + 0xd0;
    if (iVar3 == 0) break;
    plVar2 = *(long **)pAVar1;
  }
  if (*(void **)(this + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x38));
  }
  if (*(void **)(this + 0x40) == (void *)0x0) {
    return;
  }
  operator_delete__(*(void **)(this + 0x40));
  return;
}

