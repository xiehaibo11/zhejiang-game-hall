
/* cocos2d::AudioMixer::track_t::setPlaybackRate(cocos2d::AudioPlaybackRate const&) */

undefined8 __thiscall
cocos2d::AudioMixer::track_t::setPlaybackRate(track_t *this,AudioPlaybackRate *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 200) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xc0) = uVar1;
  return 1;
}

