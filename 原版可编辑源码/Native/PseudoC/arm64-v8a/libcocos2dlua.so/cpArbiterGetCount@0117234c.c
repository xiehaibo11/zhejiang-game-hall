
undefined4 cpArbiterGetCount(long param_1)

{
  if (*(uint *)(param_1 + 0x90) < 3) {
    return *(undefined4 *)(param_1 + 0x58);
  }
  return 0;
}

