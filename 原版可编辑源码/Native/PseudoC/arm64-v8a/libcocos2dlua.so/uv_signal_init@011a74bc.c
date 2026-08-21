
undefined8 uv_signal_init(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  if (*(int *)(param_1 + 0x228) == -1) {
    uVar1 = FUN_011a6068(param_1 + 0x228,0x800);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    FUN_011a366c(param_1 + 0x230,FUN_011a7c08,*(undefined4 *)(param_1 + 0x228));
    FUN_011a3688(param_1,param_1 + 0x230,1);
  }
  plVar3 = (long *)(param_2 + 0x20);
  *plVar3 = param_1 + 0x10;
  *(undefined4 *)(param_2 + 0x10) = 0x10;
  *(long *)(param_2 + 8) = param_1;
  *(undefined4 *)(param_2 + 0x58) = 8;
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(param_2 + 0x28) = puVar2;
  *puVar2 = plVar3;
  *(long **)(param_1 + 0x18) = plVar3;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  return 0;
}

