
ulong uv__tcp_connect(long param_1,long param_2,sockaddr *param_3,socklen_t param_4,
                     undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_2 + 0x78) != 0) {
    return 0xffffff8e;
  }
  uVar2 = FUN_00bf364c(param_2,param_3->sa_family,0x60);
  if ((int)uVar2 == 0) {
    *(undefined4 *)(param_2 + 0xe8) = 0;
    piVar3 = (int *)__errno();
    do {
      *piVar3 = 0;
      iVar1 = connect(*(int *)(param_2 + 0xb8),param_3,param_4);
      if (iVar1 != -1) goto LAB_00bf3994;
    } while (*piVar3 == 4);
    if ((*piVar3 != 0) && (*piVar3 != 0x73)) {
      if (*piVar3 != 0x6f) {
        return (ulong)(uint)-*piVar3;
      }
      *(int *)(param_2 + 0xe8) = -*piVar3;
    }
LAB_00bf3994:
    lVar4 = *(long *)(param_2 + 8);
    *(undefined4 *)(param_1 + 8) = 2;
    *(long *)(param_1 + 0x10) = lVar4 + 0x20;
    plVar5 = *(long **)(*(long *)(param_2 + 8) + 0x28);
    *(long **)(param_1 + 0x18) = plVar5;
    *plVar5 = param_1 + 0x10;
    *(long *)(*(long *)(param_2 + 8) + 0x28) = param_1 + 0x10;
    *(long *)(param_1 + 0x50) = param_1 + 0x50;
    *(long *)(param_1 + 0x58) = param_1 + 0x50;
    *(undefined8 *)(param_1 + 0x40) = param_5;
    *(long *)(param_1 + 0x48) = param_2;
    *(long *)(param_2 + 0x78) = param_1;
    uv__io_start(*(undefined8 *)(param_2 + 8),param_2 + 0x88,4);
    uVar2 = (ulong)*(uint *)(param_2 + 0xe8);
    if (*(uint *)(param_2 + 0xe8) != 0) {
      uv__io_feed(*(undefined8 *)(param_2 + 8),param_2 + 0x88);
      return 0;
    }
  }
  return uVar2;
}

