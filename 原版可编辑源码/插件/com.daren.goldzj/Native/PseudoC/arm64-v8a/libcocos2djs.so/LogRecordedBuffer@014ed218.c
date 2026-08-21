
/* v8::internal::PerfJitLogger::LogRecordedBuffer(v8::internal::wasm::WasmCode const*, char const*,
   int) */

void __thiscall
v8::internal::PerfJitLogger::LogRecordedBuffer
          (PerfJitLogger *this,WasmCode *param_1,char *param_2,int param_3)

{
  long lVar1;
  code *pcVar2;
  undefined **local_90;
  code *pcStack_88;
  undefined *local_80;
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (file_mutex_ != '\x02') {
    local_80 = &DAT_01d46b64;
    local_90 = &PTR_FUN_01c984d0;
    pcStack_88 = base::
                 LazyInstanceImpl<v8::base::RecursiveMutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::RecursiveMutex>,v8::base::DefaultConstructTrait<v8::base::RecursiveMutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::RecursiveMutex>>
                 ::InitInstance;
    local_70 = (long *)&local_90;
    base::CallOnceImpl(&file_mutex_,&local_90);
    if (&local_90 == (undefined ***)local_70) {
      pcVar2 = *(code **)(*local_70 + 0x20);
    }
    else {
      if (local_70 == (long *)0x0) goto LAB_014ed2c4;
      pcVar2 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar2)();
  }
LAB_014ed2c4:
  base::RecursiveMutex::Lock((RecursiveMutex *)&DAT_01d46b64);
  if (perf_output_handle_ != 0) {
    if (FLAG_perf_prof_annotate_wasm != '\0') {
      LogWriteDebugInfo(this,param_1);
    }
    WriteJitCodeLoadEntry(this,*(uchar **)param_1,*(uint *)(param_1 + 8),param_2,param_3);
  }
  base::RecursiveMutex::Unlock((RecursiveMutex *)&DAT_01d46b64);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

