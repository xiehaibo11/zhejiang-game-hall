
void auxiliar_checkboolean(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = lua_type();
  if (iVar1 != 1) {
    uVar3 = lua_typename(param_1,1);
    uVar2 = lua_type(param_1,param_2);
    uVar4 = lua_typename(param_1,uVar2);
                    /* try { // try from 009d11c0 to 00ad11d3 has its CatchHandler @ 009d8044 */
    uVar3 = lua_pushfstring(param_1,"%s expected, got %s",uVar3,uVar4);
    luaL_argerror(param_1,param_2,uVar3);
  }
                    /* try { // try from 009d11d8 to 00ad1243 has its CatchHandler @ 009d8154 */
  lua_toboolean(param_1,param_2);
  return;
}

