
void FUN_00c327e8(undefined8 param_1,undefined8 param_2,char *param_3,undefined4 param_4)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  sVar1 = strlen(param_3);
  uVar2 = FUN_00bfba1c(param_1,param_3,sVar1);
  puVar3 = (undefined4 *)FUN_00c1c6dc(param_1,param_2,uVar2);
  *puVar3 = param_4;
  puVar3[1] = 0xfff90000;
  return;
}

