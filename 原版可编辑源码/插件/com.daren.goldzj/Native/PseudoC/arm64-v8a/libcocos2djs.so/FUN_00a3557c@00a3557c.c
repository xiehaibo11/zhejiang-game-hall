
undefined8 FUN_00a3557c(long param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x70);
  if (puVar1 == (uint *)0x0) {
    return 3;
  }
  if ((*puVar1 & 1 << (ulong)(param_2 & 0x1f)) != 0) {
    if (*(code **)(puVar1 + 2) != (code *)0x0) {
      (**(code **)(puVar1 + 2))();
      return 0;
    }
    return 0;
  }
  return 0;
}

