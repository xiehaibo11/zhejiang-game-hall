
/* cocos2d::experimental::AudioEngine::addTask(std::__ndk1::function<void ()> const&) */

void cocos2d::experimental::AudioEngine::addTask(function *param_1)

{
  mutex *this;
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  AudioEngineImpl *this_00;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (_audioEngineImpl == (AudioEngineImpl *)0x0) {
    this_00 = operator_new(0xd8,(nothrow_t *)&std::nothrow);
    if (this_00 != (AudioEngineImpl *)0x0) {
      AudioEngineImpl::AudioEngineImpl(this_00);
      _audioEngineImpl = this_00;
      uVar4 = AudioEngineImpl::init(this_00);
      if ((uVar4 & 1) != 0) goto LAB_00e69dac;
      if (_audioEngineImpl != (AudioEngineImpl *)0x0) {
        (**(code **)(*(long *)_audioEngineImpl + 8))(_audioEngineImpl);
      }
    }
    _audioEngineImpl = (AudioEngineImpl *)0x0;
  }
  else {
LAB_00e69dac:
    lVar1 = s_threadPool;
    if ((_audioEngineImpl != (AudioEngineImpl *)0x0) && (s_threadPool != 0)) {
      this = (mutex *)(s_threadPool + 0x48);
      std::__ndk1::mutex::lock(this);
      lVar7 = *(long *)(lVar1 + 0x20);
      lVar5 = *(long *)(lVar1 + 0x28);
      uVar4 = 0;
      if (lVar5 - lVar7 != 0) {
        uVar4 = (lVar5 - lVar7 >> 3) * 0x55 - 1;
      }
      uVar6 = *(long *)(lVar1 + 0x40) + *(long *)(lVar1 + 0x38);
      if (uVar4 == uVar6) {
        std::__ndk1::
        deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::
        __add_back_capacity((deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
                             *)(lVar1 + 0x18));
        lVar7 = *(long *)(lVar1 + 0x20);
        lVar5 = *(long *)(lVar1 + 0x28);
        uVar6 = *(long *)(lVar1 + 0x38) + *(long *)(lVar1 + 0x40);
      }
      if (lVar5 == lVar7) {
        lVar7 = 0;
        plVar2 = *(long **)(param_1 + 0x20);
      }
      else {
        lVar7 = *(long *)(lVar7 + (uVar6 / 0x55) * 8) + (uVar6 % 0x55) * 0x30;
        plVar2 = *(long **)(param_1 + 0x20);
      }
      if (plVar2 == (long *)0x0) {
        *(undefined8 *)(lVar7 + 0x20) = 0;
      }
      else if ((long *)param_1 == plVar2) {
        *(long *)(lVar7 + 0x20) = lVar7;
        (**(code **)(**(long **)(param_1 + 0x20) + 0x18))(*(long **)(param_1 + 0x20),lVar7);
      }
      else {
        uVar3 = (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)(lVar7 + 0x20) = uVar3;
      }
      *(long *)(lVar1 + 0x40) = *(long *)(lVar1 + 0x40) + 1;
      std::__ndk1::condition_variable::notify_one((condition_variable *)(lVar1 + 0x70));
      std::__ndk1::mutex::unlock(this);
      return;
    }
  }
  return;
}

