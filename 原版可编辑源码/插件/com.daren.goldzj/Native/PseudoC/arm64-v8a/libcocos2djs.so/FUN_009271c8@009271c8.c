
void FUN_009271c8(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar5 = (undefined8 *)param_1[1];
  puVar2 = puVar4;
  if (puVar5 != puVar4) {
    do {
      puVar2 = puVar5 + -3;
      plVar6 = (long *)*puVar2;
      if (plVar6 != (long *)0x0) {
        plVar7 = (long *)puVar5[-2];
        plVar1 = plVar6;
        if (plVar7 != plVar6) {
          do {
            plVar1 = (long *)plVar7[-2];
            plVar7 = plVar7 + -6;
            if (plVar7 == plVar1) {
              pcVar3 = *(code **)(*plVar1 + 0x20);
LAB_00927238:
              (*pcVar3)();
            }
            else if (plVar1 != (long *)0x0) {
              pcVar3 = *(code **)(*plVar1 + 0x28);
              goto LAB_00927238;
            }
          } while (plVar6 != plVar7);
          plVar1 = (long *)*puVar2;
        }
        puVar5[-2] = plVar6;
        operator_delete(plVar1);
      }
      puVar5 = puVar2;
    } while (puVar2 != puVar4);
    puVar2 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar4;
  operator_delete(puVar2);
  return;
}

