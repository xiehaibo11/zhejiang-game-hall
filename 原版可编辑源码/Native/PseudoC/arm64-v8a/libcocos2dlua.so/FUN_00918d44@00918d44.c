
void FUN_00918d44(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  double dVar7;
  socklen_t local_210c;
  undefined8 local_2108;
  char acStack_2100 [8];
  char acStack_20f8 [48];
  sockaddr asStack_20c8 [8];
  undefined1 auStack_2048 [8192];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = auxiliar_checkclass(param_1,"udp{unconnected}",1);
  dVar7 = (double)luaL_optnumber(0x40c0000000000000,param_1,2);
  uVar6 = (ulong)dVar7;
  local_210c = 0x80;
  timeout_markstart(lVar3 + 8);
  if (0x1fff < uVar6) {
    uVar6 = 0x2000;
  }
  iVar2 = socket_recvfrom(lVar3,auStack_2048,uVar6,&local_2108,asStack_20c8,&local_210c,lVar3 + 8);
  if ((iVar2 == -2) || (iVar2 == 0)) {
    iVar2 = getnameinfo(asStack_20c8,local_210c,acStack_20f8,0x2e,acStack_2100,6,10);
    if (iVar2 == 0) {
      lua_pushlstring(param_1,auStack_2048,local_2108);
      lua_pushstring(param_1,acStack_20f8);
      lVar3 = strtol(acStack_2100,(char **)0x0,10);
      lua_pushinteger(param_1,(long)(int)lVar3);
      uVar5 = 3;
      goto LAB_00918e84;
    }
    lua_pushnil(param_1);
    pcVar4 = gai_strerror(iVar2);
  }
  else {
    lua_pushnil(param_1);
    pcVar4 = (char *)socket_strerror(iVar2);
  }
  lua_pushstring(param_1,pcVar4);
  uVar5 = 2;
LAB_00918e84:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

