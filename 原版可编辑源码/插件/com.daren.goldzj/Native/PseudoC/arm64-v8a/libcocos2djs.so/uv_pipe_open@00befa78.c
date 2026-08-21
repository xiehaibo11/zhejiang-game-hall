
void uv_pipe_open(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = uv__nonblock_ioctl(param_2,1);
  if (iVar1 != 0) {
    return;
  }
  uv__stream_open(param_1,param_2,0x60);
  return;
}

