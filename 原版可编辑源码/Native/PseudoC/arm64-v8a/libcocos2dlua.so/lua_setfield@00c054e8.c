
void lua_setfield(long param_1,undefined8 param_2,char *param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar1 = FUN_00c03214();
  sVar2 = strlen(param_3);
  FUN_00bfba1c(param_1,param_3,sVar2);
  puVar3 = (undefined8 *)FUN_00c1cf6c(param_1,uVar1);
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar4 + -8;
    *puVar3 = *(undefined8 *)(lVar4 + -8);
    return;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar4 + -0x28);
  *(long *)(param_1 + 0x28) = lVar4 + 0x18;
  FUN_00c175d8(param_1,lVar4,1);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -0x18;
  return;
}

