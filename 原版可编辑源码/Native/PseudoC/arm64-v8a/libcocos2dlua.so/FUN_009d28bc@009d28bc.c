
void FUN_009d28bc(undefined8 param_1)

{
  socklen_t __hostlen;
  long lVar1;
  int iVar2;
  char *pcVar3;
  char *__service;
  undefined8 uVar4;
  addrinfo *paVar5;
  addrinfo *local_4c8;
  addrinfo local_4c0;
  char acStack_48c [32];
  char acStack_46c [1028];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pcVar3 = (char *)luaL_optlstring(param_1,1,0,0);
  __service = (char *)luaL_optlstring(param_1,2,0,0);
                    /* try { // try from 009d2918 to 00ad292b has its CatchHandler @ 009d8028 */
  if (pcVar3 == (char *)0x0 && __service == (char *)0x0) {
    luaL_error(param_1,"host and serv cannot be both nil");
  }
                    /* try { // try from 009d2930 to 00ad299b has its CatchHandler @ 009d8124 */
  local_4c0.ai_protocol = 0;
  local_4c0.ai_flags = 0;
  local_4c0.ai_addr = (sockaddr *)0x0;
  local_4c0.ai_addrlen = 0;
  local_4c0._20_4_ = 0;
  local_4c0.ai_next = (addrinfo *)0x0;
  local_4c0.ai_canonname = (char *)0x0;
  local_4c0.ai_family = 0;
  local_4c0.ai_socktype = 1;
  iVar2 = getaddrinfo(pcVar3,__service,&local_4c0,&local_4c8);
  if (iVar2 == 0) {
    lua_createtable(param_1,0,0);
    if (local_4c8 == (addrinfo *)0x0) {
      freeaddrinfo((addrinfo *)0x0);
    }
    else {
                    /* try { // try from 009d299c to 00ad2b0f has its CatchHandler @ 009cee70 */
      __hostlen = 0x401;
      if (pcVar3 == (char *)0x0) {
        __hostlen = 0;
      }
      iVar2 = 1;
      paVar5 = local_4c8;
      do {
        getnameinfo((sockaddr *)paVar5->ai_canonname,paVar5->ai_addrlen,acStack_46c,__hostlen,
                    acStack_48c,(uint)(__service != (char *)0x0) << 5,0);
        if (pcVar3 != (char *)0x0) {
          lua_pushnumber((double)iVar2,param_1);
          lua_pushstring(param_1,acStack_46c);
          lua_settable(param_1,0xfffffffd);
        }
        paVar5 = paVar5->ai_next;
        iVar2 = iVar2 + 1;
      } while (paVar5 != (addrinfo *)0x0);
      freeaddrinfo(local_4c8);
    }
    if (__service == (char *)0x0) {
      uVar4 = 1;
      goto LAB_009d2a28;
    }
    pcVar3 = acStack_48c;
  }
  else {
    lua_pushnil(param_1);
    pcVar3 = (char *)socket_gaistrerror(iVar2);
  }
  lua_pushstring(param_1,pcVar3);
  uVar4 = 2;
LAB_009d2a28:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

