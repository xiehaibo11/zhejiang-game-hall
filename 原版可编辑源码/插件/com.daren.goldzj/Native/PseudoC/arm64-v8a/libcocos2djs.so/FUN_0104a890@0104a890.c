
ulong FUN_0104a890(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_1[2] - *param_1 >> 3;
    uVar2 = lVar1 * 0x5555555555555556;
    if (param_2 <= uVar2) {
      param_2 = uVar2;
    }
    if (0x555555555555554 < (ulong)(lVar1 * -0x5555555555555555)) {
      param_2 = 0xaaaaaaaaaaaaaaa;
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

