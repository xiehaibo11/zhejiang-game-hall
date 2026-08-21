
undefined8 FUN_00e53a84(long param_1,ulong *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  param_2[1] = 2;
  *param_2 = (ulong)CONCAT11(*(undefined1 *)(lVar1 + 4),*(undefined1 *)(lVar1 + 5));
  return 0;
}

