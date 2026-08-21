
undefined8 luaL_getmetafield(long param_1,undefined8 param_2,char *param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar1 = lua_getmetatable();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  uVar4 = *(ulong *)(*(long *)(param_1 + 0x28) + -8);
  sVar2 = strlen(param_3);
  uVar1 = FUN_00bfba1c(param_1,param_3,sVar2);
  plVar3 = (long *)FUN_00c1bc28(uVar4 & 0x7fffffffffff,uVar1);
  if ((plVar3 != (long *)0x0) && (*plVar3 != -1)) {
    *(long *)(*(long *)(param_1 + 0x28) + -8) = *plVar3;
    return 1;
  }
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
  return 0;
}

