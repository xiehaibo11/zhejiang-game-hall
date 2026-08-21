
void FUN_00e55080(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    FUN_00e139fc();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}

