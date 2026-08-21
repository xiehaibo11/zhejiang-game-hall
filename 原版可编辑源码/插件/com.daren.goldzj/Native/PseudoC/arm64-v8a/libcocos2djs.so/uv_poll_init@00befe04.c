
int uv_poll_init(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = uv__io_check_fd(param_1,param_3);
  if (iVar1 == 0) {
    iVar1 = uv__nonblock_ioctl(param_3,1);
    if (iVar1 == -0x19) {
      iVar1 = uv__nonblock_fcntl(param_3,1);
    }
    if (iVar1 == 0) {
      *(long *)(param_2 + 0x20) = param_1 + 0x10;
      *(long *)(param_2 + 8) = param_1;
      plVar2 = *(long **)(param_1 + 0x18);
      *(undefined4 *)(param_2 + 0x10) = 8;
      *(long **)(param_2 + 0x28) = plVar2;
      *(undefined4 *)(param_2 + 0x58) = 0x2000;
      *plVar2 = param_2 + 0x20;
      *(long *)(param_1 + 0x18) = param_2 + 0x20;
      *(undefined8 *)(param_2 + 0x50) = 0;
      uv__io_init(param_2 + 0x68,FUN_00befd08,param_3);
      *(undefined8 *)(param_2 + 0x60) = 0;
      return 0;
    }
  }
  return iVar1;
}

