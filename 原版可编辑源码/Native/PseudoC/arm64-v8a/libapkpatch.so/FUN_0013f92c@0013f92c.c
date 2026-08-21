
void FUN_0013f92c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_00137154(uVar1);
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_001372b0(uVar1);
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  FUN_001372b0(uVar1);
  FUN_0013f690(param_1);
  return;
}

