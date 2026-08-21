
/* v8::platform::DelayedTaskQueue::Append(std::__ndk1::unique_ptr<v8::Task,
   std::__ndk1::default_delete<v8::Task> >) */

void __thiscall v8::platform::DelayedTaskQueue::Append(DelayedTaskQueue *this,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  base::Mutex::Lock((Mutex *)(this + 0x30));
  lVar2 = *(long *)(this + 0x60);
  lVar4 = *(long *)(this + 0x68);
  uVar1 = 0;
  if (lVar4 - lVar2 != 0) {
    uVar1 = (lVar4 - lVar2) * 0x40 - 1;
  }
  uVar6 = *(long *)(this + 0x80) + *(long *)(this + 0x78);
  if (uVar1 == uVar6) {
    std::__ndk1::
    deque<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>
    ::__add_back_capacity
              ((deque<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>
                *)(this + 0x58));
    lVar2 = *(long *)(this + 0x60);
    lVar4 = *(long *)(this + 0x68);
    uVar6 = *(long *)(this + 0x78) + *(long *)(this + 0x80);
  }
  if (lVar4 == lVar2) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)
             (*(long *)(lVar2 + (uVar6 >> 6 & 0x3fffffffffffff8)) + (uVar6 & 0x1ff) * 8);
  }
  uVar5 = *param_2;
  *param_2 = 0;
  *puVar3 = uVar5;
  *(long *)(this + 0x80) = *(long *)(this + 0x80) + 1;
  base::ConditionVariable::NotifyOne((ConditionVariable *)this);
  base::Mutex::Unlock((Mutex *)(this + 0x30));
  return;
}

