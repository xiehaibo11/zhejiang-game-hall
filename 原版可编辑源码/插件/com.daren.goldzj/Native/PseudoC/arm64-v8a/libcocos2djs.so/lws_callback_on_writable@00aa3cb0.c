
ulong lws_callback_on_writable(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_30 [16];
  
  if (*(char *)(param_1 + 0x2ff) == '\f') {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x2f4) >> 6 & 1) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x2f4) >> 0x14 & 1) != 0) {
    uVar4 = lws_callback_on_writable(*(undefined8 *)(param_1 + 0x230));
    if (-1 < (int)uVar4) {
      uVar4 = 1;
      *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x200000;
    }
    return uVar4;
  }
  iVar2 = FUN_00ab3f44(param_1,0x13,0,0);
  if (iVar2 != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x2d4) < 0) {
    return 0xffffffff;
  }
  if (((*(long *)(param_1 + 0x248) != 0) && (lVar5 = lws_get_context(param_1), lVar5 != 0)) &&
     (iVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))
                        (param_1,0x23,*(undefined8 *)(param_1 + 0x270),auStack_30,0), iVar2 == 0)) {
    iVar2 = FUN_00aa367c(param_1,0,4,auStack_30);
    iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))
                      (param_1,0x24,*(undefined8 *)(param_1 + 0x270),auStack_30,0);
    if (iVar3 == 0) {
      uVar1 = 0xffffffff;
      if (iVar2 == 0) {
        uVar1 = 1;
      }
      return (ulong)uVar1;
    }
  }
  return 0xffffffff;
}

