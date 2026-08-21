
undefined8 FUN_011d0da8(undefined8 param_1,ulong *param_2,long param_3)

{
  byte *pbVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  byte **ppbVar5;
  byte *local_98;
  char *local_90;
  undefined8 local_88;
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
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x18a);
  }
  if (DAT_01d3fb50 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fb50 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar1 = DAT_01d3fb50;
  if ((*DAT_01d3fb50 & 5) == 0) {
    ppbVar5 = (byte **)0x0;
    plVar2 = (long *)*param_2;
    plVar3 = local_50;
  }
  else {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar1,"V8.Runtime_Runtime_ClassOf",0,0,0,0,0,0,0,&local_50,0);
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
    ppbVar5 = &local_98;
    local_90 = "V8.Runtime_Runtime_ClassOf";
    plVar2 = (long *)*param_2;
    local_98 = pbVar1;
    local_88 = uVar4;
    plVar3 = local_50;
  }
  local_50 = plVar2;
  if ((((ulong)local_50 & 1) == 0) ||
     (*(ushort *)(((ulong)local_50 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)local_50 - 1))
      < 0xa9)) {
    uVar4 = *(undefined8 *)(param_3 + 0xb0);
    local_50 = plVar3;
  }
  else {
    uVar4 = v8::internal::JSReceiver::class_name((JSReceiver *)&local_50);
  }
  if ((ppbVar5 != (byte **)0x0) && (*local_98 != 0)) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_98,local_90,local_88);
  }
  if (local_80 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return uVar4;
}

