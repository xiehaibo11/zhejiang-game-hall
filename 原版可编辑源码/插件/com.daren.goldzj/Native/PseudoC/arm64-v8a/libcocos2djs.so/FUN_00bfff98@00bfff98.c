
undefined8 FUN_00bfff98(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_1;
  uVar1 = (**(code **)(*(long *)*param_2 + 0x20))();
  uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
  plVar6 = (long *)*param_2;
  uVar3 = (**(code **)(*(long *)*param_3 + 0x20))((long *)*param_3);
  uVar4 = (**(code **)(*plVar6 + 0x20))(plVar6);
  if (uVar1 < uVar2) {
    plVar6 = (long *)*param_1;
    if (uVar3 < uVar4) {
      *param_1 = *param_3;
      *param_3 = plVar6;
      return 1;
    }
    *param_1 = *param_2;
    *param_2 = plVar6;
    uVar1 = (**(code **)(*(long *)*param_3 + 0x20))();
    uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
    if (uVar2 <= uVar1) {
      return 1;
    }
    uVar5 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar5;
  }
  else {
    if (uVar4 <= uVar3) {
      return 0;
    }
    uVar5 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar5;
    plVar6 = (long *)*param_1;
    uVar1 = (**(code **)(*(long *)*param_2 + 0x20))();
    uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
    if (uVar2 <= uVar1) {
      return 1;
    }
    uVar5 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar5;
  }
  return 2;
}

