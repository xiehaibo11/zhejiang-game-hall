
/* v8::internal::WorkerThreadRuntimeCallStatsScope::~WorkerThreadRuntimeCallStatsScope() */

void __thiscall
v8::internal::WorkerThreadRuntimeCallStatsScope::~WorkerThreadRuntimeCallStatsScope
          (WorkerThreadRuntimeCallStatsScope *this)

{
  byte *pbVar1;
  TracedValue *pTVar2;
  long *plVar3;
  TracedValue *local_50;
  undefined1 local_48 [12];
  undefined1 local_3c [4];
  char *local_38;
  TracedValue *local_30;
  long *local_28;
  
  pTVar2 = local_50;
  if ((*(long *)this != 0) && ((TracingFlags::runtime_stats >> 1 & 1) != 0)) {
    v8::tracing::TracedValue::Create((TracedValue *)this);
    RuntimeCallStats::Dump(*(RuntimeCallStats **)this,local_50);
    if (DAT_01d3f5e8 == (byte *)0x0) {
      plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3f5e8 = (byte *)(**(code **)(*plVar3 + 0x10))
                                       (plVar3,"disabled-by-default-v8.runtime_stats");
    }
    pbVar1 = DAT_01d3f5e8;
    if ((*DAT_01d3f5e8 & 5) != 0) {
      local_50 = (TracedValue *)0x0;
      local_38 = "runtime-call-stats";
      local_30 = pTVar2;
      local_3c[0] = 8;
      local_28 = (long *)0x0;
      plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar3 + 0x18))
                (plVar3,0x49,pbVar1,"V8.RuntimeStats",0,0,0,1,&local_38,local_3c,local_48,&local_30,
                 0x10);
      plVar3 = local_28;
      local_28 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      pTVar2 = local_30;
      local_30 = (TracedValue *)0x0;
      if (pTVar2 != (TracedValue *)0x0) {
        (**(code **)(*(long *)pTVar2 + 8))();
      }
    }
    if (local_50 != (TracedValue *)0x0) {
      (**(code **)(*(long *)local_50 + 8))();
    }
  }
  return;
}

