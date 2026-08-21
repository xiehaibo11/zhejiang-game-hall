
long FUN_0183e52c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
    lVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return lVar1;
}

