
/* cocos2d::AudioEngine::addTask(std::__ndk1::function<void ()> const&) */

void cocos2d::AudioEngine::addTask(function *param_1)

{
  mutex *this;
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
                    /* catch() { ... } // from try @ 00a6e944 with catch @ 00a6eb2c */
  lazyInit();
  lVar2 = s_threadPool;
                    /* catch() { ... } // from try @ 00a6e97c with catch @ 00a6eb3c
                       catch() { ... } // from try @ 00a6e9ec with catch @ 00a6eb3c */
  if ((_audioEngineImpl != 0) && (s_threadPool != 0)) {
    this = (mutex *)(s_threadPool + 0x48);
    std::__ndk1::mutex::lock(this);
    lVar7 = *(long *)(lVar2 + 0x20);
    lVar5 = *(long *)(lVar2 + 0x28);
    uVar1 = 0;
    if (lVar5 - lVar7 != 0) {
      uVar1 = (lVar5 - lVar7 >> 3) * 0x55 - 1;
    }
    uVar6 = *(long *)(lVar2 + 0x40) + *(long *)(lVar2 + 0x38);
    if (uVar1 == uVar6) {
                    /* try { // try from 00a6eb94 to 00b6ebe7 has its CatchHandler @ 00a6eb94
                       catch() { ... } // from try @ 00a6eb94 with catch @ 00a6eb94
                       catch() { ... } // from try @ 00a6ed9c with catch @ 00a6eb94 */
      std::__ndk1::
      deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::
      __add_back_capacity((deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
                           *)(lVar2 + 0x18));
      lVar7 = *(long *)(lVar2 + 0x20);
      lVar5 = *(long *)(lVar2 + 0x28);
      uVar6 = *(long *)(lVar2 + 0x38) + *(long *)(lVar2 + 0x40);
    }
    if (lVar5 == lVar7) {
                    /* try { // try from 00a6ec08 to 00b6ec13 has its CatchHandler @ 00a6ee30 */
      lVar7 = 0;
      plVar3 = *(long **)(param_1 + 0x20);
    }
    else {
      lVar7 = *(long *)(lVar7 + (uVar6 / 0x55) * 8) + (uVar6 % 0x55) * 0x30;
      plVar3 = *(long **)(param_1 + 0x20);
    }
    if (plVar3 == (long *)0x0) {
                    /* try { // try from 00a6ec14 to 00b6ec1f has its CatchHandler @ 00a6ee2c */
      *(undefined8 *)(lVar7 + 0x20) = 0;
    }
    else if ((long *)param_1 == plVar3) {
      *(long *)(lVar7 + 0x20) = lVar7;
                    /* try { // try from 00a6ec20 to 00b6ec27 has its CatchHandler @ 00a6ee44 */
      (**(code **)(**(long **)(param_1 + 0x20) + 0x18))(*(long **)(param_1 + 0x20),lVar7);
    }
    else {
                    /* try { // try from 00a6ebe8 to 00b6ebff has its CatchHandler @ 00a6ee34 */
      uVar4 = (**(code **)(*plVar3 + 0x10))();
      *(undefined8 *)(lVar7 + 0x20) = uVar4;
    }
    *(long *)(lVar2 + 0x40) = *(long *)(lVar2 + 0x40) + 1;
                    /* try { // try from 00a6ec44 to 00b6ec4b has its CatchHandler @ 00a6ee14 */
    std::__ndk1::condition_variable::notify_one((condition_variable *)(lVar2 + 0x70));
    std::__ndk1::mutex::unlock(this);
    return;
  }
  return;
}

