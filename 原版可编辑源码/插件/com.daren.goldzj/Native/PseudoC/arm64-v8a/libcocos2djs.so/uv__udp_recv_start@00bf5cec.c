
int uv__udp_recv_start(long param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    iVar2 = -0x16;
  }
  else {
    iVar2 = uv__io_active(param_1 + 0x80,1);
    if (iVar2 == 0) {
      if ((*(int *)(param_1 + 0xb0) == -1) && (iVar2 = FUN_00bf52b8(param_1,2,0), iVar2 != 0)) {
        return iVar2;
      }
      *(long *)(param_1 + 0x70) = param_2;
      *(long *)(param_1 + 0x78) = param_3;
      uv__io_start(*(undefined8 *)(param_1 + 8),param_1 + 0x80,1);
      uVar1 = *(uint *)(param_1 + 0x58);
      iVar2 = 0;
      if (((uVar1 >> 0xe & 1) == 0) &&
         (*(uint *)(param_1 + 0x58) = uVar1 | 0x4000, (uVar1 >> 0xd & 1) != 0)) {
        *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + 1;
      }
    }
    else {
      iVar2 = -0x72;
    }
  }
  return iVar2;
}

