
void uv__udp_close(long param_1)

{
  uint uVar1;
  
  uv__io_close(*(undefined8 *)(param_1 + 8),param_1 + 0x80);
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((uVar1 >> 0xe & 1) != 0) {
    *(uint *)(param_1 + 0x58) = uVar1 & 0xffffbfff;
    if ((uVar1 >> 0xd & 1) != 0) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
    }
  }
  if (*(int *)(param_1 + 0xb0) != -1) {
    uv__close();
    *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  }
  return;
}

