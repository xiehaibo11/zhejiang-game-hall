
void FUN_00138020(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xb) == '\0') {
    uVar1 = *param_1;
    FUN_00137154(uVar1);
    if (*(char *)(param_1 + 0xb) == '\0') {
      *(undefined1 *)(param_1 + 0xb) = 1;
      FUN_001379b8(param_1[1]);
      FUN_001379b8(param_1[2]);
    }
    FUN_001372b0(uVar1);
  }
  return;
}

