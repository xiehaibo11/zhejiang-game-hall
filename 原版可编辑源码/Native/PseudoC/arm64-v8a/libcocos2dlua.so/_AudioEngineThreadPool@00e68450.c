
/* cocos2d::experimental::AudioEngine::AudioEngineThreadPool::~AudioEngineThreadPool() */

void __thiscall
cocos2d::experimental::AudioEngine::AudioEngineThreadPool::~AudioEngineThreadPool
          (AudioEngineThreadPool *this)

{
  mutex *this_00;
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  thread *ptVar4;
  thread *this_01;
  undefined8 *puVar5;
  thread *ptVar7;
  undefined8 *puVar6;
  
  this_00 = (mutex *)(this + 0x48);
  std::__ndk1::mutex::lock(this_00);
  this[0xa0] = (AudioEngineThreadPool)0x1;
  std::__ndk1::condition_variable::notify_all((condition_variable *)(this + 0x70));
  std::__ndk1::mutex::unlock(this_00);
  ptVar4 = *(thread **)(this + 8);
  for (ptVar7 = *(thread **)this; ptVar7 != ptVar4; ptVar7 = ptVar7 + 8) {
    std::__ndk1::thread::join(ptVar7);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0x70));
  std::__ndk1::mutex::~mutex(this_00);
  std::__ndk1::
  __deque_base<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
  ::clear((__deque_base<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
           *)(this + 0x18));
  puVar1 = *(undefined8 **)(this + 0x28);
  puVar5 = *(undefined8 **)(this + 0x20);
  if (*(undefined8 **)(this + 0x20) != puVar1) {
    do {
      puVar6 = puVar5 + 1;
      operator_delete((void *)*puVar5);
      puVar5 = puVar6;
    } while (puVar1 != puVar6);
    lVar2 = *(long *)(this + 0x28) - *(long *)(this + 0x20);
    if (lVar2 != 0) {
      *(ulong *)(this + 0x28) = *(long *)(this + 0x28) + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  pvVar3 = *(void **)(this + 0x18);
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  ptVar7 = *(thread **)this;
  if (ptVar7 != (thread *)0x0) {
    this_01 = *(thread **)(this + 8);
    ptVar4 = ptVar7;
    if (this_01 != ptVar7) {
      do {
        this_01 = this_01 + -8;
        std::__ndk1::thread::~thread(this_01);
      } while (ptVar7 != this_01);
      ptVar4 = *(thread **)this;
    }
    *(thread **)(this + 8) = ptVar7;
    operator_delete(ptVar4);
    return;
  }
  return;
}

