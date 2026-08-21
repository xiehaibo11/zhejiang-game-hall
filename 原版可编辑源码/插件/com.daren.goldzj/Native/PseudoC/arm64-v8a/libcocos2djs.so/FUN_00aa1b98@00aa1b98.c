
uint FUN_00aa1b98(long param_1,int param_2,uint param_3,long param_4)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *pcVar7;
  socklen_t local_ec;
  sockaddr asStack_e8 [8];
  sockaddr local_68;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_ec = 0x80;
  uVar4 = *(uint *)(*(long *)(param_1 + 0x150) + 0xc78);
  uVar1 = (ushort)(param_3 >> 8);
  if (((uVar4 >> 5 & 1) == 0) && ((*(uint *)(param_1 + 0x1d8) >> 5 & 1) == 0)) {
    local_68.sa_family = 0;
    local_68.sa_data[0] = '\0';
    local_68.sa_data[1] = '\0';
    local_68.sa_data[2] = '\0';
    local_68.sa_data[3] = '\0';
    local_68.sa_data[4] = '\0';
    local_68.sa_data[5] = '\0';
    local_68.sa_data[6] = '\0';
    local_68.sa_data[7] = '\0';
    local_68.sa_data[8] = '\0';
    local_68.sa_data[9] = '\0';
    local_68.sa_data[10] = '\0';
    local_68.sa_data[0xb] = '\0';
    local_68.sa_data[0xc] = '\0';
    local_68.sa_data[0xd] = '\0';
    local_50 = 0;
    local_58 = 0;
    if (param_4 == 0) {
LAB_00aa1c20:
      uVar1 = uVar1 & 0xff | (ushort)((param_3 & 0xff00ff) << 8);
      local_68.sa_data[0] = (char)uVar1;
      local_68.sa_data[1] = (char)(uVar1 >> 8);
      local_68.sa_family = 10;
      iVar3 = bind(param_2,&local_68,0x1c);
      goto joined_r0x00aa1cd0;
    }
    iVar3 = lws_interface_to_sa((*(uint *)(param_1 + 0x1d8) >> 5 ^ 0xffffffff) & 1,param_4,&local_68
                                ,0x1c);
    if (-1 < iVar3) {
      local_50 = FUN_00aa1d90(param_4);
      goto LAB_00aa1c20;
    }
    pcVar7 = "Unable to find if %s\n";
LAB_00aa1d54:
    _lws_log(1,pcVar7,param_4);
  }
  else {
    local_68.sa_data[6] = '\0';
    local_68.sa_data[7] = '\0';
    local_68.sa_data[8] = '\0';
    local_68.sa_data[9] = '\0';
    local_68.sa_data[10] = '\0';
    local_68.sa_data[0xb] = '\0';
    local_68.sa_data[0xc] = '\0';
    local_68.sa_data[0xd] = '\0';
    local_68.sa_family = 2;
    local_68.sa_data[0] = '\0';
    local_68.sa_data[1] = '\0';
    local_68.sa_data[2] = '\0';
    local_68.sa_data[3] = '\0';
    local_68.sa_data[4] = '\0';
    local_68.sa_data[5] = '\0';
    if (param_4 != 0) {
      if ((uVar4 >> 5 & 1) == 0) {
        uVar4 = (*(uint *)(param_1 + 0x1d8) >> 5 ^ 0xffffffff) & 1;
      }
      else {
        uVar4 = 0;
      }
      iVar3 = lws_interface_to_sa(uVar4,param_4,&local_68,0x10);
      if (iVar3 < 0) {
        pcVar7 = "Unable to find interface %s\n";
        goto LAB_00aa1d54;
      }
    }
    uVar1 = uVar1 & 0xff | (ushort)((param_3 & 0xff00ff) << 8);
    local_68.sa_data[0] = (char)uVar1;
    local_68.sa_data[1] = (char)(uVar1 >> 8);
    iVar3 = bind(param_2,&local_68,0x10);
joined_r0x00aa1cd0:
    if (-1 < iVar3) {
      iVar3 = getsockname(param_2,asStack_e8,&local_ec);
      if (iVar3 == -1) {
        piVar6 = (int *)__errno();
        pcVar7 = strerror(*piVar6);
        _lws_log(2,"getsockname: %s\n",pcVar7);
        if (*(long *)(lVar2 + 0x28) == local_48) {
          return param_3;
        }
      }
      else if (*(long *)(lVar2 + 0x28) == local_48) {
        return (uint)((ushort)asStack_e8[0].sa_data._0_2_ >> 8) |
               ((ushort)asStack_e8[0].sa_data._0_2_ & 0xff00ff) << 8;
      }
      goto LAB_00aa1d08;
    }
    puVar5 = (undefined4 *)__errno();
    _lws_log(1,"ERROR on binding fd %d to port %d (%d %d)\n",param_2,param_3,iVar3,*puVar5);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return 0xffffffff;
  }
LAB_00aa1d08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

