
void tolua_typename(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  uVar1 = lua_type();
  if (uVar1 == 0xffffffff) {
    pcVar3 = "[no object]";
  }
  else if ((uVar1 | 2) == 7) {
    if (uVar1 == 7) {
      iVar2 = lua_getmetatable(param_1,param_2);
      if (iVar2 == 0) {
        uVar1 = 7;
        goto LAB_008ca39c;
      }
      lua_rawget(param_1,0xffffd8f0);
      iVar2 = lua_isstring(param_1,0xffffffff);
      if (iVar2 != 0) goto LAB_008ca3b0;
      lua_settop(param_1,0xfffffffe);
      pcVar3 = "[undefined]";
    }
    else {
      lua_pushvalue(param_1,param_2);
      lua_rawget(param_1,0xffffd8f0);
      iVar2 = lua_isstring(param_1,0xffffffff);
      if (iVar2 != 0) {
        lua_pushstring(param_1,"class ");
        lua_insert(param_1,0xfffffffe);
        lua_concat(param_1,2);
        goto LAB_008ca3b0;
      }
      lua_settop(param_1,0xfffffffe);
      pcVar3 = "table";
    }
  }
  else {
LAB_008ca39c:
    pcVar3 = (char *)lua_typename(param_1,uVar1);
  }
  lua_pushstring(param_1,pcVar3);
LAB_008ca3b0:
  lua_tolstring(param_1,0xffffffff,0);
  return;
}

