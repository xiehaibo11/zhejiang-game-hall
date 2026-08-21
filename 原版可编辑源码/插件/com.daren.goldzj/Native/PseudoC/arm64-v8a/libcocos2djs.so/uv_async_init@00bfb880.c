
void uv_async_init(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  
  if (*(int *)(param_1 + 0x1f8) == -1) {
    iVar1 = FUN_00bfb6d8();
    if (iVar1 != 0) {
      return;
    }
  }
  *(long *)(param_2 + 0x20) = param_1 + 0x10;
  *(long *)(param_2 + 8) = param_1;
  plVar2 = *(long **)(param_1 + 0x18);
  *(long **)(param_2 + 0x28) = plVar2;
  *(undefined4 *)(param_2 + 0x10) = 1;
  *plVar2 = param_2 + 0x20;
  *(long *)(param_1 + 0x18) = param_2 + 0x20;
  *(long *)(param_2 + 0x68) = param_1 + 0x1b0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  plVar2 = *(long **)(param_1 + 0x1b8);
  *(long **)(param_2 + 0x70) = plVar2;
  *(undefined8 *)(param_2 + 0x60) = param_3;
  *(undefined4 *)(param_2 + 0x78) = 0;
  *plVar2 = param_2 + 0x68;
  *(long *)(param_1 + 0x1b8) = param_2 + 0x68;
  *(undefined4 *)(param_2 + 0x58) = 0x6000;
  *(int *)(*(long *)(param_2 + 8) + 8) = *(int *)(*(long *)(param_2 + 8) + 8) + 1;
  return;
}

