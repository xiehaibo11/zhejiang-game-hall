
/* v8::tracing::TracingCategoryObserver::OnTraceEnabled() */

void v8::tracing::TracingCategoryObserver::OnTraceEnabled(void)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  
  if (DAT_01d3fc28 == (byte *)0x0) {
    plVar3 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fc28 = (byte *)(**(code **)(*plVar3 + 0x10))
                                     (plVar3,"disabled-by-default-v8.runtime_stats");
  }
  bVar1 = *DAT_01d3fc28 & 5;
  while (bVar1 != 0) {
    bVar1 = 1;
    bVar2 = (bool)ExclusiveMonitorPass(&internal::TracingFlags::runtime_stats,0x10);
    if (bVar2) {
      bVar1 = ExclusiveMonitorsStatus();
      internal::TracingFlags::runtime_stats = internal::TracingFlags::runtime_stats | 2;
    }
  }
  if (DAT_01d3fc30 == (byte *)0x0) {
    plVar3 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fc30 = (byte *)(**(code **)(*plVar3 + 0x10))
                                     (plVar3,"disabled-by-default-v8.runtime_stats_sampling");
  }
  bVar1 = *DAT_01d3fc30 & 5;
  while (bVar1 != 0) {
    bVar1 = 1;
    bVar2 = (bool)ExclusiveMonitorPass(&internal::TracingFlags::runtime_stats,0x10);
    if (bVar2) {
      bVar1 = ExclusiveMonitorsStatus();
      internal::TracingFlags::runtime_stats = internal::TracingFlags::runtime_stats | 4;
    }
  }
  if (DAT_01d3fc38 == (byte *)0x0) {
    plVar3 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fc38 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
  }
  bVar1 = *DAT_01d3fc38 & 5;
  while (bVar1 != 0) {
    bVar1 = 1;
    bVar2 = (bool)ExclusiveMonitorPass(&internal::TracingFlags::gc,0x10);
    if (bVar2) {
      bVar1 = ExclusiveMonitorsStatus();
      internal::TracingFlags::gc = internal::TracingFlags::gc | 2;
    }
  }
  if (DAT_01d3fc40 == (byte *)0x0) {
    plVar3 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fc40 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc_stats");
  }
  bVar1 = *DAT_01d3fc40 & 5;
  while (bVar1 != 0) {
    bVar1 = 1;
    bVar2 = (bool)ExclusiveMonitorPass(&internal::TracingFlags::gc_stats,0x10);
    if (bVar2) {
      bVar1 = ExclusiveMonitorsStatus();
      internal::TracingFlags::gc_stats = internal::TracingFlags::gc_stats | 2;
    }
  }
  if (DAT_01d3fc48 == (byte *)0x0) {
    plVar3 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fc48 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.ic_stats");
  }
  bVar1 = *DAT_01d3fc48 & 5;
  while (bVar1 != 0) {
    bVar1 = 1;
    bVar2 = (bool)ExclusiveMonitorPass(&internal::TracingFlags::ic_stats,0x10);
    if (bVar2) {
      bVar1 = ExclusiveMonitorsStatus();
      internal::TracingFlags::ic_stats = internal::TracingFlags::ic_stats | 2;
    }
  }
  return;
}

