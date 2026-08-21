
/* v8::internal::CpuProfile::CpuProfile(v8::internal::CpuProfiler*, char const*,
   v8::CpuProfilingOptions) */

void __thiscall
v8::internal::CpuProfile::CpuProfile
          (CpuProfile *this,undefined8 *param_1,undefined8 param_2,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  TracedValue *pTVar6;
  undefined8 uVar7;
  TracedValue *this_00;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  void *pvVar11;
  TracedValue *local_60;
  undefined1 local_58 [12];
  undefined1 local_4c [4];
  char *local_48;
  TracedValue *local_40;
  long *local_38;
  
  pTVar6 = local_60;
  *(undefined8 *)this = param_2;
  uVar2 = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(this + 8) = *param_4;
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined8 *)(this + 0x18) = 0;
  if ((ulong *)param_4[2] != (ulong *)0x0) {
    uVar7 = v8::V8::CopyGlobalReference((ulong *)param_4[2]);
    *(undefined8 *)(this + 0x18) = uVar7;
  }
  *(undefined8 *)(this + 0x20) = 0;
  uVar7 = base::TimeTicks::HighResolutionNow();
  *(undefined8 *)(this + 0x28) = uVar7;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  this_00 = (TracedValue *)
            ProfileTree::ProfileTree((ProfileTree *)(this + 0x68),(Isolate *)*param_1);
  *(undefined8 **)(this + 0x98) = param_1;
  *(undefined8 *)(this + 0xa0) = 0;
  do {
    iVar1 = last_id_ + 1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(&last_id_,0x10);
    if (bVar4) {
      cVar3 = ExclusiveMonitorsStatus();
      last_id_ = iVar1;
    }
  } while (cVar3 != '\0');
  *(int *)(this + 0xa8) = iVar1;
  *(undefined8 *)(this + 0xb0) = 0;
  v8::tracing::TracedValue::Create(this_00);
  local_40 = *(TracedValue **)(this + 0x28);
  lVar8 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_40);
  v8::tracing::TracedValue::SetDouble(local_60,"startTime",(double)lVar8);
  if (DAT_01d3f8f8 == (byte *)0x0) {
    plVar9 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f8f8 = (byte *)(**(code **)(*plVar9 + 0x10))
                                     (plVar9,"disabled-by-default-v8.cpu_profiler");
  }
  pbVar5 = DAT_01d3f8f8;
  if ((*DAT_01d3f8f8 & 5) != 0) {
    uVar2 = *(undefined4 *)(this + 0xa8);
    local_60 = (TracedValue *)0x0;
    local_48 = "data";
    local_40 = pTVar6;
    local_4c[0] = 8;
    local_38 = (long *)0x0;
    plVar9 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar9 + 0x18))
              (plVar9,0x50,pbVar5,"Profile",0,uVar2,0,1,&local_48,local_4c,local_58,&local_40,2);
    plVar9 = local_38;
    local_38 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    pTVar6 = local_40;
    local_40 = (TracedValue *)0x0;
    if (pTVar6 != (TracedValue *)0x0) {
      (**(code **)(*(long *)pTVar6 + 8))();
    }
  }
  if (*(long *)(this + 0x18) != 0) {
    uVar7 = CpuProfilingOptions::raw_filter_context((CpuProfilingOptions *)(this + 8));
    puVar10 = operator_new(8);
    *puVar10 = uVar7;
    pvVar11 = *(void **)(this + 0x20);
    *(undefined8 **)(this + 0x20) = puVar10;
    if (pvVar11 != (void *)0x0) {
      operator_delete(pvVar11);
    }
  }
  if (local_60 != (TracedValue *)0x0) {
    (**(code **)(*(long *)local_60 + 8))();
  }
  return;
}

