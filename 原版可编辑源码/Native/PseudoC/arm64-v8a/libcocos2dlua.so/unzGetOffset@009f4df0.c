
undefined8 unzGetOffset(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0xffffffffffffff9a;
  }
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (((lVar1 = *(long *)(param_1 + 0x48), lVar1 == 0 || (lVar1 == 0xffff)) ||
      (*(long *)(param_1 + 0x60) != lVar1)))) {
    return *(undefined8 *)(param_1 + 0x68);
  }
  return 0;
}

