
void FUN_01835098(int param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if (param_1 == 1) {
    lVar3 = *(long *)(param_2 + -0x60);
    if (lVar3 != 0) {
      plVar5 = (long *)(lVar3 + -0x80);
      do {
        lVar4 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        if (*(code **)(lVar3 + -0x70) != (code *)0x0) {
          (**(code **)(lVar3 + -0x70))();
        }
        FUN_01836610(plVar5);
      }
    }
    FUN_01836610((long *)(param_2 + -0x60));
    return;
  }
  FUN_018354b8(*(undefined8 *)(param_2 + -0x40));
                    /* WARNING: Subroutine does not return */
  __cxa_call_unexpected();
}

