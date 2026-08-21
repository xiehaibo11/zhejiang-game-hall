
/* v8::platform::DefaultForegroundTaskRunner::PostIdleTask(std::__ndk1::unique_ptr<v8::IdleTask,
   std::__ndk1::default_delete<v8::IdleTask> >) */

void __thiscall
v8::platform::DefaultForegroundTaskRunner::PostIdleTask
          (DefaultForegroundTaskRunner *this,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (*(int *)(this + 0x98) == 1) {
    base::Mutex::Lock((Mutex *)(this + 0xc));
    if (this[8] == (DefaultForegroundTaskRunner)0x0) {
      lVar2 = *(long *)(this + 0xa8);
      lVar4 = *(long *)(this + 0xb0);
      uVar1 = 0;
      if (lVar4 - lVar2 != 0) {
        uVar1 = (lVar4 - lVar2) * 0x40 - 1;
      }
      uVar6 = *(long *)(this + 200) + *(long *)(this + 0xc0);
      if (uVar1 == uVar6) {
        std::__ndk1::
        deque<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>>>
        ::__add_back_capacity
                  ((deque<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::IdleTask,std::__ndk1::default_delete<v8::IdleTask>>>>
                    *)(this + 0xa0));
        lVar2 = *(long *)(this + 0xa8);
        lVar4 = *(long *)(this + 0xb0);
        uVar6 = *(long *)(this + 0xc0) + *(long *)(this + 200);
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
      *(long *)(this + 200) = *(long *)(this + 200) + 1;
    }
    base::Mutex::Unlock((Mutex *)(this + 0xc));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IdleTaskSupport::kEnabled == idle_task_support_");
}

