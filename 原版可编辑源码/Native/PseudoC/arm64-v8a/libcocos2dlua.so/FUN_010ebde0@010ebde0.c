
void FUN_010ebde0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x240);
  if (*(int *)(param_1 + 0x6c) != 0) {
    (**(code **)(*(long *)(param_1 + 0x290) + 0x10))();
  }
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  return;
}

