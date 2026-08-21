
/* v8::internal::CompilerDispatcher::DoBackgroundWork() */

void __thiscall v8::internal::CompilerDispatcher::DoBackgroundWork(CompilerDispatcher *this)

{
  Mutex *this_00;
  CompilerDispatcher CVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  Job *local_a8;
  byte **local_a0;
  byte *local_98;
  char *local_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (DAT_01d3ec58 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ec58 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.compile");
  }
  pbVar3 = DAT_01d3ec58;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d3ec58 & 5) != 0) {
    local_80 = (long *)0x0;
    local_78 = (long *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.CompilerDispatcherDoBackgroundWork",0,0,0,0,0,0,0,
                       &local_80,0);
    plVar4 = local_78;
    local_78 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_80;
    local_80 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.CompilerDispatcherDoBackgroundWork";
    local_98 = pbVar3;
    local_88 = uVar5;
  }
  this_00 = (Mutex *)(this + 0xb0);
  while( true ) {
    local_a8 = (Job *)0x0;
    base::Mutex::Lock(this_00);
    if (*(long *)(this + 0xf8) != 0) {
      local_a8 = *(Job **)(*(long *)(this + 0xf0) + 0x10);
      std::__ndk1::
      __hash_table<v8::internal::CompilerDispatcher::Job*,std::__ndk1::hash<v8::internal::CompilerDispatcher::Job*>,std::__ndk1::equal_to<v8::internal::CompilerDispatcher::Job*>,std::__ndk1::allocator<v8::internal::CompilerDispatcher::Job*>>
      ::remove(&local_80,this + 0xe0);
      plVar4 = local_80;
      local_80 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        operator_delete(plVar4);
      }
      std::__ndk1::
      __hash_table<v8::internal::CompilerDispatcher::Job*,std::__ndk1::hash<v8::internal::CompilerDispatcher::Job*>,std::__ndk1::equal_to<v8::internal::CompilerDispatcher::Job*>,std::__ndk1::allocator<v8::internal::CompilerDispatcher::Job*>>
      ::
      __emplace_unique_key_args<v8::internal::CompilerDispatcher::Job*,v8::internal::CompilerDispatcher::Job*const&>
                ((__hash_table<v8::internal::CompilerDispatcher::Job*,std::__ndk1::hash<v8::internal::CompilerDispatcher::Job*>,std::__ndk1::equal_to<v8::internal::CompilerDispatcher::Job*>,std::__ndk1::allocator<v8::internal::CompilerDispatcher::Job*>>
                  *)(this + 0x108),&local_a8,&local_a8);
    }
    base::Mutex::Unlock(this_00);
    if (local_a8 == (Job *)0x0) break;
    if (*(long *)(this + 0x168) == 0) {
      CVar1 = this[0x40];
    }
    else {
      *(undefined8 *)(this + 0x168) = 0;
      base::Semaphore::Wait((Semaphore *)(this + 0x170));
      CVar1 = this[0x40];
    }
    if (CVar1 != (CompilerDispatcher)0x0) {
      PrintF("CompilerDispatcher: doing background work\n");
    }
    BackgroundCompileTask::Run(*(BackgroundCompileTask **)local_a8);
    base::Mutex::Lock(this_00);
    FUN_00ef62c8((__hash_table<v8::internal::CompilerDispatcher::Job*,std::__ndk1::hash<v8::internal::CompilerDispatcher::Job*>,std::__ndk1::equal_to<v8::internal::CompilerDispatcher::Job*>,std::__ndk1::allocator<v8::internal::CompilerDispatcher::Job*>>
                  *)(this + 0x108),&local_a8);
    local_a8[0x10] = (Job)0x1;
    if ((*(long *)(local_a8 + 8) != 0) || (local_a8[0x11] != (Job)0x0)) {
      ScheduleIdleTaskFromAnyThread((LockGuard *)this);
    }
    if (*(Job **)(this + 0x130) == local_a8) {
      *(undefined8 *)(this + 0x130) = 0;
      base::ConditionVariable::NotifyOne((ConditionVariable *)(this + 0x138));
    }
    base::Mutex::Unlock(this_00);
  }
  base::Mutex::Lock(this_00);
  *(int *)(this + 0xdc) = *(int *)(this + 0xdc) + -1;
  base::Mutex::Unlock(this_00);
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_98,local_90,local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

