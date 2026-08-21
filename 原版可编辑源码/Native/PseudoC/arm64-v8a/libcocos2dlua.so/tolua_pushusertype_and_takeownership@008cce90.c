
void tolua_pushusertype_and_takeownership(undefined8 param_1)

{
  undefined4 uVar1;
  
  tolua_pushusertype_internal();
  uVar1 = lua_gettop(param_1);
  tolua_register_gc(param_1,uVar1);
  return;
}

