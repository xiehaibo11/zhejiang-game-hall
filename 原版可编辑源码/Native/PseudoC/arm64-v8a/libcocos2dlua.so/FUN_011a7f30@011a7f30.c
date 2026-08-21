
void FUN_011a7f30(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_2 + 0x20);
  *plVar3 = param_1 + 0x10;
  *(long *)(param_2 + 8) = param_1;
  *(undefined4 *)(param_2 + 0x10) = param_3;
  *(undefined4 *)(param_2 + 0x58) = 8;
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(param_2 + 0x28) = puVar2;
  *puVar2 = plVar3;
  *(long **)(param_1 + 0x18) = plVar3;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(long *)(param_2 + 0xd8) = param_2 + 0xd0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0xffffffff00000000;
  *(long *)(param_2 + 0xc0) = param_2 + 0xc0;
  *(long *)(param_2 + 200) = param_2 + 0xc0;
  *(long *)(param_2 + 0xd0) = param_2 + 0xd0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  if ((*(int *)(param_1 + 0x300) == -1) &&
     ((iVar1 = FUN_011a2e68("/dev/null",0), -1 < iVar1 ||
      (iVar1 = FUN_011a2e68(&DAT_0144b7ba,0), -1 < iVar1)))) {
    *(int *)(param_1 + 0x300) = iVar1;
  }
  FUN_011a366c(param_2 + 0x88,FUN_011a7ff8,0xffffffff);
  return;
}

