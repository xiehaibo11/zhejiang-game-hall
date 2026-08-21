
/* cocos2d::Scheduler::performFunctionInCocosThread(std::__ndk1::function<void ()>) */

void __thiscall cocos2d::Scheduler::performFunctionInCocosThread(Scheduler *this,function *param_2)

{
  ulong uVar1;
  function *pfVar2;
  
  std::__ndk1::mutex::lock((mutex *)(this + 0xa8));
  uVar1 = *(ulong *)(this + 0x98);
  if (uVar1 < *(ulong *)(this + 0xa0)) {
    pfVar2 = *(function **)(param_2 + 0x20);
    if (pfVar2 == (function *)0x0) {
      *(undefined8 *)(uVar1 + 0x20) = 0;
    }
    else if (param_2 == pfVar2) {
      *(ulong *)(uVar1 + 0x20) = uVar1;
      (**(code **)(**(long **)(param_2 + 0x20) + 0x18))(*(long **)(param_2 + 0x20),uVar1);
    }
    else {
      *(function **)(uVar1 + 0x20) = pfVar2;
      *(undefined8 *)(param_2 + 0x20) = 0;
    }
    *(ulong *)(this + 0x98) = uVar1 + 0x30;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::
    __push_back_slow_path<std::__ndk1::function<void()>>
              ((vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
                *)(this + 0x90),param_2);
  }
  std::__ndk1::mutex::unlock((mutex *)(this + 0xa8));
  return;
}

