
void __cxa_decrement_exception_refcount(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  if (param_1 != 0) {
    plVar4 = (long *)(param_1 + -0x80);
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      if (*(code **)(param_1 + -0x70) != (code *)0x0) {
        (**(code **)(param_1 + -0x70))();
      }
      FUN_0011799c(plVar4);
    }
  }
  return;
}

