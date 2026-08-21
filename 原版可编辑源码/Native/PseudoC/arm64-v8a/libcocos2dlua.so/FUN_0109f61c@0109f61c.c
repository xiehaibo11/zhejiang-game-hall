
int FUN_0109f61c(long param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_38;
  
  uVar2 = 0x686d7478;
  if (param_3 != '\0') {
    uVar2 = 0x766d7478;
  }
  iVar4 = (**(code **)(param_1 + 0x330))(param_1,uVar2,param_2,&local_38);
  if (iVar4 == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x510);
    puVar3 = (undefined8 *)(param_1 + 0x460);
    if (param_3 != '\0') {
      puVar1 = (undefined8 *)(param_1 + 0x518);
      puVar3 = (undefined8 *)(param_1 + 0x470);
    }
    *puVar3 = local_38;
    uVar5 = FT_Stream_Pos(param_2);
    *puVar1 = uVar5;
  }
  return iVar4;
}

