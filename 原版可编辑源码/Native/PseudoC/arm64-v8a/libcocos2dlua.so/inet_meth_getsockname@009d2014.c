
void inet_meth_getsockname(undefined8 param_1,int *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  socklen_t local_f4;
  char acStack_f0 [8];
  char acStack_e8 [48];
  sockaddr asStack_b8 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009d2038 to 00ad2107 has its CatchHandler @ 009cee70 */
  local_f4 = 0x80;
  iVar2 = getsockname(*param_2,asStack_b8,&local_f4);
  if (iVar2 < 0) {
    lua_pushnil(param_1);
    puVar4 = (undefined4 *)__errno();
    pcVar3 = (char *)socket_strerror(*puVar4);
  }
  else {
    iVar2 = getnameinfo(asStack_b8,local_f4,acStack_e8,0x2e,acStack_f0,6,10);
    if (iVar2 == 0) {
      lua_pushstring(param_1,acStack_e8);
      lua_pushstring(param_1,acStack_f0);
      if (param_3 == 10) {
        pcVar3 = "inet6";
        uVar5 = 5;
      }
      else if (param_3 == 2) {
        pcVar3 = "inet";
        uVar5 = 4;
      }
      else {
                    /* try { // try from 009d2108 to 00ad2177 has its CatchHandler @ 009d81a8 */
        pcVar3 = "uknown family";
        uVar5 = 0xd;
      }
      lua_pushlstring(param_1,pcVar3,uVar5);
      uVar5 = 3;
      goto LAB_009d2120;
    }
    lua_pushnil(param_1);
    pcVar3 = gai_strerror(iVar2);
  }
  lua_pushstring(param_1,pcVar3);
  uVar5 = 2;
LAB_009d2120:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

