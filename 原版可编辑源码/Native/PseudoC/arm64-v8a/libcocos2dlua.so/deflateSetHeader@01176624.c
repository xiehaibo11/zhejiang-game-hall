
undefined8 deflateSetHeader(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x2c) == 2) {
      *(undefined8 *)(lVar1 + 0x30) = param_2;
      return 0;
    }
    return 0xfffffffe;
  }
  return 0xfffffffe;
}

