
void inet_meth_getpeername(undefined8 param_1,int *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  socklen_t local_f4;
  char acStack_f0 [8];
  char acStack_e8 [48];
  sockaddr asStack_b8 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_f4 = 0x80;
  iVar2 = getpeername(*param_2,asStack_b8,&local_f4);
  if (iVar2 < 0) {
    lua_pushnil(param_1);
    puVar4 = (undefined4 *)__errno();
    pcVar3 = (char *)socket_strerror(*puVar4);
  }
  else {
    iVar2 = getnameinfo(asStack_b8,local_f4,acStack_e8,0x2e,acStack_f0,6,10);
    if (iVar2 == 0) {
      lua_pushstring(param_1,acStack_e8);
      lVar6 = strtol(acStack_f0,(char **)0x0,10);
      lua_pushinteger(param_1,(long)(int)lVar6);
      if (param_3 == 10) {
        pcVar3 = "inet6";
                    /* try { // try from 009d1fcc to 00ad2037 has its CatchHandler @ 009d8134 */
        uVar5 = 5;
      }
      else if (param_3 == 2) {
                    /* try { // try from 009d1fb4 to 00ad1fc7 has its CatchHandler @ 009d8034 */
        pcVar3 = "inet";
        uVar5 = 4;
      }
      else {
        pcVar3 = "uknown family";
        uVar5 = 0xd;
      }
      lua_pushlstring(param_1,pcVar3,uVar5);
      uVar5 = 3;
      goto LAB_009d1fec;
    }
    lua_pushnil(param_1);
    pcVar3 = gai_strerror(iVar2);
  }
  lua_pushstring(param_1,pcVar3);
  uVar5 = 2;
LAB_009d1fec:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

