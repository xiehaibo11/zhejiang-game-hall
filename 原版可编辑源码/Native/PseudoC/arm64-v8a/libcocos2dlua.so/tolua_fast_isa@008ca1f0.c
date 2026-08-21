
undefined4 tolua_fast_isa(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = lua_rawequal();
  if (iVar1 == 0) {
    if (param_4 == 0) {
      lua_pushlstring(param_1,"tolua_super",0xb);
      lua_rawget(param_1,0xffffd8f0);
    }
    else {
      lua_pushvalue(param_1,param_4);
    }
    lua_pushvalue(param_1,param_2);
    lua_rawget(param_1,0xfffffffe);
    lua_pushvalue(param_1,param_3);
    lua_rawget(param_1,0xffffd8f0);
    lua_rawget(param_1,0xfffffffe);
    uVar2 = lua_toboolean(param_1,0xffffffff);
    lua_settop(param_1,0xfffffffc);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

