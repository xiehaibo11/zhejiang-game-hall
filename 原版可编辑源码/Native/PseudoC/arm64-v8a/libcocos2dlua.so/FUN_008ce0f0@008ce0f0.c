
undefined8 FUN_008ce0f0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 == 2) {
    uVar3 = tolua_tonumber(0,param_1,2);
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
  }
  return 0;
}

