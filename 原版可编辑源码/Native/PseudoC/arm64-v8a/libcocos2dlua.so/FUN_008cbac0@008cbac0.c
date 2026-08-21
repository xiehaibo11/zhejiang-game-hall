
undefined8 FUN_008cbac0(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = lua_gettop();
  tolua_typename(param_1,uVar1);
  return 1;
}

