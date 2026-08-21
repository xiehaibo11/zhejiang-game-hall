
int uv_accept(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0xec) == -1) {
    return -0xb;
  }
  iVar3 = *(int *)(param_2 + 0x10);
  if (iVar3 == 0xc) {
LAB_00bf2e30:
    iVar3 = uv__stream_open(param_2,*(int *)(param_1 + 0xec),0x60);
  }
  else {
    if (iVar3 != 0xf) {
      if (iVar3 != 7) {
        return -0x16;
      }
      goto LAB_00bf2e30;
    }
    iVar3 = uv_udp_open(param_2);
  }
  if (iVar3 == 0) {
    lVar4 = *(long *)(param_1 + 0xf0);
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) | 0x40000;
    if (lVar4 != 0) {
      iVar3 = 0;
      goto LAB_00bf2df4;
    }
    *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
    uv__io_start(*(undefined8 *)(param_1 + 8),param_1 + 0x88,1);
    iVar3 = 0;
  }
  else {
    uv__close(*(undefined4 *)(param_1 + 0xec));
    lVar4 = *(long *)(param_1 + 0xf0);
    if (lVar4 != 0) {
LAB_00bf2df4:
      iVar1 = *(int *)(lVar4 + 4);
      *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(lVar4 + 8);
      uVar2 = iVar1 - 1;
      *(uint *)(lVar4 + 4) = uVar2;
      if (uVar2 == 0) {
        uv__free(lVar4);
        *(undefined8 *)(param_1 + 0xf0) = 0;
        return iVar3;
      }
      memmove((void *)(lVar4 + 8),(void *)(lVar4 + 0xc),(ulong)uVar2 << 2);
      return iVar3;
    }
    *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  }
  return iVar3;
}

