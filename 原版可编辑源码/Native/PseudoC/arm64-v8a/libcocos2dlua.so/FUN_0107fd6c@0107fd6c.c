
undefined8 FUN_0107fd6c(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x428);
  *param_2 = 0;
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x6f4) != 0xffff)) {
    *param_2 = 1;
  }
  return 0;
}

