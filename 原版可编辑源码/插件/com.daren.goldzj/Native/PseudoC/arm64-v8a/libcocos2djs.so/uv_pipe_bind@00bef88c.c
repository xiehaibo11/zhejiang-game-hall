
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_pipe_bind(long param_1,undefined8 param_2)

{
  int __fd;
  int iVar1;
  char *__src;
  int *piVar2;
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
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0xb8) < 0) {
    __src = (char *)uv__strdup(param_2);
    if (__src == (char *)0x0) {
      iVar1 = -0xc;
    }
    else {
      __fd = uv__socket(1,1,0);
      iVar1 = __fd;
      if (-1 < __fd) {
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
        strncpy(local_78.sa_data,__src,0x6b);
        local_78.sa_family = 1;
        iVar1 = bind(__fd,&local_78,0x6e);
        if (iVar1 == 0) {
          *(char **)(param_1 + 0x100) = __src;
          *(int *)(param_1 + 0xb8) = __fd;
          *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x40000;
          iVar1 = 0;
          goto LAB_00bef964;
        }
        piVar2 = (int *)__errno();
        iVar1 = -*piVar2;
        if (*piVar2 == 2) {
          iVar1 = -0xd;
        }
        uv__close(__fd,0xfffffff3);
      }
      uv__free(__src);
    }
  }
  else {
    iVar1 = -0x16;
  }
LAB_00bef964:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

