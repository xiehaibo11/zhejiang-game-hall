
undefined8 FUN_00e1bc6c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (param_2 < 0) {
    return 0x55;
  }
  uVar1 = *(long *)(param_1 + 0x10) + param_2;
  if (*(code **)(param_1 + 0x28) == (code *)0x0) {
    if (*(ulong *)(param_1 + 8) < uVar1) {
      return 0x55;
    }
  }
  else {
    lVar2 = (**(code **)(param_1 + 0x28))(param_1,uVar1,0,0);
    if (lVar2 != 0) {
      return 0x55;
    }
  }
  *(ulong *)(param_1 + 0x10) = uVar1;
  return 0;
}

