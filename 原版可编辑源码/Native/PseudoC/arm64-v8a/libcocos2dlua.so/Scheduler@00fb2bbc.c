
/* cocos2d::Scheduler::Scheduler() */

void __thiscall cocos2d::Scheduler::Scheduler(Scheduler *this)

{
  void *pvVar1;
  
  Ref::Ref((Ref *)this);
  *(undefined4 *)(this + 0x24) = 0x3f800000;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined ***)this = &PTR__Scheduler_017237b0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x6a) = 0;
  *(undefined8 *)(this + 0x62) = 0;
  pvVar1 = operator_new(0xa0);
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(void **)(this + 0x80) = pvVar1;
  *(void **)(this + 0x78) = pvVar1;
  *(long *)(this + 0x88) = (long)pvVar1 + 0xa0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  std::__ndk1::
  vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::
  reserve((vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
           *)(this + 0x90),0x1e);
  return;
}

