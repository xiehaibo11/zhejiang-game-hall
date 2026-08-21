
void FUN_0091843c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int *__s;
  undefined4 local_50;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00918460 to 00a184fb has its CatchHandler @ 00918328 */
  lVar2 = inet_trycreate(&local_4c,param_2,1);
  if (lVar2 == 0) {
    __s = (int *)lua_newuserdata(param_1,0x2080);
                    /* catch() { ... } // from try @ 00918414 with catch @ 009184ac */
                    /* catch() { ... } // from try @ 0091842c with catch @ 009184b0 */
    memset(__s,0,0x2080);
    auxiliar_setclass(param_1,"tcp{master}",0xffffffff);
    socket_setnonblocking(&local_4c);
    if ((int)param_2 == 10) {
                    /* catch() { ... } // from try @ 009183e0 with catch @ 009184e0 */
      local_50 = 1;
      setsockopt(local_4c,0x29,0x1a,&local_50,4);
    }
                    /* try { // try from 009184fc to 00a18547 has its CatchHandler @ 009184fc
                       catch() { ... } // from try @ 009184fc with catch @ 009184fc
                       catch() { ... } // from try @ 0091854c with catch @ 009184fc */
    *__s = local_4c;
    io_init(__s + 2,socket_send,socket_recv,socket_ioerror,__s);
    timeout_init(0xbff0000000000000,0xbff0000000000000,__s + 0x818);
                    /* try { // try from 00918548 to 00a1854b has its CatchHandler @ 00918580 */
                    /* try { // try from 0091854c to 00a18593 has its CatchHandler @ 009184fc */
    buffer_init(__s + 10,__s + 2,__s + 0x818);
    __s[0x81e] = (int)param_2;
    uVar3 = 1;
  }
  else {
    lua_pushnil(param_1);
    lua_pushstring(param_1,lVar2);
    uVar3 = 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00918548 with catch @ 00918580 */
  __stack_chk_fail(uVar3);
}

