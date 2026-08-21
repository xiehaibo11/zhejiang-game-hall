
/* cocos2d::experimental::AudioEngineImpl::setAudioFocusForAllPlayers(bool) */

void __thiscall
cocos2d::experimental::AudioEngineImpl::setAudioFocusForAllPlayers
          (AudioEngineImpl *this,bool param_1)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(this + 0x50); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*(long *)plVar1[3] + 0x68))((long *)plVar1[3],param_1);
  }
  return;
}

