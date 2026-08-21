
void FUN_00de677c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  WebPSafeFree(*(void **)(lVar1 + 0x1d0));
  *(undefined8 *)(lVar1 + 0x1d0) = 0;
  return;
}

