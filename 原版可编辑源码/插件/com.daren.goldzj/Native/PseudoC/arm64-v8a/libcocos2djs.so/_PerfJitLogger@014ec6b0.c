
/* v8::internal::PerfJitLogger::~PerfJitLogger() */

void __thiscall v8::internal::PerfJitLogger::~PerfJitLogger(PerfJitLogger *this)

{
  long lVar1;
  code *pcVar2;
  undefined **local_70;
  code *pcStack_68;
  undefined *local_60;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__PerfJitLogger_01cc69f0;
  if (file_mutex_ != '\x02') {
    local_60 = &DAT_01d46b64;
    local_70 = &PTR_FUN_01c984d0;
    pcStack_68 = base::
                 LazyInstanceImpl<v8::base::RecursiveMutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::RecursiveMutex>,v8::base::DefaultConstructTrait<v8::base::RecursiveMutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::RecursiveMutex>>
                 ::InitInstance;
    local_50 = (long *)&local_70;
    base::CallOnceImpl(&file_mutex_,&local_70);
    if (&local_70 == (undefined ***)local_50) {
      pcVar2 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_014ec758;
      pcVar2 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar2)();
  }
LAB_014ec758:
  base::RecursiveMutex::Lock((RecursiveMutex *)&DAT_01d46b64);
  reference_count_ = reference_count_ + -1;
  if (reference_count_ == 0) {
    if (perf_output_handle_ != (FILE *)0x0) {
      fclose(perf_output_handle_);
      perf_output_handle_ = (FILE *)0x0;
    }
  }
  base::RecursiveMutex::Unlock((RecursiveMutex *)&DAT_01d46b64);
  CodeEventLogger::~CodeEventLogger((CodeEventLogger *)this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

