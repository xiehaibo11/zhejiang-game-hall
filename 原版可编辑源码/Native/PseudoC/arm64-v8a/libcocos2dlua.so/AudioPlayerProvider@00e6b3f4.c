
/* cocos2d::experimental::AudioPlayerProvider::AudioPlayerProvider(SLEngineItf_ const* const*,
   SLObjectItf_ const* const*, int, int, std::__ndk1::function<int (std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, long*, long*)> const&,
   cocos2d::experimental::ICallerThreadUtils*) */

void __thiscall
cocos2d::experimental::AudioPlayerProvider::AudioPlayerProvider
          (AudioPlayerProvider *this,SLEngineItf_ **param_1,SLObjectItf_ **param_2,int param_3,
          int param_4,function *param_5,ICallerThreadUtils *param_6)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  AudioMixerController *this_00;
  PcmAudioService *this_01;
  
  *(SLEngineItf_ ***)(this + 8) = param_1;
  *(SLObjectItf_ ***)(this + 0x10) = param_2;
  *(int *)(this + 0x18) = param_3;
  *(int *)(this + 0x1c) = param_4;
  *(undefined ***)this = &PTR__AudioPlayerProvider_016f3a88;
  plVar2 = *(long **)(param_5 + 0x20);
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(this + 0x40) = 0;
  }
  else if ((long *)param_5 == plVar2) {
    *(AudioPlayerProvider **)(this + 0x40) = this + 0x20;
    (**(code **)(**(long **)(param_5 + 0x20) + 0x18))();
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x10))();
    *(undefined8 *)(this + 0x40) = uVar3;
  }
  *(ICallerThreadUtils **)(this + 0x50) = param_6;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x78) = 0x3f800000;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 200) = 0x3f800000;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  uVar3 = ThreadPool::newCachedThreadPool(1,8,5,2,2);
  *(undefined8 *)(this + 0x160) = uVar3;
  __android_log_print(4,"AudioPlayerProvider","deviceSampleRate: %d, bufferSizeInFrames: %d",
                      *(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c));
  if (DAT_017774f0 < 1) {
    iVar1 = getSDKVersion();
    if (iVar1 < 1) {
      __android_log_print(6,"AudioPlayerProvider","Fail to get Android API level!");
      DAT_017774f0 = iVar1;
    }
    else {
      __android_log_print(3,"AudioPlayerProvider","Android API level: %d",iVar1);
      DAT_017774f0 = iVar1;
    }
  }
  if (DAT_017774f0 < 0x11) {
    return;
  }
  this_00 = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this_00 != (AudioMixerController *)0x0) {
    AudioMixerController::AudioMixerController
              (this_00,*(int *)(this + 0x1c),*(int *)(this + 0x18),2);
  }
  *(AudioMixerController **)(this + 0x158) = this_00;
  AudioMixerController::init(this_00);
  this_01 = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (this_01 != (PcmAudioService *)0x0) {
    PcmAudioService::PcmAudioService(this_01,param_1,param_2);
  }
  *(PcmAudioService **)(this + 0x150) = this_01;
  PcmAudioService::init(this_01,*(AudioMixerController **)(this + 0x158),2,param_3,param_4 << 1);
  return;
}

