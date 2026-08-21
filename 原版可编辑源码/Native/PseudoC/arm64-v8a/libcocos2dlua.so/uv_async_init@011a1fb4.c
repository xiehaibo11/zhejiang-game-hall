
void uv_async_init(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  iVar1 = FUN_011a2060();
  if (iVar1 != 0) {
    return;
  }
  *(undefined4 *)(param_2 + 0x10) = 1;
  *(long *)(param_2 + 8) = param_1;
  plVar2 = (long *)(param_2 + 0x20);
  *plVar2 = param_1 + 0x10;
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(param_2 + 0x28) = puVar3;
  *puVar3 = plVar2;
  *(long **)(param_1 + 0x18) = plVar2;
  plVar2 = (long *)(param_2 + 0x68);
  *plVar2 = param_1 + 0x1b0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x60) = param_3;
  *(undefined4 *)(param_2 + 0x78) = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x1b8);
  *(undefined8 **)(param_2 + 0x70) = puVar3;
  *puVar3 = plVar2;
  *(long **)(param_1 + 0x1b8) = plVar2;
  *(undefined4 *)(param_2 + 0x58) = 0xc;
  *(int *)(*(long *)(param_2 + 8) + 8) = *(int *)(*(long *)(param_2 + 8) + 8) + 1;
  return;
}

