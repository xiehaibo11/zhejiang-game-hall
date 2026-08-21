
/* v8::tracing::TracingCategoryObserver::OnTraceDisabled() */

void v8::tracing::TracingCategoryObserver::OnTraceDisabled(void)

{
  char cVar1;
  bool bVar2;
  
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(&internal::TracingFlags::runtime_stats,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      internal::TracingFlags::runtime_stats = internal::TracingFlags::runtime_stats & 0xfffffff9;
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(&internal::TracingFlags::gc,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      internal::TracingFlags::gc = internal::TracingFlags::gc & 0xfffffffd;
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(&internal::TracingFlags::gc_stats,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      internal::TracingFlags::gc_stats = internal::TracingFlags::gc_stats & 0xfffffffd;
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(&internal::TracingFlags::ic_stats,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      internal::TracingFlags::ic_stats = internal::TracingFlags::ic_stats & 0xfffffffd;
    }
  } while (cVar1 != '\0');
  return;
}

