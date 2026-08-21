
long FUN_011c2214(undefined8 param_1,undefined8 param_2,Factory *param_3)

{
  byte *pbVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
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
    v8::internal::RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x10b);
  }
  if (DAT_01d3f9a8 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f9a8 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar1 = DAT_01d3f9a8;
  local_90 = (byte **)0x0;
  if ((*DAT_01d3f9a8 & 5) != 0) {
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar1,"V8.Runtime_Runtime_GetHeapUsage",0,0,0,0,0,0,0,&local_40,
                       0);
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
    local_80 = "V8.Runtime_Runtime_GetHeapUsage";
    local_88 = pbVar1;
    local_78 = uVar4;
  }
  uVar2 = v8::internal::Heap::SizeOfObjects((Heap *)(param_3 + 0x8850));
  if ((long)(int)uVar2 + 0x40000000U >> 0x1f == 0) {
    lVar5 = (long)((ulong)uVar2 << 0x20) >> 0x1f;
  }
  else {
    plVar3 = (long *)v8::internal::Factory::NewNumberFromInt(param_3,uVar2);
    lVar5 = *plVar3;
  }
  if ((local_90 != (byte **)0x0) && (*local_88 != 0)) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_88,local_80,local_78);
  }
  if (local_70 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
  }
  return lVar5;
}

