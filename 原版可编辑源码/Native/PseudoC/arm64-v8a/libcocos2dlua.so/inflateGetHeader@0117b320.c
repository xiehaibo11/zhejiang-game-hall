
undefined8 inflateGetHeader(long param_1,long param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) >> 1 & 1) == 0) {
      return 0xfffffffe;
    }
    *(long *)(lVar1 + 0x28) = param_2;
    *(undefined4 *)(param_2 + 0x48) = 0;
    return 0;
  }
  return 0xfffffffe;
}

