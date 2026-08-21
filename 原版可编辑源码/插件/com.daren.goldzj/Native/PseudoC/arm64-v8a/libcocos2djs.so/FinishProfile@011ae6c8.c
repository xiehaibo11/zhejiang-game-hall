
/* v8::internal::CpuProfile::FinishProfile() */

void __thiscall v8::internal::CpuProfile::FinishProfile(CpuProfile *this)

{
  undefined4 uVar1;
  byte *pbVar2;
  TracedValue *pTVar3;
  undefined8 uVar4;
  void *pvVar5;
  TracedValue *this_00;
  long lVar6;
  long *plVar7;
  TracedValue *local_58;
  undefined1 local_50 [12];
  undefined1 local_44 [4];
  TracedValue *local_40;
  long *local_38;
  char *local_18;
  
  pTVar3 = local_58;
  uVar4 = base::TimeTicks::HighResolutionNow();
  pvVar5 = *(void **)(this + 0x20);
  *(undefined8 *)(this + 0x30) = uVar4;
  *(undefined8 *)(this + 0x20) = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  this_00 = (TracedValue *)StreamPendingTraceEvents(this);
  v8::tracing::TracedValue::Create(this_00);
  local_40 = *(TracedValue **)(this + 0x30);
  lVar6 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_40);
  v8::tracing::TracedValue::SetDouble(local_58,"endTime",(double)lVar6);
  if (DAT_01d3f908 == (byte *)0x0) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f908 = (byte *)(**(code **)(*plVar7 + 0x10))
                                     (plVar7,"disabled-by-default-v8.cpu_profiler");
  }
  pbVar2 = DAT_01d3f908;
  if ((*DAT_01d3f908 & 5) != 0) {
    uVar1 = *(undefined4 *)(this + 0xa8);
    local_58 = (TracedValue *)0x0;
    local_18 = "data";
    local_44[0] = 8;
    local_40 = pTVar3;
    local_38 = (long *)0x0;
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar7 + 0x18))
              (plVar7,0x50,pbVar2,"ProfileChunk",0,uVar1,0,1,&local_18,local_44,local_50,&local_40,2
              );
    plVar7 = local_38;
    local_38 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    pTVar3 = local_40;
    local_40 = (TracedValue *)0x0;
    if (pTVar3 != (TracedValue *)0x0) {
      (**(code **)(*(long *)pTVar3 + 8))();
    }
  }
  if (local_58 != (TracedValue *)0x0) {
    (**(code **)(*(long *)local_58 + 8))();
  }
  return;
}

