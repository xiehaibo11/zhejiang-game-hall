
int uv__signal_loop_fork(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_1 + 0x230;
  uv__io_stop(param_1,lVar1,1);
  uv__close(*(undefined4 *)(param_1 + 0x228));
  uv__close(*(undefined4 *)(param_1 + 0x22c));
  *(undefined4 *)(param_1 + 0x228) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22c) = 0xffffffff;
  iVar2 = uv__make_pipe(param_1 + 0x228,0x800);
  if (iVar2 == 0) {
    uv__io_init(lVar1,FUN_00bf1560,*(undefined4 *)(param_1 + 0x228));
    uv__io_start(param_1,lVar1,1);
  }
  return iVar2;
}

