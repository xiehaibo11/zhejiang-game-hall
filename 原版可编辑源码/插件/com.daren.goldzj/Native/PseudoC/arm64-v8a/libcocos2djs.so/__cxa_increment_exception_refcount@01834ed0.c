
void __cxa_increment_exception_refcount(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  
  if (param_1 != 0) {
    plVar3 = (long *)(param_1 + -0x80);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}

