
/* cocos2d::experimental::AudioEngine::lazyInit() */

undefined8 cocos2d::experimental::AudioEngine::lazyInit(void)

{
  undefined8 uVar1;
  AudioEngineImpl *this;
  ulong uVar2;
  
  if (_audioEngineImpl == (AudioEngineImpl *)0x0) {
    this = operator_new(0xd8,(nothrow_t *)&std::nothrow);
    if (this != (AudioEngineImpl *)0x0) {
      AudioEngineImpl::AudioEngineImpl(this);
      _audioEngineImpl = this;
      uVar2 = AudioEngineImpl::init(this);
      if ((uVar2 & 1) != 0) goto LAB_00e68590;
      if (_audioEngineImpl != (AudioEngineImpl *)0x0) {
        (**(code **)(*(long *)_audioEngineImpl + 8))();
      }
    }
    uVar1 = 0;
    _audioEngineImpl = (AudioEngineImpl *)0x0;
  }
  else {
LAB_00e68590:
    uVar1 = 1;
  }
  return uVar1;
}

