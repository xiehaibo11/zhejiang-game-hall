
undefined8
FUN_00bfaba0(int param_1,uint param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  
  uVar4 = 3;
  if (param_1 == 1) {
    lVar1 = _Unwind_GetCFA(param_5);
    lVar1 = *(long *)(lVar1 + 0xb0);
    if ((param_2 & 1) == 0) {
      uVar4 = 8;
      if ((param_2 >> 1 & 1) != 0) {
        uVar3 = (uint)param_3 & 0xff;
        if ((0xff < (param_3 ^ 0x4c55414a49543200)) && (uVar3 = 2, (param_2 >> 2 & 1) != 0)) {
          _Unwind_DeleteException(param_4);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00bfa980(lVar1,uVar3);
      }
    }
    else {
      uVar4 = 6;
      if (0xff < (param_3 ^ 0x4c55414a49543200)) {
        puVar5 = *(ulong **)(lVar1 + 0x28);
        *(ulong **)(lVar1 + 0x28) = puVar5 + 1;
        uVar2 = FUN_00bfab64(lVar1,0x2a);
        *puVar5 = uVar2 | 0xfffd800000000000;
      }
    }
  }
  return uVar4;
}

