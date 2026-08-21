
void FUN_00918fac(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *__service;
  addrinfo *local_98;
  addrinfo local_90;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = auxiliar_checkclass(param_1,"udp{unconnected}",1);
  local_58 = 0;
  uVar4 = luaL_checklstring(param_1,2,&local_50);
  pcVar5 = (char *)luaL_checklstring(param_1,3,0);
  __service = (char *)luaL_checklstring(param_1,4,0);
  local_90.ai_addr = (sockaddr *)0x0;
  local_90.ai_addrlen = 0;
  local_90._20_4_ = 0;
  local_90.ai_next = (addrinfo *)0x0;
  local_90.ai_canonname = (char *)0x0;
  local_90.ai_socktype = 2;
  local_90.ai_protocol = 0;
  local_90.ai_family = *(int *)(lVar3 + 0x20);
  local_90.ai_flags = 0xc;
  iVar2 = getaddrinfo(pcVar5,__service,&local_90,&local_98);
  if (iVar2 == 0) {
    timeout_markstart(lVar3 + 8);
    iVar2 = socket_sendto(lVar3,uVar4,local_50,&local_58,local_98->ai_canonname,local_98->ai_addrlen
                          ,lVar3 + 8);
    freeaddrinfo(local_98);
    if (iVar2 == 0) {
      uVar4 = NEON_ucvtf(local_58);
      lua_pushnumber(uVar4,param_1);
      uVar4 = 1;
      goto LAB_00919080;
    }
    lua_pushnil(param_1);
    if (iVar2 == -2) {
      pcVar5 = "refused";
    }
    else {
      pcVar5 = (char *)socket_strerror(iVar2);
    }
  }
  else {
    lua_pushnil(param_1);
    pcVar5 = gai_strerror(iVar2);
  }
  lua_pushstring(param_1,pcVar5);
  uVar4 = 2;
LAB_00919080:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

