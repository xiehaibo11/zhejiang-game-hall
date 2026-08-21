
undefined8 deflatePending(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(lVar1 + 0x28);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(lVar1 + 0x1724);
      return 0;
    }
    return 0;
  }
  return 0xfffffffe;
}

