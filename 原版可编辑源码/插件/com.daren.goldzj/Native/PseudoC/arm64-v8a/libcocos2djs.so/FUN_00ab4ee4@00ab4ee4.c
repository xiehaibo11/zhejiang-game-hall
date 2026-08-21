
void FUN_00ab4ee4(long param_1,uint param_2)

{
  long lVar1;
  undefined1 uVar2;
  uint uVar4;
  uint uVar3;
  
  lVar1 = lws_get_context();
  if ((*(byte *)(lVar1 + 0xc79) >> 2 & 1) == 0) {
    return;
  }
  if (*(long *)(*(long *)(param_1 + 0x220) + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 + 0x130) == 0
     ) {
    return;
  }
  if (*(long *)(param_1 + 0x208) == 0) {
    return;
  }
  uVar4 = (uint)*(byte *)(param_1 + 0x210);
  if (((param_2 & 0xc) == 0) || ((param_2 & 3) == 0)) {
    _lws_log(1,"%s: assert: flags %d","lws_libuv_io",param_2);
    if ((param_2 >> 2 & 1) == 0) goto LAB_00ab4f4c;
LAB_00ab4f98:
    uVar3 = param_2 & 3 | uVar4 & 3;
  }
  else {
    if ((param_2 >> 2 & 1) != 0) goto LAB_00ab4f98;
LAB_00ab4f4c:
    uVar3 = uVar4 & 3;
    if ((param_2 & 2) != 0) {
      uVar3 = uVar4 & 1;
    }
    if ((param_2 & 1) != 0) {
      uVar3 = uVar3 & 2;
    }
    if (uVar3 == 0) {
      uv_poll_stop(param_1 + 0x168);
      uVar2 = 0;
      goto LAB_00ab4fb0;
    }
  }
  uVar2 = (undefined1)uVar3;
  uv_poll_start(param_1 + 0x168,uVar3,FUN_00ab5420);
LAB_00ab4fb0:
  *(undefined1 *)(param_1 + 0x210) = uVar2;
  return;
}

