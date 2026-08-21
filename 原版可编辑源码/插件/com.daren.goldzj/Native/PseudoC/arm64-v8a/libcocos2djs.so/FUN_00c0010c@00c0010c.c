
int FUN_00c0010c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  iVar1 = FUN_00bfff98();
  plVar5 = (long *)*param_3;
  uVar2 = (**(code **)(*(long *)*param_4 + 0x20))((long *)*param_4);
  uVar3 = (**(code **)(*plVar5 + 0x20))(plVar5);
  if (uVar2 < uVar3) {
    uVar4 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar4;
    plVar5 = (long *)*param_2;
    uVar2 = (**(code **)(*(long *)*param_3 + 0x20))();
    uVar3 = (**(code **)(*plVar5 + 0x20))(plVar5);
    if (uVar2 < uVar3) {
      uVar4 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar4;
      plVar5 = (long *)*param_1;
      uVar2 = (**(code **)(*(long *)*param_2 + 0x20))();
      uVar3 = (**(code **)(*plVar5 + 0x20))(plVar5);
      if (uVar2 < uVar3) {
        uVar4 = *param_1;
        iVar1 = iVar1 + 3;
        *param_1 = *param_2;
        *param_2 = uVar4;
      }
      else {
        iVar1 = iVar1 + 2;
      }
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

