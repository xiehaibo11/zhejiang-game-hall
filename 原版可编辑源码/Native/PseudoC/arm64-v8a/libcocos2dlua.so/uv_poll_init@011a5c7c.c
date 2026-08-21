
undefined8 uv_poll_init(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  iVar1 = FUN_011a394c(param_1,param_3);
  if (iVar1 != 0) {
    return 0xffffffef;
  }
  uVar2 = FUN_011ac0f0(param_1,param_3);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_011a2ca0(param_3,1);
    if ((int)uVar2 == -0x19) {
      uVar2 = FUN_011a3130(param_3,1);
    }
    if ((int)uVar2 == 0) {
      plVar4 = (long *)(param_2 + 0x20);
      *plVar4 = param_1 + 0x10;
      *(long *)(param_2 + 8) = param_1;
      *(undefined4 *)(param_2 + 0x10) = 8;
      *(undefined4 *)(param_2 + 0x58) = 8;
      puVar3 = *(undefined8 **)(param_1 + 0x18);
      *(undefined8 **)(param_2 + 0x28) = puVar3;
      *puVar3 = plVar4;
      *(long **)(param_1 + 0x18) = plVar4;
      *(undefined8 *)(param_2 + 0x50) = 0;
      FUN_011a366c(param_2 + 0x68,FUN_011a5d54,param_3);
      *(undefined8 *)(param_2 + 0x60) = 0;
      return 0;
    }
  }
  return uVar2;
}

