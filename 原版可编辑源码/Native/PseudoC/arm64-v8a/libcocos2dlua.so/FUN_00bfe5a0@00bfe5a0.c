
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfe5a0(long param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  undefined4 local_248 [10];
  undefined4 local_220;
  undefined4 local_10;
  long local_8;
  
  lVar2 = *(long *)(param_1 + 0x10);
  local_8 = ___stack_chk_guard;
  pcVar3 = *(code **)(lVar2 + 0x138);
  if ((pcVar3 != (code *)0x0) && (bVar1 = *(byte *)(lVar2 + 0xc1), (bVar1 >> 4 & 1) == 0)) {
    local_10 = (undefined4)((*(long *)(param_1 + 0x20) + -8) - *(long *)(param_1 + 0x38) >> 3);
    local_248[0] = param_2;
    local_220 = param_3;
    if (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) < 0xa9) {
      FUN_00bfe0e0(param_1,0x15);
      bVar1 = *(byte *)(lVar2 + 0xc1);
    }
    *(byte *)(lVar2 + 0xc1) = bVar1 | 0x10;
    (*pcVar3)(param_1,local_248);
    *(long *)(lVar2 + 0x158) = param_1;
    *(byte *)(lVar2 + 0xc1) = *(byte *)(lVar2 + 0xc1) & 0xef;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

