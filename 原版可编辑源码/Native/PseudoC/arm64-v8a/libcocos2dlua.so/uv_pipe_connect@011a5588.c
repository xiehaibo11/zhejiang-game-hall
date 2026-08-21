
void uv_pipe_connect(long param_1,long param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  sockaddr local_c8 [6];
  undefined1 local_5b;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_2 + 0xb8);
  if (iVar1 == -1) {
    iVar3 = FUN_011a2b64(1,1,0);
    if (iVar3 < 0) goto LAB_011a5684;
    *(int *)(param_2 + 0xb8) = iVar3;
  }
  memset(local_c8,0,0x6e);
  strncpy((char *)((ulong)local_c8 | 2),param_3,0x6b);
  local_5b = 0;
  local_c8[0].sa_family = 1;
  do {
    iVar3 = connect(*(int *)(param_2 + 0xb8),local_c8,0x6e);
    if (iVar3 != -1) goto LAB_011a5648;
    piVar4 = (int *)__errno();
    iVar3 = *piVar4;
  } while (iVar3 == 4);
  if (iVar3 == 0x73) {
LAB_011a5648:
    if ((iVar1 != -1) ||
       (iVar3 = FUN_011a8740(param_2,*(undefined4 *)(param_2 + 0xb8),0xc000), iVar3 == 0)) {
      FUN_011a3688(*(undefined8 *)(param_2 + 8),param_2 + 0x88,5);
      iVar3 = 0;
    }
  }
  else {
    iVar3 = -iVar3;
  }
LAB_011a5684:
  *(int *)(param_2 + 0xe8) = iVar3;
  *(long *)(param_2 + 0x78) = param_1;
  *(undefined4 *)(param_1 + 8) = 2;
  *(int *)(*(long *)(param_2 + 8) + 0x20) = *(int *)(*(long *)(param_2 + 8) + 0x20) + 1;
  *(undefined8 *)(param_1 + 0x40) = param_4;
  *(long *)(param_1 + 0x48) = param_2;
  *(long *)(param_1 + 0x50) = param_1 + 0x50;
  *(long *)(param_1 + 0x58) = param_1 + 0x50;
  if (iVar3 != 0) {
    FUN_011a390c(*(undefined8 *)(param_2 + 8),param_2 + 0x88);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

