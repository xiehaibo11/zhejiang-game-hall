
undefined8 FUN_008b1af8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (param_1 != 0) {
    lVar2 = tolua_tousertype(param_1,1,0);
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 0) {
      uVar3 = NEON_ucvtf((ulong)*(uint *)(lVar2 + 0x24));
      tolua_pushnumber(uVar3,param_1);
      uVar3 = 1;
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.GLProgram:getProgram",iVar1 + -1,0);
      uVar3 = 0;
    }
  }
  return uVar3;
}

