
/* v8::platform::DefaultForegroundTaskRunner::PostTask(std::__ndk1::unique_ptr<v8::Task,
   std::__ndk1::default_delete<v8::Task> >) */

void __thiscall
v8::platform::DefaultForegroundTaskRunner::PostTask
          (DefaultForegroundTaskRunner *this,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  base::Mutex::Lock((Mutex *)(this + 0xc));
  plVar4 = (long *)*param_2;
  *param_2 = 0;
  if (this[8] == (DefaultForegroundTaskRunner)0x0) {
    lVar2 = *(long *)(this + 0x70);
    uVar1 = 0;
    if (*(long *)(this + 0x78) - lVar2 != 0) {
      uVar1 = (*(long *)(this + 0x78) - lVar2) * 0x40 - 1;
    }
    uVar3 = *(long *)(this + 0x90) + *(long *)(this + 0x88);
    if (uVar1 == uVar3) {
      std::__ndk1::
      deque<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>
      ::__add_back_capacity
                ((deque<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>
                  *)(this + 0x68));
      lVar2 = *(long *)(this + 0x70);
      uVar3 = *(long *)(this + 0x88) + *(long *)(this + 0x90);
    }
    *(long **)(*(long *)(lVar2 + (uVar3 >> 6 & 0x3fffffffffffff8)) + (uVar3 & 0x1ff) * 8) = plVar4;
    *(long *)(this + 0x90) = *(long *)(this + 0x90) + 1;
    base::ConditionVariable::NotifyOne((ConditionVariable *)(this + 0x34));
  }
  else if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  base::Mutex::Unlock((Mutex *)(this + 0xc));
  return;
}

