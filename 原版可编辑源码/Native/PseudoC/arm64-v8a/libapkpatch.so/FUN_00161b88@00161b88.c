
undefined8 FUN_00161b88(long param_1,uint param_2)

{
  switch(param_2) {
  case 0x1d:
    return *(undefined8 *)(param_1 + 0xf8);
  case 0x1e:
    return *(undefined8 *)(param_1 + 0x100);
  case 0x22:
    return *(undefined8 *)(param_1 + 0x118);
  case 0xfffffffe:
  case 0x1f:
    return *(undefined8 *)(param_1 + 0x108);
  case 0xffffffff:
  case 0x20:
    return *(undefined8 *)(param_1 + 0x110);
  }
  if (param_2 < 0x1d) {
    return *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x10);
  }
  fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getRegister","unsupported arm64 register");
  fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
  abort();
}

