
ulong FUN_00c29b44(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  lVar1 = (long)(int)param_2 * 8 + -8;
  lVar4 = *(long *)(param_1 + 0x20);
  if (((ulong)(lVar4 + lVar1) < *(ulong *)(param_1 + 0x28)) &&
     (uVar2 = *(ulong *)(lVar4 + lVar1), uVar2 != 0xffffffffffffffff)) {
    uVar3 = (uint)((long)uVar2 >> 0x2f);
    if (uVar3 == 0xfffffffb) {
      uVar2 = uVar2 & 0x7fffffffffff;
    }
    else {
      if (0xfffffff2 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00bfb554(param_1,param_2,4);
      }
      uVar2 = FUN_00c006c0(param_1,lVar4 + lVar1);
      *(ulong *)(lVar4 + lVar1) = uVar2 | 0xfffd800000000000;
    }
    return uVar2;
  }
  return 0;
}

