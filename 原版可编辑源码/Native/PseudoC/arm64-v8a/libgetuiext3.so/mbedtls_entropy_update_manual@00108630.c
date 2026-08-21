
void mbedtls_entropy_update_manual(long param_1,undefined1 *param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 auStack_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = (*pcRam0000000000000000)(param_1 + 0x400);
  if ((int)uVar3 == 0) {
    if (0x40 < param_3) {
      thunk_EXT_FUN_00002bb0(param_2,param_3,auStack_88,0);
      param_3 = 0x40;
      param_2 = auStack_88;
    }
    local_8c = 0x14;
    local_8b = (undefined1)param_3;
    thunk_EXT_FUN_00002bb0(param_1,&local_8c,2);
    thunk_EXT_FUN_00002bb0(param_1,param_2,param_3);
    iVar2 = (*pcRam0000000000000000)(param_1 + 0x400);
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = 0xffffffe2;
    }
    uVar3 = (ulong)uVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
  thunk_EXT_FUN_00002bb0(uVar3);
  return;
}

