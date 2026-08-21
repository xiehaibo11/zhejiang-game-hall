
void uv_signal_init(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  if (*(int *)(param_1 + 0x228) == -1) {
    iVar1 = uv__make_pipe(param_1 + 0x228,0x800);
    if (iVar1 != 0) {
      return;
    }
    uv__io_init(param_1 + 0x230,FUN_00bf1560,*(undefined4 *)(param_1 + 0x228));
    uv__io_start(param_1,param_1 + 0x230,1);
  }
  *(long *)(param_2 + 0x20) = param_1 + 0x10;
  *(long *)(param_2 + 8) = param_1;
  plVar2 = *(long **)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0x10) = 0x10;
  *(long **)(param_2 + 0x28) = plVar2;
  *(undefined4 *)(param_2 + 0x58) = 0x2000;
  *plVar2 = param_2 + 0x20;
  *(long *)(param_1 + 0x18) = param_2 + 0x20;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x68) = 0;
  *(undefined4 *)(param_2 + 0x90) = 0;
  *(undefined4 *)(param_2 + 0x94) = 0;
  return;
}

