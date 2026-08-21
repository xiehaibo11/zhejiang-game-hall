
undefined8 FT_Activate_Size(long *param_1)

{
  long lVar1;
  
  if (param_1 == (long *)0x0) {
    return 0x24;
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0xb0) != 0) {
      *(long **)(lVar1 + 0xa0) = param_1;
      return 0;
    }
    return 0x23;
  }
  return 0x23;
}

