
undefined8 FUN_00e1bb5c(long param_1,ulong param_2)

{
  long lVar1;
  
  if (*(code **)(param_1 + 0x28) == (code *)0x0) {
    if (*(ulong *)(param_1 + 8) < param_2) {
      return 0x55;
    }
  }
  else {
    lVar1 = (**(code **)(param_1 + 0x28))(param_1,param_2,0,0);
    if (lVar1 != 0) {
      return 0x55;
    }
  }
  *(ulong *)(param_1 + 0x10) = param_2;
  return 0;
}

