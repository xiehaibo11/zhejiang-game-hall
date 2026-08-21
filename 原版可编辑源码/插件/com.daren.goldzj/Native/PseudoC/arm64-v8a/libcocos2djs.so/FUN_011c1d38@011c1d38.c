
ulong FUN_011c1d38(undefined8 param_1,ulong *param_2,long param_3)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte **local_a0;
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
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x107);
  }
  if (DAT_01d3f998 == (byte *)0x0) {
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f998 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.runtime");
  }
  pbVar1 = DAT_01d3f998;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d3f998 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar3 = (**(code **)(*plVar2 + 0x18))
                      (plVar2,0x58,pbVar1,"V8.Runtime_Runtime_FunctionGetInferredName",0,0,0,0,0,0,0
                       ,&local_50,0);
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
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_FunctionGetInferredName";
    local_98 = pbVar1;
    local_88 = uVar3;
  }
  uVar5 = *param_2;
  if ((uVar5 & 1) != 0) {
    uVar6 = uVar5 & 0xffffffff00000000;
    uVar4 = uVar6 | 7;
    if (*(short *)(uVar4 + *(uint *)(uVar5 - 1)) == 0x439) {
      uVar5 = uVar6 | *(uint *)(uVar5 + 0xb);
      if (((*(uint *)(uVar5 + 7) & 1) == 0) ||
         (plVar2 = (long *)(uVar6 | *(uint *)(uVar5 + 7)),
         *(short *)(uVar4 + *(uint *)((long)plVar2 - 1)) != 0x83)) {
        if (((*(uint *)(uVar5 + 3) & 1) != 0) &&
           (*(ushort *)(uVar4 + *(uint *)((uVar6 | *(uint *)(uVar5 + 3)) - 1)) - 0x95 < 2)) {
          uVar5 = uVar6 | *(uint *)((uVar6 | *(uint *)(uVar5 + 3)) + 3);
          goto joined_r0x011c1ec8;
        }
      }
      else {
        local_50 = plVar2;
        uVar5 = v8::internal::ScopeInfo::HasInferredFunctionName((ScopeInfo *)&local_50);
        if (((uVar5 & 1) != 0) &&
           ((uVar5 = v8::internal::ScopeInfo::InferredFunctionName((ScopeInfo *)&local_50),
            (uVar5 & 1) != 0 &&
            (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0x40))))
        goto joined_r0x011c1ec8;
      }
      uVar5 = *(ulong *)(uVar6 + 200);
      goto joined_r0x011c1ec8;
    }
  }
  uVar5 = *(ulong *)(param_3 + 200);
joined_r0x011c1ec8:
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x28))(plVar2,local_98,local_90,local_88);
  }
  if (local_80 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return uVar5;
}

