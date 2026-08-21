
/* v8::internal::PerfJitLogger::LogRecordedBuffer(v8::internal::AbstractCode,
   v8::internal::SharedFunctionInfo, char const*, int) */

void __thiscall
v8::internal::PerfJitLogger::LogRecordedBuffer
          (PerfJitLogger *this,undefined **param_2,undefined8 param_3,char *param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  uchar *puVar3;
  ulong uVar4;
  code *pcVar5;
  undefined **local_90;
  code *pcStack_88;
  undefined *local_80;
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((((FLAG_perf_basic_prof_only_functions != '\0') &&
       (uVar4 = (ulong)param_2 & 0xffffffff00000000 | 7,
       *(short *)(uVar4 + *(uint *)((long)param_2 + -1)) == 0x9a)) &&
      (uVar2 = *(uint *)((long)param_2 + 0x17) & 0x3e, uVar2 != 0x18)) &&
     ((*(short *)(uVar4 + *(uint *)((long)param_2 + -1)) != 0x9a || (uVar2 != 0))))
  goto LAB_014ec9f8;
  if (file_mutex_ != '\x02') {
    local_80 = &DAT_01d46b64;
    local_90 = &PTR_FUN_01c984d0;
    pcStack_88 = base::
                 LazyInstanceImpl<v8::base::RecursiveMutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::RecursiveMutex>,v8::base::DefaultConstructTrait<v8::base::RecursiveMutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::RecursiveMutex>>
                 ::InitInstance;
    local_70 = (long *)&local_90;
    base::CallOnceImpl(&file_mutex_,&local_90);
    if (&local_90 == (undefined ***)local_70) {
      pcVar5 = *(code **)(*local_70 + 0x20);
    }
    else {
      if (local_70 == (long *)0x0) goto LAB_014ec920;
      pcVar5 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar5)();
  }
LAB_014ec920:
  base::RecursiveMutex::Lock((RecursiveMutex *)&DAT_01d46b64);
  if ((perf_output_handle_ != 0) &&
     (*(short *)(((ulong)param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)param_2 + -1))
      == 0x9a)) {
    local_90 = param_2;
    if (((int)param_3 != 0) &&
       ((FLAG_perf_prof != '\0' && (1 < (*(uint *)((long)param_2 + 0x17) >> 1 & 0x1f) - 7)))) {
      LogWriteDebugInfo(this,param_2,param_3);
    }
    if (*(int *)((long)local_90 + 0x17) < 0) {
      puVar3 = (uchar *)Code::OffHeapInstructionStart((Code *)&local_90);
    }
    else {
      puVar3 = (uchar *)((long)local_90 + 0x3f);
    }
    uVar2 = Code::ExecutableInstructionSize((Code *)&local_90);
    if (FLAG_perf_prof_unwinding_info != '\0') {
      LogWriteUnwindingInfo(this,local_90);
    }
    WriteJitCodeLoadEntry(this,puVar3,uVar2,param_4,param_5);
  }
  base::RecursiveMutex::Unlock((RecursiveMutex *)&DAT_01d46b64);
LAB_014ec9f8:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

