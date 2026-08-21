
undefined8 FUN_00d27adc(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)*param_2;
  bVar1 = false;
  if ((plVar6 != (long *)0x0) && (plVar7 = (long *)*param_1, plVar7 != (long *)0x0)) {
    uVar3 = (**(code **)(*plVar6 + 0x30))(plVar6);
    uVar4 = (**(code **)(*plVar7 + 0x30))(plVar7);
    plVar6 = (long *)*param_2;
    bVar1 = uVar3 < uVar4;
  }
  bVar2 = false;
  if (((long *)*param_3 != (long *)0x0) && (plVar6 != (long *)0x0)) {
    uVar3 = (**(code **)(*(long *)*param_3 + 0x30))();
    uVar4 = (**(code **)(*plVar6 + 0x30))(plVar6);
    bVar2 = uVar3 < uVar4;
  }
  if (bVar1) {
    plVar6 = (long *)*param_1;
    if (bVar2) {
      *param_1 = *param_3;
      *param_3 = (long)plVar6;
      return 1;
    }
    *param_1 = *param_2;
    *param_2 = (long)plVar6;
    if (plVar6 == (long *)0x0) {
      return 1;
    }
    plVar7 = (long *)*param_3;
    if (plVar7 == (long *)0x0) {
      return 1;
    }
    uVar3 = (**(code **)(*plVar7 + 0x30))(plVar7);
    uVar4 = (**(code **)(*plVar6 + 0x30))(plVar6);
    if (uVar4 <= uVar3) {
      return 1;
    }
    lVar5 = *param_2;
    *param_2 = *param_3;
    *param_3 = lVar5;
  }
  else {
    if (!bVar2) {
      return 0;
    }
    lVar5 = *param_2;
    *param_2 = *param_3;
    *param_3 = lVar5;
    plVar6 = (long *)*param_2;
    if (plVar6 == (long *)0x0) {
      return 1;
    }
    plVar7 = (long *)*param_1;
    if (plVar7 == (long *)0x0) {
      return 1;
    }
    uVar3 = (**(code **)(*plVar6 + 0x30))(plVar6);
    uVar4 = (**(code **)(*plVar7 + 0x30))(plVar7);
    if (uVar4 <= uVar3) {
      return 1;
    }
    lVar5 = *param_1;
    *param_1 = *param_2;
    *param_2 = lVar5;
  }
  return 2;
}

