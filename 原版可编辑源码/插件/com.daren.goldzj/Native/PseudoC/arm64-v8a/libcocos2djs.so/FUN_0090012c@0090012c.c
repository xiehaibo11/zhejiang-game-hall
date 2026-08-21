
void FUN_0090012c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (*(long **)(lVar1 + 0x150) != (long *)0x0) {
    (**(code **)(**(long **)(lVar1 + 0x150) + 0x30))();
  }
  *(undefined1 *)(lVar1 + 0x26a) = 1;
  *(undefined1 *)(lVar1 + 0x263) = 0;
  return;
}

