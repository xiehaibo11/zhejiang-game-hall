
/* cocos2d::experimental::AudioMixer::track_t::setResampler(unsigned int, unsigned int) */

undefined8 __thiscall
cocos2d::experimental::AudioMixer::track_t::setResampler(track_t *this,uint param_1,uint param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (((param_1 == param_2) && (*(long *)(this + 0x58) == 0)) || (*(uint *)(this + 0x60) == param_1)
     ) {
    uVar1 = 0;
  }
  else {
    *(uint *)(this + 0x60) = param_1;
    if (*(long *)(this + 0x58) == 0) {
      plVar2 = (long *)AudioResampler::create(*(undefined4 *)(this + 0x8c),this[0x24],param_2,0);
      *(long **)(this + 0x58) = plVar2;
      (**(code **)(*plVar2 + 0x28))(plVar2,sLocalTimeFreq);
    }
    uVar1 = 1;
  }
  return uVar1;
}

