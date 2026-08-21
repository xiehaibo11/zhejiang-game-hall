
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_pipe_connect(long param_1,long param_2,char *param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  long *plVar4;
  sockaddr local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  long local_8;
  
  iVar2 = *(int *)(param_2 + 0xb8);
  local_8 = ___stack_chk_guard;
  bVar1 = iVar2 == -1;
  if (bVar1) {
    iVar2 = uv__socket(1,1,0);
    if (iVar2 < 0) goto LAB_00befbb4;
    *(int *)(param_2 + 0xb8) = iVar2;
  }
  local_78.sa_family = 0;
  local_78.sa_data[0] = '\0';
  local_78.sa_data[1] = '\0';
  local_78.sa_data[2] = '\0';
  local_78.sa_data[3] = '\0';
  local_78.sa_data[4] = '\0';
  local_78.sa_data[5] = '\0';
  local_78.sa_data[6] = '\0';
  local_78.sa_data[7] = '\0';
  local_78.sa_data[8] = '\0';
  local_78.sa_data[9] = '\0';
  local_78.sa_data[10] = '\0';
  local_78.sa_data[0xb] = '\0';
  local_78.sa_data[0xc] = '\0';
  local_78.sa_data[0xd] = '\0';
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  strncpy(local_78.sa_data,param_3,0x6b);
  local_78.sa_family = 1;
  while (iVar2 = connect(iVar2,&local_78,0x6e), iVar2 == -1) {
    piVar3 = (int *)__errno();
    if (*piVar3 != 4) {
      if (*piVar3 != 0x73) {
        iVar2 = -*piVar3;
        goto LAB_00befbb4;
      }
      break;
    }
    iVar2 = *(int *)(param_2 + 0xb8);
  }
  if ((!bVar1) ||
     (iVar2 = uv__stream_open(param_2,*(undefined4 *)(param_2 + 0xb8),0x60), iVar2 == 0)) {
    iVar2 = 0;
    uv__io_start(*(undefined8 *)(param_2 + 8),param_2 + 0x88,5);
  }
LAB_00befbb4:
  *(int *)(param_2 + 0xe8) = iVar2;
  *(long *)(param_2 + 0x78) = param_1;
  *(long *)(param_1 + 0x10) = *(long *)(param_2 + 8) + 0x20;
  *(undefined4 *)(param_1 + 8) = 2;
  plVar4 = *(long **)(*(long *)(param_2 + 8) + 0x28);
  *(long **)(param_1 + 0x18) = plVar4;
  *plVar4 = param_1 + 0x10;
  *(long *)(*(long *)(param_2 + 8) + 0x28) = param_1 + 0x10;
  *(long *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x40) = param_4;
  *(long *)(param_1 + 0x50) = param_1 + 0x50;
  *(long *)(param_1 + 0x58) = param_1 + 0x50;
  if (iVar2 != 0) {
    uv__io_feed(*(undefined8 *)(param_2 + 8),param_2 + 0x88);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

