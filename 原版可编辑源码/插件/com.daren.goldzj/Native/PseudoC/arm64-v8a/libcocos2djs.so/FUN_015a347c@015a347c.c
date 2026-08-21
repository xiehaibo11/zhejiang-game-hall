
undefined8 FUN_015a347c(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  byte **local_a0;
  byte *local_98;
  char *local_90;
  undefined8 local_88;
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
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x219);
  }
  if (DAT_01d47580 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47580 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d47580;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d47580 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"V8.Runtime_Runtime_AbortJS",0,0,0,0,0,0,0,&local_50,0);
    plVar3 = local_48;
    local_48 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_50;
    local_50 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_AbortJS";
    local_98 = pbVar2;
    local_88 = uVar4;
  }
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  local_58 = *param_2;
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  if (((local_58 & 1) != 0) &&
     (*(ushort *)((local_58 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_58 - 1)) < 0x40)) {
    if (v8::internal::FLAG_disable_abortjs != '\0') {
      v8::internal::String::ToCString(&local_50,&local_58,1,1,0);
      v8::base::OS::PrintError("[disabled] abort: %s\n",local_50);
      plVar3 = local_50;
      local_50 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        operator_delete__(plVar3);
      }
      *(undefined8 *)(param_3 + 0x95a0) = uVar4;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        v8::internal::HandleScope::DeleteExtensions(param_3);
      }
      if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
        plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar3 + 0x28))(plVar3,local_98,local_90,local_88);
      }
      if (local_80 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
      }
      return 0;
    }
    v8::internal::String::ToCString(&local_50,&local_58,1,1,0);
    v8::base::OS::PrintError("abort: %s\n",local_50);
    FUN_00f4f284(&local_50);
    v8::internal::Isolate::PrintStack(param_3,__cxa_thread_atexit_impl,1);
                    /* WARNING: Subroutine does not return */
    v8::base::OS::Abort();
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsString()");
}

