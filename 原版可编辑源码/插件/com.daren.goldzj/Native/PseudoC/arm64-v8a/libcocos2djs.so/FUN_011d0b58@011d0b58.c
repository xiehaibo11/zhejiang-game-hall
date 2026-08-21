
undefined8 FUN_011d0b58(undefined8 param_1,ulong *param_2,long param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  byte **ppbVar5;
  ulong uVar6;
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
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x1a0);
  }
  if (DAT_01d3fb48 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fb48 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d3fb48;
  if ((*DAT_01d3fb48 & 5) == 0) {
    ppbVar5 = (byte **)0x0;
  }
  else {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"V8.Runtime_Runtime_IsJSReceiver",0,0,0,0,0,0,0,&local_50,
                       0);
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
    local_90 = "V8.Runtime_Runtime_IsJSReceiver";
    local_98 = pbVar2;
    local_88 = uVar4;
  }
  uVar6 = *param_2;
  if ((uVar6 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_3 + 0xc0);
  }
  else {
    puVar1 = (undefined8 *)(param_3 + 0xb8);
    if (*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0xa9) {
      puVar1 = (undefined8 *)(param_3 + 0xc0);
    }
    uVar4 = *puVar1;
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

