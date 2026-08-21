
void uv__stream_init(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  
  *(long *)(param_2 + 0x20) = param_1 + 0x10;
  *(long *)(param_2 + 8) = param_1;
  plVar2 = *(long **)(param_1 + 0x18);
  *(long **)(param_2 + 0x28) = plVar2;
  *(undefined4 *)(param_2 + 0x10) = param_3;
  *(undefined4 *)(param_2 + 0x58) = 0x2000;
  *plVar2 = param_2 + 0x20;
  iVar1 = *(int *)(param_1 + 0x300);
  *(long *)(param_1 + 0x18) = param_2 + 0x20;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined4 *)(param_2 + 0xec) = 0xffffffff;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined4 *)(param_2 + 0xe8) = 0;
  *(long *)(param_2 + 0xc0) = param_2 + 0xc0;
  *(long *)(param_2 + 200) = param_2 + 0xc0;
  *(long *)(param_2 + 0xd0) = param_2 + 0xd0;
  *(long *)(param_2 + 0xd8) = param_2 + 0xd0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  if ((iVar1 == -1) &&
     ((iVar1 = uv__open_cloexec("/dev/null",0), -1 < iVar1 ||
      (iVar1 = uv__open_cloexec(&DAT_018e1710,0), -1 < iVar1)))) {
    *(int *)(param_1 + 0x300) = iVar1;
    uv__io_init(param_2 + 0x88,FUN_00bf28d4,0xffffffff);
    return;
  }
  uv__io_init(param_2 + 0x88,FUN_00bf28d4,0xffffffff);
  return;
}

