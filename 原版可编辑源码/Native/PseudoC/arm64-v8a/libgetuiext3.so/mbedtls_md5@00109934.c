
void mbedtls_md5(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [64];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  thunk_EXT_FUN_00002bb0(local_c0,0,0x58);
  uStack_b0 = 0x1032547698badcfe;
  local_b8 = 0xefcdab8967452301;
  if (param_2 != 0) {
    uVar1 = param_2 - 0x40;
    local_c0[0] = (undefined4)param_2;
    if (0x3f < param_2) {
      uVar4 = uVar1 & 0xffffffffffffffc0;
      lVar3 = param_1;
      do {
        thunk_EXT_FUN_00002bb0(local_c0,lVar3);
        param_2 = param_2 - 0x40;
        lVar3 = lVar3 + 0x40;
      } while (0x3f < param_2);
      param_2 = uVar1 - uVar4;
      if (param_2 == 0) goto LAB_001099e4;
      param_1 = param_1 + uVar4 + 0x40;
    }
    thunk_EXT_FUN_00002bb0(auStack_a8,param_1,param_2);
  }
LAB_001099e4:
  thunk_EXT_FUN_00002bb0(local_c0,param_3);
  lVar3 = 0;
  do {
    *(undefined1 *)((long)local_c0 + lVar3) = 0;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x58);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
  thunk_EXT_FUN_00002bb0();
  return;
}

