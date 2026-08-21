
long * __cxa_current_primary_exception(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  puVar3 = (undefined8 *)__cxa_get_globals_fast();
  plVar4 = (long *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar5 = (long *)*puVar3;
    if (plVar5 == (long *)0x0) {
      return (long *)0x0;
    }
    if ((ulong)plVar5[0xc] >> 8 != 0x434c4e47432b2b) {
      return (long *)0x0;
    }
    if ((plVar5[0xc] & 0xffU) == 1) {
      plVar5 = (long *)(*plVar5 + -0x80);
    }
    plVar4 = plVar5 + 0x10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return plVar4;
}

