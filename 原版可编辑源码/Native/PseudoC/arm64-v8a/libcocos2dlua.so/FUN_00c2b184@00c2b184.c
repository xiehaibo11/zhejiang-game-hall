
undefined8 FUN_00c2b184(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = FUN_00c29b44(param_1,1);
  lVar5 = FUN_00c29b44(param_1,2);
  lua_settop(param_1,3);
  lVar1 = lVar4 + 0x18;
  lVar2 = lVar5 + 0x18;
  if (lVar4 == 0) {
    lVar1 = 0;
  }
  if (lVar5 == 0) {
    lVar2 = 0;
  }
  iVar3 = luaL_loadfilex(param_1,lVar1,lVar2);
  if (iVar3 != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x28) + -0x10) = 0xffffffffffffffff;
    return 2;
  }
  uVar6 = FUN_00c2afe8(param_1,3);
  return uVar6;
}

