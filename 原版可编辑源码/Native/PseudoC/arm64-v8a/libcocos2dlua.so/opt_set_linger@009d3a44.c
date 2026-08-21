
void opt_set_linger(undefined8 param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  uint local_40;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_type(param_1,3);
  if (iVar2 != 5) {
    uVar3 = lua_typename(param_1,5);
    auxiliar_typeerror(param_1,3,uVar3);
  }
  lua_pushstring(param_1,"on");
  lua_gettable(param_1,3);
  iVar2 = lua_type(param_1,0xffffffff);
  if (iVar2 != 1) {
    luaL_argerror(param_1,3,"boolean \'on\' field expected");
  }
  local_40 = lua_toboolean(param_1,0xffffffff);
  local_40 = local_40 & 0xffff;
                    /* try { // try from 009d3af4 to 00ad3b63 has its CatchHandler @ 009d81a0 */
  lua_pushstring(param_1,"timeout");
  lua_gettable(param_1,3);
  iVar2 = lua_isnumber(param_1,0xffffffff);
  if (iVar2 == 0) {
    luaL_argerror(param_1,3,"number \'timeout\' field expected");
  }
  dVar4 = (double)lua_tonumber(param_1,0xffffffff);
  local_3c = (int)dVar4;
  iVar2 = setsockopt(*param_2,1,0xd,&local_40,8);
  if (iVar2 < 0) {
    lua_pushnil(param_1);
                    /* try { // try from 009d3b7c to 00ad3beb has its CatchHandler @ 009d819c */
    lua_pushstring(param_1,"setsockopt failed");
    uVar3 = 2;
  }
  else {
                    /* try { // try from 009d3b64 to 00ad3b77 has its CatchHandler @ 009d8010 */
    lua_pushnumber(0x3ff0000000000000,param_1);
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

