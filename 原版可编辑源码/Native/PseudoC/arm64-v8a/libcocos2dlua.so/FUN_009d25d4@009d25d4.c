
void FUN_009d25d4(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  addrinfo *__ai;
  addrinfo *paVar5;
  int iVar6;
  addrinfo local_4b0;
  addrinfo *local_480;
  char acStack_474 [1028];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  pcVar3 = (char *)luaL_checklstring(param_1,1,0);
  local_480 = (addrinfo *)0x0;
  local_4b0.ai_protocol = 0;
  local_4b0.ai_flags = 0;
  local_4b0.ai_addr = (sockaddr *)0x0;
  local_4b0.ai_addrlen = 0;
  local_4b0._20_4_ = 0;
  local_4b0.ai_next = (addrinfo *)0x0;
  local_4b0.ai_canonname = (char *)0x0;
  local_4b0.ai_family = 0;
  local_4b0.ai_socktype = 1;
  iVar2 = getaddrinfo(pcVar3,(char *)0x0,&local_4b0,&local_480);
  if (iVar2 == 0) {
    lua_createtable(param_1,0,0);
    if (local_480 == (addrinfo *)0x0) {
      __ai = (addrinfo *)0x0;
    }
    else {
      iVar6 = 1;
      paVar5 = local_480;
      do {
        iVar2 = getnameinfo((sockaddr *)paVar5->ai_canonname,paVar5->ai_addrlen,acStack_474,0x401,
                            (char *)0x0,0,2);
        if (iVar2 != 0) {
          lua_pushnil(param_1);
          goto LAB_009d2650;
        }
        lua_pushnumber((double)iVar6,param_1);
                    /* try { // try from 009d2744 to 00ad282b has its CatchHandler @ 009cee70 */
        lua_createtable(param_1,0,0);
        if (paVar5->ai_family == 10) {
          lua_pushlstring(param_1,"family",6);
          uVar4 = 5;
                    /* try { // try from 009d26c0 to 00ad26d3 has its CatchHandler @ 009d802c */
          pcVar3 = "inet6";
LAB_009d26c4:
          lua_pushlstring(param_1,pcVar3,uVar4);
          lua_settable(param_1,0xfffffffd);
        }
        else if (paVar5->ai_family == 2) {
          lua_pushlstring(param_1,"family",6);
          uVar4 = 4;
          pcVar3 = "inet";
          goto LAB_009d26c4;
        }
                    /* try { // try from 009d26d8 to 00ad2743 has its CatchHandler @ 009d812c */
        lua_pushlstring(param_1,"addr",4);
        lua_pushstring(param_1,acStack_474);
        lua_settable(param_1,0xfffffffd);
        lua_settable(param_1,0xfffffffd);
        paVar5 = paVar5->ai_next;
        iVar6 = iVar6 + 1;
        __ai = local_480;
      } while (paVar5 != (addrinfo *)0x0);
    }
    freeaddrinfo(__ai);
    uVar4 = 1;
  }
  else {
    lua_pushnil(param_1);
LAB_009d2650:
    uVar4 = socket_gaistrerror(iVar2);
    lua_pushstring(param_1,uVar4);
    uVar4 = 2;
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

