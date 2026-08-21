
void FUN_0016216c(long param_1,uint param_2,undefined8 param_3)

{
  switch(param_2) {
  case 0x1d:
    *(undefined8 *)(param_1 + 0xe8) = param_3;
    return;
  case 0x1e:
    *(undefined8 *)(param_1 + 0xf0) = param_3;
    return;
  case 0x22:
    *(undefined8 *)(param_1 + 0x108) = param_3;
    return;
  case 0xfffffffe:
  case 0x1f:
    *(undefined8 *)(param_1 + 0xf8) = param_3;
    return;
  case 0xffffffff:
  case 0x20:
    *(undefined8 *)(param_1 + 0x100) = param_3;
    return;
  }
  if (param_2 < 0x1d) {
    *(undefined8 *)(param_1 + (ulong)param_2 * 8) = param_3;
    return;
  }
  fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","setRegister","unsupported arm64 register");
  fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
  abort();
}

