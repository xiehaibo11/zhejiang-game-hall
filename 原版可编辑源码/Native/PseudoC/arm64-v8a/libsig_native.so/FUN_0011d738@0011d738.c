
void FUN_0011d738(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}

