
/* cocos2d::AudioMixer::~AudioMixer() */

void __thiscall cocos2d::AudioMixer::~AudioMixer(AudioMixer *this)

{
  AudioMixer *pAVar1;
  int iVar2;
  
  pAVar1 = this + 0xb8;
  iVar2 = 0x20;
  do {
    if (*(long **)pAVar1 != (long *)0x0) {
      (**(code **)(**(long **)pAVar1 + 8))();
    }
    iVar2 = iVar2 + -1;
    pAVar1 = pAVar1 + 0xd0;
  } while (iVar2 != 0);
  if (*(void **)(this + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x38));
  }
  if (*(void **)(this + 0x40) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x40));
    return;
  }
  return;
}

