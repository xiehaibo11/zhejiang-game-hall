
/* cocos2d::Track::setVolume(float) */

void __thiscall cocos2d::Track::setVolume(Track *this,float param_1)

{
  std::__ndk1::mutex::lock((mutex *)(this + 0xdc));
  if (1e-05 < ABS(*(float *)(this + 0xd4) - param_1)) {
    *(float *)(this + 0xd4) = param_1;
    this[0xd8] = (Track)0x1;
  }
  std::__ndk1::mutex::unlock((mutex *)(this + 0xdc));
  return;
}

