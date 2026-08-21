
/* v8::internal::ObjectStats::CheckpointObjectStats() */

void __thiscall v8::internal::ObjectStats::CheckpointObjectStats(ObjectStats *this)

{
  long lVar1;
  code *pcVar2;
  undefined **local_80;
  code *pcStack_78;
  undefined *local_70;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (DAT_01d3f420 != '\x02') {
    local_80 = &PTR_FUN_01c984d0;
    pcStack_78 = base::
                 LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                 ::InitInstance;
    local_70 = &DAT_01d3f424;
    local_60 = (long *)&local_80;
    base::CallOnceImpl(&DAT_01d3f420,&local_80);
    if (&local_80 == (undefined ***)local_60) {
      pcVar2 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_00ffb7e0;
      pcVar2 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar2)();
  }
LAB_00ffb7e0:
  base::Mutex::Lock((Mutex *)&DAT_01d3f424);
  memcpy(this + 0x2450,this + 8,0x2448);
  memcpy(this + 0x6ce0,this + 0x4898,0x2448);
  memset(this + 8,0,0x2448);
  memset(this + 0x4898,0,0x2448);
  memset(this + 0x9128,0,0x2448);
  memset(this + 0xb570,0,0x24480);
  memset(this + 0x2f9f0,0,0x24480);
  *(undefined8 *)(this + 0x53e78) = 0;
  *(undefined8 *)(this + 0x53e70) = 0;
  *(undefined8 *)(this + 0x53e88) = 0;
  *(undefined8 *)(this + 0x53e80) = 0;
  *(undefined8 *)(this + 0x53e98) = 0;
  *(undefined8 *)(this + 0x53e90) = 0;
  *(undefined8 *)(this + 0x53ea0) = 0;
  base::Mutex::Unlock((Mutex *)&DAT_01d3f424);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

