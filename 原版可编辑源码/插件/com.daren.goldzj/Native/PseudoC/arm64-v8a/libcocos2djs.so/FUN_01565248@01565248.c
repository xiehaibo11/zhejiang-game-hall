
undefined8 FUN_01565248(undefined8 param_1,undefined8 param_2,Isolate *param_3)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
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
    v8::internal::RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x16b);
  }
  if (DAT_01d46f60 == (byte *)0x0) {
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46f60 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.runtime");
  }
  pbVar1 = DAT_01d46f60;
  local_90 = (byte **)0x0;
  if ((*DAT_01d46f60 & 5) != 0) {
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar3 = (**(code **)(*plVar2 + 0x18))
                      (plVar2,0x58,pbVar1,"V8.Runtime_Runtime_ThrowStackOverflow",0,0,0,0,0,0,0,
                       &local_40,0);
    plVar2 = local_38;
    local_38 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_40;
    local_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    local_90 = &local_88;
    local_80 = "V8.Runtime_Runtime_ThrowStackOverflow";
    local_88 = pbVar1;
    local_78 = uVar3;
  }
  uVar3 = v8::internal::Isolate::StackOverflow(param_3);
  if ((local_90 != (byte **)0x0) && (*local_88 != 0)) {
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x28))(plVar2,local_88,local_80,local_78);
  }
  if (local_70 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
  }
  return uVar3;
}

