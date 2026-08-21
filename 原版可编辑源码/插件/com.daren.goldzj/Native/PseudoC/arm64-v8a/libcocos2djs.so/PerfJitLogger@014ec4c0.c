
/* v8::internal::PerfJitLogger::PerfJitLogger(v8::internal::Isolate*) */

void __thiscall v8::internal::PerfJitLogger::PerfJitLogger(PerfJitLogger *this,Isolate *param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  code *pcVar6;
  double dVar7;
  undefined **local_70;
  code *pcStack_68;
  undefined8 local_60;
  long local_58;
  long *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  CodeEventLogger::CodeEventLogger((CodeEventLogger *)this,param_1);
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
      pcVar6 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_014ec56c;
      pcVar6 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar6)();
  }
LAB_014ec56c:
  base::RecursiveMutex::Lock((RecursiveMutex *)&DAT_01d46b64);
  lVar1 = reference_count_ + 1;
  bVar2 = reference_count_ == 0;
  reference_count_ = lVar1;
  if (bVar2) {
    OpenJitDumpFile();
    if (perf_output_handle_ != (FILE *)0x0) {
      local_60 = (undefined *)CONCAT44(local_60._4_4_,0xdeadbeef);
      pcStack_68 = (code *)0xb700000028;
      local_70 = (undefined **)0x14a695444;
      uVar4 = base::OS::GetCurrentProcessId();
      local_60 = (undefined *)CONCAT44(uVar4,(undefined4)local_60);
      plVar5 = (long *)V8::GetCurrentPlatform();
      dVar7 = (double)(**(code **)(*plVar5 + 0x80))();
      local_58 = (long)(dVar7 * 1000.0);
      local_50 = (long *)0x0;
      fwrite(&local_70,1,0x28,perf_output_handle_);
    }
  }
  base::RecursiveMutex::Unlock((RecursiveMutex *)&DAT_01d46b64);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

