
void opt_set_ip_multicast_if(undefined8 param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  char *__s1;
  undefined8 uVar3;
  in_addr local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __s1 = (char *)luaL_checklstring(param_1,3,0);
  local_40[0].s_addr = 0;
  iVar2 = strcmp(__s1,"*");
  if ((iVar2 != 0) && (iVar2 = inet_aton(__s1,local_40), iVar2 == 0)) {
    luaL_argerror(param_1,3,"ip expected");
  }
  iVar2 = setsockopt(*param_2,0,0x20,local_40,4);
  if (iVar2 < 0) {
    lua_pushnil(param_1);
    lua_pushstring(param_1,"setsockopt failed");
    uVar3 = 2;
  }
  else {
    lua_pushnumber(0x3ff0000000000000,param_1);
    uVar3 = 1;
  }
                    /* try { // try from 009d3e0c to 00ad3e77 has its CatchHandler @ 009d80f8 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

