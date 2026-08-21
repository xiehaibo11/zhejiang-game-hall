
/* v8::platform::DefaultForegroundTaskRunner::PostTaskLocked(std::__ndk1::unique_ptr<v8::Task,
   std::__ndk1::default_delete<v8::Task> >, v8::base::LockGuard<v8::base::Mutex,
   (v8::base::NullBehavior)0> const&) */

void v8::platform::DefaultForegroundTaskRunner::PostTaskLocked(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x70);
  lVar4 = *(long *)(param_1 + 0x78);
  uVar1 = 0;
  if (lVar4 - lVar2 != 0) {
    uVar1 = (lVar4 - lVar2) * 0x40 - 1;
  }
  uVar6 = *(long *)(param_1 + 0x90) + *(long *)(param_1 + 0x88);
  if (uVar1 == uVar6) {
    std::__ndk1::
    deque<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>
    ::__add_back_capacity
              ((deque<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::Task,std::__ndk1::default_delete<v8::Task>>>>
                *)(param_1 + 0x68));
    lVar2 = *(long *)(param_1 + 0x70);
    lVar4 = *(long *)(param_1 + 0x78);
    uVar6 = *(long *)(param_1 + 0x88) + *(long *)(param_1 + 0x90);
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
  *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
  base::ConditionVariable::NotifyOne((ConditionVariable *)(param_1 + 0x34));
  return;
}

