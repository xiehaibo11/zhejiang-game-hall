
void FUN_014ef9a4(long param_1)

{
  byte *pbVar1;
  WorkerThreadRuntimeCallStats *pWVar2;
  long *plVar3;
  undefined8 uVar4;
  ArrayBufferCollector *this;
  byte **local_a0;
  byte *local_98;
  undefined8 local_90;
  undefined8 local_88;
  BackgroundScope aBStack_80 [64];
  long *local_40;
  long *local_38;
  undefined8 local_18;
  
  this = *(ArrayBufferCollector **)(param_1 + 8);
  pWVar2 = (WorkerThreadRuntimeCallStats *)
           v8::internal::GCTracer::worker_thread_runtime_call_stats
                     (*(GCTracer **)(*(long *)this + 0x7f8));
  v8::internal::WorkerThreadRuntimeCallStatsScope::WorkerThreadRuntimeCallStatsScope
            ((WorkerThreadRuntimeCallStatsScope *)&local_18,pWVar2);
  v8::internal::GCTracer::BackgroundScope::BackgroundScope
            (aBStack_80,*(undefined8 *)(*(long *)this + 0x7f8),0,local_18);
  if (DAT_01d46bb0 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46bb0 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d46bb0;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d46bb0 & 5) != 0) {
    uVar4 = v8::internal::GCTracer::BackgroundScope::Name(0);
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar1,uVar4,0,0,0,0,0,0,0,&local_40,0);
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
    local_90 = v8::internal::GCTracer::BackgroundScope::Name(0);
    local_a0 = &local_98;
    local_98 = pbVar1;
    local_88 = uVar4;
  }
  v8::internal::ArrayBufferCollector::PerformFreeAllocations(this);
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_98,local_90,local_88);
  }
  v8::internal::GCTracer::BackgroundScope::~BackgroundScope(aBStack_80);
  v8::internal::WorkerThreadRuntimeCallStatsScope::~WorkerThreadRuntimeCallStatsScope
            ((WorkerThreadRuntimeCallStatsScope *)&local_18);
  return;
}

