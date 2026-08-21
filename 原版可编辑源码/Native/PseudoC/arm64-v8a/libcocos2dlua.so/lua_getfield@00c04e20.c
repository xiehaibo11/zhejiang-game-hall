
void lua_getfield(long param_1,undefined8 param_2,char *param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar1 = FUN_00c03214();
  sVar2 = strlen(param_3);
  FUN_00bfba1c(param_1,param_3,sVar2);
  puVar3 = (undefined8 *)FUN_00c1cdf4(param_1,uVar1);
  puVar5 = *(undefined8 **)(param_1 + 0x28);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x28) = puVar5 + 2;
    FUN_00c175d8(param_1,puVar5,2);
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x28) + -0x18);
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x28) + -8);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x30);
  *puVar5 = *puVar3;
  *(undefined8 **)(param_1 + 0x28) = puVar5 + 1;
  if (puVar4 <= puVar5 + 1) {
    FUN_00bfe164(param_1);
  }
  return;
}

