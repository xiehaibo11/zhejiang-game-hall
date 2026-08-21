
/* v8::internal::CpuProfiler::StartProfiling(char const*, v8::CpuProfilingOptions) */

void __thiscall
v8::internal::CpuProfiler::StartProfiling(CpuProfiler *this,undefined8 param_1,undefined8 *param_3)

{
  byte *pbVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  CpuProfilesCollection *pCVar5;
  byte **local_78;
  byte *local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulong *local_48;
  long *local_40;
  long *local_38;
  
  local_50 = *(undefined4 *)(param_3 + 1);
  local_58 = *param_3;
  pCVar5 = *(CpuProfilesCollection **)(this + 0x20);
  local_48 = (ulong *)0x0;
  if ((ulong *)param_3[2] != (ulong *)0x0) {
    local_48 = (ulong *)v8::V8::CopyGlobalReference((ulong *)param_3[2]);
  }
  uVar2 = CpuProfilesCollection::StartProfiling(pCVar5,param_1,&local_58);
  if (local_48 != (ulong *)0x0) {
    v8::V8::DisposeGlobal(local_48);
    local_48 = (ulong *)0x0;
  }
  if ((uVar2 & 1) != 0) {
    if (DAT_01d3f840 == (byte *)0x0) {
      plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3f840 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,&DAT_019c38f7);
    }
    pbVar1 = DAT_01d3f840;
    local_78 = (byte **)0x0;
    if ((*DAT_01d3f840 & 5) != 0) {
      local_40 = (long *)0x0;
      local_38 = (long *)0x0;
      plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar4 = (**(code **)(*plVar3 + 0x18))
                        (plVar3,0x58,pbVar1,"CpuProfiler::StartProfiling",0,0,0,0,0,0,0,&local_40,0)
      ;
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
      local_78 = &local_70;
      local_68 = "CpuProfiler::StartProfiling";
      local_70 = pbVar1;
      local_60 = uVar4;
    }
    if (*(long *)(this + 0x30) != 0) {
      uVar4 = CpuProfilesCollection::GetCommonSamplingInterval
                        (*(CpuProfilesCollection **)(this + 0x20));
      (**(code **)(**(long **)(this + 0x30) + 0x20))(*(long **)(this + 0x30),uVar4);
    }
    StartProcessorIfNotStarted(this);
    if ((local_78 != (byte **)0x0) && (*local_70 != 0)) {
      plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar3 + 0x28))(plVar3,local_70,local_68,local_60);
    }
  }
  return;
}

