
void FUN_015a3198(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_50;
  long *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x218);
  }
  if (DAT_01d47578 == (byte *)0x0) {
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47578 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.runtime");
  }
  pbVar1 = DAT_01d47578;
  if ((*DAT_01d47578 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x18))
              (plVar2,0x58,pbVar1,"V8.Runtime_Runtime_Abort",0,0,0,0,0,0,0,&local_50,0);
    plVar2 = local_48;
    local_48 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_50;
    local_50 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  if ((*param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsSmi()");
  }
  uVar3 = v8::internal::GetAbortReason(*param_2 >> 1 & 0x7fffffff);
  v8::base::OS::PrintError("abort: %s\n",uVar3);
  v8::internal::Isolate::PrintStack(param_3,__cxa_thread_atexit_impl,1);
                    /* WARNING: Subroutine does not return */
  v8::base::OS::Abort();
}

