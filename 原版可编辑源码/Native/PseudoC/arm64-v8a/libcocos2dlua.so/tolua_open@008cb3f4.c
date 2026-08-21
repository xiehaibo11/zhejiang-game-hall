
void tolua_open(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = lua_gettop();
  lua_pushstring(param_1,"tolua_opened");
  lua_rawget(param_1,0xffffd8f0);
  iVar2 = lua_type(param_1,0xffffffff);
  if (iVar2 != 1) {
    lua_pushstring(param_1,"tolua_opened");
    lua_pushboolean(param_1,1);
    lua_rawset(param_1,0xffffd8f0);
    lua_pushstring(param_1,"tolua_value_root");
    lua_createtable(param_1,0,0);
    lua_rawset(param_1,0xffffd8f0);
    lua_pushstring(param_1,"tolua_ubox");
    lua_createtable(param_1,0,0);
    lua_createtable(param_1,0,0);
    lua_pushlstring(param_1,"__mode",6);
    lua_pushlstring(param_1,"v",1);
    lua_rawset(param_1,0xfffffffd);
    lua_setmetatable(param_1,0xfffffffe);
    lua_rawset(param_1,0xffffd8f0);
    lua_pushstring(param_1,"tolua_super");
    lua_createtable(param_1,0,0);
    lua_rawset(param_1,0xffffd8f0);
    lua_pushstring(param_1,"tolua_gc");
    lua_createtable(param_1,0,0);
    lua_rawset(param_1,0xffffd8f0);
    lua_pushstring(param_1,"tolua_gc_event");
    lua_pushstring(param_1,"tolua_gc");
    lua_rawget(param_1,0xffffd8f0);
    lua_pushstring(param_1,"tolua_super");
    lua_rawget(param_1,0xffffd8f0);
    lua_pushcclosure(param_1,class_gc_event,2);
    lua_rawset(param_1,0xffffd8f0);
    FUN_008cb838(param_1,"tolua_commonclass");
    lua_pushvalue(param_1,0xffffd8ee);
    lua_settop(param_1,0xfffffffe);
    lua_pushvalue(param_1,0xffffd8ee);
    tolua_module(param_1,"tolua",0);
    tolua_beginmodule(param_1,"tolua");
    lua_pushstring(param_1,"type");
    lua_pushcclosure(param_1,FUN_008cbac0,0);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"takeownership");
    lua_pushcclosure(param_1,FUN_008cbaf0,0);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"releaseownership");
    lua_pushcclosure(param_1,FUN_008cbb6c,0);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"cast");
    lua_pushcclosure(param_1,tolua_bnd_cast,0);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"isnull");
    lua_pushcclosure(param_1,FUN_008cbc40,0);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"inherit");
    lua_pushcclosure(param_1,FUN_008cbc88,0);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"setpeer");
    lua_pushcclosure(param_1,FUN_008cbccc,0);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"getpeer");
    lua_pushcclosure(param_1,FUN_008cbd44,0);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"getcfunction");
    lua_pushcclosure(param_1,FUN_008cbd94,0);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"iskindof");
    lua_pushcclosure(param_1,FUN_008cbe90,0);
    lua_rawset(param_1,0xfffffffd);
    lua_settop(param_1,0xfffffffe);
    lua_settop(param_1,0xfffffffe);
  }
  lua_settop(param_1,uVar1);
  return;
}

