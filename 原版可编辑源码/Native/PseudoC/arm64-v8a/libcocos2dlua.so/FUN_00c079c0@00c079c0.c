
void FUN_00c079c0(long param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x38) == 0x121) {
    uVar1 = FUN_00c06d48(param_1,param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x34) = uVar1;
    return;
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x38) = 0x121;
  return;
}

