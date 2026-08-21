
undefined8 unztell(long param_1)

{
  if (param_1 == 0) {
    return 0xffffffffffffff9a;
  }
  if (*(long *)(param_1 + 0x120) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x120) + 0x30);
  }
  return 0xffffffffffffff9a;
}

