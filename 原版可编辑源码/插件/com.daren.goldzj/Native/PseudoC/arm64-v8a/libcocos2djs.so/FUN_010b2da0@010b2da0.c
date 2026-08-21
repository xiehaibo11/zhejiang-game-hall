
undefined8 FUN_010b2da0(undefined8 param_1,ulong param_2)

{
  if ((*(uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb)) + 0x1b) >> 2 & 1)
      == 0) {
    return *(undefined8 *)(param_2 + 0x1f);
  }
  return 0;
}

