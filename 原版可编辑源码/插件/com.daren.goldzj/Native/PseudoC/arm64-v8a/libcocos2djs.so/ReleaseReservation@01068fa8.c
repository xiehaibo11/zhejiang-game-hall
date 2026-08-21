
/* v8::internal::BackingStore::ReleaseReservation(unsigned long) */

void v8::internal::BackingStore::ReleaseReservation(ulong param_1)

{
  char cVar1;
  bool bVar2;
  
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x1d3f5f0,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_01d3f5f0 = DAT_01d3f5f0 - param_1;
    }
  } while (cVar1 != '\0');
  return;
}

