
undefined8 engine_unlocked_init(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xa0);
  if (iVar2 == 0) {
    iVar2 = 0;
    if (*(code **)(param_1 + 0x60) != (code *)0x0) {
      uVar1 = (**(code **)(param_1 + 0x60))(param_1);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
      iVar2 = *(int *)(param_1 + 0xa0);
      goto LAB_00b19ec8;
    }
  }
  uVar1 = 1;
LAB_00b19ec8:
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  *(int *)(param_1 + 0xa0) = iVar2 + 1;
  return uVar1;
}

