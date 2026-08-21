
undefined8 uv_prepare_stop(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((uVar1 >> 0xe & 1) != 0) {
    **(undefined8 **)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(*(long *)(param_1 + 0x68) + 8) = *(undefined8 *)(param_1 + 0x70);
    *(uint *)(param_1 + 0x58) = uVar1 & 0xffffbfff;
    if ((uVar1 >> 0xd & 1) != 0) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
    }
  }
  return 0;
}

