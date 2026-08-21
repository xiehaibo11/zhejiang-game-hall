
void FUN_0014e4ac(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}

