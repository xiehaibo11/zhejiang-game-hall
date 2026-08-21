
void FUN_00c30454(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = lua_tolstring(param_1,1,0);
  uVar2 = lua_tolstring(param_1,0xffffffff,0);
  luaL_error(param_1,"error loading module \'%s\' from file \'%s\':\n\t%s",uVar1,param_2,uVar2);
  return;
}

