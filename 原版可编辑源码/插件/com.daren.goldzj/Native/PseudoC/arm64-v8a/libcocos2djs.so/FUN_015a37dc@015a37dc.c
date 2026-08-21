
void FUN_015a37dc(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  byte *pbVar1;
  long *plVar2;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong local_58;
  long *local_50;
  long *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x21a);
  }
  if (DAT_01d47588 == (byte *)0x0) {
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47588 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.runtime");
  }
  pbVar1 = DAT_01d47588;
  if ((*DAT_01d47588 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x18))
              (plVar2,0x58,pbVar1,"V8.Runtime_Runtime_AbortCSAAssert",0,0,0,0,0,0,0,&local_50,0);
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
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  local_58 = *param_2;
  if (((local_58 & 1) != 0) &&
     (*(ushort *)((local_58 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_58 - 1)) < 0x40)) {
    v8::internal::String::ToCString(&local_50,&local_58,1,1,0);
    v8::base::OS::PrintError("abort: CSA_ASSERT failed: %s\n",local_50);
    FUN_00f4f284(&local_50);
    v8::internal::Isolate::PrintStack(param_3,__cxa_thread_atexit_impl,1);
                    /* WARNING: Subroutine does not return */
    v8::base::OS::Abort();
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsString()");
}

