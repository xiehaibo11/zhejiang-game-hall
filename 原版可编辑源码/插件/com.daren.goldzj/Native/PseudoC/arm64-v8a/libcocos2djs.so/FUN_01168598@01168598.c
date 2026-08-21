
ulong FUN_01168598(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 >> 0x3d == 0) {
    uVar1 = param_1[2] - *param_1 >> 2;
    if (param_2 <= uVar1) {
      param_2 = uVar1;
    }
    if (0xffffffffffffffe < (ulong)(param_1[2] - *param_1 >> 3)) {
      param_2 = 0x1fffffffffffffff;
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

