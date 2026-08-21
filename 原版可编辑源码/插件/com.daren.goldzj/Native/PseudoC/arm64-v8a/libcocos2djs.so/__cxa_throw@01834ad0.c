
void __cxa_throw(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x1;
  long *plVar6;
  
  lVar4 = __cxa_get_globals();
  uVar5 = std::get_unexpected();
  *(undefined8 *)(param_1 + -0x68) = uVar5;
  uVar5 = std::get_terminate();
  *(undefined8 *)(param_1 + -0x80) = 1;
  *(undefined8 *)(param_1 + -0x60) = uVar5;
  *(undefined8 *)(param_1 + -0x78) = param_2;
  *(undefined8 *)(param_1 + -0x70) = param_3;
  *(undefined8 *)(param_1 + -0x20) = 0x434c4e47432b2b00;
  *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  *(code **)(param_1 + -0x18) = FUN_01834b4c;
  _Unwind_RaiseException();
  iVar3 = FUN_01834bac((undefined8 *)(param_1 + -0x80));
  if (iVar3 == 1) {
    plVar6 = (long *)(extraout_x1 + -0x60);
    do {
      lVar4 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      if (*(code **)(extraout_x1 + -0x50) != (code *)0x0) {
        (**(code **)(extraout_x1 + -0x50))(extraout_x1 + 0x20);
      }
      FUN_01836610(plVar6);
    }
    return;
  }
  FUN_018354b8(*(undefined8 *)(extraout_x1 + -0x40));
                    /* WARNING: Subroutine does not return */
  __cxa_call_unexpected();
}

