
/* cocos2d::experimental::AudioDecoderSLES::signalEos() */

void __thiscall cocos2d::experimental::AudioDecoderSLES::signalEos(AudioDecoderSLES *this)

{
  std::__ndk1::mutex::lock((mutex *)(this + 0xac));
  this[0xa8] = (AudioDecoderSLES)0x1;
  std::__ndk1::condition_variable::notify_one((condition_variable *)(this + 0xd4));
  std::__ndk1::mutex::unlock((mutex *)(this + 0xac));
  return;
}

