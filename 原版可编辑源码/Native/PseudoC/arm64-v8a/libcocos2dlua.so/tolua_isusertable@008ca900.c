
undefined8 tolua_isusertable(undefined8 param_1,int param_2,char *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  if (param_4 == 0) {
LAB_008ca940:
    iVar2 = param_2;
    if (param_2 < 0) {
      iVar2 = lua_gettop(param_1,param_2);
      iVar2 = param_2 + iVar2 + 1;
    }
    lua_pushvalue(param_1,iVar2);
    iVar2 = lua_type(param_1,0xffffffff);
    if (iVar2 == 5) {
      lua_pushlstring(param_1,".isclass",8);
      lua_rawget(param_1,0xfffffffe);
      iVar2 = lua_type(param_1,0xffffffff);
      lua_settop(param_1,0xfffffffe);
      if ((iVar2 != 0) && (iVar2 = lua_getmetatable(param_1,0xffffffff), iVar2 != 0)) {
        lua_remove(param_1,0xfffffffe);
      }
    }
    lua_rawget(param_1,0xffffd8f0);
    iVar2 = lua_isstring(param_1,0xffffffff);
    if (iVar2 == 0) {
LAB_008caa70:
      lua_settop(param_1,0xfffffffe);
    }
    else {
      pcVar3 = (char *)lua_tolstring(param_1,0xffffffff,0);
      iVar2 = strcmp(pcVar3,param_3);
      if (iVar2 == 0) {
        lua_settop(param_1,0xfffffffe);
        goto LAB_008caa98;
      }
      lua_pushstring(param_1,"const ");
      lua_insert(param_1,0xfffffffe);
      lua_concat(param_1,2);
      iVar2 = lua_isstring(param_1,0xffffffff);
      if (iVar2 == 0) goto LAB_008caa70;
      pcVar3 = (char *)lua_tolstring(param_1,0xffffffff,0);
      iVar2 = strcmp(pcVar3,param_3);
      lua_settop(param_1,0xfffffffe);
      if (iVar2 == 0) goto LAB_008caa98;
    }
    uVar4 = 0;
    *param_5 = param_2;
    param_5[1] = 0;
    *(char **)(param_5 + 2) = param_3;
  }
  else {
    iVar1 = lua_gettop(param_1);
    iVar2 = -param_2;
    if (-1 < param_2) {
      iVar2 = param_2;
    }
    if (iVar2 <= iVar1) goto LAB_008ca940;
LAB_008caa98:
    uVar4 = 1;
  }
  return uVar4;
}

