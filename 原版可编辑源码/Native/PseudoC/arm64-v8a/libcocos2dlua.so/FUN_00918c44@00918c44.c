
void FUN_00918c44(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  double dVar6;
  undefined8 local_2050;
  undefined1 auStack_2048 [8192];
  long local_48;
  
                    /* try { // try from 00918c48 to 00a18c7b has its CatchHandler @ 00918ccc */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00918c7c to 00a18d17 has its CatchHandler @ 00918b44 */
  lVar3 = auxiliar_checkgroup(param_1,"udp{any}",1);
  dVar6 = (double)luaL_optnumber(0x40c0000000000000,param_1,2);
  uVar5 = (ulong)dVar6;
  if (0x1fff < uVar5) {
    uVar5 = 0x2000;
  }
  timeout_markstart(lVar3 + 8);
                    /* catch() { ... } // from try @ 00918c30 with catch @ 00918cc8 */
  iVar2 = socket_recv(lVar3,auStack_2048,uVar5,&local_2050,lVar3 + 8);
                    /* catch() { ... } // from try @ 00918c48 with catch @ 00918ccc */
  if ((iVar2 == -2) || (iVar2 == 0)) {
    lua_pushlstring(param_1,auStack_2048,local_2050);
    uVar4 = 1;
  }
  else {
    lua_pushnil(param_1);
                    /* catch() { ... } // from try @ 00918bfc with catch @ 00918cfc */
    uVar4 = socket_strerror(iVar2);
    lua_pushstring(param_1,uVar4);
    uVar4 = 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

