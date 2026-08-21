
void FUN_00917a80(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *__s;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00917aa8 to 00a17af3 has its CatchHandler @ 00917aa8
                       catch() { ... } // from try @ 00917aa8 with catch @ 00917aa8
                       catch() { ... } // from try @ 00917af8 with catch @ 00917aa8 */
  lVar2 = auxiliar_checkclass(param_1,"tcp{server}",1);
  uVar3 = timeout_markstart(lVar2 + 0x2060);
  lVar4 = inet_tryaccept(lVar2,*(undefined4 *)(lVar2 + 0x2078),&local_4c,uVar3);
  if (lVar4 == 0) {
    __s = (undefined4 *)lua_newuserdata(param_1,0x2080);
    auxiliar_setclass(param_1,"tcp{client}",0xffffffff);
                    /* catch() { ... } // from try @ 00917af4 with catch @ 00917b2c */
    memset(__s,0,0x2080);
    socket_setnonblocking(&local_4c);
                    /* try { // try from 00917b40 to 00a17d47 has its CatchHandler @ 00917b40
                       catch() { ... } // from try @ 00917b40 with catch @ 00917b40
                       catch() { ... } // from try @ 00917dc8 with catch @ 00917b40 */
    *__s = local_4c;
    io_init(__s + 2,socket_send,socket_recv,socket_ioerror,__s);
    timeout_init(0xbff0000000000000,0xbff0000000000000,__s + 0x818);
    buffer_init(__s + 10,__s + 2,__s + 0x818);
    uVar3 = 1;
    __s[0x81e] = *(undefined4 *)(lVar2 + 0x2078);
  }
  else {
    lua_pushnil(param_1);
                    /* try { // try from 00917af4 to 00a17af7 has its CatchHandler @ 00917b2c */
    lua_pushstring(param_1,lVar4);
                    /* try { // try from 00917af8 to 00a17b3f has its CatchHandler @ 00917aa8 */
    uVar3 = 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

