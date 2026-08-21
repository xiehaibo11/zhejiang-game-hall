
void uv__async_close(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  **(undefined8 **)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(*(long *)(param_1 + 0x68) + 8) = *(undefined8 *)(param_1 + 0x70);
  if (((uVar1 >> 0xe & 1) != 0) &&
     (*(uint *)(param_1 + 0x58) = uVar1 & 0xffffbfff, (uVar1 >> 0xd & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
  }
  return;
}

