
ulong FUN_0155d70c(undefined8 param_1,ulong *param_2,long param_3)

{
  uint uVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  byte **local_90;
  byte *local_88;
  char *local_80;
  undefined8 local_78;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_40;
  long *local_38;
  
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_70 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0xf2);
  }
  if (DAT_01d46e30 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46e30 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d46e30;
  local_90 = (byte **)0x0;
  if ((*DAT_01d46e30 & 5) != 0) {
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"V8.Runtime_Runtime_EvictOptimizedCodeSlot",0,0,0,0,0,0,0,
                       &local_40,0);
    plVar3 = local_38;
    local_38 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_40;
    local_40 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_90 = &local_88;
    local_80 = "V8.Runtime_Runtime_EvictOptimizedCodeSlot";
    local_88 = pbVar2;
    local_78 = uVar4;
  }
  uVar5 = *param_2;
  if (((uVar5 & 1) != 0) &&
     (uVar6 = uVar5 & 0xffffffff00000000,
     *(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x439)) {
    local_40 = (long *)(uVar6 | *(uint *)((uVar6 | *(uint *)(uVar5 + 0x13)) + 3));
    v8::internal::FeedbackVector::EvictOptimizedCodeMarkedForDeoptimization
              ((FeedbackVector *)&local_40,uVar6 | *(uint *)(uVar5 + 0xb),
               "Runtime_EvictOptimizedCodeSlot");
    uVar5 = *param_2;
    uVar1 = *(uint *)(uVar5 + 0x17);
    if ((local_90 != (byte **)0x0) && (*local_88 != 0)) {
      plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar3 + 0x28))(plVar3,local_88,local_80,local_78);
    }
    if (local_70 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
    }
    return uVar5 & 0xffffffff00000000 | (ulong)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

