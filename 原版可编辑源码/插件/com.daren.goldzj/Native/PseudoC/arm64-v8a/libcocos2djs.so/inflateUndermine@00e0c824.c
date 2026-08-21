
undefined8 inflateUndermine(long param_1)

{
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x1be0) = 1;
    return 0xfffffffd;
  }
  return 0xfffffffe;
}

