
int uv_pipe_listen(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0xb8) == -1) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = listen(*(int *)(param_1 + 0xb8),param_2);
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0xe0) = param_3;
      *(code **)(param_1 + 0x88) = uv__server_io;
      uv__io_start(*(undefined8 *)(param_1 + 8),param_1 + 0x88,1);
      return 0;
    }
    piVar2 = (int *)__errno();
    iVar1 = -*piVar2;
  }
  return iVar1;
}

