
void FUN_0124f9d0(int param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  if (param_1 == 1) {
    plVar4 = (long *)(param_2 + -0x60);
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
      if (*(code **)(param_2 + -0x50) != (code *)0x0) {
        (**(code **)(param_2 + -0x50))(param_2 + 0x20);
      }
      FUN_0125131c(plVar4);
    }
    return;
  }
  FUN_01250414(*(undefined8 *)(param_2 + -0x40));
                    /* WARNING: Subroutine does not return */
  __cxa_call_unexpected();
}

