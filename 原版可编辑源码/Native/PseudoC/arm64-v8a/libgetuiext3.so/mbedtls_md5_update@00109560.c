
void mbedtls_md5_update(uint *param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_3 != 0) {
    uVar3 = *param_1;
    uVar2 = uVar3 & 0x3f;
    uVar5 = (ulong)uVar2;
    *param_1 = uVar3 + (uint)param_3;
    if (CARRY4(uVar3,(uint)param_3)) {
      param_1[1] = param_1[1] + 1;
    }
    if ((uVar2 != 0) && (uVar4 = (ulong)(0x40 - uVar2), uVar4 <= param_3)) {
      thunk_EXT_FUN_00002bb0((long)(param_1 + 6) + uVar5,param_2,uVar4);
      thunk_EXT_FUN_00002bb0(param_1,param_1 + 6);
      uVar5 = 0;
      param_2 = param_2 + uVar4;
      param_3 = param_3 - uVar4;
    }
    uVar4 = param_3 - 0x40;
    if (0x3f < param_3) {
      uVar6 = uVar4 & 0xffffffffffffffc0;
      lVar1 = param_2 + uVar6;
      do {
        thunk_EXT_FUN_00002bb0(param_1,param_2);
        param_3 = param_3 - 0x40;
        param_2 = param_2 + 0x40;
      } while (0x3f < param_3);
      param_3 = uVar4 - uVar6;
      param_2 = lVar1 + 0x40;
    }
    if (param_3 != 0) {
      thunk_EXT_FUN_00002bb0((long)param_1 + uVar5 + 0x18,param_2,param_3);
      return;
    }
  }
  return;
}

