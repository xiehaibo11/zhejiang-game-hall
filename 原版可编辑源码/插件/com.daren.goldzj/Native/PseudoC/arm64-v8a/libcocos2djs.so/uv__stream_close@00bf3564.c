
void uv__stream_close(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  uv__io_close(*(undefined8 *)(param_1 + 8),param_1 + 0x88);
  uv_read_stop(param_1);
  uVar2 = *(uint *)(param_1 + 0x58);
  if ((uVar2 >> 0xe & 1) != 0) {
    *(uint *)(param_1 + 0x58) = uVar2 & 0xffffbfff;
    if ((uVar2 >> 0xd & 1) != 0) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
    }
  }
  if (*(int *)(param_1 + 0xb8) != -1) {
    if (2 < *(int *)(param_1 + 0xb8)) {
      uv__close();
    }
    *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0xec) != -1) {
    uv__close();
    *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  }
  lVar4 = *(long *)(param_1 + 0xf0);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 4) != 0) {
      uVar3 = 0;
      do {
        lVar1 = uVar3 * 4;
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulong)uVar2;
        uv__close(*(undefined4 *)(lVar4 + lVar1 + 8));
      } while (uVar2 < *(uint *)(lVar4 + 4));
      lVar4 = *(long *)(param_1 + 0xf0);
    }
    uv__free(lVar4);
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return;
}

