
void FUN_011a54ec(long param_1)

{
  if (*(char **)(param_1 + 0x100) != (char *)0x0) {
    unlink(*(char **)(param_1 + 0x100));
    FUN_0119f27c(*(undefined8 *)(param_1 + 0x100));
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  FUN_011a97d8(param_1);
  return;
}

