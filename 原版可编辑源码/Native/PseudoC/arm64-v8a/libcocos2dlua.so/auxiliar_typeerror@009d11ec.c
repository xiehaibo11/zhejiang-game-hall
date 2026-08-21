
void auxiliar_typeerror(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = lua_type();
  uVar2 = lua_typename(param_1,uVar1);
  uVar2 = lua_pushfstring(param_1,"%s expected, got %s",param_3,uVar2);
                    /* try { // try from 009d1244 to 00ad1463 has its CatchHandler @ 009cee70 */
  luaL_argerror(param_1,param_2,uVar2);
  return;
}

