
undefined8 uv_fs_poll_stop(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x58);
  if ((uVar3 >> 0xe & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x60);
    *puVar2 = 0;
    uVar1 = *(uint *)(puVar2 + 0x10);
    *(undefined8 *)(param_1 + 0x60) = 0;
    if ((uVar1 >> 0xe & 1) != 0) {
      uv_close(puVar2 + 5,FUN_00bf95dc);
      uVar3 = *(uint *)(param_1 + 0x58);
      if ((uVar3 >> 0xe & 1) == 0) {
        return 0;
      }
    }
    *(uint *)(param_1 + 0x58) = uVar3 & 0xffffbfff;
    if ((uVar3 >> 0xd & 1) != 0) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
    }
  }
  return 0;
}

