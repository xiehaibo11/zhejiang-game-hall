
void FUN_009d3ed8(undefined8 param_1,int *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  in_addr iStack_50;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_type(param_1,3);
  if (iVar2 != 5) {
    uVar3 = lua_typename(param_1,5);
    auxiliar_typeerror(param_1,3,uVar3);
  }
  lua_pushstring(param_1,"multiaddr");
  lua_gettable(param_1,3);
  iVar2 = lua_isstring(param_1,0xffffffff);
                    /* try { // try from 009d3f5c to 00ad3f6f has its CatchHandler @ 009d800c */
  if (iVar2 == 0) {
    luaL_argerror(param_1,3,"string \'multiaddr\' field expected");
  }
                    /* try { // try from 009d3f74 to 00ad3fdf has its CatchHandler @ 009d80f4 */
  pcVar4 = (char *)lua_tolstring(param_1,0xffffffff,0);
  iVar2 = inet_aton(pcVar4,&iStack_50);
  if (iVar2 == 0) {
    luaL_argerror(param_1,3,"invalid \'multiaddr\' ip address");
  }
  lua_pushstring(param_1,"interface");
  lua_gettable(param_1,3);
  iVar2 = lua_isstring(param_1,0xffffffff);
  if (iVar2 == 0) {
                    /* try { // try from 009d3fe0 to 00ad41af has its CatchHandler @ 009cee70 */
    luaL_argerror(param_1,3,"string \'interface\' field expected");
  }
  local_4c = 0;
  pcVar4 = (char *)lua_tolstring(param_1,0xffffffff,0);
  iVar2 = strcmp(pcVar4,"*");
  if (iVar2 != 0) {
    pcVar4 = (char *)lua_tolstring(param_1,0xffffffff,0);
    iVar2 = inet_aton(pcVar4,(in_addr *)((ulong)&iStack_50 | 4));
    if (iVar2 == 0) {
      luaL_argerror(param_1,3,"invalid \'interface\' ip address");
    }
  }
  iVar2 = setsockopt(*param_2,0,param_3,&iStack_50,8);
  if (iVar2 < 0) {
    lua_pushnil(param_1);
    lua_pushstring(param_1,"setsockopt failed");
    uVar3 = 2;
  }
  else {
    lua_pushnumber(0x3ff0000000000000,param_1);
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

