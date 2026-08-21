
void mbedtls_sha512_update(ulong *param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_3 != 0) {
    uVar3 = *param_1;
    uVar2 = (uint)uVar3 & 0x7f;
    uVar4 = (ulong)uVar2;
    *param_1 = uVar3 + param_3;
    if (CARRY8(uVar3,param_3)) {
      param_1[1] = param_1[1] + 1;
    }
    if (((uVar3 & 0x7f) != 0) && (uVar3 = (ulong)(0x80 - uVar2), uVar3 <= param_3)) {
      thunk_EXT_FUN_00002bb0((long)(param_1 + 10) + uVar4,param_2,uVar3);
      thunk_EXT_FUN_00002bb0(param_1,param_1 + 10);
      uVar4 = 0;
      param_2 = param_2 + uVar3;
      param_3 = param_3 - uVar3;
    }
    uVar3 = param_3 - 0x80;
    if (0x7f < param_3) {
      uVar5 = uVar3 & 0xffffffffffffff80;
      lVar1 = param_2 + uVar5;
      do {
        thunk_EXT_FUN_00002bb0(param_1,param_2);
        param_3 = param_3 - 0x80;
        param_2 = param_2 + 0x80;
      } while (0x7f < param_3);
      param_3 = uVar3 - uVar5;
      param_2 = lVar1 + 0x80;
    }
    if (param_3 != 0) {
      thunk_EXT_FUN_00002bb0((long)param_1 + uVar4 + 0x50,param_2,param_3);
      return;
    }
  }
  return;
}

